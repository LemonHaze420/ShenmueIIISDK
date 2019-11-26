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

// Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.GetPathfindTarget
struct UBP_State_Follow_FollowLeader_C_GetPathfindTarget_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	class AActor*                                      OutActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.MoveStateEnter
struct UBP_State_Follow_FollowLeader_C_MoveStateEnter_Params
{
	bool                                               bDummy;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.StateEnter
struct UBP_State_Follow_FollowLeader_C_StateEnter_Params
{
	float                                              Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProcessing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.StateUpdate
struct UBP_State_Follow_FollowLeader_C_StateUpdate_Params
{
	float                                              Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDummy;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.UpdateTransitions
struct UBP_State_Follow_FollowLeader_C_UpdateTransitions_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.CancelPath
struct UBP_State_Follow_FollowLeader_C_CancelPath_Params
{
};

// Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.FinishPath
struct UBP_State_Follow_FollowLeader_C_FinishPath_Params
{
};

// Function BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C.ExecuteUbergraph_BP_State_Follow_FollowLeader
struct UBP_State_Follow_FollowLeader_C_ExecuteUbergraph_BP_State_Follow_FollowLeader_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
