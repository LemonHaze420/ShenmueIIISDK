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

// Function PC_SimpleFloatMeter.PC_SimpleFloatMeter_C.MaxOut
struct UPC_SimpleFloatMeter_C_MaxOut_Params
{
};

// Function PC_SimpleFloatMeter.PC_SimpleFloatMeter_C.Reset
struct UPC_SimpleFloatMeter_C_Reset_Params
{
};

// Function PC_SimpleFloatMeter.PC_SimpleFloatMeter_C.Tick
struct UPC_SimpleFloatMeter_C_Tick_Params
{
	bool                                               Increase;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
