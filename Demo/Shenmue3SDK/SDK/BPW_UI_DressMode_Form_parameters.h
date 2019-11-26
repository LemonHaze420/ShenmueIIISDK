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

// Function BPW_UI_DressMode_Form.BPW_UI_DressMode_Form_C.ScrollSetting
struct UBPW_UI_DressMode_Form_C_ScrollSetting_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_DressMode_Form.BPW_UI_DressMode_Form_C.SetButtonFocusAndSelect
struct UBPW_UI_DressMode_Form_C_SetButtonFocusAndSelect_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocus;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSelect;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_DressMode_Form.BPW_UI_DressMode_Form_C.InitButton
struct UBPW_UI_DressMode_Form_C_InitButton_Params
{
	class UTexture2D*                                  Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_DressMode_Form.BPW_UI_DressMode_Form_C.Construct
struct UBPW_UI_DressMode_Form_C_Construct_Params
{
};

// Function BPW_UI_DressMode_Form.BPW_UI_DressMode_Form_C.Tick
struct UBPW_UI_DressMode_Form_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_DressMode_Form.BPW_UI_DressMode_Form_C.ExecuteUbergraph_BPW_UI_DressMode_Form
struct UBPW_UI_DressMode_Form_C_ExecuteUbergraph_BPW_UI_DressMode_Form_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
