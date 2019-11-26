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

// Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.CheckDoorOnPath
struct UBP_State_Follow_MoveBase_C_CheckDoorOnPath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.CalculateFollowSpeed
struct UBP_State_Follow_MoveBase_C_CalculateFollowSpeed_Params
{
	float                                              DistanceToLeader;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LeaderSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FollowDistanceEnd;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutSpeed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.TryLogPathFailure
struct UBP_State_Follow_MoveBase_C_TryLogPathFailure_Params
{
};

// Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.MoveStateEnter
struct UBP_State_Follow_MoveBase_C_MoveStateEnter_Params
{
	bool                                               bDummy;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.StateEnter
struct UBP_State_Follow_MoveBase_C_StateEnter_Params
{
	float*                                             Delta;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProcessing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.GetPathfindTarget
struct UBP_State_Follow_MoveBase_C_GetPathfindTarget_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	class AActor*                                      OutActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.OnFail_27825A3A4DCF934B8E42E09B783488FD
struct UBP_State_Follow_MoveBase_C_OnFail_27825A3A4DCF934B8E42E09B783488FD_Params
{
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.OnSuccess_27825A3A4DCF934B8E42E09B783488FD
struct UBP_State_Follow_MoveBase_C_OnSuccess_27825A3A4DCF934B8E42E09B783488FD_Params
{
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.Pathfind
struct UBP_State_Follow_MoveBase_C_Pathfind_Params
{
};

// Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.ExecuteUbergraph_BP_State_Follow_MoveBase
struct UBP_State_Follow_MoveBase_C_ExecuteUbergraph_BP_State_Follow_MoveBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
