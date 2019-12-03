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

// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.GetOwningPlayerPawn
struct ABP_SkillDisplayScene_Battle_C_GetOwningPlayerPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.IsLoading
struct ABP_SkillDisplayScene_Battle_C_IsLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.SetGuardMode
struct ABP_SkillDisplayScene_Battle_C_SetGuardMode_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.CalculateCoolStartPosition
struct ABP_SkillDisplayScene_Battle_C_CalculateCoolStartPosition_Params
{
	class UAnimMontage*                                InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.CalculateSnapshotPosition
struct ABP_SkillDisplayScene_Battle_C_CalculateSnapshotPosition_Params
{
	class UAnimMontage*                                InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.CaptureSingleFrame
struct ABP_SkillDisplayScene_Battle_C_CaptureSingleFrame_Params
{
	struct FName                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.ResetRotation
struct ABP_SkillDisplayScene_Battle_C_ResetRotation_Params
{
};

// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.StopMotion
struct ABP_SkillDisplayScene_Battle_C_StopMotion_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.PlayMotionForItem
struct ABP_SkillDisplayScene_Battle_C_PlayMotionForItem_Params
{
	struct FName                                       Skill;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.UserConstructionScript
struct ABP_SkillDisplayScene_Battle_C_UserConstructionScript_Params
{
};

// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.ReceiveBeginPlay
struct ABP_SkillDisplayScene_Battle_C_ReceiveBeginPlay_Params
{
};

// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.ReceiveTick
struct ABP_SkillDisplayScene_Battle_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.ReceiveEndPlay
struct ABP_SkillDisplayScene_Battle_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkillDisplayScene_Battle.BP_SkillDisplayScene_Battle_C.ExecuteUbergraph_BP_SkillDisplayScene_Battle
struct ABP_SkillDisplayScene_Battle_C_ExecuteUbergraph_BP_SkillDisplayScene_Battle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
