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

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.CheckWaterHeightUseVal
struct ABP_Fishing_Arrow_C_CheckWaterHeightUseVal_Params
{
	struct FVector                                     HitPos;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.CheckWaterHeight
struct ABP_Fishing_Arrow_C_CheckWaterHeight_Params
{
	struct FVector                                     HitPos;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.End8Move
struct ABP_Fishing_Arrow_C_End8Move_Params
{
};

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.Start8Move
struct ABP_Fishing_Arrow_C_Start8Move_Params
{
};

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.Update8Move
struct ABP_Fishing_Arrow_C_Update8Move_Params
{
};

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.GetWaterAndArrowIntersectPos
struct ABP_Fishing_Arrow_C_GetWaterAndArrowIntersectPos_Params
{
	struct FVector                                     HitPos;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.Reset
struct ABP_Fishing_Arrow_C_Reset_Params
{
	float                                              Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Degree;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Gravity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetReverseRate
struct ABP_Fishing_Arrow_C_SetReverseRate_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetArrowLength
struct ABP_Fishing_Arrow_C_SetArrowLength_Params
{
	float                                              Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.Initialize
struct ABP_Fishing_Arrow_C_Initialize_Params
{
};

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.UpdateVisibleArrow
struct ABP_Fishing_Arrow_C_UpdateVisibleArrow_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetVisibleArrow
struct ABP_Fishing_Arrow_C_SetVisibleArrow_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetGradationPower
struct ABP_Fishing_Arrow_C_SetGradationPower_Params
{
	float                                              Power;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetGradationSpeed
struct ABP_Fishing_Arrow_C_SetGradationSpeed_Params
{
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.SetSplinePos
struct ABP_Fishing_Arrow_C_SetSplinePos_Params
{
	float                                              Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Degree;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Gravity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.GetXYZ
struct ABP_Fishing_Arrow_C_GetXYZ_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.GetHeight
struct ABP_Fishing_Arrow_C_GetHeight_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.getDistance
struct ABP_Fishing_Arrow_C_getDistance_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.UserConstructionScript
struct ABP_Fishing_Arrow_C_UserConstructionScript_Params
{
};

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.ReceiveBeginPlay
struct ABP_Fishing_Arrow_C_ReceiveBeginPlay_Params
{
};

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.ReceiveTick
struct ABP_Fishing_Arrow_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_Arrow.BP_Fishing_Arrow_C.ExecuteUbergraph_BP_Fishing_Arrow
struct ABP_Fishing_Arrow_C_ExecuteUbergraph_BP_Fishing_Arrow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
