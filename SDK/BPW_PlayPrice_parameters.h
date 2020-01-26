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

// Function BPW_PlayPrice.BPW_PlayPrice_C.SetPlayPrice
struct UBPW_PlayPrice_C_SetPlayPrice_Params
{
	int                                                PlayPrice;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_PlayPrice.BPW_PlayPrice_C.Construct
struct UBPW_PlayPrice_C_Construct_Params
{
};

// Function BPW_PlayPrice.BPW_PlayPrice_C.ExecuteUbergraph_BPW_PlayPrice
struct UBPW_PlayPrice_C_ExecuteUbergraph_BPW_PlayPrice_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
