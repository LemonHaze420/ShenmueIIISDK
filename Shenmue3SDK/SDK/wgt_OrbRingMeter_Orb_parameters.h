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

// Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.SetColorByEnum
struct Uwgt_OrbRingMeter_Orb_C_SetColorByEnum_Params
{
	TEnumAsByte<EHealthOrbColor>                       Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.SetFillRatio
struct Uwgt_OrbRingMeter_Orb_C_SetFillRatio_Params
{
	float*                                             FillRatio;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.SetScaleRatio
struct Uwgt_OrbRingMeter_Orb_C_SetScaleRatio_Params
{
	float*                                             ScaleRatio;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.PreConstruct
struct Uwgt_OrbRingMeter_Orb_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_OrbRingMeter_Orb.wgt_OrbRingMeter_Orb_C.ExecuteUbergraph_wgt_OrbRingMeter_Orb
struct Uwgt_OrbRingMeter_Orb_C_ExecuteUbergraph_wgt_OrbRingMeter_Orb_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
