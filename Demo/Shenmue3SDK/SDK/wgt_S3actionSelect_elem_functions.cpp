
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

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.setMaxLength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_elem_C::setMaxLength(float Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.setMaxLength");

	Uwgt_S3actionSelect_elem_C_setMaxLength_Params params;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.SetFont
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo          font_info                      (BlueprintVisible, BlueprintReadOnly, Parm)

void Uwgt_S3actionSelect_elem_C::SetFont(const struct FSlateFontInfo& font_info)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.SetFont");

	Uwgt_S3actionSelect_elem_C_SetFont_Params params;
	params.font_info = font_info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   txt                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Uwgt_S3actionSelect_elem_C::SetText(const struct FText& txt)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.SetText");

	Uwgt_S3actionSelect_elem_C_SetText_Params params;
	params.txt = txt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.CalcTextBoxSize
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float Uwgt_S3actionSelect_elem_C::CalcTextBoxSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.CalcTextBoxSize");

	Uwgt_S3actionSelect_elem_C_CalcTextBoxSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.SetCalcText
// (Protected, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_elem_C::SetCalcText()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.SetCalcText");

	Uwgt_S3actionSelect_elem_C_SetCalcText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.UpdateDecorationSize
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_elem_C::UpdateDecorationSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.UpdateDecorationSize");

	Uwgt_S3actionSelect_elem_C_UpdateDecorationSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.setFrameBase
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_S3ActionSelect_frameType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_elem_C::setFrameBase(TEnumAsByte<EN_S3ActionSelect_frameType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.setFrameBase");

	Uwgt_S3actionSelect_elem_C_setFrameBase_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.setVisibility(bar)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_elem_C::setVisibility_bar_(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.setVisibility(bar)");

	Uwgt_S3actionSelect_elem_C_setVisibility_bar__Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.doCmd_fadeTx
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_elem_C::doCmd_fadeTx()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.doCmd_fadeTx");

	Uwgt_S3actionSelect_elem_C_doCmd_fadeTx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.updateOpacity(tit)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_elem_C::updateOpacity_tit_(float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.updateOpacity(tit)");

	Uwgt_S3actionSelect_elem_C_updateOpacity_tit__Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.updateOpacity(bar)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_elem_C::updateOpacity_bar_(float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.updateOpacity(bar)");

	Uwgt_S3actionSelect_elem_C_updateOpacity_bar__Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.doCmd_decide
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_elem_C::doCmd_decide()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.doCmd_decide");

	Uwgt_S3actionSelect_elem_C_doCmd_decide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.doCmd_fadeOut
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_elem_C::doCmd_fadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.doCmd_fadeOut");

	Uwgt_S3actionSelect_elem_C_doCmd_fadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.doCmd_fadeIn
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_elem_C::doCmd_fadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.doCmd_fadeIn");

	Uwgt_S3actionSelect_elem_C_doCmd_fadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_S3actionSelect_elem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.Construct");

	Uwgt_S3actionSelect_elem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void Uwgt_S3actionSelect_elem_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.OnAnimationFinished");

	Uwgt_S3actionSelect_elem_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.ResizeAroundText
// (BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_elem_C::ResizeAroundText()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.ResizeAroundText");

	Uwgt_S3actionSelect_elem_C_ResizeAroundText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.ExecuteUbergraph_wgt_S3actionSelect_elem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_elem_C::ExecuteUbergraph_wgt_S3actionSelect_elem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.ExecuteUbergraph_wgt_S3actionSelect_elem");

	Uwgt_S3actionSelect_elem_C_ExecuteUbergraph_wgt_S3actionSelect_elem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.command_fadeTx__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_elem_C::command_fadeTx__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.command_fadeTx__DelegateSignature");

	Uwgt_S3actionSelect_elem_C_command_fadeTx__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.onEndFadeIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uwgt_S3actionSelect_elem_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidgetAnimation*        Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void Uwgt_S3actionSelect_elem_C::onEndFadeIn__DelegateSignature(class Uwgt_S3actionSelect_elem_C* Widget, class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.onEndFadeIn__DelegateSignature");

	Uwgt_S3actionSelect_elem_C_onEndFadeIn__DelegateSignature_Params params;
	params.Widget = Widget;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.onEndFadeOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uwgt_S3actionSelect_elem_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidgetAnimation*        Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void Uwgt_S3actionSelect_elem_C::onEndFadeOut__DelegateSignature(class Uwgt_S3actionSelect_elem_C* Widget, class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.onEndFadeOut__DelegateSignature");

	Uwgt_S3actionSelect_elem_C_onEndFadeOut__DelegateSignature_Params params;
	params.Widget = Widget;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.command_decide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_elem_C::command_decide__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.command_decide__DelegateSignature");

	Uwgt_S3actionSelect_elem_C_command_decide__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.command_fadeOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_elem_C::command_fadeOut__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.command_fadeOut__DelegateSignature");

	Uwgt_S3actionSelect_elem_C_command_fadeOut__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.command_fadeIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_elem_C::command_fadeIn__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.command_fadeIn__DelegateSignature");

	Uwgt_S3actionSelect_elem_C_command_fadeIn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
