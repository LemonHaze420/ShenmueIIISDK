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

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.SetBoardItemAngle
struct ABP_MiniGameBigWheel_C_SetBoardItemAngle_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.SetItemImageCN
struct ABP_MiniGameBigWheel_C_SetItemImageCN_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.InitializeCNTex
struct ABP_MiniGameBigWheel_C_InitializeCNTex_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.ResetValueCN
struct ABP_MiniGameBigWheel_C_ResetValueCN_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.IsOverLimitTime
struct ABP_MiniGameBigWheel_C_IsOverLimitTime_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.ResetButtonValue
struct ABP_MiniGameBigWheel_C_ResetButtonValue_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.UpdateButtonPower
struct ABP_MiniGameBigWheel_C_UpdateButtonPower_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.SetGameMainUpdate
struct ABP_MiniGameBigWheel_C_SetGameMainUpdate_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.IsSpecialEvent
struct ABP_MiniGameBigWheel_C_IsSpecialEvent_Params
{
	bool                                               Event;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.AddJackpotCount
struct ABP_MiniGameBigWheel_C_AddJackpotCount_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.LoadJackpotCount
struct ABP_MiniGameBigWheel_C_LoadJackpotCount_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.OnObjectLoaded
struct ABP_MiniGameBigWheel_C_OnObjectLoaded_Params
{
	struct FString                                     LoadId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     LoadedObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.UpdateSpecialItemData
struct ABP_MiniGameBigWheel_C_UpdateSpecialItemData_Params
{
	class UDataTable*                                  DataTable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.RewardSpecialItem
struct ABP_MiniGameBigWheel_C_RewardSpecialItem_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.SetEnabledButton
struct ABP_MiniGameBigWheel_C_SetEnabledButton_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.UpdateTicketNum
struct ABP_MiniGameBigWheel_C_UpdateTicketNum_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.IsEnabledPlay
struct ABP_MiniGameBigWheel_C_IsEnabledPlay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.InitializeValue
struct ABP_MiniGameBigWheel_C_InitializeValue_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.GetDetectAction
struct ABP_MiniGameBigWheel_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.CreateCollision
struct ABP_MiniGameBigWheel_C_CreateCollision_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.UpdateBoard
struct ABP_MiniGameBigWheel_C_UpdateBoard_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.InitAsyncLoad
struct ABP_MiniGameBigWheel_C_InitAsyncLoad_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.SpawnInputControlActor
struct ABP_MiniGameBigWheel_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.UserConstructionScript
struct ABP_MiniGameBigWheel_C_UserConstructionScript_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.RotateTimeLine__FinishedFunc
struct ABP_MiniGameBigWheel_C_RotateTimeLine__FinishedFunc_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.RotateTimeLine__UpdateFunc
struct ABP_MiniGameBigWheel_C_RotateTimeLine__UpdateFunc_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.StartMiniGame
struct ABP_MiniGameBigWheel_C_StartMiniGame_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.EndMiniGame
struct ABP_MiniGameBigWheel_C_EndMiniGame_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.RestartMiniGame
struct ABP_MiniGameBigWheel_C_RestartMiniGame_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.BGMPlay
struct ABP_MiniGameBigWheel_C_BGMPlay_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.BGMStop
struct ABP_MiniGameBigWheel_C_BGMStop_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.WinMiniGame
struct ABP_MiniGameBigWheel_C_WinMiniGame_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.LoseMiniGame
struct ABP_MiniGameBigWheel_C_LoseMiniGame_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.OnHitItemCollision
struct ABP_MiniGameBigWheel_C_OnHitItemCollision_Params
{
	struct FST_MiniGameBigWheelItemData                ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.ReceiveBeginPlay
struct ABP_MiniGameBigWheel_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.ReceiveTick
struct ABP_MiniGameBigWheel_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
struct ABP_MiniGameBigWheel_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
struct ABP_MiniGameBigWheel_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.ResumeMiniGame
struct ABP_MiniGameBigWheel_C_ResumeMiniGame_Params
{
	struct FString                                     ResumeKeyword;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.OnTalkScriptEvent
struct ABP_MiniGameBigWheel_C_OnTalkScriptEvent_Params
{
	int                                                EventNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.CancelMiniGame
struct ABP_MiniGameBigWheel_C_CancelMiniGame_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.OnFinishedFadeEndGame
struct ABP_MiniGameBigWheel_C_OnFinishedFadeEndGame_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.ReceiveEndPlay
struct ABP_MiniGameBigWheel_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.OnInputButtonRight
struct ABP_MiniGameBigWheel_C_OnInputButtonRight_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.OnInputButtonBottom
struct ABP_MiniGameBigWheel_C_OnInputButtonBottom_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.OnFinishedFade
struct ABP_MiniGameBigWheel_C_OnFinishedFade_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.PlayResultProcess
struct ABP_MiniGameBigWheel_C_PlayResultProcess_Params
{
};

// Function BP_MiniGameBigWheel.BP_MiniGameBigWheel_C.ExecuteUbergraph_BP_MiniGameBigWheel
struct ABP_MiniGameBigWheel_C_ExecuteUbergraph_BP_MiniGameBigWheel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
