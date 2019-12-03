#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_StreetFight.BPF_StreetFight_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_StreetFight_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_StreetFight.BPF_StreetFight_C");
		return ptr;
	}


	void GetStreetFightManager(class UObject* __WorldContext, class ABP_StreetFightManager_C** Manager);
	void STATIC_GetStreetFightTrigger(class UObject* __WorldContext, class AS3StreetFightTrigger** Manager);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
