
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

// Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.SHOWHP
// (Net, NetRequest, Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_LoadingHintWindowBase_C::SHOWHP(int Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.SHOWHP");

	ABP_UI_LoadingHintWindowBase_C_SHOWHP_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.ShowHint
// (Exec, Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FST_LoadingHintWindowParam Params                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_LoadingHintWindowBase_C::ShowHint(const struct FST_LoadingHintWindowParam& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.ShowHint");

	ABP_UI_LoadingHintWindowBase_C_ShowHint_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.NotifyLoadingDone
// (NetReliable, Exec, Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_UI_LoadingHintWindowBase_C::NotifyLoadingDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.NotifyLoadingDone");

	ABP_UI_LoadingHintWindowBase_C_NotifyLoadingDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.UserConstructionScript
// (NetReliable, Exec, Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_UI_LoadingHintWindowBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.UserConstructionScript");

	ABP_UI_LoadingHintWindowBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.OnWindowClose__DelegateSignature
// (Net, Exec, Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_UI_LoadingHintWindowBase_C::OnWindowClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_LoadingHintWindowBase.BP_UI_LoadingHintWindowBase_C.OnWindowClose__DelegateSignature");

	ABP_UI_LoadingHintWindowBase_C_OnWindowClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
