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

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.MaterialInitialize
struct ABP_ExciteQTE3_C_MaterialInitialize_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.InitAsyncLoad
struct ABP_ExciteQTE3_C_InitAsyncLoad_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.FinalizeSoundPlayer
struct ABP_ExciteQTE3_C_FinalizeSoundPlayer_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.EnableBGM
struct ABP_ExciteQTE3_C_EnableBGM_Params
{
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.InitializeSoundPlayer
struct ABP_ExciteQTE3_C_InitializeSoundPlayer_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.FinalizeGame
struct ABP_ExciteQTE3_C_FinalizeGame_Params
{
	bool                                               IsHighScore;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HighScore;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LastSocre;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.PlayMultUp
struct ABP_ExciteQTE3_C_PlayMultUp_Params
{
	int                                                Mult;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Load
struct ABP_ExciteQTE3_C_Load_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Save
struct ABP_ExciteQTE3_C_Save_Params
{
	int                                                hi_Score;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                last_score;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.ItemGetCheck
struct ABP_ExciteQTE3_C_ItemGetCheck_Params
{
	int                                                item_count1;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.SpawnInputControlActor
struct ABP_ExciteQTE3_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.PlayLevelUp
struct ABP_ExciteQTE3_C_PlayLevelUp_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.PlayGameOver
struct ABP_ExciteQTE3_C_PlayGameOver_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.PlayOneUp
struct ABP_ExciteQTE3_C_PlayOneUp_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.FinishGame
struct ABP_ExciteQTE3_C_FinishGame_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.PlayQTEFailure
struct ABP_ExciteQTE3_C_PlayQTEFailure_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.PlayQTESuccess
struct ABP_ExciteQTE3_C_PlayQTESuccess_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.ReplayBeep
struct ABP_ExciteQTE3_C_ReplayBeep_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.PlayQTEBeep
struct ABP_ExciteQTE3_C_PlayQTEBeep_Params
{
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.UserConstructionScript
struct ABP_ExciteQTE3_C_UserConstructionScript_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.򠪦􆖐񍳔_
struct ABP_ExciteQTE3_C_UnknownFunc01__Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push D-Right
struct ABP_ExciteQTE3_C_Push_D_Right_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push D-Left
struct ABP_ExciteQTE3_C_Push_D_Left_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push A
struct ABP_ExciteQTE3_C_Push_A_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push B
struct ABP_ExciteQTE3_C_Push_B_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push X
struct ABP_ExciteQTE3_C_Push_X_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push Y
struct ABP_ExciteQTE3_C_Push_Y_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.StartMiniGame
struct ABP_ExciteQTE3_C_StartMiniGame_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.EndMiniGame
struct ABP_ExciteQTE3_C_EndMiniGame_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.RestartMiniGame
struct ABP_ExciteQTE3_C_RestartMiniGame_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push D-Down
struct ABP_ExciteQTE3_C_Push_D_Down_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Push D-Up
struct ABP_ExciteQTE3_C_Push_D_Up_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.StartGame
struct ABP_ExciteQTE3_C_StartGame_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.EndGame
struct ABP_ExciteQTE3_C_EndGame_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.BeginGame
struct ABP_ExciteQTE3_C_BeginGame_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Payment
struct ABP_ExciteQTE3_C_Payment_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Play Fail
struct ABP_ExciteQTE3_C_Play_Fail_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.OnEndKihudaFlow
struct ABP_ExciteQTE3_C_OnEndKihudaFlow_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.GameStartFinished0
struct ABP_ExciteQTE3_C_GameStartFinished0_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.UseCoinFinished0
struct ABP_ExciteQTE3_C_UseCoinFinished0_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.fail finished0
struct ABP_ExciteQTE3_C_fail_finished0_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.EventStopStartHighScore
struct ABP_ExciteQTE3_C_EventStopStartHighScore_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.WinMiniGame
struct ABP_ExciteQTE3_C_WinMiniGame_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.LoseMiniGame
struct ABP_ExciteQTE3_C_LoseMiniGame_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Event_PlayBGM
struct ABP_ExciteQTE3_C_Event_PlayBGM_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.ReceiveBeginPlay
struct ABP_ExciteQTE3_C_ReceiveBeginPlay_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.ReceiveTick
struct ABP_ExciteQTE3_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Zoom
struct ABP_ExciteQTE3_C_Zoom_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.Unzoom
struct ABP_ExciteQTE3_C_Unzoom_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.EndFlashingHighScore
struct ABP_ExciteQTE3_C_EndFlashingHighScore_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.MapBGMStop
struct ABP_ExciteQTE3_C_MapBGMStop_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
struct ABP_ExciteQTE3_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
struct ABP_ExciteQTE3_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.ResumeMiniGame
struct ABP_ExciteQTE3_C_ResumeMiniGame_Params
{
	struct FString                                     ResumeKeyword;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.OnTalkScriptEvent
struct ABP_ExciteQTE3_C_OnTalkScriptEvent_Params
{
	int                                                EventNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.CancelMiniGame
struct ABP_ExciteQTE3_C_CancelMiniGame_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.OnFinishedFadeEndGame
struct ABP_ExciteQTE3_C_OnFinishedFadeEndGame_Params
{
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.OnMaterialLoadEnd
struct ABP_ExciteQTE3_C_OnMaterialLoadEnd_Params
{
	struct FString                                     LoadId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     LoadedObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.ExecuteUbergraph_BP_ExciteQTE3
struct ABP_ExciteQTE3_C_ExecuteUbergraph_BP_ExciteQTE3_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExciteQTE3.BP_ExciteQTE3_C.FailFinished Restart__DelegateSignature
struct ABP_ExciteQTE3_C_FailFinished_Restart__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
