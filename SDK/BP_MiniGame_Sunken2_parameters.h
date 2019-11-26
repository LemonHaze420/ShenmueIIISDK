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

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.CheckEnabledFlagState
struct ABP_MiniGame_Sunken2_C_CheckEnabledFlagState_Params
{
	bool                                               UseFlag;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.CheckFirstDetection
struct ABP_MiniGame_Sunken2_C_CheckFirstDetection_Params
{
	bool                                               IsFirst;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.CheckBarTiming
struct ABP_MiniGame_Sunken2_C_CheckBarTiming_Params
{
	bool                                               IsJust;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEx;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.SetIdleMotionPlayRate
struct ABP_MiniGame_Sunken2_C_SetIdleMotionPlayRate_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GetHelpPriority
struct ABP_MiniGame_Sunken2_C_GetHelpPriority_Params
{
	ES3HelpPriority                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.WaitBarUpdate
struct ABP_MiniGame_Sunken2_C_WaitBarUpdate_Params
{
	float                                              WaitMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WaitEnd;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.AppendPreloadLabels
struct ABP_MiniGame_Sunken2_C_AppendPreloadLabels_Params
{
	TArray<struct FName>                               Labels;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FST_MG_SupportNPCAction>             Actions;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.SetPreloadLabels
struct ABP_MiniGame_Sunken2_C_SetPreloadLabels_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GetClothMeshComponent
struct ABP_MiniGame_Sunken2_C_GetClothMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.InitAsyncLoad
struct ABP_MiniGame_Sunken2_C_InitAsyncLoad_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.CalcDifficulty
struct ABP_MiniGame_Sunken2_C_CalcDifficulty_Params
{
	bool                                               Change;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GetDetectAction
struct ABP_MiniGame_Sunken2_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Enabled3DUISideBar
struct ABP_MiniGame_Sunken2_C_Enabled3DUISideBar_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Update3DUI
struct ABP_MiniGame_Sunken2_C_Update3DUI_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.SetDifficultyData
struct ABP_MiniGame_Sunken2_C_SetDifficultyData_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.DecideWoodId
struct ABP_MiniGame_Sunken2_C_DecideWoodId_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.UpdateChopCount
struct ABP_MiniGame_Sunken2_C_UpdateChopCount_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.IsGameFinished
struct ABP_MiniGame_Sunken2_C_IsGameFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.SpawnInputControlActor
struct ABP_MiniGame_Sunken2_C_SpawnInputControlActor_Params
{
	class ABP_MiniGameInputBase_C*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.UserConstructionScript
struct ABP_MiniGame_Sunken2_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Timeline_UpdatFieldOfView__FinishedFunc
struct ABP_MiniGame_Sunken2_C_Timeline_UpdatFieldOfView__FinishedFunc_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Timeline_UpdatFieldOfView__UpdateFunc
struct ABP_MiniGame_Sunken2_C_Timeline_UpdatFieldOfView__UpdateFunc_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.NormalHitObjectImpact__FinishedFunc
struct ABP_MiniGame_Sunken2_C_NormalHitObjectImpact__FinishedFunc_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.NormalHitObjectImpact__UpdateFunc
struct ABP_MiniGame_Sunken2_C_NormalHitObjectImpact__UpdateFunc_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Timeline_EyeClose__FinishedFunc
struct ABP_MiniGame_Sunken2_C_Timeline_EyeClose__FinishedFunc_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Timeline_EyeClose__UpdateFunc
struct ABP_MiniGame_Sunken2_C_Timeline_EyeClose__UpdateFunc_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.StartMiniGame
struct ABP_MiniGame_Sunken2_C_StartMiniGame_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.EndMiniGame
struct ABP_MiniGame_Sunken2_C_EndMiniGame_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.WinMiniGame
struct ABP_MiniGame_Sunken2_C_WinMiniGame_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.LoseMiniGame
struct ABP_MiniGame_Sunken2_C_LoseMiniGame_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.DrawMiniGame
struct ABP_MiniGame_Sunken2_C_DrawMiniGame_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.OnFinishedFade
struct ABP_MiniGame_Sunken2_C_OnFinishedFade_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.FinalizeTalk
struct ABP_MiniGame_Sunken2_C_FinalizeTalk_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.OnFinishedCoinSequence
struct ABP_MiniGame_Sunken2_C_OnFinishedCoinSequence_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.OnFinishedStart
struct ABP_MiniGame_Sunken2_C_OnFinishedStart_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Event_TimeUp
struct ABP_MiniGame_Sunken2_C_Event_TimeUp_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Event_SkillCountMax
struct ABP_MiniGame_Sunken2_C_Event_SkillCountMax_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.Event_ResultEnd
struct ABP_MiniGame_Sunken2_C_Event_ResultEnd_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ReceiveBeginPlay
struct ABP_MiniGame_Sunken2_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GameStart
struct ABP_MiniGame_Sunken2_C_GameStart_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.AxAction
struct ABP_MiniGame_Sunken2_C_AxAction_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ReceiveTick
struct ABP_MiniGame_Sunken2_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ResetResultMenuEvent
struct ABP_MiniGame_Sunken2_C_ResetResultMenuEvent_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.GameStartEvent
struct ABP_MiniGame_Sunken2_C_GameStartEvent_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.InputAction_ButtonRight
struct ABP_MiniGame_Sunken2_C_InputAction_ButtonRight_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.PunchMotionEnd
struct ABP_MiniGame_Sunken2_C_PunchMotionEnd_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.PlayCameraImpact
struct ABP_MiniGame_Sunken2_C_PlayCameraImpact_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.InputAction_ButtonTop
struct ABP_MiniGame_Sunken2_C_InputAction_ButtonTop_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.InputAction_ButtonBottom
struct ABP_MiniGame_Sunken2_C_InputAction_ButtonBottom_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ImpactToObject
struct ABP_MiniGame_Sunken2_C_ImpactToObject_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.PlayEyeCloseTimeline
struct ABP_MiniGame_Sunken2_C_PlayEyeCloseTimeline_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.EndEyeCloseTimeline
struct ABP_MiniGame_Sunken2_C_EndEyeCloseTimeline_Params
{
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGame_Sunken2_C_BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MiniGame_Sunken2_C_BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_Sunken2.BP_MiniGame_Sunken2_C.ExecuteUbergraph_BP_MiniGame_Sunken2
struct ABP_MiniGame_Sunken2_C_ExecuteUbergraph_BP_MiniGame_Sunken2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
