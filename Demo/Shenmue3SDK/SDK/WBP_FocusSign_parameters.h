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

// Function WBP_FocusSign.WBP_FocusSign_C.SetOutSide
struct UWBP_FocusSign_C_SetOutSide_Params
{
	bool                                               IsOutSide;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_FocusSign.WBP_FocusSign_C.GetMaxOpacity
struct UWBP_FocusSign_C_GetMaxOpacity_Params
{
	float                                              Opacity;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_FocusSign.WBP_FocusSign_C.UpdateOpacity
struct UWBP_FocusSign_C_UpdateOpacity_Params
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

// Function WBP_FocusSign.WBP_FocusSign_C.PreConstruct
struct UWBP_FocusSign_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_FocusSign.WBP_FocusSign_C.Tick
struct UWBP_FocusSign_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
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
