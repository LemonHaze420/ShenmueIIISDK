
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

// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.UpdateFadeTimer
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Done                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerTalkItem_C::UpdateFadeTimer(float DeltaSeconds, bool* Done)
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
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerTalkItem_C::UpdateFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.UpdateFade");

	ABP_PlayerTalkItem_C_UpdateFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.HideItem
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerTalkItem_C::HideItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.HideItem");

	ABP_PlayerTalkItem_C_HideItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.ShowItem
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerTalkItem_C::ShowItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.ShowItem");

	ABP_PlayerTalkItem_C_ShowItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerTalkItem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.UserConstructionScript");

	ABP_PlayerTalkItem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PlayerTalkItem_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.ReceiveTick");

	ABP_PlayerTalkItem_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerTalkItem.BP_PlayerTalkItem_C.ExecuteUbergraph_BP_PlayerTalkItem
// ()
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
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

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
