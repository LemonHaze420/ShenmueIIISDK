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

// Function BP_State_Follow_Base.BP_State_Follow_Base_C.GetPawn
struct UBP_State_Follow_Base_C_GetPawn_Params
{
	class ABP_NPC_Lead_C*                              Pawn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_Base.BP_State_Follow_Base_C.IsDebugDrawingEnabled
struct UBP_State_Follow_Base_C_IsDebugDrawingEnabled_Params
{
	bool                                               DrawDebug;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_Base.BP_State_Follow_Base_C.UpdateTransitions
struct UBP_State_Follow_Base_C_UpdateTransitions_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_Base.BP_State_Follow_Base_C.IsCurrentState
struct UBP_State_Follow_Base_C_IsCurrentState_Params
{
	bool                                               bIsCurrent;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_State_Follow_Base.BP_State_Follow_Base_C.StateOnInitialize
struct UBP_State_Follow_Base_C_StateOnInitialize_Params
{
};

// Function BP_State_Follow_Base.BP_State_Follow_Base_C.ExecuteUbergraph_BP_State_Follow_Base
struct UBP_State_Follow_Base_C_ExecuteUbergraph_BP_State_Follow_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
