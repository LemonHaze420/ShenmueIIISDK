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

// Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.FinishLevelStreaming
struct ABP_ChobuLevelStreamingTrigger_C_FinishLevelStreaming_Params
{
};

// Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.PlayAction
struct ABP_ChobuLevelStreamingTrigger_C_PlayAction_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.IsForward
struct ABP_ChobuLevelStreamingTrigger_C_IsForward_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.UserConstructionScript
struct ABP_ChobuLevelStreamingTrigger_C_UserConstructionScript_Params
{
};

// Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.ReceiveBeginPlay
struct ABP_ChobuLevelStreamingTrigger_C_ReceiveBeginPlay_Params
{
};

// Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.ReceiveTick
struct ABP_ChobuLevelStreamingTrigger_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_ChobuLevelStreamingTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_ChobuLevelStreamingTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.StartFadeOut
struct ABP_ChobuLevelStreamingTrigger_C_StartFadeOut_Params
{
};

// Function BP_ChobuLevelStreamingTrigger.BP_ChobuLevelStreamingTrigger_C.ExecuteUbergraph_BP_ChobuLevelStreamingTrigger
struct ABP_ChobuLevelStreamingTrigger_C_ExecuteUbergraph_BP_ChobuLevelStreamingTrigger_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
