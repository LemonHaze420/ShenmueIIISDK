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

// BlueprintGeneratedClass BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C
// 0x0043 (0x0074 - 0x0031)
class UBP_AnimNotifyState_Attack_C : public UBP_AnimNotifyState_AttackBase_C
{
public:
	unsigned char                                      UnknownData00[0x43];                                      // 0x0031(0x0043) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif