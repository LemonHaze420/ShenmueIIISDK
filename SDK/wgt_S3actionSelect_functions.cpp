
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_startSelection_Base
// (NetRequest, Exec, Event, NetResponse, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintEvent)

void Uwgt_S3actionSelect_C::doCmd_startSelection_Base()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_startSelection_Base");

	Uwgt_S3actionSelect_C_doCmd_startSelection_Base_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.CheckTime
// (NetReliable, NetRequest, Event, Static, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uwgt_S3actionSelect_C::STATIC_CheckTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.CheckTime");

	Uwgt_S3actionSelect_C_CheckTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.EndButtonAnim
// (NetMulticast, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void Uwgt_S3actionSelect_C::EndButtonAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.EndButtonAnim");

	Uwgt_S3actionSelect_C_EndButtonAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.Init
// (Net, NetReliable, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void Uwgt_S3actionSelect_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.Init");

	Uwgt_S3actionSelect_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.StartButtonAnim
// (Net, NetReliable, Native, Event, NetMulticast, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void Uwgt_S3actionSelect_C::StartButtonAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.StartButtonAnim");

	Uwgt_S3actionSelect_C_StartButtonAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.InitButtonPos
// (Native, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void Uwgt_S3actionSelect_C::STATIC_InitButtonPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.InitButtonPos");

	Uwgt_S3actionSelect_C_InitButtonPos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.SetCalcText
// (Net, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void Uwgt_S3actionSelect_C::SetCalcText()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.SetCalcText");

	Uwgt_S3actionSelect_C_SetCalcText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.GetTextMaxLength
// (NetRequest, Exec, NetResponse, Static, Delegate, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float Uwgt_S3actionSelect_C::STATIC_GetTextMaxLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.GetTextMaxLength");

	Uwgt_S3actionSelect_C_GetTextMaxLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFade(iconbase)
// (Net, NetReliable, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           FadeIn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_C::STATIC_catch_onEndFade_iconbase_(bool FadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFade(iconbase)");

	Uwgt_S3actionSelect_C_catch_onEndFade_iconbase__Params params;
	params.FadeIn = FadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onTimeover
// (Exec, Event, NetResponse, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void Uwgt_S3actionSelect_C::catch_onTimeover()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onTimeover");

	Uwgt_S3actionSelect_C_catch_onTimeover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.delSelectItem
// (Net, NetReliable, NetResponse, NetMulticast, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_C::delSelectItem(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.delSelectItem");

	Uwgt_S3actionSelect_C_delSelectItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_addItem
// (NetRequest, Exec, Native, Static, NetMulticast, Public, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void Uwgt_S3actionSelect_C::STATIC_doCmd_addItem(int Index, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_addItem");

	Uwgt_S3actionSelect_C_doCmd_addItem_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.addSelectItem
// (NetReliable, Static, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_C::STATIC_addSelectItem(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.addSelectItem");

	Uwgt_S3actionSelect_C_addSelectItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_startTimer
// (Exec, Event, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_C::STATIC_doCmd_startTimer(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_startTimer");

	Uwgt_S3actionSelect_C_doCmd_startTimer_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFadeOut(timer)
// (Net, Exec, Native, Event, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void Uwgt_S3actionSelect_C::catch_onEndFadeOut_timer_()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFadeOut(timer)");

	Uwgt_S3actionSelect_C_catch_onEndFadeOut_timer__Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFadeIn(timer)
// (Exec, Native, Event, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void Uwgt_S3actionSelect_C::catch_onEndFadeIn_timer_()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFadeIn(timer)");

	Uwgt_S3actionSelect_C_catch_onEndFadeIn_timer__Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_setVisibility(timer)
// (Native, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_C::STATIC_doCmd_setVisibility_timer_(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_setVisibility(timer)");

	Uwgt_S3actionSelect_C_doCmd_setVisibility_timer__Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_cancelSelection
// (NetRequest, Exec, Event, NetResponse, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void Uwgt_S3actionSelect_C::doCmd_cancelSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_cancelSelection");

	Uwgt_S3actionSelect_C_doCmd_cancelSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_startDecide
// (Net, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            DecideIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_C::doCmd_startDecide(int DecideIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_startDecide");

	Uwgt_S3actionSelect_C_doCmd_startDecide_Params params;
	params.DecideIndex = DecideIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_sendInput
// (NetRequest, Exec, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_padSwitch>      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           press                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_C::doCmd_sendInput(TEnumAsByte<EN_padSwitch> Button, bool press)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_sendInput");

	Uwgt_S3actionSelect_C_doCmd_sendInput_Params params;
	params.Button = Button;
	params.press = press;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFadeOut(item)
