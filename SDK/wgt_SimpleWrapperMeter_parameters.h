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

// Function wgt_SimpleWrapperMeter.wgt_SimpleWrapperMeter_C.SetFillRatio
struct Uwgt_SimpleWrapperMeter_C_SetFillRatio_Params
{
	float                                              FillRatio;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SimpleWrapperMeter.wgt_SimpleWrapperMeter_C.SetScaleRatio
struct Uwgt_SimpleWrapperMeter_C_SetScaleRatio_Params
{
	float                                              ScaleRatio;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
