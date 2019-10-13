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

// Function BP_ACProcessActor.BP_ACProcessActor_C.CheckPrepare
struct ABP_ACProcessActor_C_CheckPrepare_Params
{
	bool                                               Complete;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ACProcessActor.BP_ACProcessActor_C.Finalize
struct ABP_ACProcessActor_C_Finalize_Params
{
};

// Function BP_ACProcessActor.BP_ACProcessActor_C.CheckLeadCharacter
struct ABP_ACProcessActor_C_CheckLeadCharacter_Params
{
};

// Function BP_ACProcessActor.BP_ACProcessActor_C.LoadLevels
struct ABP_ACProcessActor_C_LoadLevels_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ACProcessActor.BP_ACProcessActor_C.UserConstructionScript
struct ABP_ACProcessActor_C_UserConstructionScript_Params
{
};

// Function BP_ACProcessActor.BP_ACProcessActor_C.ReceiveBeginPlay
struct ABP_ACProcessActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_ACProcessActor.BP_ACProcessActor_C.ReceiveTick
struct ABP_ACProcessActor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ACProcessActor.BP_ACProcessActor_C.ReceiveEndPlay
struct ABP_ACProcessActor_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ACProcessActor.BP_ACProcessActor_C.HideLoading
struct ABP_ACProcessActor_C_HideLoading_Params
{
};

// Function BP_ACProcessActor.BP_ACProcessActor_C.LevelLoaded
struct ABP_ACProcessActor_C_LevelLoaded_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ACProcessActor.BP_ACProcessActor_C.ExecuteUbergraph_BP_ACProcessActor
struct ABP_ACProcessActor_C_ExecuteUbergraph_BP_ACProcessActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ACProcessActor.BP_ACProcessActor_C.OnStartPlay__DelegateSignature
struct ABP_ACProcessActor_C_OnStartPlay__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
