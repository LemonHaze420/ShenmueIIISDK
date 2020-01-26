#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_EnergyWgt.BPF_EnergyWgt_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_EnergyWgt_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_EnergyWgt.BPF_EnergyWgt_C");
		return ptr;
	}


	void STATIC_GetAdventureBarColorEnum(class UObject* __WorldContext, TEnumAsByte<EHealthOrbColor>* AsEnum);
	void STATIC_GetAdventureBarColor(class UObject* __WorldContext, struct FLinearColor* AsColor);
	void STATIC_GetFormattedEnergyStrings(class UObject* __WorldContext, struct FString* HP, struct FString* MaxHP);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
