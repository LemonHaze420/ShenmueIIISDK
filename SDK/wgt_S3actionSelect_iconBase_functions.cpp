
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

// Function wgt_S3actionSelect_iconBase.wgt_S3actionSelect_iconBase_C.doCmd_fade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeIn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_iconBase_C::doCmd_fade(bool FadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_iconBase.wgt_S3actionSelect_iconBase_C.doCmd_fade");

	Uwgt_S3actionSelect_iconBase_C_doCmd_fade_Params params;
	params.FadeIn = FadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_iconBase.wgt_S3actionSelect_iconBase_C.updateOpacity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_iconBase_C::updateOpacity(float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_iconBase.wgt_S3actionSelect_iconBase_C.updateOpacity");

	Uwgt_S3actionSelect_iconBase_C_updateOpacity_Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_iconBase.wgt_S3actionSelect_iconBase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_S3actionSelect_iconBase_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_iconBase.wgt_S3actionSelect_iconBase_C.Construct");

	Uwgt_S3actionSelect_iconBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_iconBase.wgt_S3actionSelect_iconBase_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void Uwgt_S3actionSelect_iconBase_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_iconBase.wgt_S3actionSelect_iconBase_C.OnAnimationFinished");

	Uwgt_S3actionSelect_iconBase_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_iconBase.wgt_S3actionSelect_iconBase_C.ExecuteUbergraph_wgt_S3actionSelect_iconBase
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_iconBase_C::ExecuteUbergraph_wgt_S3actionSelect_iconBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_iconBase.wgt_S3actionSelect_iconBase_C.ExecuteUbergraph_wgt_S3actionSelect_iconBase");

	Uwgt_S3actionSelect_iconBase_C_ExecuteUbergraph_wgt_S3actionSelect_iconBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_iconBase.wgt_S3actionSelect_iconBase_C.onEndFade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeIn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_iconBase_C::onEndFade__DelegateSignature(bool FadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_iconBase.wgt_S3actionSelect_iconBase_C.onEndFade__DelegateSignature");

	Uwgt_S3actionSelect_iconBase_C_onEndFade__DelegateSignature_Params params;
	params.FadeIn = FadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
