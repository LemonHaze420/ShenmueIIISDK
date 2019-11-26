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

// Function wgt_MultiMeter.wgt_MultiMeter_C.CalcMeterRatio
struct Uwgt_MultiMeter_C_CalcMeterRatio_Params
{
	float                                              Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function wgt_MultiMeter.wgt_MultiMeter_C.GetMaxDisplayableRatio
struct Uwgt_MultiMeter_C_GetMaxDisplayableRatio_Params
{
	float                                              A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function wgt_MultiMeter.wgt_MultiMeter_C.GetOrbTresholds
struct Uwgt_MultiMeter_C_GetOrbTresholds_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Min;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_MultiMeter.wgt_MultiMeter_C.UpdateSubScaleRatios
struct Uwgt_MultiMeter_C_UpdateSubScaleRatios_Params
{
};

// Function wgt_MultiMeter.wgt_MultiMeter_C.UpdateSubFillRatios
struct Uwgt_MultiMeter_C_UpdateSubFillRatios_Params
{
};

// Function wgt_MultiMeter.wgt_MultiMeter_C.SetFillRatio
struct Uwgt_MultiMeter_C_SetFillRatio_Params
{
	float*                                             FillRatio;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_MultiMeter.wgt_MultiMeter_C.SetScaleRatio
struct Uwgt_MultiMeter_C_SetScaleRatio_Params
{
	float*                                             ScaleRatio;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_MultiMeter.wgt_MultiMeter_C.FindChildOrbs
struct Uwgt_MultiMeter_C_FindChildOrbs_Params
{
	class UPanelWidget*                                InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Reverse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_MultiMeter.wgt_MultiMeter_C.Construct
struct Uwgt_MultiMeter_C_Construct_Params
{
};

// Function wgt_MultiMeter.wgt_MultiMeter_C.ExecuteUbergraph_wgt_MultiMeter
struct Uwgt_MultiMeter_C_ExecuteUbergraph_wgt_MultiMeter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
