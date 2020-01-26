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

// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.Hide
struct UBPW_UI_GeneralWindow_Button_C_Hide_Params
{
};

// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.AnimateIn
struct UBPW_UI_GeneralWindow_Button_C_AnimateIn_Params
{
};

// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.SetButtonIcon
struct UBPW_UI_GeneralWindow_Button_C_SetButtonIcon_Params
{
	TEnumAsByte<EN_GeneralWindow_Button>               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.SetLocalizedText
struct UBPW_UI_GeneralWindow_Button_C_SetLocalizedText_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.SetText
struct UBPW_UI_GeneralWindow_Button_C_SetText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.GetButtonIcon
struct UBPW_UI_GeneralWindow_Button_C_GetButtonIcon_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_GeneralWindow_Button>               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.SetData
struct UBPW_UI_GeneralWindow_Button_C_SetData_Params
{
	struct FST_GeneralWindow_Button                    Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.PreConstruct
struct UBPW_UI_GeneralWindow_Button_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UBPW_UI_GeneralWindow_Button_C_BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.ExecuteUbergraph_BPW_UI_GeneralWindow_Button
struct UBPW_UI_GeneralWindow_Button_C_ExecuteUbergraph_BPW_UI_GeneralWindow_Button_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_GeneralWindow_Button.BPW_UI_GeneralWindow_Button_C.OnFinishFadingIn__DelegateSignature
struct UBPW_UI_GeneralWindow_Button_C_OnFinishFadingIn__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
