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

// Function WBP_MiniGameOtoshidama.WBP_MiniGameOtoshidama_C.SetVisibleButton
struct UWBP_MiniGameOtoshidama_C_SetVisibleButton_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameOtoshidama.WBP_MiniGameOtoshidama_C.Construct
struct UWBP_MiniGameOtoshidama_C_Construct_Params
{
};

// Function WBP_MiniGameOtoshidama.WBP_MiniGameOtoshidama_C.ExecuteUbergraph_WBP_MiniGameOtoshidama
struct UWBP_MiniGameOtoshidama_C_ExecuteUbergraph_WBP_MiniGameOtoshidama_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
