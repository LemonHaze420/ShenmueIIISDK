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

// Function WBP_QTETimeGauge.WBP_QTETimeGauge_C.SetCircleRate
struct UWBP_QTETimeGauge_C_SetCircleRate_Params
{
	float                                              GaugeRate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QTETimeGauge.WBP_QTETimeGauge_C.Construct
struct UWBP_QTETimeGauge_C_Construct_Params
{
};

// Function WBP_QTETimeGauge.WBP_QTETimeGauge_C.ExecuteUbergraph_WBP_QTETimeGauge
struct UWBP_QTETimeGauge_C_ExecuteUbergraph_WBP_QTETimeGauge_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
