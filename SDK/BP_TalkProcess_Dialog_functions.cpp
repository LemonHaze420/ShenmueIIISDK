
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

// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.GetDialogStringId
// (Net, NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBP_TalkProcess_Dialog_C::STATIC_GetDialogStringId()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.GetDialogStringId");

	UBP_TalkProcess_Dialog_C_GetDialogStringId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.PlaySoundEffect
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           bConfirm                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Dialog_C::PlaySoundEffect(bool bConfirm)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.PlaySoundEffect");

	UBP_TalkProcess_Dialog_C_PlaySoundEffect_Params params;
	params.bConfirm = bConfirm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.MakeDialogParameter
// (NetReliable, Exec, Event, Static, Private, Delegate, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FST_GeneralWindowParam  DialogParam                    (Parm, OutParm)

void UBP_TalkProcess_Dialog_C::STATIC_MakeDialogParameter(struct FST_GeneralWindowParam* DialogParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.MakeDialogParameter");

	UBP_TalkProcess_Dialog_C_MakeDialogParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DialogParam != nullptr)
		*DialogParam = params.DialogParam;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.BindRewardScreenEvents
// (Net, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBP_TalkProcess_Dialog_C::BindRewardScreenEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.BindRewardScreenEvents");

	UBP_TalkProcess_Dialog_C_BindRewardScreenEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.UnbindRewardScreenEvents
// (Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBP_TalkProcess_Dialog_C::UnbindRewardScreenEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.UnbindRewardScreenEvents");

	UBP_TalkProcess_Dialog_C_UnbindRewardScreenEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.OnRewardScreenEnd
// (Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBP_TalkProcess_Dialog_C::OnRewardScreenEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.OnRewardScreenEnd");

	UBP_TalkProcess_Dialog_C_OnRewardScreenEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.OnWindowDecide
// (Net, Native, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Dialog_C::OnWindowDecide(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.OnWindowDecide");

	UBP_TalkProcess_Dialog_C_OnWindowDecide_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.OnWindowCancel
// (Net, NetReliable, NetRequest, Exec, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Dialog_C::OnWindowCancel(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.OnWindowCancel");

	UBP_TalkProcess_Dialog_C_OnWindowCancel_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.OnWindowClose
// (Native, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Dialog_C::OnWindowClose(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.OnWindowClose");

	UBP_TalkProcess_Dialog_C_OnWindowClose_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.BindDialogInput
// (NetReliable, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBP_TalkProcess_Dialog_C::BindDialogInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.BindDialogInput");

	UBP_TalkProcess_Dialog_C_BindDialogInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.UnbindDialogEvents
// (Net, NetRequest, Exec, Native, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBP_TalkProcess_Dialog_C::UnbindDialogEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.UnbindDialogEvents");

	UBP_TalkProcess_Dialog_C_UnbindDialogEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.BindDialogClose
// (Net, NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBP_TalkProcess_Dialog_C::BindDialogClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.BindDialogClose");

	UBP_TalkProcess_Dialog_C_BindDialogClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.Activate
// (NetReliable, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBP_TalkProcess_Dialog_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.Activate");

	UBP_TalkProcess_Dialog_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.Update
// (NetReliable, Native, Event, Static, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Dialog_C::STATIC_Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.Update");

	UBP_TalkProcess_Dialog_C_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.Finalize
// (Net, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBP_TalkProcess_Dialog_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.Finalize");

	UBP_TalkProcess_Dialog_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.ExecuteUbergraph_BP_TalkProcess_Dialog
// (Net, NetResponse, Static, MulticastDelegate, Protected, NetServer, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Dialog_C::STATIC_ExecuteUbergraph_BP_TalkProcess_Dialog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.ExecuteUbergraph_BP_TalkProcess_Dialog");

	UBP_TalkProcess_Dialog_C_ExecuteUbergraph_BP_TalkProcess_Dialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
