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
	TEnumAsByte<EBattleAttackCollision>                AttackCollision;                                          // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	struct FName                                       AttackCollisionName;                                      // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EBattleAttackCollision>>        AddAttackCollision;                                       // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              AttackPower;                                              // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AttackPowerx10;                                           // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ForceDown;                                                // 0x0055(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBattleAnimStrength                                ForceStrength;                                            // 0x0056(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0057(0x0001) MISSED OFFSET
	class USoundAtomCue*                               HitCue;                                                   // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBattleDownType>                       DownType;                                                 // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoCalculateForceDownLevel;                              // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0062(0x0002) MISSED OFFSET
	int                                                ForceDownLevel;                                           // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ManualDirection;                                          // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	float                                              ManualDirectionYaw;                                       // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ManualDirectionPitch;                                     // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C");
		return ptr;
	}


	void GetAttackCollisionEnum(TEnumAsByte<EBattleAttackCollision>* Enum);
	void STATIC_CalcOverrideDirection(const struct FVector& OwnerDirection, struct FVector* OutDirection);
	bool STATIC_OverridesDirection();
	void GetAttackCollisionGroupTags(TArray<struct FName> TargetArray);
	bool IsComponentInvolved(class UActorComponent* Component);
	EBattleAnimStrength STATIC_GetNonDownStrength();
	bool STATIC_IsFlyingTypeDown();
	bool STATIC_GetForceDownByLevel(int Level);
	struct FString STATIC_GetNotifyName();
	void GetAttackCollisionMainTag(struct FName* Name);
	void GetBaseDamage(float* Damage);
	void ConvertLegacyNameToEnum(const struct FName& Name, TEnumAsByte<EBattleAttackCollision>* Collision);
	void GetAttackCollisionGroupTag(struct FName* Name);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
