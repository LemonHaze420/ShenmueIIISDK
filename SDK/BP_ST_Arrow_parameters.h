#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_ST_Arrow.BP_ST_Arrow_C.EnabledSplineMesh
struct ABP_ST_Arrow_C_EnabledSplineMesh_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ST_Arrow.BP_ST_Arrow_C.SetArrowNumRate
struct ABP_ST_Arrow_C_SetArrowNumRate_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ST_Arrow.BP_ST_Arrow_C.SetArrowMaskSize
struct ABP_ST_Arrow_C_SetArrowMaskSize_Params
{
	struct FVector2D                                   InSize;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_ST_Arrow.BP_ST_Arrow_C.SetHorizonTaperedScale
struct ABP_ST_Arrow_C_SetHorizonTaperedScale_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ST_Arrow.BP_ST_Arrow_C.SetMaxAlpha
struct ABP_ST_Arrow_C_SetMaxAlpha_Params
{
	float                                              MaxAlpha;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ST_Arrow.BP_ST_Arrow_C.Reset
struct ABP_ST_Arrow_C_Reset_Params
{
	float                                              Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              degree;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Gravity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ST_Arrow.BP_ST_Arrow_C.SetReverseRate
struct ABP_ST_Arrow_C_SetReverseRate_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ST_Arrow.BP_ST_Arrow_C.SetArrowLength
struct ABP_ST_Arrow_C_SetArrowLength_Params
{
	float                                              Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ST_Arrow.BP_ST_Arrow_C.Initialize
struct ABP_ST_Arrow_C_Initialize_Params
{
};

// Function BP_ST_Arrow.BP_ST_Arrow_C.UpdateVisibleArrow
struct ABP_ST_Arrow_C_UpdateVisibleArrow_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ST_Arrow.BP_ST_Arrow_C.SetVisibleArrow
struct ABP_ST_Arrow_C_SetVisibleArrow_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ST_Arrow.BP_ST_Arrow_C.SetGradationPower
struct ABP_ST_Arrow_C_SetGradationPower_Params
{
	float                                              Power;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ST_Arrow.BP_ST_Arrow_C.SetGradationSpeed
struct ABP_ST_Arrow_C_SetGradationSpeed_Params
{
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ST_Arrow.BP_ST_Arrow_C.SetSplinePos
struct ABP_ST_Arrow_C_SetSplinePos_Params
{
	float                                              Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              degree;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Gravity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ST_Arrow.BP_ST_Arrow_C.GetXYZ
struct ABP_ST_Arrow_C_GetXYZ_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_ST_Arrow.BP_ST_Arrow_C.GetHeight
struct ABP_ST_Arrow_C_GetHeight_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ST_Arrow.BP_ST_Arrow_C.getDistance
struct ABP_ST_Arrow_C_getDistance_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ST_Arrow.BP_ST_Arrow_C.UserConstructionScript
struct ABP_ST_Arrow_C_UserConstructionScript_Params
{
};

// Function BP_ST_Arrow.BP_ST_Arrow_C.ReceiveBeginPlay
struct ABP_ST_Arrow_C_ReceiveBeginPlay_Params
{
};

// Function BP_ST_Arrow.BP_ST_Arrow_C.ReceiveTick
struct ABP_ST_Arrow_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ST_Arrow.BP_ST_Arrow_C.SetRenderTargetTickEnabled
struct ABP_ST_Arrow_C_SetRenderTargetTickEnabled_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ST_Arrow.BP_ST_Arrow_C.ExecuteUbergraph_BP_ST_Arrow
struct ABP_ST_Arrow_C_ExecuteUbergraph_BP_ST_Arrow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
