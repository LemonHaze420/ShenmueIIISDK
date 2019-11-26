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

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.CanSkip
struct ABP_QTECutscenePlayer_C_CanSkip_Params
{
	bool                                               CAN;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UpdateQTEAnimationState
struct ABP_QTECutscenePlayer_C_UpdateQTEAnimationState_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.DebugSetIsQTEForceSuccess
struct ABP_QTECutscenePlayer_C_DebugSetIsQTEForceSuccess_Params
{
	bool                                               bForceSuccess;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.OnFinishedQTELevelSequencePlayer
struct ABP_QTECutscenePlayer_C_OnFinishedQTELevelSequencePlayer_Params
{
	class ULevelSequencePlayer*                        LevelSequencePlayer;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.GetCurrentRetryCount
struct ABP_QTECutscenePlayer_C_GetCurrentRetryCount_Params
{
	class ULevelSequence*                              InLevelSequence;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.DebugIsEnableToSkip
struct ABP_QTECutscenePlayer_C_DebugIsEnableToSkip_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.EndSubSequence
struct ABP_QTECutscenePlayer_C_EndSubSequence_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.PlaySubSequence
struct ABP_QTECutscenePlayer_C_PlaySubSequence_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.FinalizeSubSequenceActor
struct ABP_QTECutscenePlayer_C_FinalizeSubSequenceActor_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InitializeSubSequenceActor
struct ABP_QTECutscenePlayer_C_InitializeSubSequenceActor_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.SetupNextLevelSequence
struct ABP_QTECutscenePlayer_C_SetupNextLevelSequence_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UpdateLevelSequenceManually
struct ABP_QTECutscenePlayer_C_UpdateLevelSequenceManually_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.SetupCurrentSequenceToRetryPoint
struct ABP_QTECutscenePlayer_C_SetupCurrentSequenceToRetryPoint_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.ExecuteRetry
struct ABP_QTECutscenePlayer_C_ExecuteRetry_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UpdatePlayingSequenceToRetry
struct ABP_QTECutscenePlayer_C_UpdatePlayingSequenceToRetry_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.EndIntervalSequence
struct ABP_QTECutscenePlayer_C_EndIntervalSequence_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UpdatePlayingIntervalSequence
struct ABP_QTECutscenePlayer_C_UpdatePlayingIntervalSequence_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.GetQTESingleRandomInputAction
struct ABP_QTECutscenePlayer_C_GetQTESingleRandomInputAction_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.StartQTEInputSafeSlow
struct ABP_QTECutscenePlayer_C_StartQTEInputSafeSlow_Params
{
	float                                              RestLength;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              QTELengthBeforeCountTime;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              QTEInputLimitTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.IsExistQTEInSequence
struct ABP_QTECutscenePlayer_C_IsExistQTEInSequence_Params
{
	struct FST_QTESequence                             InQTESequence;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.FindQTESequenceFromLevelSequence
struct ABP_QTECutscenePlayer_C_FindQTESequenceFromLevelSequence_Params
{
	class ULevelSequence*                              InLevelSequence;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FoundIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.GetLastQTEResult
struct ABP_QTECutscenePlayer_C_GetLastQTEResult_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InputQTE
struct ABP_QTECutscenePlayer_C_InputQTE_Params
{
	struct FName                                       InInputAction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.StartQTE
struct ABP_QTECutscenePlayer_C_StartQTE_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.SetupCurrentQTE
struct ABP_QTECutscenePlayer_C_SetupCurrentQTE_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.SetupCurrentSequenceFromIndex
struct ABP_QTECutscenePlayer_C_SetupCurrentSequenceFromIndex_Params
{
	int                                                SequenceIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.FinalizeQTEComponent
struct ABP_QTECutscenePlayer_C_FinalizeQTEComponent_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InitializeQTEComponent
struct ABP_QTECutscenePlayer_C_InitializeQTEComponent_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.DebugSkipToEnd
struct ABP_QTECutscenePlayer_C_DebugSkipToEnd_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.EndSequence
struct ABP_QTECutscenePlayer_C_EndSequence_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.PlaySequence
struct ABP_QTECutscenePlayer_C_PlaySequence_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InitSequencePlay
struct ABP_QTECutscenePlayer_C_InitSequencePlay_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.ExitCutscene
struct ABP_QTECutscenePlayer_C_ExitCutscene_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InitCutscene
struct ABP_QTECutscenePlayer_C_InitCutscene_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UserConstructionScript
struct ABP_QTECutscenePlayer_C_UserConstructionScript_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16
struct ABP_QTECutscenePlayer_C_InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15
struct ABP_QTECutscenePlayer_C_InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14
struct ABP_QTECutscenePlayer_C_InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13
struct ABP_QTECutscenePlayer_C_InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_Top_K2Node_InputActionEvent_12
struct ABP_QTECutscenePlayer_C_InpActEvt_QTE_Top_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11
struct ABP_QTECutscenePlayer_C_InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_Left_K2Node_InputActionEvent_10
struct ABP_QTECutscenePlayer_C_InpActEvt_QTE_Left_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_Right_K2Node_InputActionEvent_9
struct ABP_QTECutscenePlayer_C_InpActEvt_QTE_Right_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.ReceiveTick
struct ABP_QTECutscenePlayer_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.Event_InputStart
struct ABP_QTECutscenePlayer_C_Event_InputStart_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.Event_StopAround
struct ABP_QTECutscenePlayer_C_Event_StopAround_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.Event_ResumeAround
struct ABP_QTECutscenePlayer_C_Event_ResumeAround_Params
{
};

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.ExecuteUbergraph_BP_QTECutscenePlayer
struct ABP_QTECutscenePlayer_C_ExecuteUbergraph_BP_QTECutscenePlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
