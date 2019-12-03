
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

// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.DoesPlayerHaveFood
// (Net, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_TalkProcess_ShowHP_C::STATIC_DoesPlayerHaveFood()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.DoesPlayerHaveFood");

	UBP_TalkProcess_ShowHP_C_DoesPlayerHaveFood_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.StillRunning
// (Net, NetRequest, Exec, NetMulticast, Private, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_ShowHP_C::STATIC_TickTransitions(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.TickTransitions");

	UBP_TalkProcess_ShowHP_C_TickTransitions_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.IsLowHP
// (Net, NetReliable, Exec, Event, NetResponse, Public, NetServer)
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
// (Exec, Native, MulticastDelegate, Public, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsFull                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_ShowHP_C::SetGlobalHPResultFlag(bool bIsFull)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.SetGlobalHPResultFlag");

	UBP_TalkProcess_ShowHP_C_SetGlobalHPResultFlag_Params params;
	params.bIsFull = bIsFull;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.UpdateGlobalHPResultFlag
// (Net, NetReliable, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBP_TalkProcess_ShowHP_C::UpdateGlobalHPResultFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.UpdateGlobalHPResultFlag");

	UBP_TalkProcess_ShowHP_C_UpdateGlobalHPResultFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.CollectDependencies
// (Exec, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBP_TalkProcess_ShowHP_C::STATIC_CollectDependencies()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.CollectDependencies");

	UBP_TalkProcess_ShowHP_C_CollectDependencies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.DestroyUI
// (NetRequest, Exec, NetResponse, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBP_TalkProcess_ShowHP_C::DestroyUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.DestroyUI");

	UBP_TalkProcess_ShowHP_C_DestroyUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.SpawnUI
// (Net, NetRequest, Exec, Event, NetResponse, Static, Public, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_TalkProcess_ShowHP_C::STATIC_SpawnUI(class UClass* Class)
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
// (Net, NetReliable, Exec, Native, Static, Private, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_TalkProcess_ShowHP_C::STATIC_ShouldShowMeter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.ShouldShowMeter");

	UBP_TalkProcess_ShowHP_C_ShouldShowMeter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.OnLoaded_6A9A1405492543F002206D8B74ACA2FA
// (Net, NetReliable, Exec, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (Net, NetReliable, Exec, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBP_TalkProcess_ShowHP_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.Activate");

	UBP_TalkProcess_ShowHP_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.Finalize
// (Net, NetReliable, Exec, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBP_TalkProcess_ShowHP_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.Finalize");

	UBP_TalkProcess_ShowHP_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.FinishHint
// (NetReliable, Exec, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBP_TalkProcess_ShowHP_C::FinishHint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.FinishHint");

	UBP_TalkProcess_ShowHP_C_FinishHint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.CleanUp
// (NetReliable, Exec, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBP_TalkProcess_ShowHP_C::CleanUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.CleanUp");

	UBP_TalkProcess_ShowHP_C_CleanUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.Update
// (NetRequest, Exec, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_TalkProcess_ShowHP_C::Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.Update");

	UBP_TalkProcess_ShowHP_C_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.ForceFinish
// (Net, Exec, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBP_TalkProcess_ShowHP_C::ForceFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.ForceFinish");

	UBP_TalkProcess_ShowHP_C_ForceFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.UnbindInventoryClose
// (Exec, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBP_TalkProcess_ShowHP_C::UnbindInventoryClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.UnbindInventoryClose");

	UBP_TalkProcess_ShowHP_C_UnbindInventoryClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.CloseInventory
// (Net, NetReliable, NetRequest, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBP_TalkProcess_ShowHP_C::CloseInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.CloseInventory");

	UBP_TalkProcess_ShowHP_C_CloseInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkProcess_ShowHP.BP_TalkProcess_ShowHP_C.ExecuteUbergraph_BP_TalkProcess_ShowHP
// (Net, NetRequest, NetResponse, NetMulticast, Public, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
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
