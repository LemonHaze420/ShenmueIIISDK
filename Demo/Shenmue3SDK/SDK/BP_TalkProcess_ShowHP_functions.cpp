
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

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.DoesPlayerHaveFood
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_TalkProcess_ShowHP_C::DoesPlayerHaveFood()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.DoesPlayerHaveFood");

	UBP_TalkProcess_ShowHP_C_DoesPlayerHaveFood_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.StillRunning
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_TalkProcess_ShowHP_C::StillRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.StillRunning");

	UBP_TalkProcess_ShowHP_C_StillRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.TickTransitions
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_ShowHP_C::TickTransitions(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.TickTransitions");

	UBP_TalkProcess_ShowHP_C_TickTransitions_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.IsLowHP
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_TalkProcess_ShowHP_C::IsLowHP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.IsLowHP");

	UBP_TalkProcess_ShowHP_C_IsLowHP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.SetGlobalHPResultFlag
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsFull                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_ShowHP_C::SetGlobalHPResultFlag(bool bIsFull)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.SetGlobalHPResultFlag");

	UBP_TalkProcess_ShowHP_C_SetGlobalHPResultFlag_Params params;
	params.bIsFull = bIsFull;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.UpdateGlobalHPResultFlag
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_ShowHP_C::UpdateGlobalHPResultFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.UpdateGlobalHPResultFlag");

	UBP_TalkProcess_ShowHP_C_UpdateGlobalHPResultFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.CollectDependencies
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_ShowHP_C::CollectDependencies()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.CollectDependencies");

	UBP_TalkProcess_ShowHP_C_CollectDependencies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.DestroyUI
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_ShowHP_C::DestroyUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.DestroyUI");

	UBP_TalkProcess_ShowHP_C_DestroyUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.SpawnUI
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_TalkProcess_ShowHP_C::SpawnUI(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.SpawnUI");

	UBP_TalkProcess_ShowHP_C_SpawnUI_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.ShouldShowMeter
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_TalkProcess_ShowHP_C::ShouldShowMeter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.ShouldShowMeter");

	UBP_TalkProcess_ShowHP_C_ShouldShowMeter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.OnLoaded_6A9A1405492543F002206D8B74ACA2FA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_ShowHP_C::OnLoaded_6A9A1405492543F002206D8B74ACA2FA(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.OnLoaded_6A9A1405492543F002206D8B74ACA2FA");

	UBP_TalkProcess_ShowHP_C_OnLoaded_6A9A1405492543F002206D8B74ACA2FA_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.Activate
// (Event, Public, BlueprintEvent)

void UBP_TalkProcess_ShowHP_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.Activate");

	UBP_TalkProcess_ShowHP_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.Finalize
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_ShowHP_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.Finalize");

	UBP_TalkProcess_ShowHP_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.FinishHint
// (BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_ShowHP_C::FinishHint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.FinishHint");

	UBP_TalkProcess_ShowHP_C_FinishHint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.CleanUp
// (BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_ShowHP_C::CleanUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.CleanUp");

	UBP_TalkProcess_ShowHP_C_CleanUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.Update
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_ShowHP_C::Update(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.Update");

	UBP_TalkProcess_ShowHP_C_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.ForceFinish
// (BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_ShowHP_C::ForceFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.ForceFinish");

	UBP_TalkProcess_ShowHP_C_ForceFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.UnbindInventoryClose
// (BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_ShowHP_C::UnbindInventoryClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.UnbindInventoryClose");

	UBP_TalkProcess_ShowHP_C_UnbindInventoryClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.CloseInventory
// (BlueprintCallable, BlueprintEvent)

void UBP_TalkProcess_ShowHP_C::CloseInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.CloseInventory");

	UBP_TalkProcess_ShowHP_C_CloseInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.ExecuteUbergraph_BP_TalkProcess_ShowHP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_ShowHP_C::ExecuteUbergraph_BP_TalkProcess_ShowHP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.ExecuteUbergraph_BP_TalkProcess_ShowHP");

	UBP_TalkProcess_ShowHP_C_ExecuteUbergraph_BP_TalkProcess_ShowHP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
