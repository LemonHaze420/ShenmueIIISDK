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

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.setMaxLength
struct Uwgt_S3actionSelect_elem_C_setMaxLength_Params
{
	float                                              Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.SetFont
struct Uwgt_S3actionSelect_elem_C_SetFont_Params
{
	struct FSlateFontInfo                              font_info;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.SetText
struct Uwgt_S3actionSelect_elem_C_SetText_Params
{
	struct FText                                       txt;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.CalcTextBoxSize
struct Uwgt_S3actionSelect_elem_C_CalcTextBoxSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.SetCalcText
struct Uwgt_S3actionSelect_elem_C_SetCalcText_Params
{
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.UpdateDecorationSize
struct Uwgt_S3actionSelect_elem_C_UpdateDecorationSize_Params
{
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.setFrameBase
struct Uwgt_S3actionSelect_elem_C_setFrameBase_Params
{
	TEnumAsByte<EN_S3ActionSelect_frameType>           Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.setVisibility(bar)
struct Uwgt_S3actionSelect_elem_C_setVisibility_bar__Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.doCmd_fadeTx
struct Uwgt_S3actionSelect_elem_C_doCmd_fadeTx_Params
{
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.updateOpacity(tit)
struct Uwgt_S3actionSelect_elem_C_updateOpacity_tit__Params
{
	float                                              Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.updateOpacity(bar)
struct Uwgt_S3actionSelect_elem_C_updateOpacity_bar__Params
{
	float                                              Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.doCmd_decide
struct Uwgt_S3actionSelect_elem_C_doCmd_decide_Params
{
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.doCmd_fadeOut
struct Uwgt_S3actionSelect_elem_C_doCmd_fadeOut_Params
{
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.doCmd_fadeIn
struct Uwgt_S3actionSelect_elem_C_doCmd_fadeIn_Params
{
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.Construct
struct Uwgt_S3actionSelect_elem_C_Construct_Params
{
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.OnAnimationFinished
struct Uwgt_S3actionSelect_elem_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.ResizeAroundText
struct Uwgt_S3actionSelect_elem_C_ResizeAroundText_Params
{
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.ExecuteUbergraph_wgt_S3actionSelect_elem
struct Uwgt_S3actionSelect_elem_C_ExecuteUbergraph_wgt_S3actionSelect_elem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.command_fadeTx__DelegateSignature
struct Uwgt_S3actionSelect_elem_C_command_fadeTx__DelegateSignature_Params
{
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.onEndFadeIn__DelegateSignature
struct Uwgt_S3actionSelect_elem_C_onEndFadeIn__DelegateSignature_Params
{
	class Uwgt_S3actionSelect_elem_C*                  Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.onEndFadeOut__DelegateSignature
struct Uwgt_S3actionSelect_elem_C_onEndFadeOut__DelegateSignature_Params
{
	class Uwgt_S3actionSelect_elem_C*                  Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.command_decide__DelegateSignature
struct Uwgt_S3actionSelect_elem_C_command_decide__DelegateSignature_Params
{
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.command_fadeOut__DelegateSignature
struct Uwgt_S3actionSelect_elem_C_command_fadeOut__DelegateSignature_Params
{
};

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.command_fadeIn__DelegateSignature
struct Uwgt_S3actionSelect_elem_C_command_fadeIn__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
