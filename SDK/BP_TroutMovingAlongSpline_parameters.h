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

// Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.GetNearSplinePointDistance
struct ABP_TroutMovingAlongSpline_C_GetNearSplinePointDistance_Params
{
	class ATargetPoint*                                Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.GetMoveDistance
struct ABP_TroutMovingAlongSpline_C_GetMoveDistance_Params
{
	float                                              Delta_Seconds;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Move_Distance;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.GetTransformFromRollAndPitch
struct ABP_TroutMovingAlongSpline_C_GetTransformFromRollAndPitch_Params
{
	struct FTransform                                  InputValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FTransform                                  Value;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.GetTranformFromSpline
struct ABP_TroutMovingAlongSpline_C_GetTranformFromSpline_Params
{
	struct FTransform                                  Value;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.UserConstructionScript
struct ABP_TroutMovingAlongSpline_C_UserConstructionScript_Params
{
};

// Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.ReceiveBeginPlay
struct ABP_TroutMovingAlongSpline_C_ReceiveBeginPlay_Params
{
};

// Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.ReceiveTick
struct ABP_TroutMovingAlongSpline_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.ExecuteUbergraph_BP_TroutMovingAlongSpline
struct ABP_TroutMovingAlongSpline_C_ExecuteUbergraph_BP_TroutMovingAlongSpline_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
