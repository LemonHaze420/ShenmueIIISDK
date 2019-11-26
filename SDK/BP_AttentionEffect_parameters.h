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

// Function BP_AttentionEffect.BP_AttentionEffect_C.IsFinished
struct ABP_AttentionEffect_C_IsFinished_Params
{
	bool                                               IsFinished;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AttentionEffect.BP_AttentionEffect_C.UpdateEffect
struct ABP_AttentionEffect_C_UpdateEffect_Params
{
	class UCameraComponent*                            Camera;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_AttentionEffect.BP_AttentionEffect_C.UserConstructionScript
struct ABP_AttentionEffect_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
