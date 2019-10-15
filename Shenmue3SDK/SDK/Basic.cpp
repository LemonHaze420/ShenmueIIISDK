
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
	TNameEntryArray* FName::GNames = nullptr;
	FUObjectArray* UObject::GObjects = nullptr;

	typedef void(__thiscall* ProcessEvent_t)(class UObject* _this, class UFunction* a2, void* pParms);
	ProcessEvent_t ProcessEventOriginal;
	void ProcessEventHook(UObject* _this, UFunction* pFunction, void* pParms)
	{
		ProcessEventOriginal(_this, pFunction, pParms);
	}
	//---------------------------------------------------------------------------
	bool Match(const BYTE* pData, const BYTE* bMask, const char* szMask) {
		for (; *szMask; ++szMask, ++pData, ++bMask)
			if (*szMask == 'x' && *pData != *bMask)
				return false;
		return (*szMask) == NULL;
	}
	//---------------------------------------------------------------------------
	DWORD_PTR FindPattern(DWORD_PTR dwAddress, DWORD dwLen, BYTE* bMask, const char* szMask) {
		for (DWORD i = 0; i < dwLen; i++)
			if (Match((BYTE*)(dwAddress + i), bMask, szMask))
				return (DWORD_PTR)(dwAddress + i);

		return 0;
	}
	//---------------------------------------------------------------------------
	MODULEINFO GetModuleInfo() {
		MODULEINFO modInfo = { 0 };
		HMODULE hModule = GetModuleHandleA(g_ModuleName.c_str());
		if (hModule != 0)
			GetModuleInformation(GetCurrentProcess(), hModule, &modInfo, sizeof(MODULEINFO));
		return modInfo;
	}
	//---------------------------------------------------------------------------
	DemoVersion determineDemoVersion()
	{
		if (!memcmp((void*)(g_BaseAddress + UE4_VERSTRING_V100), "\x2B\x00\x2B\x00\x55\x00\x45\x00\x34\x00\x2B\x00\x52\x00\x65\x00", 16)) {		// "++UE4+Release-4.20"
			printf("Detected demo version 1.00\n"); return V100;
		}
		else if (!memcmp((void*)(g_BaseAddress + UE4_VERSTRING_V101), "\x2B\x00\x2B\x00\x55\x00\x45\x00\x34\x00\x2B\x00\x52\x00\x65\x00", 16)) {	// "++UE4+Release-4.20"
			printf("Detected demo version 1.01\n"); return V101;
		}
		else return INVALID;
	}
	//---------------------------------------------------------------------------
	int init(std::string ModuleName)
	{
		g_ModuleName	= ModuleName;

		MODULEINFO mi = GetModuleInfo();
		g_BaseAddress	= (DWORD_PTR)mi.lpBaseOfDll;
		g_Size			= mi.SizeOfImage;

		DemoVersion ver = determineDemoVersion();
		auto objectsOffs = g_BaseAddress, nameOffs = g_BaseAddress;
		if (ver == V100)		objectsOffs += GOBJECTS_OFFSET_V100, nameOffs += GNAMES_OFFSET_V100;
		else if (ver == V101)	objectsOffs += GOBJECTS_OFFSET_V101, nameOffs += GNAMES_OFFSET_V101;
		else if (ver == INVALID) {
			MessageBoxA(NULL, "Error detecting game version. Exiting.", "Shenmue 3 SDK", MB_OK);
			return -1;
		}

		// Initialize GObjects and GNames
		UObject::GObjects	= reinterpret_cast<SDK::FUObjectArray*>(objectsOffs);
		FName::GNames		= reinterpret_cast<SDK::TNameEntryArray*>(nameOffs);

		DWORD_PTR processEventAddr = FindPattern((DWORD_PTR)mi.lpBaseOfDll, mi.SizeOfImage, (BYTE*)"\x48\x33\xC5\x48\x89\x85\xB0\x00\x00\x00\x4D\x8B\xF8\x45\x33\xF6\x44\x8B\x41\x0C\x48\x8B\xF2", "xxxxxxxxxxxxxxxxxxxxxxx");
		if (processEventAddr == 0)
			return -1;

		processEventAddr -= 0x26;
		//processEventAddr -= (DWORD_PTR)mi.lpBaseOfDll;

		MH_STATUS mhStatus = MH_Initialize();
		if (mhStatus != MH_OK) {
			MessageBoxA(NULL, "Error initializing MinHook. Exiting.", "Shenmue 3 SDK", MB_OK);
			return -1;
		}

		MH_CreateHook(reinterpret_cast<void**>(processEventAddr), ProcessEventHook, reinterpret_cast<void**>(&ProcessEventOriginal));
		mhStatus = MH_EnableHook(reinterpret_cast<void*>(processEventAddr));
		printf("processEventHook returned 0x%I64X\n", mhStatus);
		if (mhStatus != MH_OK) {
			MessageBoxA(NULL, "Unable to hook ProcessEvent. Exiting.", "Shenmue 3 SDK", MB_OK);
			return -1;
		}

	#ifdef _DEBUG
		printf("processEventOffs = 0x%I64X\n", processEventAddr);
		printf("baseAddr      =    0x%I64X\n", g_BaseAddress);
		printf("objectsAddr   =    0x%I64X\n", objectsOffs);
		printf("nameAddr      =    0x%I64X\n", nameOffs);
		printf("GObjects Num:      %d\n", (int)UObject::GetGlobalObjects().Num());
		printf("Initialized.\n");
	#endif

		return 1;
	}
	//---------------------------------------------------------------------------
	bool FWeakObjectPtr::IsValid() const
	{
		if (ObjectSerialNumber == 0)
		{
			return false;
		}
		if (ObjectIndex < 0)
		{
			return false;
		}
		auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
		if (!ObjectItem)
		{
			return false;
		}
		if (!SerialNumbersMatch(ObjectItem))
		{
			return false;
		}
		return !(ObjectItem->IsUnreachable() || ObjectItem->IsPendingKill());
	}
	//---------------------------------------------------------------------------
	UObject* FWeakObjectPtr::Get() const
	{
		if (IsValid())
		{
			auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
			if (ObjectItem)
			{
				return ObjectItem->Object;
			}
		}
		return nullptr;
	}
	//---------------------------------------------------------------------------
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
