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

// Function BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C.GetNotifyName
struct UBP_AnimNotifyState_Invincible_C_GetNotifyName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C.IsForceGuardMotion
struct UBP_AnimNotifyState_Invincible_C_IsForceGuardMotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C.IsVirtualGuardAction
struct UBP_AnimNotifyState_Invincible_C_IsVirtualGuardAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C.IsInvincible
struct UBP_AnimNotifyState_Invincible_C_IsInvincible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C.IsSuperArmorEffective
struct UBP_AnimNotifyState_Invincible_C_IsSuperArmorEffective_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLock;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimNotifyState_Invincible.BP_AnimNotifyState_Invincible_C.GetNotifyID
struct UBP_AnimNotifyState_Invincible_C_GetNotifyID_Params
{
	struct FName                                       NotifyID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
