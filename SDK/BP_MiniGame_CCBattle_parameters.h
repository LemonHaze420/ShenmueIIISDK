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

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.UpdateArcadeData
struct ABP_MiniGame_CCBattle_C_UpdateArcadeData_Params
{
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.GetDetectAction
struct ABP_MiniGame_CCBattle_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.InitAsyncLoad
struct ABP_MiniGame_CCBattle_C_InitAsyncLoad_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.SpawnInputControlActor
struct ABP_MiniGame_CCBattle_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.UserConstructionScript
struct ABP_MiniGame_CCBattle_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ZoomCameraTimeLine__FinishedFunc
struct ABP_MiniGame_CCBattle_C_ZoomCameraTimeLine__FinishedFunc_Params
{
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ZoomCameraTimeLine__UpdateFunc
struct ABP_MiniGame_CCBattle_C_ZoomCameraTimeLine__UpdateFunc_Params
{
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.RestartMiniGame
struct ABP_MiniGame_CCBattle_C_RestartMiniGame_Params
{
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.BGMPlay
struct ABP_MiniGame_CCBattle_C_BGMPlay_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.BGMStop
struct ABP_MiniGame_CCBattle_C_BGMStop_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.WinMiniGame
struct ABP_MiniGame_CCBattle_C_WinMiniGame_Params
{
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.LoseMiniGame
struct ABP_MiniGame_CCBattle_C_LoseMiniGame_Params
{
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.EndMiniGame
struct ABP_MiniGame_CCBattle_C_EndMiniGame_Params
{
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.BndEvt__BPC_CCBattleCabinet_K2Node_ComponentBoundEvent_1_OnGameClear__DelegateSignature
struct ABP_MiniGame_CCBattle_C_BndEvt__BPC_CCBattleCabinet_K2Node_ComponentBoundEvent_1_OnGameClear__DelegateSignature_Params
{
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.BndEvt__BPC_CCBattleCabinet_K2Node_ComponentBoundEvent_2_OnGameOver__DelegateSignature
struct ABP_MiniGame_CCBattle_C_BndEvt__BPC_CCBattleCabinet_K2Node_ComponentBoundEvent_2_OnGameOver__DelegateSignature_Params
{
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ContainerAction
struct ABP_MiniGame_CCBattle_C_ContainerAction_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.EndGameAfterWaiting
struct ABP_MiniGame_CCBattle_C_EndGameAfterWaiting_Params
{
	float                                              WaitTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ReceiveBeginPlay
struct ABP_MiniGame_CCBattle_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ReceiveTick
struct ABP_MiniGame_CCBattle_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.StartMiniGame
struct ABP_MiniGame_CCBattle_C_StartMiniGame_Params
{
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
struct ABP_MiniGame_CCBattle_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params
{
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
struct ABP_MiniGame_CCBattle_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params
{
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ResumeMiniGame
struct ABP_MiniGame_CCBattle_C_ResumeMiniGame_Params
{
	struct FString                                     ResumeKeyword;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.OnTalkScriptEvent
struct ABP_MiniGame_CCBattle_C_OnTalkScriptEvent_Params
{
	int                                                EventNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.CancelMiniGame
struct ABP_MiniGame_CCBattle_C_CancelMiniGame_Params
{
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.OnFinishedFadeEndGame
struct ABP_MiniGame_CCBattle_C_OnFinishedFadeEndGame_Params
{
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ReceiveEndPlay
struct ABP_MiniGame_CCBattle_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.StartGame
struct ABP_MiniGame_CCBattle_C_StartGame_Params
{
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ZoomCamera
struct ABP_MiniGame_CCBattle_C_ZoomCamera_Params
{
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.UnZoomCamera
struct ABP_MiniGame_CCBattle_C_UnZoomCamera_Params
{
};

// Function BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.ExecuteUbergraph_BP_MiniGame_CCBattle
struct ABP_MiniGame_CCBattle_C_ExecuteUbergraph_BP_MiniGame_CCBattle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
