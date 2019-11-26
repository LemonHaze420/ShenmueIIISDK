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

// Function BPC_Player_Lead.BPC_Player_Lead_C.GetFollower
struct UBPC_Player_Lead_C_GetFollower_Params
{
	class AS3Character*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_Player_Lead.BPC_Player_Lead_C.UnpairFollower
struct UBPC_Player_Lead_C_UnpairFollower_Params
{
};

// Function BPC_Player_Lead.BPC_Player_Lead_C.PairFollower
struct UBPC_Player_Lead_C_PairFollower_Params
{
	class AS3Character*                                Follower;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Player_Lead.BPC_Player_Lead_C.AutoFollowSpline
struct UBPC_Player_Lead_C_AutoFollowSpline_Params
{
	class AS3SplineMoveActor*                          SplineActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Player_Lead.BPC_Player_Lead_C.GetSpline
struct UBPC_Player_Lead_C_GetSpline_Params
{
	class AS3SplineMoveActor*                          SplineActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Player_Lead.BPC_Player_Lead_C.AllowBackwardsFollow
struct UBPC_Player_Lead_C_AllowBackwardsFollow_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Player_Lead.BPC_Player_Lead_C.GetMaxFollowSpeed
struct UBPC_Player_Lead_C_GetMaxFollowSpeed_Params
{
	float                                              OriginalMax;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WantsToMatch;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Matched;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Player_Lead.BPC_Player_Lead_C.SetAutoMove
struct UBPC_Player_Lead_C_SetAutoMove_Params
{
	bool                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Player_Lead.BPC_Player_Lead_C.PairLeader
struct UBPC_Player_Lead_C_PairLeader_Params
{
	class AS3SplineMoveActor*                          FollowSpline;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Player_Lead.BPC_Player_Lead_C.UnpairLeader
struct UBPC_Player_Lead_C_UnpairLeader_Params
{
};

// Function BPC_Player_Lead.BPC_Player_Lead_C.DeleteInvalidRefs
struct UBPC_Player_Lead_C_DeleteInvalidRefs_Params
{
};

// Function BPC_Player_Lead.BPC_Player_Lead_C.GetMatchedSpeed
struct UBPC_Player_Lead_C_GetMatchedSpeed_Params
{
	float                                              OriginalSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Matched;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Player_Lead.BPC_Player_Lead_C.CanBeFollowed
struct UBPC_Player_Lead_C_CanBeFollowed_Params
{
	bool                                               bFollowable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Player_Lead.BPC_Player_Lead_C.ValidateData
struct UBPC_Player_Lead_C_ValidateData_Params
{
};

// Function BPC_Player_Lead.BPC_Player_Lead_C.ReceiveBeginPlay
struct UBPC_Player_Lead_C_ReceiveBeginPlay_Params
{
};

// Function BPC_Player_Lead.BPC_Player_Lead_C.ReceiveTick
struct UBPC_Player_Lead_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_Player_Lead.BPC_Player_Lead_C.Input_Move
struct UBPC_Player_Lead_C_Input_Move_Params
{
};

// Function BPC_Player_Lead.BPC_Player_Lead_C.ExecuteUbergraph_BPC_Player_Lead
struct UBPC_Player_Lead_C_ExecuteUbergraph_BPC_Player_Lead_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
