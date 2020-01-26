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

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.TestPlayerState
struct ABP_Player180ReturnTrigger_C_TestPlayerState_Params
{
	bool                                               Normal;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.SetEventStatus
struct ABP_Player180ReturnTrigger_C_SetEventStatus_Params
{
	bool                                               bStartEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.CanActionByBehaviorState
struct ABP_Player180ReturnTrigger_C_CanActionByBehaviorState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.IsSubtitleDone
struct ABP_Player180ReturnTrigger_C_IsSubtitleDone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.CheckCanBack
struct ABP_Player180ReturnTrigger_C_CheckCanBack_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Back;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.PlayAction
struct ABP_Player180ReturnTrigger_C_PlayAction_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.GetPlaybackDir
struct ABP_Player180ReturnTrigger_C_GetPlaybackDir_Params
{
	struct FVector                                     ImpactDir;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     NormalDir;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     PlaybackDIr;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.PlayAnimation
struct ABP_Player180ReturnTrigger_C_PlayAnimation_Params
{
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.GetTextWithRandom
struct ABP_Player180ReturnTrigger_C_GetTextWithRandom_Params
{
	int                                                SubtitleIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Text_Label;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.ExistNextText
struct ABP_Player180ReturnTrigger_C_ExistNextText_Params
{
	bool                                               Exist;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.StartSubtitle
struct ABP_Player180ReturnTrigger_C_StartSubtitle_Params
{
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.UserConstructionScript
struct ABP_Player180ReturnTrigger_C_UserConstructionScript_Params
{
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Player180ReturnTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.ReceiveTick
struct ABP_Player180ReturnTrigger_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.OnSubtitlePlayFinished
struct ABP_Player180ReturnTrigger_C_OnSubtitlePlayFinished_Params
{
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Player180ReturnTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.ReceiveBeginPlay
struct ABP_Player180ReturnTrigger_C_ReceiveBeginPlay_Params
{
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.ReceiveEndPlay
struct ABP_Player180ReturnTrigger_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.OnEnterStepAndTime
struct ABP_Player180ReturnTrigger_C_OnEnterStepAndTime_Params
{
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.OnExitStepAndTime
struct ABP_Player180ReturnTrigger_C_OnExitStepAndTime_Params
{
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.SetShouldBeObstacle
struct ABP_Player180ReturnTrigger_C_SetShouldBeObstacle_Params
{
	bool                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.ExecuteUbergraph_BP_Player180ReturnTrigger
struct ABP_Player180ReturnTrigger_C_ExecuteUbergraph_BP_Player180ReturnTrigger_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Player180ReturnTrigger.BP_Player180ReturnTrigger_C.EndTurnAround__DelegateSignature
struct ABP_Player180ReturnTrigger_C_EndTurnAround__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