// (Exec, Public, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class Uwgt_S3actionSelect_elem_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidgetAnimation*        Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void Uwgt_S3actionSelect_C::catch_onEndFadeOut_item_(class Uwgt_S3actionSelect_elem_C* Widget, class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFadeOut(item)");

	Uwgt_S3actionSelect_C_catch_onEndFadeOut_item__Params params;
	params.Widget = Widget;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFadeIn(item)
// (Native, NetMulticast, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class Uwgt_S3actionSelect_elem_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidgetAnimation*        Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void Uwgt_S3actionSelect_C::catch_onEndFadeIn_item_(class Uwgt_S3actionSelect_elem_C* Widget, class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFadeIn(item)");

	Uwgt_S3actionSelect_C_catch_onEndFadeIn_item__Params params;
	params.Widget = Widget;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.checkFinish
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void Uwgt_S3actionSelect_C::STATIC_checkFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.checkFinish");

	Uwgt_S3actionSelect_C_checkFinish_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.checkReady
// (Net, NetReliable, Native, Event, Static, NetMulticast, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void Uwgt_S3actionSelect_C::STATIC_checkReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.checkReady");

	Uwgt_S3actionSelect_C_checkReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onIconAnimEnd
// (Net, Native, NetResponse, Static, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void Uwgt_S3actionSelect_C::STATIC_catch_onIconAnimEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onIconAnimEnd");

	Uwgt_S3actionSelect_C_catch_onIconAnimEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.AdjustCenter
// (Net, Native, Public, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPanelSlot*              PanelSlot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector2D               slotSize                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uwgt_S3actionSelect_C::AdjustCenter(class UPanelSlot* PanelSlot, const struct FVector2D& slotSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.AdjustCenter");

	Uwgt_S3actionSelect_C_AdjustCenter_Params params;
	params.PanelSlot = PanelSlot;
	params.slotSize = slotSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_startSelection
// (Net, Static, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_C::STATIC_doCmd_startSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_startSelection");

	Uwgt_S3actionSelect_C_doCmd_startSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_setVisibility(UI)
// (NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_C::STATIC_doCmd_setVisibility_UI_(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_setVisibility(UI)");

	Uwgt_S3actionSelect_C_doCmd_setVisibility_UI__Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.Construct
// (Net, NetRequest, Exec, Native, Event, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void Uwgt_S3actionSelect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.Construct");

	Uwgt_S3actionSelect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.Destruct
// (Net, NetRequest, Exec, Native, Event, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void Uwgt_S3actionSelect_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.Destruct");

	Uwgt_S3actionSelect_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.Tick
// (Net, NetReliable, Exec, Native, NetResponse, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.Tick");

	Uwgt_S3actionSelect_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.BndEvt__Anim0_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (NetRequest, Exec, Native, Event, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void Uwgt_S3actionSelect_C::BndEvt__Anim0_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.BndEvt__Anim0_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3actionSelect_C_BndEvt__Anim0_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.BndEvt__Button_EndAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (Net, NetReliable, Exec, Native, Event, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void Uwgt_S3actionSelect_C::BndEvt__Button_EndAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.BndEvt__Button_EndAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3actionSelect_C_BndEvt__Button_EndAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.BndEvt__CenterFadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (Net, NetReliable, Exec, Native, Event, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void Uwgt_S3actionSelect_C::BndEvt__CenterFadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.BndEvt__CenterFadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3actionSelect_C_BndEvt__CenterFadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.SizeSetIn
// (NetReliable, Exec, Native, Event, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void Uwgt_S3actionSelect_C::SizeSetIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.SizeSetIn");

	Uwgt_S3actionSelect_C_SizeSetIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.ExecuteUbergraph_wgt_S3actionSelect
// (Net, NetMulticast, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_C::ExecuteUbergraph_wgt_S3actionSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.ExecuteUbergraph_wgt_S3actionSelect");

	Uwgt_S3actionSelect_C_ExecuteUbergraph_wgt_S3actionSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.OnSetSizeEnd__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintEvent)

void Uwgt_S3actionSelect_C::STATIC_OnSetSizeEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.OnSetSizeEnd__DelegateSignature");

	Uwgt_S3actionSelect_C_OnSetSizeEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.onEndFinishSelection__DelegateSignature
// (Net, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintEvent)

void Uwgt_S3actionSelect_C::STATIC_onEndFinishSelection__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.onEndFinishSelection__DelegateSignature");

	Uwgt_S3actionSelect_C_onEndFinishSelection__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.onEndStartSelection__DelegateSignature
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintEvent)

void Uwgt_S3actionSelect_C::STATIC_onEndStartSelection__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.onEndStartSelection__DelegateSignature");

	Uwgt_S3actionSelect_C_onEndStartSelection__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.onSelected__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_C::STATIC_onSelected__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.onSelected__DelegateSignature");

	Uwgt_S3actionSelect_C_onSelected__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
