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

// Function BP_S3SmokeEffect.BP_S3SmokeEffect_C.UpdateVelocity
struct ABP_S3SmokeEffect_C_UpdateVelocity_Params
{
	bool                                               IsEditor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SmokeEffect.BP_S3SmokeEffect_C.UserConstructionScript
struct ABP_S3SmokeEffect_C_UserConstructionScript_Params
{
};

// Function BP_S3SmokeEffect.BP_S3SmokeEffect_C.ReceiveBeginPlay
struct ABP_S3SmokeEffect_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3SmokeEffect.BP_S3SmokeEffect_C.ReceiveTick
struct ABP_S3SmokeEffect_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SmokeEffect.BP_S3SmokeEffect_C.ExecuteUbergraph_BP_S3SmokeEffect
struct ABP_S3SmokeEffect_C_ExecuteUbergraph_BP_S3SmokeEffect_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
