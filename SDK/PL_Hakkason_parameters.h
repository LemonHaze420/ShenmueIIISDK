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

// Function PL_Hakkason.PL_Hakkason_C.ReceiveBeginPlay
struct APL_Hakkason_C_ReceiveBeginPlay_Params
{
};

// Function PL_Hakkason.PL_Hakkason_C.ReceiveTick
struct APL_Hakkason_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PL_Hakkason.PL_Hakkason_C.ExecuteUbergraph_PL_Hakkason
struct APL_Hakkason_C_ExecuteUbergraph_PL_Hakkason_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
