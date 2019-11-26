
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

// Function BP_eyecatch.BP_eyecatch_C.UpdateDateTime
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_eyecatch_C::UpdateDateTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.UpdateDateTime");

	ABP_eyecatch_C_UpdateDateTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.HideWidget
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_eyecatch_C::HideWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.HideWidget");

	ABP_eyecatch_C_HideWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.IsVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_eyecatch_C::IsVisible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.IsVisible");

	ABP_eyecatch_C_IsVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function BP_eyecatch.BP_eyecatch_C.SetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_eyecatch_C::SetVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.SetVisibility");

	ABP_eyecatch_C_SetVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.setTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   main1                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   sub1                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_eyecatch_C::setTitle(const struct FText& main1, const struct FText& sub1)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.setTitle");

	ABP_eyecatch_C_setTitle_Params params;
	params.main1 = main1;
	params.sub1 = sub1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.setWaitTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_eyecatch_C::setWaitTime(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.setWaitTime");

	ABP_eyecatch_C_setWaitTime_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.UpdateWidget
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_eyecatch_C::UpdateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.UpdateWidget");

	ABP_eyecatch_C_UpdateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.ShowEyecatch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   main1                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   sub1                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Fade                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_eyecatch_C::ShowEyecatch(const struct FText& main1, const struct FText& sub1, bool Fade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.ShowEyecatch");

	ABP_eyecatch_C_ShowEyecatch_Params params;
	params.main1 = main1;
	params.sub1 = sub1;
	params.Fade = Fade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_eyecatch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.UserConstructionScript");

	ABP_eyecatch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_eyecatch_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.ReceiveBeginPlay");

	ABP_eyecatch_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.catchFadeInFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_eyecatch_C::catchFadeInFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.catchFadeInFinished");

	ABP_eyecatch_C_catchFadeInFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.waitEasy
// (BlueprintCallable, BlueprintEvent)

void ABP_eyecatch_C::waitEasy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.waitEasy");

	ABP_eyecatch_C_waitEasy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.catchEndWaitEasy
// (BlueprintCallable, BlueprintEvent)

void ABP_eyecatch_C::catchEndWaitEasy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.catchEndWaitEasy");

	ABP_eyecatch_C_catchEndWaitEasy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.endEasy
// (BlueprintCallable, BlueprintEvent)

void ABP_eyecatch_C::endEasy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.endEasy");

	ABP_eyecatch_C_endEasy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.catchFadeOutFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_eyecatch_C::catchFadeOutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.catchFadeOutFinished");

	ABP_eyecatch_C_catchFadeOutFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.finishEasy
// (BlueprintCallable, BlueprintEvent)

void ABP_eyecatch_C::finishEasy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.finishEasy");

	ABP_eyecatch_C_finishEasy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.BindFinishFadeIn
// (BlueprintCallable, BlueprintEvent)

void ABP_eyecatch_C::BindFinishFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.BindFinishFadeIn");

	ABP_eyecatch_C_BindFinishFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.branch_easy(in)
// (BlueprintCallable, BlueprintEvent)

void ABP_eyecatch_C::branch_easy_in_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.branch_easy(in)");

	ABP_eyecatch_C_branch_easy_in__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.BindFinishFadeOut
// (BlueprintCallable, BlueprintEvent)

void ABP_eyecatch_C::BindFinishFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.BindFinishFadeOut");

	ABP_eyecatch_C_BindFinishFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.branch_easy(out)
// (BlueprintCallable, BlueprintEvent)

void ABP_eyecatch_C::branch_easy_out_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.branch_easy(out)");

	ABP_eyecatch_C_branch_easy_out__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.startEasy
// (BlueprintCallable, BlueprintEvent)

void ABP_eyecatch_C::startEasy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.startEasy");

	ABP_eyecatch_C_startEasy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.ExecuteUbergraph_BP_eyecatch
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_eyecatch_C::ExecuteUbergraph_BP_eyecatch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.ExecuteUbergraph_BP_eyecatch");

	ABP_eyecatch_C_ExecuteUbergraph_BP_eyecatch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.onFadeStart(out)__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_eyecatch_C::onFadeStart_out___DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.onFadeStart(out)__DelegateSignature");

	ABP_eyecatch_C_onFadeStart_out___DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.onFadeStart(in)__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_eyecatch_C::onFadeStart_in___DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.onFadeStart(in)__DelegateSignature");

	ABP_eyecatch_C_onFadeStart_in___DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.onFadeFinish(out)__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_eyecatch_C::onFadeFinish_out___DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.onFadeFinish(out)__DelegateSignature");

	ABP_eyecatch_C_onFadeFinish_out___DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.onFadeFinish(in)__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_eyecatch_C::onFadeFinish_in___DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.onFadeFinish(in)__DelegateSignature");

	ABP_eyecatch_C_onFadeFinish_in___DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
