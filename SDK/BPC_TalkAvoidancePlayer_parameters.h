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

// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.ForceAnimationUpdate
struct UBPC_TalkAvoidancePlayer_C_ForceAnimationUpdate_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.CanAvoidance
struct UBPC_TalkAvoidancePlayer_C_CanAvoidance_Params
{
	bool                                               bCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.GetTargetActorEyeLocationForTraceCheck
struct UBPC_TalkAvoidancePlayer_C_GetTargetActorEyeLocationForTraceCheck_Params
{
	class AActor*                                      InActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InOwnerLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.GetTargetActorLocationForCheck
struct UBPC_TalkAvoidancePlayer_C_GetTargetActorLocationForCheck_Params
{
	class AActor*                                      InActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.GetDistanceToLeaveForCheck
struct UBPC_TalkAvoidancePlayer_C_GetDistanceToLeaveForCheck_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.IsAvoiddableDecide
struct UBPC_TalkAvoidancePlayer_C_IsAvoiddableDecide_Params
{
	bool                                               bExecution;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.IsShowItemCollisionCheck
struct UBPC_TalkAvoidancePlayer_C_IsShowItemCollisionCheck_Params
{
	struct FVector                                     ActorLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bHitCollision;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.AvoidableTest
struct UBPC_TalkAvoidancePlayer_C_AvoidableTest_Params
{
	struct FVector                                     ActorLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bDesperate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccessAvoidable;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.IsSitMotionPlayer
struct UBPC_TalkAvoidancePlayer_C_IsSitMotionPlayer_Params
{
	TArray<class AActor*>                              TargetActors;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bSit;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.IsExistShowItemTask
struct UBPC_TalkAvoidancePlayer_C_IsExistShowItemTask_Params
{
	bool                                               bReturnValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.ProcessAvoidable
struct UBPC_TalkAvoidancePlayer_C_ProcessAvoidable_Params
{
	bool                                               bProcessed;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.ReceiveBeginPlay
struct UBPC_TalkAvoidancePlayer_C_ReceiveBeginPlay_Params
{
};

// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.BeginTalk
struct UBPC_TalkAvoidancePlayer_C_BeginTalk_Params
{
};

// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.ReceiveEndPlay
struct UBPC_TalkAvoidancePlayer_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C.ExecuteUbergraph_BPC_TalkAvoidancePlayer
struct UBPC_TalkAvoidancePlayer_C_ExecuteUbergraph_BPC_TalkAvoidancePlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
