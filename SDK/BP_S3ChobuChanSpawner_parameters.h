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

// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.GetRandomScript
struct ABP_S3ChobuChanSpawner_C_GetRandomScript_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.IsLooking
struct ABP_S3ChobuChanSpawner_C_IsLooking_Params
{
	bool                                               Look;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.UserConstructionScript
struct ABP_S3ChobuChanSpawner_C_UserConstructionScript_Params
{
};

// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.UniqueActionOnFind
struct ABP_S3ChobuChanSpawner_C_UniqueActionOnFind_Params
{
};

// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.ForceFindSelf
struct ABP_S3ChobuChanSpawner_C_ForceFindSelf_Params
{
};

// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.SetEnabledHelp
struct ABP_S3ChobuChanSpawner_C_SetEnabledHelp_Params
{
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.UpdateEffect
struct ABP_S3ChobuChanSpawner_C_UpdateEffect_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.CreateEffect
struct ABP_S3ChobuChanSpawner_C_CreateEffect_Params
{
};

// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.ReceiveBeginPlay
struct ABP_S3ChobuChanSpawner_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.FindEvent
struct ABP_S3ChobuChanSpawner_C_FindEvent_Params
{
};

// Function BP_S3ChobuChanSpawner.BP_S3ChobuChanSpawner_C.ExecuteUbergraph_BP_S3ChobuChanSpawner
struct ABP_S3ChobuChanSpawner_C_ExecuteUbergraph_BP_S3ChobuChanSpawner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
