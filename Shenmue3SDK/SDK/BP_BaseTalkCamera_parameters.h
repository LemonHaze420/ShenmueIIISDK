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

// Function BP_BaseTalkCamera.BP_BaseTalkCamera_C.GetCamera
struct ABP_BaseTalkCamera_C_GetCamera_Params
{
	class UCameraComponent*                            Camera;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_BaseTalkCamera.BP_BaseTalkCamera_C.UserConstructionScript
struct ABP_BaseTalkCamera_C_UserConstructionScript_Params
{
};

// Function BP_BaseTalkCamera.BP_BaseTalkCamera_C.ReceiveTick
struct ABP_BaseTalkCamera_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseTalkCamera.BP_BaseTalkCamera_C.ReceiveBeginPlay
struct ABP_BaseTalkCamera_C_ReceiveBeginPlay_Params
{
};

// Function BP_BaseTalkCamera.BP_BaseTalkCamera_C.ExecuteUbergraph_BP_BaseTalkCamera
struct ABP_BaseTalkCamera_C_ExecuteUbergraph_BP_BaseTalkCamera_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
