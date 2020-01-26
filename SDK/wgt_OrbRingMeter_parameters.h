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

// Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.SetForegroundVisible
struct Uwgt_OrbRingMeter_C_SetForegroundVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.SetColorByEnum
struct Uwgt_OrbRingMeter_C_SetColorByEnum_Params
{
	TEnumAsByte<EHealthOrbColor>                       Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.SetBackgroundTexture
struct Uwgt_OrbRingMeter_C_SetBackgroundTexture_Params
{
	class UTexture2D*                                  Background;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.PreConstruct
struct Uwgt_OrbRingMeter_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_OrbRingMeter.wgt_OrbRingMeter_C.ExecuteUbergraph_wgt_OrbRingMeter
struct Uwgt_OrbRingMeter_C_ExecuteUbergraph_wgt_OrbRingMeter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
