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

// Function bpS3CameraComp.bpS3CameraComp_C.GetVerticalFOV
struct UbpS3CameraComp_C_GetVerticalFOV_Params
{
	float                                              VerticalFOV;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpS3CameraComp.bpS3CameraComp_C.HorizonRatioToPitch
struct UbpS3CameraComp_C_HorizonRatioToPitch_Params
{
	float                                              HorizonRatio;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
