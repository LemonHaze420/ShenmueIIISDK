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

// Function BP_PlayerFollowPawn.BP_PlayerFollowPawn_C.UserConstructionScript
struct ABP_PlayerFollowPawn_C_UserConstructionScript_Params
{
};

// Function BP_PlayerFollowPawn.BP_PlayerFollowPawn_C.ReceiveTick
struct ABP_PlayerFollowPawn_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerFollowPawn.BP_PlayerFollowPawn_C.ReceiveBeginPlay
struct ABP_PlayerFollowPawn_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerFollowPawn.BP_PlayerFollowPawn_C.ExecuteUbergraph_BP_PlayerFollowPawn
struct ABP_PlayerFollowPawn_C_ExecuteUbergraph_BP_PlayerFollowPawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
