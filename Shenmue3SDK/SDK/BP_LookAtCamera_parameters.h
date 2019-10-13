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

// Function BP_LookAtCamera.BP_LookAtCamera_C.GetCamera
struct ABP_LookAtCamera_C_GetCamera_Params
{
	class UCameraComponent*                            Camera;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LookAtCamera.BP_LookAtCamera_C.HitCheck
struct ABP_LookAtCamera_C_HitCheck_Params
{
};

// Function BP_LookAtCamera.BP_LookAtCamera_C.GetLocus
struct ABP_LookAtCamera_C_GetLocus_Params
{
	TArray<struct FVector>                             Locus;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BP_LookAtCamera.BP_LookAtCamera_C.TargetIsBehaindPlayer
struct ABP_LookAtCamera_C_TargetIsBehaindPlayer_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LookAtCamera.BP_LookAtCamera_C.UserConstructionScript
struct ABP_LookAtCamera_C_UserConstructionScript_Params
{
};

// Function BP_LookAtCamera.BP_LookAtCamera_C.ReceiveBeginPlay
struct ABP_LookAtCamera_C_ReceiveBeginPlay_Params
{
};

// Function BP_LookAtCamera.BP_LookAtCamera_C.ReceiveTick
struct ABP_LookAtCamera_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LookAtCamera.BP_LookAtCamera_C.ExecuteUbergraph_BP_LookAtCamera
struct ABP_LookAtCamera_C_ExecuteUbergraph_BP_LookAtCamera_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
