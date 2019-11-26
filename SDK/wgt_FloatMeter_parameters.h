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

// Function wgt_FloatMeter.wgt_FloatMeter_C.SetScaleRatio
struct Uwgt_FloatMeter_C_SetScaleRatio_Params
{
	float                                              ScaleRatio;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_FloatMeter.wgt_FloatMeter_C.SetFillRatio
struct Uwgt_FloatMeter_C_SetFillRatio_Params
{
	float                                              FillRatio;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
