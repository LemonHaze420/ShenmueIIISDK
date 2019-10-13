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

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.SetBackRealTimeSecondsForQTESlow
struct ABP_old_QTEMultiTypeCutscenePlayer_C_SetBackRealTimeSecondsForQTESlow_Params
{
	float                                              NewTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.GetQTESlowPlayRate
struct ABP_old_QTEMultiTypeCutscenePlayer_C_GetQTESlowPlayRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.IsQTESlowPlaying
struct ABP_old_QTEMultiTypeCutscenePlayer_C_IsQTESlowPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.StartQTEInputSafeSlow
struct ABP_old_QTEMultiTypeCutscenePlayer_C_StartQTEInputSafeSlow_Params
{
	float                                              RestLength;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              QTEInAnimLength;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              QTEOutAnimLength;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.EndSequence
struct ABP_old_QTEMultiTypeCutscenePlayer_C_EndSequence_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.IsExistQTEInSequence
struct ABP_old_QTEMultiTypeCutscenePlayer_C_IsExistQTEInSequence_Params
{
	struct FST_old_QTEMultiTypeSequence                QTESequence;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.DebugIsEnabledToSkip
struct ABP_old_QTEMultiTypeCutscenePlayer_C_DebugIsEnabledToSkip_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.CountQTEInputTimer
struct ABP_old_QTEMultiTypeCutscenePlayer_C_CountQTEInputTimer_Params
{
	float                                              AfterTimer;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.FindQTESequenceFromLevelSequence
struct ABP_old_QTEMultiTypeCutscenePlayer_C_FindQTESequenceFromLevelSequence_Params
{
	class ULevelSequence*                              LevelSequence;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.NotifyInputKey
struct ABP_old_QTEMultiTypeCutscenePlayer_C_NotifyInputKey_Params
{
	struct FKey                                        InputedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.GetLastQTEResult
struct ABP_old_QTEMultiTypeCutscenePlayer_C_GetLastQTEResult_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.GetLastQTEFreeCommandResult
struct ABP_old_QTEMultiTypeCutscenePlayer_C_GetLastQTEFreeCommandResult_Params
{
	bool                                               IsSuccess;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FST_old_BattleQTEExperimentFreeCommand      FreeCommand;                                              // (Parm, OutParm)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.UpdateLastQTEFreeCommand
struct ABP_old_QTEMultiTypeCutscenePlayer_C_UpdateLastQTEFreeCommand_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.IsInQTE
struct ABP_old_QTEMultiTypeCutscenePlayer_C_IsInQTE_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.ResetLastQTEFailed
struct ABP_old_QTEMultiTypeCutscenePlayer_C_ResetLastQTEFailed_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.UpdateQTEInputTimer
struct ABP_old_QTEMultiTypeCutscenePlayer_C_UpdateQTEInputTimer_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.IsQTEEnabledInput
struct ABP_old_QTEMultiTypeCutscenePlayer_C_IsQTEEnabledInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.UpdateQTERestInputTimeRate
struct ABP_old_QTEMultiTypeCutscenePlayer_C_UpdateQTERestInputTimeRate_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.EndFunctionQTE
struct ABP_old_QTEMultiTypeCutscenePlayer_C_EndFunctionQTE_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.GetResultQTE
struct ABP_old_QTEMultiTypeCutscenePlayer_C_GetResultQTE_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.ClearResultQTE
struct ABP_old_QTEMultiTypeCutscenePlayer_C_ClearResultQTE_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.PrepareQTE
struct ABP_old_QTEMultiTypeCutscenePlayer_C_PrepareQTE_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InputQTE
struct ABP_old_QTEMultiTypeCutscenePlayer_C_InputQTE_Params
{
	struct FKey                                        InputedKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InputEndQTE
struct ABP_old_QTEMultiTypeCutscenePlayer_C_InputEndQTE_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InputStartQTE
struct ABP_old_QTEMultiTypeCutscenePlayer_C_InputStartQTE_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.SetupNextLevelSequecne
struct ABP_old_QTEMultiTypeCutscenePlayer_C_SetupNextLevelSequecne_Params
{
	bool                                               QTEResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.DebugSkipToEnd
struct ABP_old_QTEMultiTypeCutscenePlayer_C_DebugSkipToEnd_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.ExitCutscene
struct ABP_old_QTEMultiTypeCutscenePlayer_C_ExitCutscene_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.SetupSequence
struct ABP_old_QTEMultiTypeCutscenePlayer_C_SetupSequence_Params
{
	int                                                QTESequenceIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.Retry
struct ABP_old_QTEMultiTypeCutscenePlayer_C_Retry_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.UpdatePlayingSequenceToRetry
struct ABP_old_QTEMultiTypeCutscenePlayer_C_UpdatePlayingSequenceToRetry_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.IsExistQTEInCurrent
struct ABP_old_QTEMultiTypeCutscenePlayer_C_IsExistQTEInCurrent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.UpdatePlayingIntervalSequence
struct ABP_old_QTEMultiTypeCutscenePlayer_C_UpdatePlayingIntervalSequence_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.IsExistNextLevelSequence
struct ABP_old_QTEMultiTypeCutscenePlayer_C_IsExistNextLevelSequence_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.EndIntervalSequence
struct ABP_old_QTEMultiTypeCutscenePlayer_C_EndIntervalSequence_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InitQTESequence
struct ABP_old_QTEMultiTypeCutscenePlayer_C_InitQTESequence_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.PlaySequence
struct ABP_old_QTEMultiTypeCutscenePlayer_C_PlaySequence_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InitCutscene
struct ABP_old_QTEMultiTypeCutscenePlayer_C_InitCutscene_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.UserConstructionScript
struct ABP_old_QTEMultiTypeCutscenePlayer_C_UserConstructionScript_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16
struct ABP_old_QTEMultiTypeCutscenePlayer_C_InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15
struct ABP_old_QTEMultiTypeCutscenePlayer_C_InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14
struct ABP_old_QTEMultiTypeCutscenePlayer_C_InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13
struct ABP_old_QTEMultiTypeCutscenePlayer_C_InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_Top_K2Node_InputActionEvent_12
struct ABP_old_QTEMultiTypeCutscenePlayer_C_InpActEvt_QTE_Top_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11
struct ABP_old_QTEMultiTypeCutscenePlayer_C_InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_Left_K2Node_InputActionEvent_10
struct ABP_old_QTEMultiTypeCutscenePlayer_C_InpActEvt_QTE_Left_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_Right_K2Node_InputActionEvent_9
struct ABP_old_QTEMultiTypeCutscenePlayer_C_InpActEvt_QTE_Right_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.Event_InputStart
struct ABP_old_QTEMultiTypeCutscenePlayer_C_Event_InputStart_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.Event_InputEnd
struct ABP_old_QTEMultiTypeCutscenePlayer_C_Event_InputEnd_Params
{
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.ReceiveTick
struct ABP_old_QTEMultiTypeCutscenePlayer_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.OnFinishedLevelSequencePlayer
struct ABP_old_QTEMultiTypeCutscenePlayer_C_OnFinishedLevelSequencePlayer_Params
{
	class ULevelSequencePlayer**                       LevelSequencePlayer;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.ExecuteUbergraph_BP_old_QTEMultiTypeCutscenePlayer
struct ABP_old_QTEMultiTypeCutscenePlayer_C_ExecuteUbergraph_BP_old_QTEMultiTypeCutscenePlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
