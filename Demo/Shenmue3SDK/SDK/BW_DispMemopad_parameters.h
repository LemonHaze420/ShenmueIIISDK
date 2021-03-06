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

// Function BW_DispMemopad.BW_DispMemopad_C.CursorFadeAnim
struct UBW_DispMemopad_C_CursorFadeAnim_Params
{
	bool                                               FadeIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DispMemopad.BW_DispMemopad_C.FadeAnim
struct UBW_DispMemopad_C_FadeAnim_Params
{
	bool                                               Reverse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DispMemopad.BW_DispMemopad_C.Construct
struct UBW_DispMemopad_C_Construct_Params
{
};

// Function BW_DispMemopad.BW_DispMemopad_C.Tick
struct UBW_DispMemopad_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DispMemopad.BW_DispMemopad_C.ExecuteUbergraph_BW_DispMemopad
struct UBW_DispMemopad_C_ExecuteUbergraph_BW_DispMemopad_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
