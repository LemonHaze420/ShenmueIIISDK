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

// Function BP_MiniMap2DCaptureTaget.BP_MiniMap2DCaptureTaget_C.GetCaptureSize(2DVector)
struct ABP_MiniMap2DCaptureTaget_C_GetCaptureSize_2DVector__Params
{
	struct FVector2D                                   Center;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector2D                                   half_size;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MiniMap2DCaptureTaget.BP_MiniMap2DCaptureTaget_C.GetCaptureSize
struct ABP_MiniMap2DCaptureTaget_C_GetCaptureSize_Params
{
	float                                              CenterX;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CenterY;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              HalfSize;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniMap2DCaptureTaget.BP_MiniMap2DCaptureTaget_C.UserConstructionScript
struct ABP_MiniMap2DCaptureTaget_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
