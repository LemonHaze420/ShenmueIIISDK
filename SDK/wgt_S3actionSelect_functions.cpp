
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_startSelection_Base
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_C::doCmd_startSelection_Base()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_startSelection_Base");

	Uwgt_S3actionSelect_C_doCmd_startSelection_Base_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.CheckTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uwgt_S3actionSelect_C::CheckTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.CheckTime");

	Uwgt_S3actionSelect_C_CheckTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.EndButtonAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_C::EndButtonAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.EndButtonAnim");

	Uwgt_S3actionSelect_C_EndButtonAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.Init");

	Uwgt_S3actionSelect_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.StartButtonAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_C::StartButtonAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.StartButtonAnim");

	Uwgt_S3actionSelect_C_StartButtonAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.InitButtonPos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_C::InitButtonPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.InitButtonPos");

	Uwgt_S3actionSelect_C_InitButtonPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.SetCalcText
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_C::SetCalcText()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.SetCalcText");

	Uwgt_S3actionSelect_C_SetCalcText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.GetTextMaxLength
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float Uwgt_S3actionSelect_C::GetTextMaxLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.GetTextMaxLength");

	Uwgt_S3actionSelect_C_GetTextMaxLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFade(iconbase)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeIn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_C::catch_onEndFade_iconbase_(bool FadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFade(iconbase)");

	Uwgt_S3actionSelect_C_catch_onEndFade_iconbase__Params params;
	params.FadeIn = FadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onTimeover
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_C::catch_onTimeover()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onTimeover");

	Uwgt_S3actionSelect_C_catch_onTimeover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.delSelectItem
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void Uwgt_S3actionSelect_C::doCmd_addItem(int Index, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_addItem");

	Uwgt_S3actionSelect_C_doCmd_addItem_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.AddSelectItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_C::AddSelectItem(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.AddSelectItem");

	Uwgt_S3actionSelect_C_AddSelectItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_startTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_C::doCmd_startTimer(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_startTimer");

	Uwgt_S3actionSelect_C_doCmd_startTimer_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFadeOut(timer)
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_C::catch_onEndFadeOut_timer_()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFadeOut(timer)");

	Uwgt_S3actionSelect_C_catch_onEndFadeOut_timer__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFadeIn(timer)
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_C::catch_onEndFadeIn_timer_()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFadeIn(timer)");

	Uwgt_S3actionSelect_C_catch_onEndFadeIn_timer__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_setVisibility(timer)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_C::doCmd_setVisibility_timer_(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_setVisibility(timer)");

	Uwgt_S3actionSelect_C_doCmd_setVisibility_timer__Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_cancelSelection
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_C::doCmd_cancelSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_cancelSelection");

	Uwgt_S3actionSelect_C_doCmd_cancelSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_startDecide
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_padSwitch>      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Press                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_C::doCmd_sendInput(TEnumAsByte<EN_padSwitch> Button, bool Press)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_sendInput");

	Uwgt_S3actionSelect_C_doCmd_sendInput_Params params;
	params.Button = Button;
	params.Press = Press;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onEndFadeOut(item)
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Public, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.checkFinish
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_C::checkFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.checkFinish");

	Uwgt_S3actionSelect_C_checkFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.checkReady
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_C::checkReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.checkReady");

	Uwgt_S3actionSelect_C_checkReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onIconAnimEnd
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_C::catch_onIconAnimEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.catch_onIconAnimEnd");

	Uwgt_S3actionSelect_C_catch_onIconAnimEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.AdjustCenter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_startSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_C::doCmd_startSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_startSelection");

	Uwgt_S3actionSelect_C_doCmd_startSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_setVisibility(UI)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_C::doCmd_setVisibility_UI_(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.doCmd_setVisibility(UI)");

	Uwgt_S3actionSelect_C_doCmd_setVisibility_UI__Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_S3actionSelect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.Construct");

	Uwgt_S3actionSelect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_S3actionSelect_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.Destruct");

	Uwgt_S3actionSelect_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.BndEvt__Anim0_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void Uwgt_S3actionSelect_C::BndEvt__Anim0_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.BndEvt__Anim0_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3actionSelect_C_BndEvt__Anim0_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.BndEvt__Button_EndAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void Uwgt_S3actionSelect_C::BndEvt__Button_EndAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.BndEvt__Button_EndAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3actionSelect_C_BndEvt__Button_EndAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.BndEvt__CenterFadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void Uwgt_S3actionSelect_C::BndEvt__CenterFadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.BndEvt__CenterFadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_S3actionSelect_C_BndEvt__CenterFadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.SizeSetIn
// (BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_C::SizeSetIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.SizeSetIn");

	Uwgt_S3actionSelect_C_SizeSetIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.ExecuteUbergraph_wgt_S3actionSelect
// (HasDefaults)
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
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_C::OnSetSizeEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.OnSetSizeEnd__DelegateSignature");

	Uwgt_S3actionSelect_C_OnSetSizeEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.onEndFinishSelection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_C::onEndFinishSelection__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.onEndFinishSelection__DelegateSignature");

	Uwgt_S3actionSelect_C_onEndFinishSelection__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.onEndStartSelection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_C::onEndStartSelection__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect.wgt_S3actionSelect_C.onEndStartSelection__DelegateSignature");

	Uwgt_S3actionSelect_C_onEndStartSelection__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect.wgt_S3actionSelect_C.onSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_C::onSelected__DelegateSignature(int Index)
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
