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

// Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.StateExit
struct UBP_State_Follow_GotoPOI_C_StateExit_Params
{
	float*                                             Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProcessing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.MoveStateEnter
struct UBP_State_Follow_GotoPOI_C_MoveStateEnter_Params
{
	bool                                               bDummy;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.GetPathfindTarget
struct UBP_State_Follow_GotoPOI_C_GetPathfindTarget_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	class AActor*                                      OutActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.StateEnter
struct UBP_State_Follow_GotoPOI_C_StateEnter_Params
{
	float*                                             Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProcessing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.StateUpdate
struct UBP_State_Follow_GotoPOI_C_StateUpdate_Params
{
	float*                                             Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDummy;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.CancelPath
struct UBP_State_Follow_GotoPOI_C_CancelPath_Params
{
};

// Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.UpdateTransitions
struct UBP_State_Follow_GotoPOI_C_UpdateTransitions_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.FinishPath
struct UBP_State_Follow_GotoPOI_C_FinishPath_Params
{
};

// Function BP_State_Follow_GotoPOI.BP_State_Follow_GotoPOI_C.ExecuteUbergraph_BP_State_Follow_GotoPOI
struct UBP_State_Follow_GotoPOI_C_ExecuteUbergraph_BP_State_Follow_GotoPOI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
