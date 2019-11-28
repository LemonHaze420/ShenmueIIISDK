
#include "../SDK.h"
#include <Windows.h>
#include <cassert>

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
	TNameEntryArray* FName::GNames = nullptr;
	FUObjectArray* UObject::GObjects = nullptr;

	ProcessEvent_t ProcessEventOriginal;

	inline void CreateProcessEventHook(std::string hookName, std::string functionName, ProcessEvent_t hook) {
		ProcessEventUserHook tmpHook;
		tmpHook.hookName = hookName;
		tmpHook.hookFunction = functionName;
		tmpHook.hook = hook;

		g_ProcessEventUserHooks.push_back(tmpHook);
		g_ProcessEventUserHooks.shrink_to_fit();

#ifdef _DEBUG
		printf("Added hook '%s'\n", tmpHook.hookName.c_str());
#endif
	}
	//---------------------------------------------------------------------------
	void ProcessEventHook(UObject* _this, UFunction* pFunction, void* pParms)
	{
		bool bCalledHook = false;
		for (auto hook : g_ProcessEventUserHooks) {
			if (!hook.hookFunction.empty() && pFunction->GetFullName() == hook.hookFunction && hook.hook != nullptr) {
				hook.hook(_this, pFunction, pParms);
				bCalledHook = true;
			}
		}
		if (!bCalledHook)
			ProcessEventOriginal(_this, pFunction, pParms);
#ifdef _DEBUG
		printf("[ProcessEvent] %s\n", pFunction->GetFullName().c_str());
#endif
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
		HMODULE hModule = GetModuleHandleA((g_ModuleName.empty() ? NULL : g_ModuleName.c_str()));
		if (hModule != 0)
			GetModuleInformation(GetCurrentProcess(), hModule, &modInfo, sizeof(MODULEINFO));
		return modInfo;
	}
	//---------------------------------------------------------------------------
	Version determineVersion()
	{
		if (!memcmp((void*)(g_BaseAddress + UE4_VERSTRING_V102), "\x2B\x00\x2B\x00\x55\x00\x45\x00\x34\x00\x2B\x00\x52\x00\x65\x00", 16)) {		// "++UE4+Release-4.20"
			printf("Detected full game - v1.02\n"); return V102;
		}
		if (!memcmp((void*)(g_BaseAddress + UE4_VERSTRING_V10201), "\x2B\x00\x2B\x00\x55\x00\x45\x00\x34\x00\x2B\x00\x52\x00\x65\x00", 16)) {		// "++UE4+Release-4.20"
			printf("Detected full game - v1.02.01\n"); return V10201;
		}
		printf("Couldn't detect version.\n");
		return INVALID;
	}
	//---------------------------------------------------------------------------
	int init(std::string ModuleName)
	{
#ifdef _DEBUG
		AllocConsole();
		freopen("CONIN$", "r", stdin);
		freopen("CONOUT$", "w", stdout);
		freopen("CONOUT$", "w", stderr);
		printf("Allocated console\n");
#endif

		MODULEINFO mi	= GetModuleInfo();
		g_ModuleName	= (ModuleName.empty() ? "Shenmue3-Win64-Shipping.exe" : ModuleName);
		g_BaseAddress	= ((DWORD_PTR)mi.lpBaseOfDll == 0 ? (DWORD_PTR)GetModuleHandleA(NULL) : (DWORD_PTR)mi.lpBaseOfDll);
		g_Size			= mi.SizeOfImage;

		// Detect version and set offsets
		Version ver = determineVersion();
		auto objectsOffs = g_BaseAddress, nameOffs = g_BaseAddress;
		if (ver == V102 || ver == V10201)	objectsOffs += GOBJECTS_OFFSET_V102, nameOffs += GNAMES_OFFSET_V102;
		else if (ver == INVALID) {
			MessageBoxA(NULL, "Error detecting game version. Exiting.", "Shenmue III SDK", MB_OK);
			return -1;
		}
		else if(objectsOffs == g_BaseAddress) {
			MessageBoxA(NULL, "Invalid GObjects offset. Exiting.", "Shenmue III SDK", MB_OK);
			return -1;
		}
		else if (nameOffs == g_BaseAddress) {
			MessageBoxA(NULL, "Invalid GNames offset. Exiting.", "Shenmue III SDK", MB_OK);
			return -1;
		}

		// Initialize GObjects and GNames
		UObject::GObjects = reinterpret_cast<SDK::FUObjectArray*>(objectsOffs);
		FName::GNames = reinterpret_cast<SDK::TNameEntryArray*>(nameOffs);

		// Hook base ProcessEvent func
		DWORD_PTR processEventAddr = FindPattern((DWORD_PTR)mi.lpBaseOfDll, mi.SizeOfImage, (BYTE*)"\x48\x33\xC5\x48\x89\x85\xB0\x00\x00\x00\x4D\x8B\xF8\x45\x33\xF6\x44\x8B\x41\x0C\x48\x8B\xF2", "xxxxxxxxxxxxxxxxxxxxxxx");
		if (processEventAddr == 0)
			return -1;
		else {
			processEventAddr -= 0x26;

			MH_STATUS mhStatus = MH_Initialize();
			if (mhStatus != MH_OK) {
				MessageBoxA(NULL, "Error initializing MinHook. Exiting.", "Shenmue III SDK", MB_OK);
				return -1;
			}

			MH_CreateHook(reinterpret_cast<void**>(processEventAddr), ProcessEventHook, reinterpret_cast<void**>(&ProcessEventOriginal));
			mhStatus = MH_EnableHook(reinterpret_cast<void*>(processEventAddr));
			printf("processEventHook returned 0x%X\n", mhStatus);
			if (mhStatus != MH_OK) {
				MessageBoxA(NULL, "Unable to hook ProcessEvent. Exiting.", "Shenmue III SDK", MB_OK);
				return -1;
			}

			assert(FName::GetGlobalNames()[0]->AnsiName == "None");
			assert(FName::GetGlobalNames()[1]->AnsiName == "ByteProperty");

#ifdef _DEBUG
			printf("baseAddr      =    0x%I64X\n", g_BaseAddress);
			printf("objectsAddr   =    0x%I64X\n", objectsOffs);
			printf("nameAddr      =    0x%I64X\n", nameOffs);
			printf("First GName:  '%s'\n", FName::GetGlobalNames()[0]->AnsiName);
			printf("Second GName: '%s'\n", FName::GetGlobalNames()[1]->AnsiName);
			printf("Initialized.\n");
#endif
		}
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
