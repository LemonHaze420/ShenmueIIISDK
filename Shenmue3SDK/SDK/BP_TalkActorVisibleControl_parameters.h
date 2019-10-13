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

// Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.CanEndOverlapEvent
struct ABP_TalkActorVisibleControl_C_CanEndOverlapEvent_Params
{
	bool                                               CAN;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.CanHideNPC
struct ABP_TalkActorVisibleControl_C_CanHideNPC_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CAN;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.UpdateHideNPC
struct ABP_TalkActorVisibleControl_C_UpdateHideNPC_Params
{
};

// Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.UserConstructionScript
struct ABP_TalkActorVisibleControl_C_UserConstructionScript_Params
{
};

// Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.ReceiveBeginPlay
struct ABP_TalkActorVisibleControl_C_ReceiveBeginPlay_Params
{
};

// Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.ReceiveTick
struct ABP_TalkActorVisibleControl_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.OnCameraChanged
struct ABP_TalkActorVisibleControl_C_OnCameraChanged_Params
{
};

// Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_TalkActorVisibleControl_C_BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_TalkActorVisibleControl.BP_TalkActorVisibleControl_C.ExecuteUbergraph_BP_TalkActorVisibleControl
struct ABP_TalkActorVisibleControl_C_ExecuteUbergraph_BP_TalkActorVisibleControl_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
