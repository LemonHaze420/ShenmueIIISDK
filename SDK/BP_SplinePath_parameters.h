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

// Function BP_SplinePath.BP_SplinePath_C.GetNextLocation
struct ABP_SplinePath_C_GetNextLocation_Params
{
	float                                              CurrentLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RequestedOffsetInUU;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeValueOnSplineComponent;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SplinePath.BP_SplinePath_C.UserConstructionScript
struct ABP_SplinePath_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
