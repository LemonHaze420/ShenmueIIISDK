#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.CheckDirection
struct ABP_AttentionLoadLevel_C_CheckDirection_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.GetNearAttentionPos
struct ABP_AttentionLoadLevel_C_GetNearAttentionPos_Params
{
	struct FVector                                     AttentionPos;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     NearPos;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.SetEnabledControl
struct ABP_AttentionLoadLevel_C_SetEnabledControl_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.UserConstructionScript
struct ABP_AttentionLoadLevel_C_UserConstructionScript_Params
{
};

// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnFinishedStartFadeOut
struct ABP_AttentionLoadLevel_C_OnFinishedStartFadeOut_Params
{
};

// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnFinishedLoadLevel
struct ABP_AttentionLoadLevel_C_OnFinishedLoadLevel_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnStartAttention
struct ABP_AttentionLoadLevel_C_OnStartAttention_Params
{
	struct FVector                                     AttentionPos;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnFinishedLevelUnloadEndGame
struct ABP_AttentionLoadLevel_C_OnFinishedLevelUnloadEndGame_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnEndAttention
struct ABP_AttentionLoadLevel_C_OnEndAttention_Params
{
};

// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.SetDummyActorVisible
struct ABP_AttentionLoadLevel_C_SetDummyActorVisible_Params
{
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.OnExitAttention
struct ABP_AttentionLoadLevel_C_OnExitAttention_Params
{
};

// Function BP_AttentionLoadLevel.BP_AttentionLoadLevel_C.ExecuteUbergraph_BP_AttentionLoadLevel
struct ABP_AttentionLoadLevel_C_ExecuteUbergraph_BP_AttentionLoadLevel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
