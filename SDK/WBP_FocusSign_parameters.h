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

// Function WBP_FocusSign.WBP_FocusSign_C.SetIsReadyVisibleOff
struct UWBP_FocusSign_C_SetIsReadyVisibleOff_Params
{
	bool                                               IsReady;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_FocusSign.WBP_FocusSign_C.IsEnabledOff
struct UWBP_FocusSign_C_IsEnabledOff_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_FocusSign.WBP_FocusSign_C.SetOutSide
struct UWBP_FocusSign_C_SetOutSide_Params
{
	bool                                               IsOutSide;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_FocusSign.WBP_FocusSign_C.CalcOpacity
struct UWBP_FocusSign_C_CalcOpacity_Params
{
	float                                              Opacity;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_FocusSign.WBP_FocusSign_C.updateOpacity
struct UWBP_FocusSign_C_updateOpacity_Params
{
};

// Function WBP_FocusSign.WBP_FocusSign_C.SetInterpOpacity
struct UWBP_FocusSign_C_SetInterpOpacity_Params
{
	float                                              Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Reach;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_FocusSign.WBP_FocusSign_C.SetVisibleState
struct UWBP_FocusSign_C_SetVisibleState_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_FocusSign.WBP_FocusSign_C.SetCornersPos
struct UWBP_FocusSign_C_SetCornersPos_Params
{
};

// Function WBP_FocusSign.WBP_FocusSign_C.UpdateFocusRate
struct UWBP_FocusSign_C_UpdateFocusRate_Params
{
	float                                              FocusRate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_FocusSign.WBP_FocusSign_C.Tick
struct UWBP_FocusSign_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_FocusSign.WBP_FocusSign_C.PreConstruct
struct UWBP_FocusSign_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_FocusSign.WBP_FocusSign_C.ExecuteUbergraph_WBP_FocusSign
struct UWBP_FocusSign_C_ExecuteUbergraph_WBP_FocusSign_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
