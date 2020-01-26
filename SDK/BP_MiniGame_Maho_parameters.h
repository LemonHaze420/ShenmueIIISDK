#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.InitAsyncLoad
struct ABP_MiniGame_Maho_C_InitAsyncLoad_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UpdateMahoAccumulation
struct ABP_MiniGame_Maho_C_UpdateMahoAccumulation_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.SetDifficulty
struct ABP_MiniGame_Maho_C_SetDifficulty_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.GetDetectAction
struct ABP_MiniGame_Maho_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.GetPlayLabel
struct ABP_MiniGame_Maho_C_GetPlayLabel_Params
{
	TEnumAsByte<E_MiniGame_MahoPartnerState>           State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       labelName;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.CanGameUpdate
struct ABP_MiniGame_Maho_C_CanGameUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UpdateUILine
struct ABP_MiniGame_Maho_C_UpdateUILine_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.SetNPCVisible
struct ABP_MiniGame_Maho_C_SetNPCVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UpdateAnim
struct ABP_MiniGame_Maho_C_UpdateAnim_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UserConstructionScript
struct ABP_MiniGame_Maho_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Timeline_CollisionScaleInitialize__FinishedFunc
struct ABP_MiniGame_Maho_C_Timeline_CollisionScaleInitialize__FinishedFunc_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Timeline_CollisionScaleInitialize__UpdateFunc
struct ABP_MiniGame_Maho_C_Timeline_CollisionScaleInitialize__UpdateFunc_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Timiline_SafeBar__FinishedFunc
struct ABP_MiniGame_Maho_C_Timiline_SafeBar__FinishedFunc_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Timiline_SafeBar__UpdateFunc
struct ABP_MiniGame_Maho_C_Timiline_SafeBar__UpdateFunc_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.StartMiniGame
struct ABP_MiniGame_Maho_C_StartMiniGame_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.EndMiniGame
struct ABP_MiniGame_Maho_C_EndMiniGame_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.CollisionInitialize
struct ABP_MiniGame_Maho_C_CollisionInitialize_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.InputAction_ButtonRight
struct ABP_MiniGame_Maho_C_InputAction_ButtonRight_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ReceiveBeginPlay
struct ABP_MiniGame_Maho_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ReceiveTick
struct ABP_MiniGame_Maho_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.UpdateElapsedTime
struct ABP_MiniGame_Maho_C_UpdateElapsedTime_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ReStartPlaying
struct ABP_MiniGame_Maho_C_ReStartPlaying_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.TransEndFallDown
struct ABP_MiniGame_Maho_C_TransEndFallDown_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.InitializeAnimValue
struct ABP_MiniGame_Maho_C_InitializeAnimValue_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.StartGame
struct ABP_MiniGame_Maho_C_StartGame_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.AfterFadeInEvent
struct ABP_MiniGame_Maho_C_AfterFadeInEvent_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.SetEnabledSafeLine
struct ABP_MiniGame_Maho_C_SetEnabledSafeLine_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.Event_OnChangeAnimState
struct ABP_MiniGame_Maho_C_Event_OnChangeAnimState_Params
{
	TEnumAsByte<E_MiniGame_MahoPartnerState>           State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.SetKungFuDifficulty
struct ABP_MiniGame_Maho_C_SetKungFuDifficulty_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.TimeUpEvent
struct ABP_MiniGame_Maho_C_TimeUpEvent_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.OnTimeUp
struct ABP_MiniGame_Maho_C_OnTimeUp_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.PlayScriptMaho
struct ABP_MiniGame_Maho_C_PlayScriptMaho_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ReachedMaxKungFuLevel
struct ABP_MiniGame_Maho_C_ReachedMaxKungFuLevel_Params
{
};

// Function BP_MiniGame_Maho.BP_MiniGame_Maho_C.ExecuteUbergraph_BP_MiniGame_Maho
struct ABP_MiniGame_Maho_C_ExecuteUbergraph_BP_MiniGame_Maho_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
