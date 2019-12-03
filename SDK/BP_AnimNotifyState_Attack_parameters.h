#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetAttackCollisionEnum
struct UBP_AnimNotifyState_Attack_C_GetAttackCollisionEnum_Params
{
	TEnumAsByte<EBattleAttackCollision>                Enum;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.CalcOverrideDirection
struct UBP_AnimNotifyState_Attack_C_CalcOverrideDirection_Params
{
	struct FVector                                     OwnerDirection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     OutDirection;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.OverridesDirection
struct UBP_AnimNotifyState_Attack_C_OverridesDirection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetAttackCollisionGroupTags
struct UBP_AnimNotifyState_Attack_C_GetAttackCollisionGroupTags_Params
{
	TArray<struct FName>                               TargetArray;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.IsComponentInvolved
struct UBP_AnimNotifyState_Attack_C_IsComponentInvolved_Params
{
	class UActorComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetNonDownStrength
struct UBP_AnimNotifyState_Attack_C_GetNonDownStrength_Params
{
	EBattleAnimStrength                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.IsFlyingTypeDown
struct UBP_AnimNotifyState_Attack_C_IsFlyingTypeDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetForceDownByLevel
struct UBP_AnimNotifyState_Attack_C_GetForceDownByLevel_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetNotifyName
struct UBP_AnimNotifyState_Attack_C_GetNotifyName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetAttackCollisionMainTag
struct UBP_AnimNotifyState_Attack_C_GetAttackCollisionMainTag_Params
{
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetBaseDamage
struct UBP_AnimNotifyState_Attack_C_GetBaseDamage_Params
{
	float                                              Damage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.ConvertLegacyNameToEnum
struct UBP_AnimNotifyState_Attack_C_ConvertLegacyNameToEnum_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBattleAttackCollision>                Collision;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimNotifyState_Attack.BP_AnimNotifyState_Attack_C.GetAttackCollisionGroupTag
struct UBP_AnimNotifyState_Attack_C_GetAttackCollisionGroupTag_Params
{
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
