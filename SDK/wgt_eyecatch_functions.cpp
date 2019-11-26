
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

// Function wgt_eyecatch.wgt_eyecatch_C.updateDate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uwgt_eyecatch_C::updateDate()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_eyecatch.wgt_eyecatch_C.updateDate");

	Uwgt_eyecatch_C_updateDate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_eyecatch.wgt_eyecatch_C.checkHour
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Time_hour_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ChangeHour                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_eyecatch_C::checkHour(int Time_hour_, int* ChangeHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_eyecatch.wgt_eyecatch_C.checkHour");

	Uwgt_eyecatch_C_checkHour_Params params;
	params.Time_hour_ = Time_hour_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChangeHour != nullptr)
		*ChangeHour = params.ChangeHour;
}


// Function wgt_eyecatch.wgt_eyecatch_C.updateDatas(logo)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                LogoImage                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_eyecatch_C::updateDatas_logo_(class UTexture* LogoImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_eyecatch.wgt_eyecatch_C.updateDatas(logo)");

	Uwgt_eyecatch_C_updateDatas_logo__Params params;
	params.LogoImage = LogoImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_eyecatch.wgt_eyecatch_C.updateDatas(text2)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   main1                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   sub1                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   main2                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   sub2                           (BlueprintVisible, BlueprintReadOnly, Parm)

void Uwgt_eyecatch_C::updateDatas_text2_(const struct FText& main1, const struct FText& sub1, const struct FText& main2, const struct FText& sub2)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_eyecatch.wgt_eyecatch_C.updateDatas(text2)");

	Uwgt_eyecatch_C_updateDatas_text2__Params params;
	params.main1 = main1;
	params.sub1 = sub1;
	params.main2 = main2;
	params.sub2 = sub2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_eyecatch.wgt_eyecatch_C.updateDatas(text1)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Main                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   sub                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Uwgt_eyecatch_C::updateDatas_text1_(const struct FText& Main, const struct FText& sub)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_eyecatch.wgt_eyecatch_C.updateDatas(text1)");

	Uwgt_eyecatch_C_updateDatas_text1__Params params;
	params.Main = Main;
	params.sub = sub;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_eyecatch.wgt_eyecatch_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void Uwgt_eyecatch_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_eyecatch.wgt_eyecatch_C.OnAnimationFinished");

	Uwgt_eyecatch_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_eyecatch.wgt_eyecatch_C.fadeOut_Event(text1)
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           fadeFlag                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_eyecatch_C::fadeOut_Event_text1_(bool fadeFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_eyecatch.wgt_eyecatch_C.fadeOut_Event(text1)");

	Uwgt_eyecatch_C_fadeOut_Event_text1__Params params;
	params.fadeFlag = fadeFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_eyecatch.wgt_eyecatch_C.fadeOut_Event(text2)
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           fadeFlag                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_eyecatch_C::fadeOut_Event_text2_(bool fadeFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_eyecatch.wgt_eyecatch_C.fadeOut_Event(text2)");

	Uwgt_eyecatch_C_fadeOut_Event_text2__Params params;
	params.fadeFlag = fadeFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_eyecatch.wgt_eyecatch_C.fadeOut_Event(logo)
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           fadeFlag                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_eyecatch_C::fadeOut_Event_logo_(bool fadeFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_eyecatch.wgt_eyecatch_C.fadeOut_Event(logo)");

	Uwgt_eyecatch_C_fadeOut_Event_logo__Params params;
	params.fadeFlag = fadeFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_eyecatch.wgt_eyecatch_C.fade_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           fadeFlag                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_eyecatch_C::fade_Event(bool Visible, bool fadeFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_eyecatch.wgt_eyecatch_C.fade_Event");

	Uwgt_eyecatch_C_fade_Event_Params params;
	params.Visible = Visible;
	params.fadeFlag = fadeFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_eyecatch.wgt_eyecatch_C.ShowEyecatch
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   MainTitle                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   Subtitle                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bUseFade                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_eyecatch_C::ShowEyecatch(const struct FText& MainTitle, const struct FText& Subtitle, bool bUseFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_eyecatch.wgt_eyecatch_C.ShowEyecatch");

	Uwgt_eyecatch_C_ShowEyecatch_Params params;
	params.MainTitle = MainTitle;
	params.Subtitle = Subtitle;
	params.bUseFade = bUseFade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_eyecatch.wgt_eyecatch_C.ShowEyecatchText2
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   MainTitle1                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   SubTitle1                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   MainTitle2                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   SubTitle2                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bUseFade                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_eyecatch_C::ShowEyecatchText2(const struct FText& MainTitle1, const struct FText& SubTitle1, const struct FText& MainTitle2, const struct FText& SubTitle2, bool bUseFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_eyecatch.wgt_eyecatch_C.ShowEyecatchText2");

	Uwgt_eyecatch_C_ShowEyecatchText2_Params params;
	params.MainTitle1 = MainTitle1;
	params.SubTitle1 = SubTitle1;
	params.MainTitle2 = MainTitle2;
	params.SubTitle2 = SubTitle2;
	params.bUseFade = bUseFade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_eyecatch.wgt_eyecatch_C.ShowEyecatchTexture
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                LogoImage                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseFade                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_eyecatch_C::ShowEyecatchTexture(class UTexture* LogoImage, bool bUseFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_eyecatch.wgt_eyecatch_C.ShowEyecatchTexture");

	Uwgt_eyecatch_C_ShowEyecatchTexture_Params params;
	params.LogoImage = LogoImage;
	params.bUseFade = bUseFade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_eyecatch.wgt_eyecatch_C.HideEyecatch
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUseFade                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_eyecatch_C::HideEyecatch(bool bUseFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_eyecatch.wgt_eyecatch_C.HideEyecatch");

	Uwgt_eyecatch_C_HideEyecatch_Params params;
	params.bUseFade = bUseFade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_eyecatch.wgt_eyecatch_C.ExecuteUbergraph_wgt_eyecatch
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_eyecatch_C::ExecuteUbergraph_wgt_eyecatch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_eyecatch.wgt_eyecatch_C.ExecuteUbergraph_wgt_eyecatch");

	Uwgt_eyecatch_C_ExecuteUbergraph_wgt_eyecatch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_eyecatch.wgt_eyecatch_C.onFadeFinish(out)__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_eyecatch_C::onFadeFinish_out___DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_eyecatch.wgt_eyecatch_C.onFadeFinish(out)__DelegateSignature");

	Uwgt_eyecatch_C_onFadeFinish_out___DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_eyecatch.wgt_eyecatch_C.onFadeFinish(in)__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_eyecatch_C::onFadeFinish_in___DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_eyecatch.wgt_eyecatch_C.onFadeFinish(in)__DelegateSignature");

	Uwgt_eyecatch_C_onFadeFinish_in___DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
