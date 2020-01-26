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

// Function WBP_MenuFrameWide.WBP_MenuFrameWide_C.SetInsideVisible
struct UWBP_MenuFrameWide_C_SetInsideVisible_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuFrameWide.WBP_MenuFrameWide_C.SetGridScale
struct UWBP_MenuFrameWide_C_SetGridScale_Params
{
	struct FVector2D                                   Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function WBP_MenuFrameWide.WBP_MenuFrameWide_C.InitializeGrid
struct UWBP_MenuFrameWide_C_InitializeGrid_Params
{
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function WBP_MenuFrameWide.WBP_MenuFrameWide_C.SetEnabledGrid
struct UWBP_MenuFrameWide_C_SetEnabledGrid_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuFrameWide.WBP_MenuFrameWide_C.PreConstruct
struct UWBP_MenuFrameWide_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MenuFrameWide.WBP_MenuFrameWide_C.ExecuteUbergraph_WBP_MenuFrameWide
struct UWBP_MenuFrameWide_C_ExecuteUbergraph_WBP_MenuFrameWide_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
