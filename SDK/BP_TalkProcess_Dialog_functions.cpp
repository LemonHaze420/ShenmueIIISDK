
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
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_Dialog_C::GetDialogStringId()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.GetDialogStringId");

	UBP_TalkProcess_Dialog_C_GetDialogStringId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.PlaySoundEffect
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_GeneralWindowParam  DialogParam                    (Parm, OutParm)

void UBP_TalkProcess_Dialog_C::MakeDialogParameter(struct FST_GeneralWindowParam* DialogParam)
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
// (BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_Dialog_C::BindRewardScreenEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.BindRewardScreenEvents");

	UBP_TalkProcess_Dialog_C_BindRewardScreenEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.UnbindRewardScreenEvents
// (BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_Dialog_C::UnbindRewardScreenEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.UnbindRewardScreenEvents");

	UBP_TalkProcess_Dialog_C_UnbindRewardScreenEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.OnRewardScreenEnd
// (BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_Dialog_C::OnRewardScreenEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.OnRewardScreenEnd");

	UBP_TalkProcess_Dialog_C_OnRewardScreenEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.OnWindowDecide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Dialog_C::OnWindowDecide(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.OnWindowDecide");

	UBP_TalkProcess_Dialog_C_OnWindowDecide_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.OnWindowCancel
// (BlueprintCallable, BlueprintEvent)
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
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Dialog_C::OnWindowClose(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.OnWindowClose");

	UBP_TalkProcess_Dialog_C_OnWindowClose_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.BindDialogInput
// (BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_Dialog_C::BindDialogInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.BindDialogInput");

	UBP_TalkProcess_Dialog_C_BindDialogInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.UnbindDialogEvents
// (BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_Dialog_C::UnbindDialogEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.UnbindDialogEvents");

	UBP_TalkProcess_Dialog_C_UnbindDialogEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.BindDialogClose
// (BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_Dialog_C::BindDialogClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.BindDialogClose");

	UBP_TalkProcess_Dialog_C_BindDialogClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.Activate
// (Event, Public, BlueprintEvent)

void UBP_TalkProcess_Dialog_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.Activate");

	UBP_TalkProcess_Dialog_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.Update
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Dialog_C::Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.Update");

	UBP_TalkProcess_Dialog_C_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.Finalize
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_Dialog_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.Finalize");

	UBP_TalkProcess_Dialog_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_Dialog.BP_TalkProcess_Dialog_C.ExecuteUbergraph_BP_TalkProcess_Dialog
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_Dialog_C::ExecuteUbergraph_BP_TalkProcess_Dialog(int EntryPoint)
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
