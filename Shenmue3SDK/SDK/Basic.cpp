
#include "../SDK.h"
#include <Windows.h>

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{

TNameEntryArray* FName::GNames = nullptr;
FUObjectArray* UObject::GObjects = nullptr;

DemoVersion determineDemoVersion(DWORD_PTR baseAddress)
{
	if (!memcmp((void*)(baseAddress + UE4_VERSTRING_V100), "\x2B\x00\x2B\x00\x55\x00\x45\x00\x34\x00\x2B\x00\x52\x00\x65\x00", 16)) {		// "++UE4+Release-4.20"
		printf("Detected demo version 1.00\n"); return V100;
	}
	else if (!memcmp((void*)(baseAddress + UE4_VERSTRING_V101), "\x2B\x00\x2B\x00\x55\x00\x45\x00\x34\x00\x2B\x00\x52\x00\x65\x00", 16)) {	// "++UE4+Release-4.20"
		printf("Detected demo version 1.01\n"); return V101;
	}
	else return INVALID;
}
int init()
{
	std::string modName = "Shenmue3-Win64-Shipping.exe";
	auto base = reinterpret_cast<DWORD_PTR>(GetModuleHandleA(modName.c_str()));

	DemoVersion ver = determineDemoVersion(base);
	auto objectsOffs = base, nameOffs = base;
	if (ver == V100)		objectsOffs += GOBJECTS_OFFSET_V100, nameOffs += GNAMES_OFFSET_V100;
	else if (ver == V101)	objectsOffs += GOBJECTS_OFFSET_V101, nameOffs += GNAMES_OFFSET_V101;
	else if (ver == INVALID) {
		MessageBoxA(NULL, "Error detecting game version. Exiting.", "Shenmue 3 SDK", MB_OK);
		return -1;
	}

	UObject::GObjects = reinterpret_cast<SDK::FUObjectArray*>(objectsOffs);
	FName::GNames = reinterpret_cast<SDK::TNameEntryArray*>(nameOffs);

#ifdef _DEBUG
	printf("baseAddr    =    0x%I64X\n", base);
	printf("objectsAddr =    0x%I64X\n", objectsOffs);
	printf("nameAddr    =    0x%I64X\n", nameOffs);
	printf("GObjects Num: %d\n", (int)UObject::GetGlobalObjects().Num());
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
