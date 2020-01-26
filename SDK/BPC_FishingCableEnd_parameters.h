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

// Function BPC_FishingCableEnd.BPC_FishingCableEnd_C.ReceiveTick
struct UBPC_FishingCableEnd_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_FishingCableEnd.BPC_FishingCableEnd_C.ExecuteUbergraph_BPC_FishingCableEnd
struct UBPC_FishingCableEnd_C_ExecuteUbergraph_BPC_FishingCableEnd_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
