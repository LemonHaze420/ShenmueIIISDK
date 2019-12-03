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

// BlueprintGeneratedClass BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C
// 0x0007 (0x0038 - 0x0031)
class UBP_AnimNotifyState_Invincible_C : public UBP_AnimNotifyState_Base_C
{
public:
	TEnumAsByte<EBattleInvincibleType>                 Type;                                                     // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              SuperArmorHP;                                             // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C");
		return ptr;
	}


	struct FString GetNotifyName();
	bool STATIC_IsForceGuardMotion();
	bool STATIC_IsVirtualGuardAction();
	bool IsInvincible();
	void IsSuperArmorEffective(float Damage, bool* bLock);
	void GetNotifyID(struct FName* NotifyID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
