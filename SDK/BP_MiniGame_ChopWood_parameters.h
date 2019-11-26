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

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.UpdateMeshWetness
struct ABP_MiniGame_ChopWood_C_UpdateMeshWetness_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.GetDetectAction
struct ABP_MiniGame_ChopWood_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.SetVisibleUIButtonIcon
struct ABP_MiniGame_ChopWood_C_SetVisibleUIButtonIcon_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.GetClothMeshComponent
struct ABP_MiniGame_ChopWood_C_GetClothMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.InitAsyncLoad
struct ABP_MiniGame_ChopWood_C_InitAsyncLoad_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.StopAllChopBGM
struct ABP_MiniGame_ChopWood_C_StopAllChopBGM_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.StopChopBGM
struct ABP_MiniGame_ChopWood_C_StopChopBGM_Params
{
	TEnumAsByte<E_MiniGame_CW_BGMType>                 Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.PlayChopBGMFromCue
struct ABP_MiniGame_ChopWood_C_PlayChopBGMFromCue_Params
{
	TEnumAsByte<E_MiniGame_CW_BGMType>                 Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.DecideWoodId
struct ABP_MiniGame_ChopWood_C_DecideWoodId_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.UpdateChopCount
struct ABP_MiniGame_ChopWood_C_UpdateChopCount_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.SetAnimXmoveFromHit
struct ABP_MiniGame_ChopWood_C_SetAnimXmoveFromHit_Params
{
	bool                                               JustHit;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlusAngle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.AddDebugVolumeType
struct ABP_MiniGame_ChopWood_C_AddDebugVolumeType_Params
{
	int                                                Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.SetVolume
struct ABP_MiniGame_ChopWood_C_SetVolume_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.CheckHitWood
struct ABP_MiniGame_ChopWood_C_CheckHitWood_Params
{
	bool                                               Hit;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               JustHit;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.IsGameFinished
struct ABP_MiniGame_ChopWood_C_IsGameFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.SpawnInputControlActor
struct ABP_MiniGame_ChopWood_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.SpawnWood
struct ABP_MiniGame_ChopWood_C_SpawnWood_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.UserConstructionScript
struct ABP_MiniGame_ChopWood_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.TImeline_Xmove__FinishedFunc
struct ABP_MiniGame_ChopWood_C_TImeline_Xmove__FinishedFunc_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.TImeline_Xmove__UpdateFunc
struct ABP_MiniGame_ChopWood_C_TImeline_Xmove__UpdateFunc_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_Ymove_Chop__FinishedFunc
struct ABP_MiniGame_ChopWood_C_Timeline_Ymove_Chop__FinishedFunc_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_Ymove_Chop__UpdateFunc
struct ABP_MiniGame_ChopWood_C_Timeline_Ymove_Chop__UpdateFunc_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_Ymove_Chop__EndHitCheck__EventFunc
struct ABP_MiniGame_ChopWood_C_Timeline_Ymove_Chop__EndHitCheck__EventFunc_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_Ymove_Chop__TimingOfHit__EventFunc
struct ABP_MiniGame_ChopWood_C_Timeline_Ymove_Chop__TimingOfHit__EventFunc_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_Ymove_Reset__FinishedFunc
struct ABP_MiniGame_ChopWood_C_Timeline_Ymove_Reset__FinishedFunc_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_Ymove_Reset__UpdateFunc
struct ABP_MiniGame_ChopWood_C_Timeline_Ymove_Reset__UpdateFunc_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_UpdatFieldOfView__FinishedFunc
struct ABP_MiniGame_ChopWood_C_Timeline_UpdatFieldOfView__FinishedFunc_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Timeline_UpdatFieldOfView__UpdateFunc
struct ABP_MiniGame_ChopWood_C_Timeline_UpdatFieldOfView__UpdateFunc_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.OnFinishedFade
struct ABP_MiniGame_ChopWood_C_OnFinishedFade_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.FinalizeTalk
struct ABP_MiniGame_ChopWood_C_FinalizeTalk_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.DrawMiniGame
struct ABP_MiniGame_ChopWood_C_DrawMiniGame_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.LoseMiniGame
struct ABP_MiniGame_ChopWood_C_LoseMiniGame_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.WinMiniGame
struct ABP_MiniGame_ChopWood_C_WinMiniGame_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.EndMiniGame
struct ABP_MiniGame_ChopWood_C_EndMiniGame_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.OnfinishedSequence_Start
struct ABP_MiniGame_ChopWood_C_OnfinishedSequence_Start_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.PlaySEResultWood
struct ABP_MiniGame_ChopWood_C_PlaySEResultWood_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.PlaySEResultMoney
struct ABP_MiniGame_ChopWood_C_PlaySEResultMoney_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Event_WidgetEndMiniGame
struct ABP_MiniGame_ChopWood_C_Event_WidgetEndMiniGame_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.DelayedPauseAnim
struct ABP_MiniGame_ChopWood_C_DelayedPauseAnim_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.StartMiniGame
struct ABP_MiniGame_ChopWood_C_StartMiniGame_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.ReceiveBeginPlay
struct ABP_MiniGame_ChopWood_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.GameStart
struct ABP_MiniGame_ChopWood_C_GameStart_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.AxAction
struct ABP_MiniGame_ChopWood_C_AxAction_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.ReceiveTick
struct ABP_MiniGame_ChopWood_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.ResetResultMenuEvent
struct ABP_MiniGame_ChopWood_C_ResetResultMenuEvent_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.PlayGetWoodMotion
struct ABP_MiniGame_ChopWood_C_PlayGetWoodMotion_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.ReadyWood
struct ABP_MiniGame_ChopWood_C_ReadyWood_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.SetXmoveTimeLine
struct ABP_MiniGame_ChopWood_C_SetXmoveTimeLine_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.GameStartEvent
struct ABP_MiniGame_ChopWood_C_GameStartEvent_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.Event_EndMiniGame
struct ABP_MiniGame_ChopWood_C_Event_EndMiniGame_Params
{
};

// Function BP_MiniGame_ChopWood.BP_MiniGame_ChopWood_C.ExecuteUbergraph_BP_MiniGame_ChopWood
struct ABP_MiniGame_ChopWood_C_ExecuteUbergraph_BP_MiniGame_ChopWood_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
