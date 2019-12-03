
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

// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.UpdateFadeTimer
// (Net, Exec, Static, Delegate, DLLImport, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Done                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerTalkItem_C::STATIC_UpdateFadeTimer(float DeltaSeconds, bool* Done)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.UpdateFadeTimer");

	ABP_PlayerTalkItem_C_UpdateFadeTimer_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Done != nullptr)
		*Done = params.Done;
}


// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.UpdateFade
// (NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Delegate, BlueprintEvent, BlueprintPure)

void ABP_PlayerTalkItem_C::STATIC_UpdateFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.UpdateFade");

	ABP_PlayerTalkItem_C_UpdateFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.HideItem
// (Net, NetReliable, NetRequest, NetResponse, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_PlayerTalkItem_C::STATIC_HideItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.HideItem");

	ABP_PlayerTalkItem_C_HideItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.ShowItem
// (NetRequest, Exec, NetResponse, NetMulticast, Public, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_PlayerTalkItem_C::ShowItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.ShowItem");

	ABP_PlayerTalkItem_C_ShowItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.UserConstructionScript
// (Net, NetReliable, Native, NetResponse, Static, Public, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)

void ABP_PlayerTalkItem_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.UserConstructionScript");

	ABP_PlayerTalkItem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.ReceiveTick
// (Net, NetReliable, NetRequest, NetResponse, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerTalkItem_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.ReceiveTick");

	ABP_PlayerTalkItem_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.ExecuteUbergraph_BP_PlayerTalkItem
// (NetRequest, Exec, NetMulticast, Delegate, DLLImport, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerTalkItem_C::ExecuteUbergraph_BP_PlayerTalkItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.ExecuteUbergraph_BP_PlayerTalkItem");

	ABP_PlayerTalkItem_C_ExecuteUbergraph_BP_PlayerTalkItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.OnFinishHide__DelegateSignature
// (Net, NetReliable, NetRequest, NetResponse, Public, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)

void ABP_PlayerTalkItem_C::OnFinishHide__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.OnFinishHide__DelegateSignature");

	ABP_PlayerTalkItem_C_OnFinishHide__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
