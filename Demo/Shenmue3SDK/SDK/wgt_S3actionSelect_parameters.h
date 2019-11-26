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

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_startSelection_Base
struct Uwgt_S3actionSelect_C_doCmd_startSelection_Base_Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.CheckTime
struct Uwgt_S3actionSelect_C_CheckTime_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.EndButtonAnim
struct Uwgt_S3actionSelect_C_EndButtonAnim_Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.Init
struct Uwgt_S3actionSelect_C_Init_Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.StartButtonAnim
struct Uwgt_S3actionSelect_C_StartButtonAnim_Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.InitButtonPos
struct Uwgt_S3actionSelect_C_InitButtonPos_Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.SetCalcText
struct Uwgt_S3actionSelect_C_SetCalcText_Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.GetTextMaxLength
struct Uwgt_S3actionSelect_C_GetTextMaxLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFade(iconbase)
struct Uwgt_S3actionSelect_C_catch_onEndFade_iconbase__Params
{
	bool                                               FadeIn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onTimeover
struct Uwgt_S3actionSelect_C_catch_onTimeover_Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.delSelectItem
struct Uwgt_S3actionSelect_C_delSelectItem_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_addItem
struct Uwgt_S3actionSelect_C_doCmd_addItem_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.AddSelectItem
struct Uwgt_S3actionSelect_C_AddSelectItem_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_startTimer
struct Uwgt_S3actionSelect_C_doCmd_startTimer_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFadeOut(timer)
struct Uwgt_S3actionSelect_C_catch_onEndFadeOut_timer__Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFadeIn(timer)
struct Uwgt_S3actionSelect_C_catch_onEndFadeIn_timer__Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_setVisibility(timer)
struct Uwgt_S3actionSelect_C_doCmd_setVisibility_timer__Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_cancelSelection
struct Uwgt_S3actionSelect_C_doCmd_cancelSelection_Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_startDecide
struct Uwgt_S3actionSelect_C_doCmd_startDecide_Params
{
	int                                                DecideIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_sendInput
struct Uwgt_S3actionSelect_C_doCmd_sendInput_Params
{
	TEnumAsByte<EN_padSwitch>                          Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               press;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFadeOut(item)
struct Uwgt_S3actionSelect_C_catch_onEndFadeOut_item__Params
{
	class Uwgt_S3actionSelect_elem_C*                  Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFadeIn(item)
struct Uwgt_S3actionSelect_C_catch_onEndFadeIn_item__Params
{
	class Uwgt_S3actionSelect_elem_C*                  Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.checkFinish
struct Uwgt_S3actionSelect_C_checkFinish_Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.checkReady
struct Uwgt_S3actionSelect_C_checkReady_Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onIconAnimEnd
struct Uwgt_S3actionSelect_C_catch_onIconAnimEnd_Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.AdjustCenter
struct Uwgt_S3actionSelect_C_AdjustCenter_Params
{
	class UPanelSlot*                                  PanelSlot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   slotSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_startSelection
struct Uwgt_S3actionSelect_C_doCmd_startSelection_Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_setVisibility(UI)
struct Uwgt_S3actionSelect_C_doCmd_setVisibility_UI__Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.Construct
struct Uwgt_S3actionSelect_C_Construct_Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.Destruct
struct Uwgt_S3actionSelect_C_Destruct_Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.Tick
struct Uwgt_S3actionSelect_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.BndEvt__Anim0_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct Uwgt_S3actionSelect_C_BndEvt__Anim0_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.BndEvt__Button_EndAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct Uwgt_S3actionSelect_C_BndEvt__Button_EndAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.BndEvt__CenterFadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct Uwgt_S3actionSelect_C_BndEvt__CenterFadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.SizeSetIn
struct Uwgt_S3actionSelect_C_SizeSetIn_Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.ExecuteUbergraph_wgt_S3actionSelect
struct Uwgt_S3actionSelect_C_ExecuteUbergraph_wgt_S3actionSelect_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.OnSetSizeEnd__DelegateSignature
struct Uwgt_S3actionSelect_C_OnSetSizeEnd__DelegateSignature_Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.onEndFinishSelection__DelegateSignature
struct Uwgt_S3actionSelect_C_onEndFinishSelection__DelegateSignature_Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.onEndStartSelection__DelegateSignature
struct Uwgt_S3actionSelect_C_onEndStartSelection__DelegateSignature_Params
{
};

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.onSelected__DelegateSignature
struct Uwgt_S3actionSelect_C_onSelected__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
