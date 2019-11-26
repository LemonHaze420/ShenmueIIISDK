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

// Function BP_HighwayStar.BP_HighwayStar_C.LoadScore
struct ABP_HighwayStar_C_LoadScore_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.SaveScore
struct ABP_HighwayStar_C_SaveScore_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.UpdateQte
struct ABP_HighwayStar_C_UpdateQte_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.MakeQteTriangle
struct ABP_HighwayStar_C_MakeQteTriangle_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.RemoveQte
struct ABP_HighwayStar_C_RemoveQte_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.InitAsyncLoad
struct ABP_HighwayStar_C_InitAsyncLoad_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.DeleteScoreLightActor
struct ABP_HighwayStar_C_DeleteScoreLightActor_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.CreateScoreLightActor
struct ABP_HighwayStar_C_CreateScoreLightActor_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.SettingSEPlayer
struct ABP_HighwayStar_C_SettingSEPlayer_Params
{
	bool                                               IsDestroy;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.UpdatePatLight
struct ABP_HighwayStar_C_UpdatePatLight_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.StopPatLight
struct ABP_HighwayStar_C_StopPatLight_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.StartPatLight
struct ABP_HighwayStar_C_StartPatLight_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.DebugSetting
struct ABP_HighwayStar_C_DebugSetting_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.SetCarOffset
struct ABP_HighwayStar_C_SetCarOffset_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.GetNowArrowRot
struct ABP_HighwayStar_C_GetNowArrowRot_Params
{
	float                                              RetRot;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.ScoreLightAllOff
struct ABP_HighwayStar_C_ScoreLightAllOff_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.GetScoreLIghtBlinkIndex
struct ABP_HighwayStar_C_GetScoreLIghtBlinkIndex_Params
{
	bool                                               ArgMy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RetIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.UpdateDispScoreLight
struct ABP_HighwayStar_C_UpdateDispScoreLight_Params
{
	bool                                               ArgOn;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.ScoreCheck
struct ABP_HighwayStar_C_ScoreCheck_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.ParamSetting
struct ABP_HighwayStar_C_ParamSetting_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.ItemGetCheck
struct ABP_HighwayStar_C_ItemGetCheck_Params
{
	int                                                item_count1;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.SpawnInputControlActor
struct ABP_HighwayStar_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.CreateRootPoint
struct ABP_HighwayStar_C_CreateRootPoint_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.AddScore
struct ABP_HighwayStar_C_AddScore_Params
{
	bool                                               InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.updateLocation
struct ABP_HighwayStar_C_updateLocation_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.setCarRotation
struct ABP_HighwayStar_C_setCarRotation_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.UserConstructionScript
struct ABP_HighwayStar_C_UserConstructionScript_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.򠪦􆖐񍳔_
struct ABP_HighwayStar_C_UnknownFunc01__Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.LightFlickerTimeline__FinishedFunc
struct ABP_HighwayStar_C_LightFlickerTimeline__FinishedFunc_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.LightFlickerTimeline__UpdateFunc
struct ABP_HighwayStar_C_LightFlickerTimeline__UpdateFunc_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.Lamp Flashing__FinishedFunc
struct ABP_HighwayStar_C_Lamp_Flashing__FinishedFunc_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.Lamp Flashing__UpdateFunc
struct ABP_HighwayStar_C_Lamp_Flashing__UpdateFunc_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.Lamp Flashing__on__EventFunc
struct ABP_HighwayStar_C_Lamp_Flashing__on__EventFunc_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.Lamp Flashing__off__EventFunc
struct ABP_HighwayStar_C_Lamp_Flashing__off__EventFunc_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.Initialize_Event
struct ABP_HighwayStar_C_Initialize_Event_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.Finalize_Event
struct ABP_HighwayStar_C_Finalize_Event_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.StartMiniGame
struct ABP_HighwayStar_C_StartMiniGame_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.EndMiniGame
struct ABP_HighwayStar_C_EndMiniGame_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.RestartMiniGame
struct ABP_HighwayStar_C_RestartMiniGame_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.BGMPlay
struct ABP_HighwayStar_C_BGMPlay_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.BGMStop
struct ABP_HighwayStar_C_BGMStop_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.Reset Start
struct ABP_HighwayStar_C_Reset_Start_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.Reset Info Save
struct ABP_HighwayStar_C_Reset_Info_Save_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.SE_LampPlay
struct ABP_HighwayStar_C_SE_LampPlay_Params
{
	bool                                               IsEnemy;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.WinMiniGame
struct ABP_HighwayStar_C_WinMiniGame_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.LoseMiniGame
struct ABP_HighwayStar_C_LoseMiniGame_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.ReceiveBeginPlay
struct ABP_HighwayStar_C_ReceiveBeginPlay_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.ReceiveTick
struct ABP_HighwayStar_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.Zoom
struct ABP_HighwayStar_C_Zoom_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.Unzoom
struct ABP_HighwayStar_C_Unzoom_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__RightMoveStop_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_HighwayStar_C_BndEvt__RightMoveStop_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__LeftMoveStop_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_HighwayStar_C_BndEvt__LeftMoveStop_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__LeftMoveStop_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
struct ABP_HighwayStar_C_BndEvt__LeftMoveStop_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__RightMoveStop_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature
struct ABP_HighwayStar_C_BndEvt__RightMoveStop_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_131
struct ABP_HighwayStar_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_131_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.Right Stick X
struct ABP_HighwayStar_C_Right_Stick_X_Params
{
	float                                              InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.LightFlicker
struct ABP_HighwayStar_C_LightFlicker_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.LightStop
struct ABP_HighwayStar_C_LightStop_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.PushUp
struct ABP_HighwayStar_C_PushUp_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.PushDown
struct ABP_HighwayStar_C_PushDown_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_HighwayStar_C_BndEvt__Box1_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__life_check_00_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_HighwayStar_C_BndEvt__life_check_00_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.RestartTick
struct ABP_HighwayStar_C_RestartTick_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.LapsCheck
struct ABP_HighwayStar_C_LapsCheck_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.RotateArrow
struct ABP_HighwayStar_C_RotateArrow_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.Play Use Coin
struct ABP_HighwayStar_C_Play_Use_Coin_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
struct ABP_HighwayStar_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
struct ABP_HighwayStar_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.ResumeMiniGame
struct ABP_HighwayStar_C_ResumeMiniGame_Params
{
	struct FString                                     ResumeKeyword;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_HighwayStar.BP_HighwayStar_C.OnTalkScriptEvent
struct ABP_HighwayStar_C_OnTalkScriptEvent_Params
{
	int                                                EventNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.OnEndKihudaFlow
struct ABP_HighwayStar_C_OnEndKihudaFlow_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.UsedCoin
struct ABP_HighwayStar_C_UsedCoin_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.GameStartEnd
struct ABP_HighwayStar_C_GameStartEnd_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.CancelMiniGame
struct ABP_HighwayStar_C_CancelMiniGame_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.OnFinishedFadeEndGame
struct ABP_HighwayStar_C_OnFinishedFadeEndGame_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.ReceiveEndPlay
struct ABP_HighwayStar_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HighwayStar.BP_HighwayStar_C.QteWidgetUpdate
struct ABP_HighwayStar_C_QteWidgetUpdate_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.OnEndGameOver
struct ABP_HighwayStar_C_OnEndGameOver_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.OnEndPerfect
struct ABP_HighwayStar_C_OnEndPerfect_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.PlayForceFeedBack
struct ABP_HighwayStar_C_PlayForceFeedBack_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.StartGame
struct ABP_HighwayStar_C_StartGame_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.Event_EndMiniGame
struct ABP_HighwayStar_C_Event_EndMiniGame_Params
{
};

// Function BP_HighwayStar.BP_HighwayStar_C.ExecuteUbergraph_BP_HighwayStar
struct ABP_HighwayStar_C_ExecuteUbergraph_BP_HighwayStar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
