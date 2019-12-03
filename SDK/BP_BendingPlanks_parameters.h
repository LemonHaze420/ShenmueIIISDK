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

// Function BP_BendingPlanks.BP_BendingPlanks_C.EvaluateWeight
struct ABP_BendingPlanks_C_EvaluateWeight_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PrintWeightDebug;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WeightMulti;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendingPlanks.BP_BendingPlanks_C.PrintPawnArrayContents
struct ABP_BendingPlanks_C_PrintPawnArrayContents_Params
{
	TArray<class APawn*>                               Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Print;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendingPlanks.BP_BendingPlanks_C.SortTouchingPawnsByDistance
struct ABP_BendingPlanks_C_SortTouchingPawnsByDistance_Params
{
	TArray<class APawn*>                               Pawns;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class APawn*>                               SortedPawns;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BendingPlanks.BP_BendingPlanks_C.UserConstructionScript
struct ABP_BendingPlanks_C_UserConstructionScript_Params
{
};

// Function BP_BendingPlanks.BP_BendingPlanks_C.Sine__FinishedFunc
struct ABP_BendingPlanks_C_Sine__FinishedFunc_Params
{
};

// Function BP_BendingPlanks.BP_BendingPlanks_C.Sine__UpdateFunc
struct ABP_BendingPlanks_C_Sine__UpdateFunc_Params
{
};

// Function BP_BendingPlanks.BP_BendingPlanks_C.ReceiveTick
struct ABP_BendingPlanks_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendingPlanks.BP_BendingPlanks_C.BndEvt__Box_K2Node_ComponentBoundEvent_84_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_BendingPlanks_C_BndEvt__Box_K2Node_ComponentBoundEvent_84_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_BendingPlanks.BP_BendingPlanks_C.BndEvt__Box_K2Node_ComponentBoundEvent_85_ComponentEndOverlapSignature__DelegateSignature
struct ABP_BendingPlanks_C_BndEvt__Box_K2Node_ComponentBoundEvent_85_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BendingPlanks.BP_BendingPlanks_C.ReceiveBeginPlay
struct ABP_BendingPlanks_C_ReceiveBeginPlay_Params
{
};

// Function BP_BendingPlanks.BP_BendingPlanks_C.ExecuteUbergraph_BP_BendingPlanks
struct ABP_BendingPlanks_C_ExecuteUbergraph_BP_BendingPlanks_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
