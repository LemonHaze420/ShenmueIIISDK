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

// Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.SetVisible
struct ABP_MiniGameChooseTriangleSpawn_C_SetVisible_Params
{
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.RemoveTriangle
struct ABP_MiniGameChooseTriangleSpawn_C_RemoveTriangle_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.DestroyTriangle
struct ABP_MiniGameChooseTriangleSpawn_C_DestroyTriangle_Params
{
};

// Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.UserConstructionScript
struct ABP_MiniGameChooseTriangleSpawn_C_UserConstructionScript_Params
{
};

// Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.ReceiveTick
struct ABP_MiniGameChooseTriangleSpawn_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameChooseTriangleSpawn.BP_MiniGameChooseTriangleSpawn_C.ExecuteUbergraph_BP_MiniGameChooseTriangleSpawn
struct ABP_MiniGameChooseTriangleSpawn_C_ExecuteUbergraph_BP_MiniGameChooseTriangleSpawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
