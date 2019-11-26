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

// Function wgt_item_list_status.wgt_item_list_status_C.CheckFade
struct Uwgt_item_list_status_C_CheckFade_Params
{
};

// Function wgt_item_list_status.wgt_item_list_status_C.UpdateEnergyText
struct Uwgt_item_list_status_C_UpdateEnergyText_Params
{
};

// Function wgt_item_list_status.wgt_item_list_status_C.StartFade
struct Uwgt_item_list_status_C_StartFade_Params
{
	bool                                               In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_item_list_status.wgt_item_list_status_C.PriceAnim
struct Uwgt_item_list_status_C_PriceAnim_Params
{
	bool                                               Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_item_list_status.wgt_item_list_status_C.SetPriceAnimData
struct Uwgt_item_list_status_C_SetPriceAnimData_Params
{
	int                                                Price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_ValueType>                          ValueType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_item_list_status.wgt_item_list_status_C.SetVisible
struct Uwgt_item_list_status_C_SetVisible_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_item_list_status.wgt_item_list_status_C.Construct
struct Uwgt_item_list_status_C_Construct_Params
{
};

// Function wgt_item_list_status.wgt_item_list_status_C.Tick
struct Uwgt_item_list_status_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_item_list_status.wgt_item_list_status_C.Destruct
struct Uwgt_item_list_status_C_Destruct_Params
{
};

// Function wgt_item_list_status.wgt_item_list_status_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct Uwgt_item_list_status_C_BndEvt__FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function wgt_item_list_status.wgt_item_list_status_C.ExecuteUbergraph_wgt_item_list_status
struct Uwgt_item_list_status_C_ExecuteUbergraph_wgt_item_list_status_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_item_list_status.wgt_item_list_status_C.OnFadeOutFinished__DelegateSignature
struct Uwgt_item_list_status_C_OnFadeOutFinished__DelegateSignature_Params
{
};

// Function wgt_item_list_status.wgt_item_list_status_C.ED_StartAnim__DelegateSignature
struct Uwgt_item_list_status_C_ED_StartAnim__DelegateSignature_Params
{
};

// Function wgt_item_list_status.wgt_item_list_status_C.ED_FinishAnim__DelegateSignature
struct Uwgt_item_list_status_C_ED_FinishAnim__DelegateSignature_Params
{
};

// Function wgt_item_list_status.wgt_item_list_status_C.ED_LeftStick_Down__DelegateSignature
struct Uwgt_item_list_status_C_ED_LeftStick_Down__DelegateSignature_Params
{
};

// Function wgt_item_list_status.wgt_item_list_status_C.ED_LeftStick_Up__DelegateSignature
struct Uwgt_item_list_status_C_ED_LeftStick_Up__DelegateSignature_Params
{
};

// Function wgt_item_list_status.wgt_item_list_status_C.ED_LeftStick_Left__DelegateSignature
struct Uwgt_item_list_status_C_ED_LeftStick_Left__DelegateSignature_Params
{
};

// Function wgt_item_list_status.wgt_item_list_status_C.ED_LeftStick_Right__DelegateSignature
struct Uwgt_item_list_status_C_ED_LeftStick_Right__DelegateSignature_Params
{
};

// Function wgt_item_list_status.wgt_item_list_status_C.ED_PressDown__DelegateSignature
struct Uwgt_item_list_status_C_ED_PressDown__DelegateSignature_Params
{
};

// Function wgt_item_list_status.wgt_item_list_status_C.ED_PressUp__DelegateSignature
struct Uwgt_item_list_status_C_ED_PressUp__DelegateSignature_Params
{
};

// Function wgt_item_list_status.wgt_item_list_status_C.ED_PushCancel__DelegateSignature
struct Uwgt_item_list_status_C_ED_PushCancel__DelegateSignature_Params
{
};

// Function wgt_item_list_status.wgt_item_list_status_C.ED_PushUp__DelegateSignature
struct Uwgt_item_list_status_C_ED_PushUp__DelegateSignature_Params
{
};

// Function wgt_item_list_status.wgt_item_list_status_C.ED_PushDown__DelegateSignature
struct Uwgt_item_list_status_C_ED_PushDown__DelegateSignature_Params
{
};

// Function wgt_item_list_status.wgt_item_list_status_C.ED_PushDecide__DelegateSignature
struct Uwgt_item_list_status_C_ED_PushDecide__DelegateSignature_Params
{
};

// Function wgt_item_list_status.wgt_item_list_status_C.ED_PressRight__DelegateSignature
struct Uwgt_item_list_status_C_ED_PressRight__DelegateSignature_Params
{
};

// Function wgt_item_list_status.wgt_item_list_status_C.ED_PressLeft__DelegateSignature
struct Uwgt_item_list_status_C_ED_PressLeft__DelegateSignature_Params
{
};

// Function wgt_item_list_status.wgt_item_list_status_C.ED_PushRight__DelegateSignature
struct Uwgt_item_list_status_C_ED_PushRight__DelegateSignature_Params
{
};

// Function wgt_item_list_status.wgt_item_list_status_C.ED_PushLeft__DelegateSignature
struct Uwgt_item_list_status_C_ED_PushLeft__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
