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

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.DebugIsEnabledToSkip
struct ABP_old_QTECutscenePlayer_C_DebugIsEnabledToSkip_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.SetQTEInputLimitTime
struct ABP_old_QTECutscenePlayer_C_SetQTEInputLimitTime_Params
{
	float                                              limitTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.IsUseEndFadeIn
struct ABP_old_QTECutscenePlayer_C_IsUseEndFadeIn_Params
{
	bool                                               IsUseFade;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.GetQTEResult
struct ABP_old_QTECutscenePlayer_C_GetQTEResult_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.SetCurrentRestartPoint
struct ABP_old_QTECutscenePlayer_C_SetCurrentRestartPoint_Params
{
	class AActor*                                      RestartPoint;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.Restart
struct ABP_old_QTECutscenePlayer_C_Restart_Params
{
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.DebugSkipToEnd
struct ABP_old_QTECutscenePlayer_C_DebugSkipToEnd_Params
{
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.ExitCutscene
struct ABP_old_QTECutscenePlayer_C_ExitCutscene_Params
{
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.SetupSequence
struct ABP_old_QTECutscenePlayer_C_SetupSequence_Params
{
	int                                                QTESequenceIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.Retry
struct ABP_old_QTECutscenePlayer_C_Retry_Params
{
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.UpdatePlayingSequenceToRetry
struct ABP_old_QTECutscenePlayer_C_UpdatePlayingSequenceToRetry_Params
{
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.IsExistQTEInCurrent
struct ABP_old_QTECutscenePlayer_C_IsExistQTEInCurrent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.UpdatePlayingIntervalSequence
struct ABP_old_QTECutscenePlayer_C_UpdatePlayingIntervalSequence_Params
{
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.IsExistNextLevelSequence
struct ABP_old_QTECutscenePlayer_C_IsExistNextLevelSequence_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.EndIntervalSequence
struct ABP_old_QTECutscenePlayer_C_EndIntervalSequence_Params
{
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InitQTESequence
struct ABP_old_QTECutscenePlayer_C_InitQTESequence_Params
{
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.PlaySequence
struct ABP_old_QTECutscenePlayer_C_PlaySequence_Params
{
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InitCutscene
struct ABP_old_QTECutscenePlayer_C_InitCutscene_Params
{
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.UserConstructionScript
struct ABP_old_QTECutscenePlayer_C_UserConstructionScript_Params
{
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16
struct ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15
struct ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14
struct ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13
struct ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_Top_K2Node_InputActionEvent_12
struct ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_Top_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11
struct ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_Left_K2Node_InputActionEvent_10
struct ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_Left_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_Right_K2Node_InputActionEvent_9
struct ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_Right_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.ReceiveTick
struct ABP_old_QTECutscenePlayer_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.Event_InputStart
struct ABP_old_QTECutscenePlayer_C_Event_InputStart_Params
{
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.Event_InputEnd
struct ABP_old_QTECutscenePlayer_C_Event_InputEnd_Params
{
};

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.ExecuteUbergraph_BP_old_QTECutscenePlayer
struct ABP_old_QTECutscenePlayer_C_ExecuteUbergraph_BP_old_QTECutscenePlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
