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

// Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.GetNearSplinePointDistance
struct ABP_BullMovingAlongSpline2_C_GetNearSplinePointDistance_Params
{
	class ATargetPoint*                                Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.GetMoveDistance
struct ABP_BullMovingAlongSpline2_C_GetMoveDistance_Params
{
	float                                              Delta_Seconds;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Move_Distance;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.GetTransformFromRollAndPitch
struct ABP_BullMovingAlongSpline2_C_GetTransformFromRollAndPitch_Params
{
	struct FTransform                                  InputValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FTransform                                  Value;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.GetTranformFromSpline
struct ABP_BullMovingAlongSpline2_C_GetTranformFromSpline_Params
{
	struct FTransform                                  Value;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.UserConstructionScript
struct ABP_BullMovingAlongSpline2_C_UserConstructionScript_Params
{
};

// Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.ReceiveTick
struct ABP_BullMovingAlongSpline2_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.ReceiveBeginPlay
struct ABP_BullMovingAlongSpline2_C_ReceiveBeginPlay_Params
{
};

// Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.ExecuteUbergraph_BP_BullMovingAlongSpline2
struct ABP_BullMovingAlongSpline2_C_ExecuteUbergraph_BP_BullMovingAlongSpline2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
