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

// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.ExecSave
struct ABP_AutoSave_Trigger_C_ExecSave_Params
{
};

// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.CheckBeginHit
struct ABP_AutoSave_Trigger_C_CheckBeginHit_Params
{
	bool                                               BeginIn;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.CheckDirection
struct ABP_AutoSave_Trigger_C_CheckDirection_Params
{
	bool                                               DirectionOK;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.ResetFlag
struct ABP_AutoSave_Trigger_C_ResetFlag_Params
{
};

// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.CheckFlag
struct ABP_AutoSave_Trigger_C_CheckFlag_Params
{
	bool                                               flag_on;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.CheckStep
struct ABP_AutoSave_Trigger_C_CheckStep_Params
{
	bool                                               Result_EnableStep;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.UserConstructionScript
struct ABP_AutoSave_Trigger_C_UserConstructionScript_Params
{
};

// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_AutoSave_Trigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.ReceiveBeginPlay
struct ABP_AutoSave_Trigger_C_ReceiveBeginPlay_Params
{
};

// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.EvtStepChange
struct ABP_AutoSave_Trigger_C_EvtStepChange_Params
{
	int                                                SetSteps;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.CheckTriigerIn
struct ABP_AutoSave_Trigger_C_CheckTriigerIn_Params
{
};

// Function BP_AutoSave_Trigger.BP_AutoSave_Trigger_C.ExecuteUbergraph_BP_AutoSave_Trigger
struct ABP_AutoSave_Trigger_C_ExecuteUbergraph_BP_AutoSave_Trigger_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
