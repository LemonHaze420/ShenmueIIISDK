
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

// Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.ShowHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_LoadingHintWindowBase_C::ShowHP(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.ShowHP");

	ABP_UI_LoadingHintWindowBase_C_ShowHP_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.ShowHint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_LoadingHintWindowParam Params                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_LoadingHintWindowBase_C::ShowHint(const struct FST_LoadingHintWindowParam& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.ShowHint");

	ABP_UI_LoadingHintWindowBase_C_ShowHint_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.NotifyLoadingDone
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_LoadingHintWindowBase_C::NotifyLoadingDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.NotifyLoadingDone");

	ABP_UI_LoadingHintWindowBase_C_NotifyLoadingDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_LoadingHintWindowBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.UserConstructionScript");

	ABP_UI_LoadingHintWindowBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.OnWindowClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_UI_LoadingHintWindowBase_C::OnWindowClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.OnWindowClose__DelegateSignature");

	ABP_UI_LoadingHintWindowBase_C_OnWindowClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
