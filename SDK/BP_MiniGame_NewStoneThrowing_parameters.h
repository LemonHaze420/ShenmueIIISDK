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

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.RotateUpdate
struct ABP_MiniGame_NewStoneThrowing_C_RotateUpdate_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ClacArmPower
struct ABP_MiniGame_NewStoneThrowing_C_ClacArmPower_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.GetMiniGameBGMID
struct ABP_MiniGame_NewStoneThrowing_C_GetMiniGameBGMID_Params
{
	struct FName                                       ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.GetDetectAction
struct ABP_MiniGame_NewStoneThrowing_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetBlockingVolume
struct ABP_MiniGame_NewStoneThrowing_C_SetBlockingVolume_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.GetMiniGameHelpName
struct ABP_MiniGame_NewStoneThrowing_C_GetMiniGameHelpName_Params
{
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetBoardInfo
struct ABP_MiniGame_NewStoneThrowing_C_SetBoardInfo_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.InitializeArrow
struct ABP_MiniGame_NewStoneThrowing_C_InitializeArrow_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetAndInterpHandRotate
struct ABP_MiniGame_NewStoneThrowing_C_SetAndInterpHandRotate_Params
{
	bool                                               IsInterp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.IsChangePowerAngle
struct ABP_MiniGame_NewStoneThrowing_C_IsChangePowerAngle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.GetInputPowerLength
struct ABP_MiniGame_NewStoneThrowing_C_GetInputPowerLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.AddItem
struct ABP_MiniGame_NewStoneThrowing_C_AddItem_Params
{
	int                                                ItemCount;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.AddGiftList
struct ABP_MiniGame_NewStoneThrowing_C_AddGiftList_Params
{
	struct FName                                       GiftName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.UpdateArrow
struct ABP_MiniGame_NewStoneThrowing_C_UpdateArrow_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.UpdateShaking
struct ABP_MiniGame_NewStoneThrowing_C_UpdateShaking_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.InitializeValue
struct ABP_MiniGame_NewStoneThrowing_C_InitializeValue_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.CameraUpdate
struct ABP_MiniGame_NewStoneThrowing_C_CameraUpdate_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetRightAxisY
struct ABP_MiniGame_NewStoneThrowing_C_SetRightAxisY_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetRightAxisX
struct ABP_MiniGame_NewStoneThrowing_C_SetRightAxisX_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.HideUI
struct ABP_MiniGame_NewStoneThrowing_C_HideUI_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SpawnInputControlActor
struct ABP_MiniGame_NewStoneThrowing_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ShowUIThrowResult
struct ABP_MiniGame_NewStoneThrowing_C_ShowUIThrowResult_Params
{
	bool                                               IsSuccess;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ShowUIGameResult
struct ABP_MiniGame_NewStoneThrowing_C_ShowUIGameResult_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetUIScore
struct ABP_MiniGame_NewStoneThrowing_C_SetUIScore_Params
{
	int                                                InScore;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.SetUIThrowCount
struct ABP_MiniGame_NewStoneThrowing_C_SetUIThrowCount_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.UserConstructionScript
struct ABP_MiniGame_NewStoneThrowing_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_Arm__FinishedFunc
struct ABP_MiniGame_NewStoneThrowing_C_Timeline_Arm__FinishedFunc_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_Arm__UpdateFunc
struct ABP_MiniGame_NewStoneThrowing_C_Timeline_Arm__UpdateFunc_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_2__FinishedFunc
struct ABP_MiniGame_NewStoneThrowing_C_Timeline_2__FinishedFunc_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_2__UpdateFunc
struct ABP_MiniGame_NewStoneThrowing_C_Timeline_2__UpdateFunc_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_0__FinishedFunc
struct ABP_MiniGame_NewStoneThrowing_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.Timeline_0__UpdateFunc
struct ABP_MiniGame_NewStoneThrowing_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ReceiveTick
struct ABP_MiniGame_NewStoneThrowing_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.StartTakeOut
struct ABP_MiniGame_NewStoneThrowing_C_StartTakeOut_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnFinishedTakeOutAnim
struct ABP_MiniGame_NewStoneThrowing_C_OnFinishedTakeOutAnim_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.PlayArmUpDown
struct ABP_MiniGame_NewStoneThrowing_C_PlayArmUpDown_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.StopArmUpDown
struct ABP_MiniGame_NewStoneThrowing_C_StopArmUpDown_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnThorwObject
struct ABP_MiniGame_NewStoneThrowing_C_OnThorwObject_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnFinishedFade
struct ABP_MiniGame_NewStoneThrowing_C_OnFinishedFade_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.DrawMiniGame
struct ABP_MiniGame_NewStoneThrowing_C_DrawMiniGame_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.RestartMiniGame
struct ABP_MiniGame_NewStoneThrowing_C_RestartMiniGame_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnDecideThrowingResult
struct ABP_MiniGame_NewStoneThrowing_C_OnDecideThrowingResult_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       GiftName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSpecial;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               SuccessSound;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.LoseMiniGame
struct ABP_MiniGame_NewStoneThrowing_C_LoseMiniGame_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.WinMiniGame
struct ABP_MiniGame_NewStoneThrowing_C_WinMiniGame_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.EndMiniGame
struct ABP_MiniGame_NewStoneThrowing_C_EndMiniGame_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.StartMiniGame
struct ABP_MiniGame_NewStoneThrowing_C_StartMiniGame_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ReceiveBeginPlay
struct ABP_MiniGame_NewStoneThrowing_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnTalkScriptEvent
struct ABP_MiniGame_NewStoneThrowing_C_OnTalkScriptEvent_Params
{
	int                                                EventNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature
struct ABP_MiniGame_NewStoneThrowing_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature
struct ABP_MiniGame_NewStoneThrowing_C_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ResumeMiniGame
struct ABP_MiniGame_NewStoneThrowing_C_ResumeMiniGame_Params
{
	struct FString                                     ResumeKeyword;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.EndGame
struct ABP_MiniGame_NewStoneThrowing_C_EndGame_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnFinishedFadeEndGame
struct ABP_MiniGame_NewStoneThrowing_C_OnFinishedFadeEndGame_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ConsumeGamblePrice
struct ABP_MiniGame_NewStoneThrowing_C_ConsumeGamblePrice_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.OnStopped
struct ABP_MiniGame_NewStoneThrowing_C_OnStopped_Params
{
	bool                                               bResult;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       GiftName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSpecial;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               SuccessSound;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsGameCenter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.FinalizeTalk
struct ABP_MiniGame_NewStoneThrowing_C_FinalizeTalk_Params
{
};

// Function BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C.ExecuteUbergraph_BP_MiniGame_NewStoneThrowing
struct ABP_MiniGame_NewStoneThrowing_C_ExecuteUbergraph_BP_MiniGame_NewStoneThrowing_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
