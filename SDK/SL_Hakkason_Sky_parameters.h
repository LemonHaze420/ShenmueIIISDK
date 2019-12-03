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

// Function SL_Hakkason_Sky.SL_Hakkason_Sky_C.ReceiveBeginPlay
struct ASL_Hakkason_Sky_C_ReceiveBeginPlay_Params
{
};

// Function SL_Hakkason_Sky.SL_Hakkason_Sky_C.ReceiveTick
struct ASL_Hakkason_Sky_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_Sky.SL_Hakkason_Sky_C.ExecuteUbergraph_SL_Hakkason_Sky
struct ASL_Hakkason_Sky_C_ExecuteUbergraph_SL_Hakkason_Sky_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
