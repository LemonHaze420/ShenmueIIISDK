
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function wgt_item_list_status.wgt_item_list_status_C.CheckFade
// (Private, BlueprintCallable, BlueprintEvent)

void Uwgt_item_list_status_C::CheckFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.CheckFade");

	Uwgt_item_list_status_C_CheckFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.UpdateEnergyText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uwgt_item_list_status_C::UpdateEnergyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.UpdateEnergyText");

	Uwgt_item_list_status_C_UpdateEnergyText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.StartFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_item_list_status_C::StartFade(bool In)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.StartFade");

	Uwgt_item_list_status_C_StartFade_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.PriceAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_item_list_status_C::PriceAnim(bool Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.PriceAnim");

	Uwgt_item_list_status_C_PriceAnim_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.SetPriceAnimData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_ValueType>      ValueType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_item_list_status_C::SetPriceAnimData(int Price, TEnumAsByte<EN_ValueType> ValueType)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.SetPriceAnimData");

	Uwgt_item_list_status_C_SetPriceAnimData_Params params;
	params.Price = Price;
	params.ValueType = ValueType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_item_list_status_C::SetVisible(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.SetVisible");

	Uwgt_item_list_status_C_SetVisible_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_item_list_status_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.Construct");

	Uwgt_item_list_status_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_item_list_status_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.Tick");

	Uwgt_item_list_status_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_item_list_status_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.Destruct");

	Uwgt_item_list_status_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void Uwgt_item_list_status_C::BndEvt__FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Uwgt_item_list_status_C_BndEvt__FadeOut_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ExecuteUbergraph_wgt_item_list_status
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_item_list_status_C::ExecuteUbergraph_wgt_item_list_status(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ExecuteUbergraph_wgt_item_list_status");

	Uwgt_item_list_status_C_ExecuteUbergraph_wgt_item_list_status_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.OnFadeOutFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_item_list_status_C::OnFadeOutFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.OnFadeOutFinished__DelegateSignature");

	Uwgt_item_list_status_C_OnFadeOutFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_StartAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_item_list_status_C::ED_StartAnim__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_StartAnim__DelegateSignature");

	Uwgt_item_list_status_C_ED_StartAnim__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_FinishAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_item_list_status_C::ED_FinishAnim__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_FinishAnim__DelegateSignature");

	Uwgt_item_list_status_C_ED_FinishAnim__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_LeftStick_Down__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_item_list_status_C::ED_LeftStick_Down__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_LeftStick_Down__DelegateSignature");

	Uwgt_item_list_status_C_ED_LeftStick_Down__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_LeftStick_Up__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_item_list_status_C::ED_LeftStick_Up__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_LeftStick_Up__DelegateSignature");

	Uwgt_item_list_status_C_ED_LeftStick_Up__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_LeftStick_Left__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_item_list_status_C::ED_LeftStick_Left__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_LeftStick_Left__DelegateSignature");

	Uwgt_item_list_status_C_ED_LeftStick_Left__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_LeftStick_Right__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_item_list_status_C::ED_LeftStick_Right__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_LeftStick_Right__DelegateSignature");

	Uwgt_item_list_status_C_ED_LeftStick_Right__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_PressDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_item_list_status_C::ED_PressDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_PressDown__DelegateSignature");

	Uwgt_item_list_status_C_ED_PressDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_PressUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_item_list_status_C::ED_PressUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_PressUp__DelegateSignature");

	Uwgt_item_list_status_C_ED_PressUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_PushCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_item_list_status_C::ED_PushCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_PushCancel__DelegateSignature");

	Uwgt_item_list_status_C_ED_PushCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_PushUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_item_list_status_C::ED_PushUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_PushUp__DelegateSignature");

	Uwgt_item_list_status_C_ED_PushUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_PushDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_item_list_status_C::ED_PushDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_PushDown__DelegateSignature");

	Uwgt_item_list_status_C_ED_PushDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_PushDecide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_item_list_status_C::ED_PushDecide__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_PushDecide__DelegateSignature");

	Uwgt_item_list_status_C_ED_PushDecide__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_PressRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_item_list_status_C::ED_PressRight__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_PressRight__DelegateSignature");

	Uwgt_item_list_status_C_ED_PressRight__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_PressLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_item_list_status_C::ED_PressLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_PressLeft__DelegateSignature");

	Uwgt_item_list_status_C_ED_PressLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_PushRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_item_list_status_C::ED_PushRight__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_PushRight__DelegateSignature");

	Uwgt_item_list_status_C_ED_PushRight__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_item_list_status.wgt_item_list_status_C.ED_PushLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_item_list_status_C::ED_PushLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_item_list_status.wgt_item_list_status_C.ED_PushLeft__DelegateSignature");

	Uwgt_item_list_status_C_ED_PushLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
