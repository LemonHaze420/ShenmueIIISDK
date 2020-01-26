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

// Function BP_ACTrigger.BP_ACTrigger_C.BehaviorControl
struct ABP_ACTrigger_C_BehaviorControl_Params
{
	bool                                               NoChangeBehavior;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ACTrigger.BP_ACTrigger_C.CheckSavedConditions
struct ABP_ACTrigger_C_CheckSavedConditions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ACTrigger.BP_ACTrigger_C.CheckPlayCount
struct ABP_ACTrigger_C_CheckPlayCount_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ACTrigger.BP_ACTrigger_C.TriggerEnable
struct ABP_ACTrigger_C_TriggerEnable_Params
{
	bool                                               Enable;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ACTrigger.BP_ACTrigger_C.ShutDownActionFunc
struct ABP_ACTrigger_C_ShutDownActionFunc_Params
{
};

// Function BP_ACTrigger.BP_ACTrigger_C.IsForward
struct ABP_ACTrigger_C_IsForward_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Play;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ACTrigger.BP_ACTrigger_C.ShouldDelayFadeIn
struct ABP_ACTrigger_C_ShouldDelayFadeIn_Params
{
	bool                                               DisableIt;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ACTrigger.BP_ACTrigger_C.ShouldDisablePlayerControl
struct ABP_ACTrigger_C_ShouldDisablePlayerControl_Params
{
	bool                                               DisableIt;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ACTrigger.BP_ACTrigger_C.ApplyLog
struct ABP_ACTrigger_C_ApplyLog_Params
{
};

// Function BP_ACTrigger.BP_ACTrigger_C.ResetLog
struct ABP_ACTrigger_C_ResetLog_Params
{
};

// Function BP_ACTrigger.BP_ACTrigger_C.CheckReset
struct ABP_ACTrigger_C_CheckReset_Params
{
	bool                                               Reset;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ACTrigger.BP_ACTrigger_C.SaveLog
struct ABP_ACTrigger_C_SaveLog_Params
{
};

// Function BP_ACTrigger.BP_ACTrigger_C.CanPlay
struct ABP_ACTrigger_C_CanPlay_Params
{
	bool                                               CAN;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ACTrigger.BP_ACTrigger_C.TeleportPlayer
struct ABP_ACTrigger_C_TeleportPlayer_Params
{
};

// Function BP_ACTrigger.BP_ACTrigger_C.SetPlayerControl
struct ABP_ACTrigger_C_SetPlayerControl_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ACTrigger.BP_ACTrigger_C.PlayAction
struct ABP_ACTrigger_C_PlayAction_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ACTrigger.BP_ACTrigger_C.UserConstructionScript
struct ABP_ACTrigger_C_UserConstructionScript_Params
{
};

// Function BP_ACTrigger.BP_ACTrigger_C.OnLoaded_3DE5C7A6450AC770771EC1A18B8E6811
struct ABP_ACTrigger_C_OnLoaded_3DE5C7A6450AC770771EC1A18B8E6811_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ACTrigger.BP_ACTrigger_C.ReceiveTick
struct ABP_ACTrigger_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ACTrigger.BP_ACTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_ACTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_ACTrigger.BP_ACTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct ABP_ACTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ACTrigger.BP_ACTrigger_C.ReceiveBeginPlay
struct ABP_ACTrigger_C_ReceiveBeginPlay_Params
{
};

// Function BP_ACTrigger.BP_ACTrigger_C.ReceiveEndPlay
struct ABP_ACTrigger_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ACTrigger.BP_ACTrigger_C.PlayACEvent
struct ABP_ACTrigger_C_PlayACEvent_Params
{
};

// Function BP_ACTrigger.BP_ACTrigger_C.CheckCanPlay
struct ABP_ACTrigger_C_CheckCanPlay_Params
{
};

// Function BP_ACTrigger.BP_ACTrigger_C.CustomEvent
struct ABP_ACTrigger_C_CustomEvent_Params
{
	int                                                SetSteps;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ACTrigger.BP_ACTrigger_C.LoadTalkScript
struct ABP_ACTrigger_C_LoadTalkScript_Params
{
};

// Function BP_ACTrigger.BP_ACTrigger_C.ExecuteUbergraph_BP_ACTrigger
struct ABP_ACTrigger_C_ExecuteUbergraph_BP_ACTrigger_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
