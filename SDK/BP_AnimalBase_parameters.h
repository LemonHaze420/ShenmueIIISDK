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

// Function BP_AnimalBase.BP_AnimalBase_C.OnRep_FlySpeed
struct ABP_AnimalBase_C_OnRep_FlySpeed_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.UserConstructionScript
struct ABP_AnimalBase_C_UserConstructionScript_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.ReceiveBeginPlay
struct ABP_AnimalBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_AnimalBase.BP_AnimalBase_C.BndEvt__AlertSphere_K2Node_ComponentBoundEvent_171_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_AnimalBase_C_BndEvt__AlertSphere_K2Node_ComponentBoundEvent_171_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_AnimalBase.BP_AnimalBase_C.ExecuteUbergraph_BP_AnimalBase
struct ABP_AnimalBase_C_ExecuteUbergraph_BP_AnimalBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalBase.BP_AnimalBase_C.LandingPointOccupied__DelegateSignature
struct ABP_AnimalBase_C_LandingPointOccupied__DelegateSignature_Params
{
	class ABP_AnimalBase_C*                            TriggeredAnimal;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetAggroed__DelegateSignature
struct ABP_AnimalBase_C_GetAggroed__DelegateSignature_Params
{
	class ABP_AnimalBase_C*                            AggroAnimal;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AnimalBase.BP_AnimalBase_C.GetAlerted__DelegateSignature
struct ABP_AnimalBase_C_GetAlerted__DelegateSignature_Params
{
	class ABP_AnimalBase_C*                            AlertedAnimal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
