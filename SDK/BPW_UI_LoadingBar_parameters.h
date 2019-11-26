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

// Function BPW_UI_LoadingBar.BPW_UI_LoadingBar_C.Construct
struct UBPW_UI_LoadingBar_C_Construct_Params
{
};

// Function BPW_UI_LoadingBar.BPW_UI_LoadingBar_C.Tick
struct UBPW_UI_LoadingBar_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_LoadingBar.BPW_UI_LoadingBar_C.ExecuteUbergraph_BPW_UI_LoadingBar
struct UBPW_UI_LoadingBar_C_ExecuteUbergraph_BPW_UI_LoadingBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
