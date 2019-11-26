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

// Function BP_SpawnableSequenceActor.BP_SpawnableSequenceActor_C.UserConstructionScript
struct ABP_SpawnableSequenceActor_C_UserConstructionScript_Params
{
};

// Function BP_SpawnableSequenceActor.BP_SpawnableSequenceActor_C.PlaySequenece
struct ABP_SpawnableSequenceActor_C_PlaySequenece_Params
{
	bool                                               bRestart;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawnableSequenceActor.BP_SpawnableSequenceActor_C.PlayLoopingSequenece
struct ABP_SpawnableSequenceActor_C_PlayLoopingSequenece_Params
{
	bool                                               bRestart;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SpawnableSequenceActor.BP_SpawnableSequenceActor_C.StopSequenece
struct ABP_SpawnableSequenceActor_C_StopSequenece_Params
{
};

// Function BP_SpawnableSequenceActor.BP_SpawnableSequenceActor_C.PauseSequence
struct ABP_SpawnableSequenceActor_C_PauseSequence_Params
{
};

// Function BP_SpawnableSequenceActor.BP_SpawnableSequenceActor_C.ExecuteUbergraph_BP_SpawnableSequenceActor
struct ABP_SpawnableSequenceActor_C_ExecuteUbergraph_BP_SpawnableSequenceActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
