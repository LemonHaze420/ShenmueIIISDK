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

// Function BPC_FollowFSM.BPC_FollowFSM_C.TryClearPathFailure
struct UBPC_FollowFSM_C_TryClearPathFailure_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_FollowFSM.BPC_FollowFSM_C.FailedPath
struct UBPC_FollowFSM_C_FailedPath_Params
{
};

// Function BPC_FollowFSM.BPC_FollowFSM_C.GetPathFollowingComponent
struct UBPC_FollowFSM_C_GetPathFollowingComponent_Params
{
	class US3PathFollowingComponent*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BPC_FollowFSM.BPC_FollowFSM_C.EnablePathMassaging
struct UBPC_FollowFSM_C_EnablePathMassaging_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_FollowFSM.BPC_FollowFSM_C.IsFollowEnabled
struct UBPC_FollowFSM_C_IsFollowEnabled_Params
{
	bool                                               EnableFollow;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_FollowFSM.BPC_FollowFSM_C.GetPawn
struct UBPC_FollowFSM_C_GetPawn_Params
{
	class ABP_NPC_Lead_C*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_FollowFSM.BPC_FollowFSM_C.Reset
struct UBPC_FollowFSM_C_Reset_Params
{
};

// Function BPC_FollowFSM.BPC_FollowFSM_C.UpdateLeaderData
struct UBPC_FollowFSM_C_UpdateLeaderData_Params
{
};

// Function BPC_FollowFSM.BPC_FollowFSM_C.UpdatePOIData
struct UBPC_FollowFSM_C_UpdatePOIData_Params
{
};

// Function BPC_FollowFSM.BPC_FollowFSM_C.Update
struct UBPC_FollowFSM_C_Update_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_FollowFSM.BPC_FollowFSM_C.ReceiveBeginPlay
struct UBPC_FollowFSM_C_ReceiveBeginPlay_Params
{
};

// Function BPC_FollowFSM.BPC_FollowFSM_C.ExecuteUbergraph_BPC_FollowFSM
struct UBPC_FollowFSM_C_ExecuteUbergraph_BPC_FollowFSM_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
