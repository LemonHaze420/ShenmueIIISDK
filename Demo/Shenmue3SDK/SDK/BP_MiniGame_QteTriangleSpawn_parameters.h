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

// Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.SetVisible
struct ABP_MiniGame_QteTriangleSpawn_C_SetVisible_Params
{
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.RemoveTriangle
struct ABP_MiniGame_QteTriangleSpawn_C_RemoveTriangle_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.DestroyTriangle
struct ABP_MiniGame_QteTriangleSpawn_C_DestroyTriangle_Params
{
};

// Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.UserConstructionScript
struct ABP_MiniGame_QteTriangleSpawn_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.ReceiveBeginPlay
struct ABP_MiniGame_QteTriangleSpawn_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.ReceiveTick
struct ABP_MiniGame_QteTriangleSpawn_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_QteTriangleSpawn.BP_MiniGame_QteTriangleSpawn_C.ExecuteUbergraph_BP_MiniGame_QteTriangleSpawn
struct ABP_MiniGame_QteTriangleSpawn_C_ExecuteUbergraph_BP_MiniGame_QteTriangleSpawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
