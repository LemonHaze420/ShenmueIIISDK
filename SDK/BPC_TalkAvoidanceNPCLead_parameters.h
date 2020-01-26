#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.FindFallbackLocation
struct UBPC_TalkAvoidanceNPCLead_C_FindFallbackLocation_Params
{
	class ACharacter*                                  Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.MakeRotation
struct UBPC_TalkAvoidanceNPCLead_C_MakeRotation_Params
{
	class AS3TalkEventManagerBase*                     TalkEventManager;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InVec;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.CanAvoidance
struct UBPC_TalkAvoidanceNPCLead_C_CanAvoidance_Params
{
	bool                                               bCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.ProcessAvoidable
struct UBPC_TalkAvoidanceNPCLead_C_ProcessAvoidable_Params
{
	bool                                               bProcessed;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.IsAvoiddableDecide
struct UBPC_TalkAvoidanceNPCLead_C_IsAvoiddableDecide_Params
{
	bool                                               bExecution;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.DistanceCheckTargetActors
struct UBPC_TalkAvoidanceNPCLead_C_DistanceCheckTargetActors_Params
{
	struct FVector                                     TestActorLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.DelayResumePhysics
struct UBPC_TalkAvoidanceNPCLead_C_DelayResumePhysics_Params
{
};

// Function BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C.ExecuteUbergraph_BPC_TalkAvoidanceNPCLead
struct UBPC_TalkAvoidanceNPCLead_C_ExecuteUbergraph_BPC_TalkAvoidanceNPCLead_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
