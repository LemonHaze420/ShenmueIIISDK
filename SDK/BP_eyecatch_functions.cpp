
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

// Function BP_eyecatch.BP_eyecatch_C.UpdateDateTime
// (NetReliable, Event, NetResponse, Public, Delegate, HasOutParms, NetClient, BlueprintPure)

void ABP_eyecatch_C::UpdateDateTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.UpdateDateTime");

	ABP_eyecatch_C_UpdateDateTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.HideWidget
// (Net, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport)

void ABP_eyecatch_C::STATIC_HideWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.HideWidget");

	ABP_eyecatch_C_HideWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.IsVisible
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, Public, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_eyecatch_C::STATIC_IsVisible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.IsVisible");

	ABP_eyecatch_C_IsVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function BP_eyecatch.BP_eyecatch_C.SetVisibility
// (NetRequest, Exec, Event, NetResponse, Static, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_eyecatch_C::STATIC_SetVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.SetVisibility");

	ABP_eyecatch_C_SetVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.setTitle
// (Net, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, NetClient, BlueprintPure)
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
// (Net, NetRequest, Event, NetResponse, Public, Delegate, HasOutParms, NetClient, BlueprintPure)
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
// (Native, Event, NetResponse, MulticastDelegate, Public, Protected, NetServer, NetClient, BlueprintPure)

void ABP_eyecatch_C::UpdateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.UpdateWidget");

	ABP_eyecatch_C_UpdateWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.ShowEyecatch
// (Exec, Native, Event, NetResponse, MulticastDelegate, Public, Protected, NetServer, NetClient, BlueprintPure)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.UserConstructionScript
// (NetReliable, Native, Event, NetResponse, NetMulticast, Delegate, NetServer, NetClient)

void ABP_eyecatch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.UserConstructionScript");

	ABP_eyecatch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.ReceiveBeginPlay
// (Net, NetRequest, Event, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, BlueprintEvent)

void ABP_eyecatch_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.ReceiveBeginPlay");

	ABP_eyecatch_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.catchFadeInFinished
// (NetRequest, Event, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, BlueprintEvent)

void ABP_eyecatch_C::STATIC_catchFadeInFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.catchFadeInFinished");

	ABP_eyecatch_C_catchFadeInFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.waitEasy
// (NetRequest, Event, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, BlueprintEvent)

void ABP_eyecatch_C::STATIC_waitEasy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.waitEasy");

	ABP_eyecatch_C_waitEasy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.catchEndWaitEasy
// (Net, NetReliable, Event, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, BlueprintEvent)

void ABP_eyecatch_C::STATIC_catchEndWaitEasy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.catchEndWaitEasy");

	ABP_eyecatch_C_catchEndWaitEasy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.endEasy
// (Net, NetReliable, Event, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, BlueprintEvent)

void ABP_eyecatch_C::STATIC_endEasy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.endEasy");

	ABP_eyecatch_C_endEasy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.catchFadeOutFinished
// (NetReliable, Event, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, BlueprintEvent)

void ABP_eyecatch_C::STATIC_catchFadeOutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.catchFadeOutFinished");

	ABP_eyecatch_C_catchFadeOutFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.finishEasy
// (NetReliable, Event, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, BlueprintEvent)

void ABP_eyecatch_C::STATIC_finishEasy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.finishEasy");

	ABP_eyecatch_C_finishEasy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.BindFinishFadeIn
// (Net, NetReliable, NetRequest, Event, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, BlueprintEvent)

void ABP_eyecatch_C::STATIC_BindFinishFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.BindFinishFadeIn");

	ABP_eyecatch_C_BindFinishFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.branch_easy(in)
// (Net, NetReliable, NetRequest, Event, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, BlueprintEvent)

void ABP_eyecatch_C::STATIC_branch_easy_in_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.branch_easy(in)");

	ABP_eyecatch_C_branch_easy_in__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.BindFinishFadeOut
// (NetReliable, NetRequest, Event, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, BlueprintEvent)

void ABP_eyecatch_C::STATIC_BindFinishFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.BindFinishFadeOut");

	ABP_eyecatch_C_BindFinishFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.branch_easy(out)
// (NetReliable, NetRequest, Event, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, BlueprintEvent)

void ABP_eyecatch_C::STATIC_branch_easy_out_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.branch_easy(out)");

	ABP_eyecatch_C_branch_easy_out__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.startEasy
// (Net, NetRequest, Event, Static, NetMulticast, Private, Protected, NetServer, HasOutParms, BlueprintEvent)

void ABP_eyecatch_C::STATIC_startEasy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.startEasy");

	ABP_eyecatch_C_startEasy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.ExecuteUbergraph_BP_eyecatch
// (Net, Exec, Event, NetResponse, Static, MulticastDelegate, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_eyecatch_C::STATIC_ExecuteUbergraph_BP_eyecatch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.ExecuteUbergraph_BP_eyecatch");

	ABP_eyecatch_C_ExecuteUbergraph_BP_eyecatch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.onFadeStart(out)__DelegateSignature
// (Net, NetReliable, Native, Event, NetResponse, NetMulticast, Delegate, NetServer, NetClient)

void ABP_eyecatch_C::onFadeStart_out___DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.onFadeStart(out)__DelegateSignature");

	ABP_eyecatch_C_onFadeStart_out___DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.onFadeStart(in)__DelegateSignature
// (NetReliable, Native, Event, NetResponse, NetMulticast, Delegate, NetServer, NetClient)

void ABP_eyecatch_C::onFadeStart_in___DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.onFadeStart(in)__DelegateSignature");

	ABP_eyecatch_C_onFadeStart_in___DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.onFadeFinish(out)__DelegateSignature
// (NetReliable, Native, Event, NetResponse, NetMulticast, Delegate, NetServer, NetClient)

void ABP_eyecatch_C::onFadeFinish_out___DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.onFadeFinish(out)__DelegateSignature");

	ABP_eyecatch_C_onFadeFinish_out___DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_eyecatch.BP_eyecatch_C.onFadeFinish(in)__DelegateSignature
// (NetReliable, Native, Event, NetResponse, NetMulticast, Delegate, NetServer, NetClient)

void ABP_eyecatch_C::onFadeFinish_in___DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_eyecatch.BP_eyecatch_C.onFadeFinish(in)__DelegateSignature");

	ABP_eyecatch_C_onFadeFinish_in___DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
