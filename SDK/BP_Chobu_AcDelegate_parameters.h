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

// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.CheckSheInRyosya1F
struct ABP_Chobu_AcDelegate_C_CheckSheInRyosya1F_Params
{
	bool                                               She_On;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.AcAfterFlagSet
struct ABP_Chobu_AcDelegate_C_AcAfterFlagSet_Params
{
};

// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.PreExecDelegate
struct ABP_Chobu_AcDelegate_C_PreExecDelegate_Params
{
};

// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.CheckBeginOverRap_Local
struct ABP_Chobu_AcDelegate_C_CheckBeginOverRap_Local_Params
{
	class UPrimitiveComponent*                         Trigger;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Begin_In;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.ExecDelegate
struct ABP_Chobu_AcDelegate_C_ExecDelegate_Params
{
	class AActor*                                      Current_Actor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Skip;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.InitSet
struct ABP_Chobu_AcDelegate_C_InitSet_Params
{
	class UPrimitiveComponent*                         Ryosya_Trigger;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       EventId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.UserConstructionScript
struct ABP_Chobu_AcDelegate_C_UserConstructionScript_Params
{
};

// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.OnBeginOverlap
struct ABP_Chobu_AcDelegate_C_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.RenewalActorCount
struct ABP_Chobu_AcDelegate_C_RenewalActorCount_Params
{
	TEnumAsByte<EN_MainFlowActorID>                    ActorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RenewalCounter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.ReceiveTick
struct ABP_Chobu_AcDelegate_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.CounterChangeKill
struct ABP_Chobu_AcDelegate_C_CounterChangeKill_Params
{
};

// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.StepChanged
struct ABP_Chobu_AcDelegate_C_StepChanged_Params
{
	int                                                SetSteps;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chobu_AcDelegate.BP_Chobu_AcDelegate_C.ExecuteUbergraph_BP_Chobu_AcDelegate
struct ABP_Chobu_AcDelegate_C_ExecuteUbergraph_BP_Chobu_AcDelegate_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
