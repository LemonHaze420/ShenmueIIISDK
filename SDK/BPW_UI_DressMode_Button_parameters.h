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

// Function BPW_UI_DressMode_Button.BPW_UI_DressMode_Button_C.Set Mode
struct UBPW_UI_DressMode_Button_C_Set_Mode_Params
{
	TEnumAsByte<EN_DressMode_SelectMode>               Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_DressMode_Button.BPW_UI_DressMode_Button_C.SetFocusAndSelect
struct UBPW_UI_DressMode_Button_C_SetFocusAndSelect_Params
{
	bool                                               IsFocus;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSelect;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_DressMode_Button.BPW_UI_DressMode_Button_C.SetImage
struct UBPW_UI_DressMode_Button_C_SetImage_Params
{
	class UTexture2D*                                  Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
