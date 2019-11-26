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

// Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.ShowUI
struct ABP_GambleAreaTrigger_C_ShowUI_Params
{
};

// Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.HideUI
struct ABP_GambleAreaTrigger_C_HideUI_Params
{
};

// Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.UserConstructionScript
struct ABP_GambleAreaTrigger_C_UserConstructionScript_Params
{
};

// Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.ReceiveBeginPlay
struct ABP_GambleAreaTrigger_C_ReceiveBeginPlay_Params
{
};

// Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_GambleAreaTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_GambleAreaTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.ReceiveEndPlay
struct ABP_GambleAreaTrigger_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GambleAreaTrigger.BP_GambleAreaTrigger_C.ExecuteUbergraph_BP_GambleAreaTrigger
struct ABP_GambleAreaTrigger_C_ExecuteUbergraph_BP_GambleAreaTrigger_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
