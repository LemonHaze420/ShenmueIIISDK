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

// Function BP_JumpProcessActor.BP_JumpProcessActor_C.AddGameTime
struct ABP_JumpProcessActor_C_AddGameTime_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JumpProcessActor.BP_JumpProcessActor_C.CheckNPCSpawn
struct ABP_JumpProcessActor_C_CheckNPCSpawn_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JumpProcessActor.BP_JumpProcessActor_C.UserConstructionScript
struct ABP_JumpProcessActor_C_UserConstructionScript_Params
{
};

// Function BP_JumpProcessActor.BP_JumpProcessActor_C.BindNPCSpawn
struct ABP_JumpProcessActor_C_BindNPCSpawn_Params
{
};

// Function BP_JumpProcessActor.BP_JumpProcessActor_C.SpawnNPC
struct ABP_JumpProcessActor_C_SpawnNPC_Params
{
	struct FGameplayTag                                NPCID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_JumpProcessActor.BP_JumpProcessActor_C.UnspawnNPC
struct ABP_JumpProcessActor_C_UnspawnNPC_Params
{
	struct FGameplayTag                                NPCID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_JumpProcessActor.BP_JumpProcessActor_C.ReceiveTick
struct ABP_JumpProcessActor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_JumpProcessActor.BP_JumpProcessActor_C.ReceiveBeginPlay
struct ABP_JumpProcessActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_JumpProcessActor.BP_JumpProcessActor_C.ExecuteUbergraph_BP_JumpProcessActor
struct ABP_JumpProcessActor_C_ExecuteUbergraph_BP_JumpProcessActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
