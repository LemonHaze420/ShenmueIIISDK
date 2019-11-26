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

// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.CheckOverlappingActor
struct ABP_MultipleAreaActorVisibleControl_C_CheckOverlappingActor_Params
{
	class AActor*                                      InActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.OnVisibleControlAreaEndOverlap
struct ABP_MultipleAreaActorVisibleControl_C_OnVisibleControlAreaEndOverlap_Params
{
	class UPrimitiveComponent*                         InOverlappedComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      InOtherActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         InOtherComp;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InOtherBodyIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.OnVisibleControlAreaBeginOverlap
struct ABP_MultipleAreaActorVisibleControl_C_OnVisibleControlAreaBeginOverlap_Params
{
	class UPrimitiveComponent*                         InOverlappedComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      InOtherActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         InOtherComp;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                InOtherBodyIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InFromSweep;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  InHitResult;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.FinalizeAdditionalVisibleControlArea
struct ABP_MultipleAreaActorVisibleControl_C_FinalizeAdditionalVisibleControlArea_Params
{
};

// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.InitializeAdditionalVisibleControlArea
struct ABP_MultipleAreaActorVisibleControl_C_InitializeAdditionalVisibleControlArea_Params
{
};

// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.UserConstructionScript
struct ABP_MultipleAreaActorVisibleControl_C_UserConstructionScript_Params
{
};

// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.ReceiveBeginPlay
struct ABP_MultipleAreaActorVisibleControl_C_ReceiveBeginPlay_Params
{
};

// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.ReceiveEndPlay
struct ABP_MultipleAreaActorVisibleControl_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MultipleAreaActorVisibleControl_C_BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MultipleAreaActorVisibleControl_C_BndEvt__VisibleControlArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MultipleAreaActorVisibleControl.BP_MultipleAreaActorVisibleControl_C.ExecuteUbergraph_BP_MultipleAreaActorVisibleControl
struct ABP_MultipleAreaActorVisibleControl_C_ExecuteUbergraph_BP_MultipleAreaActorVisibleControl_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
