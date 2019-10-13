
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

// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C._dbgPrint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_timer_C::_dbgPrint()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C._dbgPrint");

	Uwgt_S3actionSelect_timer_C__dbgPrint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.registTimerEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_timer_C::registTimerEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.registTimerEvent");

	Uwgt_S3actionSelect_timer_C_registTimerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.doCmd_startTimer
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_timer_C::doCmd_startTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.doCmd_startTimer");

	Uwgt_S3actionSelect_timer_C_doCmd_startTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.updateProgress
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_timer_C::updateProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.updateProgress");

	Uwgt_S3actionSelect_timer_C_updateProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.doCmd_resetTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_timer_C::doCmd_resetTimer(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.doCmd_resetTimer");

	Uwgt_S3actionSelect_timer_C_doCmd_resetTimer_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.doCmd_pauseTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_timer_C::doCmd_pauseTimer(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.doCmd_pauseTimer");

	Uwgt_S3actionSelect_timer_C_doCmd_pauseTimer_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.getProgress(percent)
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_timer_C::getProgress_percent_(float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.getProgress(percent)");

	Uwgt_S3actionSelect_timer_C_getProgress_percent__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.getProgress(second)
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Second                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_timer_C::getProgress_second_(float* Second)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.getProgress(second)");

	Uwgt_S3actionSelect_timer_C_getProgress_second__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Second != nullptr)
		*Second = params.Second;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.doCmd_cancel
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_timer_C::doCmd_cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.doCmd_cancel");

	Uwgt_S3actionSelect_timer_C_doCmd_cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.doCmd_fadeOut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_timer_C::doCmd_fadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.doCmd_fadeOut");

	Uwgt_S3actionSelect_timer_C_doCmd_fadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.doCmd_fadeIn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_timer_C::doCmd_fadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.doCmd_fadeIn");

	Uwgt_S3actionSelect_timer_C_doCmd_fadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.updateOpacity(imageTimer)
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_timer_C::updateOpacity_imageTimer_(float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.updateOpacity(imageTimer)");

	Uwgt_S3actionSelect_timer_C_updateOpacity_imageTimer__Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_S3actionSelect_timer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.Construct");

	Uwgt_S3actionSelect_timer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void Uwgt_S3actionSelect_timer_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.OnAnimationFinished");

	Uwgt_S3actionSelect_timer_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.PauseTimer
// (BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_timer_C::PauseTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.PauseTimer");

	Uwgt_S3actionSelect_timer_C_PauseTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.UnpauseTimer
// (BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_timer_C::UnpauseTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.UnpauseTimer");

	Uwgt_S3actionSelect_timer_C_UnpauseTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_timer_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.Tick");

	Uwgt_S3actionSelect_timer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.endFadeIn(hiddenParent)
// (BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_timer_C::endFadeIn_hiddenParent_()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.endFadeIn(hiddenParent)");

	Uwgt_S3actionSelect_timer_C_endFadeIn_hiddenParent__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.endFadeOut(hiddenParent)
// (BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_timer_C::endFadeOut_hiddenParent_()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.endFadeOut(hiddenParent)");

	Uwgt_S3actionSelect_timer_C_endFadeOut_hiddenParent__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.ExecuteUbergraph_wgt_S3actionSelect_timer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_S3actionSelect_timer_C::ExecuteUbergraph_wgt_S3actionSelect_timer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.ExecuteUbergraph_wgt_S3actionSelect_timer");

	Uwgt_S3actionSelect_timer_C_ExecuteUbergraph_wgt_S3actionSelect_timer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.onTimeover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_timer_C::onTimeover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.onTimeover__DelegateSignature");

	Uwgt_S3actionSelect_timer_C_onTimeover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.onEndFadeOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_timer_C::onEndFadeOut__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.onEndFadeOut__DelegateSignature");

	Uwgt_S3actionSelect_timer_C_onEndFadeOut__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.onEndFadeIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uwgt_S3actionSelect_timer_C::onEndFadeIn__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_S3actionSelect_timer.wgt_S3actionSelect_timer_C.onEndFadeIn__DelegateSignature");

	Uwgt_S3actionSelect_timer_C_onEndFadeIn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
