
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

// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.setMaxLength
// (NetReliable, Exec, Event, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
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
// (Net, NetRequest, Native, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateFontInfo          font_info                      (BlueprintVisible, BlueprintReadOnly, Parm)

void Uwgt_S3actionSelect_elem_C::SetFont(const struct FSlateFontInfo& font_info)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.SetFont");

	Uwgt_S3actionSelect_elem_C_SetFont_Params params;
	params.font_info = font_info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.SetText
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   txt                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Uwgt_S3actionSelect_elem_C::STATIC_SetText(const struct FText& txt)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.SetText");

	Uwgt_S3actionSelect_elem_C_SetText_Params params;
	params.txt = txt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.CalcTextBoxSize
// (NetReliable, NetRequest, Event, Static, NetMulticast, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float Uwgt_S3actionSelect_elem_C::STATIC_CalcTextBoxSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.CalcTextBoxSize");

	Uwgt_S3actionSelect_elem_C_CalcTextBoxSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.SetCalcText
// (Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)

void Uwgt_S3actionSelect_elem_C::STATIC_SetCalcText()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.SetCalcText");

	Uwgt_S3actionSelect_elem_C_SetCalcText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.UpdateDecorationSize
// (Net, NetRequest, Native, Event, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void Uwgt_S3actionSelect_elem_C::UpdateDecorationSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.UpdateDecorationSize");

	Uwgt_S3actionSelect_elem_C_UpdateDecorationSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.setFrameBase
// (Net, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
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
// (NetResponse, NetMulticast, Private, BlueprintCallable, BlueprintEvent)
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
// (Net, NetRequest, Exec, Event, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)

void Uwgt_S3actionSelect_elem_C::doCmd_fadeTx()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.doCmd_fadeTx");

	Uwgt_S3actionSelect_elem_C_doCmd_fadeTx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.updateOpacity(tit)
// (NetRequest, Exec, Event, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
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
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_elem_C::STATIC_updateOpacity_bar_(float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.updateOpacity(bar)");

	Uwgt_S3actionSelect_elem_C_updateOpacity_bar__Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.doCmd_decide
// (Net, NetReliable, Exec, Event, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)

void Uwgt_S3actionSelect_elem_C::doCmd_decide()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.doCmd_decide");

	Uwgt_S3actionSelect_elem_C_doCmd_decide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.doCmd_fadeOut
// (Net, NetReliable, NetRequest, Exec, Event, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)

void Uwgt_S3actionSelect_elem_C::doCmd_fadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.doCmd_fadeOut");

	Uwgt_S3actionSelect_elem_C_doCmd_fadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.doCmd_fadeIn
// (NetReliable, NetRequest, Exec, Event, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)

void Uwgt_S3actionSelect_elem_C::doCmd_fadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.doCmd_fadeIn");

	Uwgt_S3actionSelect_elem_C_doCmd_fadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.Construct
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_S3actionSelect_elem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.Construct");

	Uwgt_S3actionSelect_elem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.OnAnimationFinished
// (NetReliable, NetRequest, Exec, Event, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void Uwgt_S3actionSelect_elem_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.OnAnimationFinished");

	Uwgt_S3actionSelect_elem_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.ResizeAroundText
// (Net, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void Uwgt_S3actionSelect_elem_C::ResizeAroundText()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.ResizeAroundText");

	Uwgt_S3actionSelect_elem_C_ResizeAroundText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.ExecuteUbergraph_wgt_S3actionSelect_elem
// (Exec, Native, Static, NetMulticast, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_elem_C::STATIC_ExecuteUbergraph_wgt_S3actionSelect_elem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.ExecuteUbergraph_wgt_S3actionSelect_elem");

	Uwgt_S3actionSelect_elem_C_ExecuteUbergraph_wgt_S3actionSelect_elem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.command_fadeTx__DelegateSignature
// (Exec, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void Uwgt_S3actionSelect_elem_C::command_fadeTx__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.command_fadeTx__DelegateSignature");

	Uwgt_S3actionSelect_elem_C_command_fadeTx__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.onEndFadeIn__DelegateSignature
// (Net, Exec, Native, Event, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.onEndFadeOut__DelegateSignature
// (NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class Uwgt_S3actionSelect_elem_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidgetAnimation*        Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void Uwgt_S3actionSelect_elem_C::STATIC_onEndFadeOut__DelegateSignature(class Uwgt_S3actionSelect_elem_C* Widget, class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.onEndFadeOut__DelegateSignature");

	Uwgt_S3actionSelect_elem_C_onEndFadeOut__DelegateSignature_Params params;
	params.Widget = Widget;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.command_decide__DelegateSignature
// (Exec, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void Uwgt_S3actionSelect_elem_C::command_decide__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.command_decide__DelegateSignature");

	Uwgt_S3actionSelect_elem_C_command_decide__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.command_fadeOut__DelegateSignature
// (Net, NetReliable, NetRequest, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void Uwgt_S3actionSelect_elem_C::command_fadeOut__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.command_fadeOut__DelegateSignature");

	Uwgt_S3actionSelect_elem_C_command_fadeOut__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_elem.wgt_S3actionSelect_elem_C.command_fadeIn__DelegateSignature
// (Net, NetReliable, NetRequest, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

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
