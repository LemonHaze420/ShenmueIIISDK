
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

// Function BP_DLCDialogManager.BP_DLCDialogManager_C.AddItem
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DLCDialogManager_C::STATIC_AddItem(int ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLCDialogManager.BP_DLCDialogManager_C.AddItem");

	ABP_DLCDialogManager_C_AddItem_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLCDialogManager.BP_DLCDialogManager_C.CheckBattleRallyItem
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, HasDefaults, NetClient, BlueprintPure)

void ABP_DLCDialogManager_C::CheckBattleRallyItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLCDialogManager.BP_DLCDialogManager_C.CheckBattleRallyItem");

	ABP_DLCDialogManager_C_CheckBattleRallyItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLCDialogManager.BP_DLCDialogManager_C.CheckDLCDialog
// (NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, HasDefaults, NetClient, BlueprintPure)

void ABP_DLCDialogManager_C::CheckDLCDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLCDialogManager.BP_DLCDialogManager_C.CheckDLCDialog");

	ABP_DLCDialogManager_C_CheckDLCDialog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLCDialogManager.BP_DLCDialogManager_C.UserConstructionScript
// (NetReliable, NetRequest, Event, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_DLCDialogManager_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLCDialogManager.BP_DLCDialogManager_C.UserConstructionScript");

	ABP_DLCDialogManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLCDialogManager.BP_DLCDialogManager_C.CheckFreerun
// (Event, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_DLCDialogManager_C::CheckFreerun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLCDialogManager.BP_DLCDialogManager_C.CheckFreerun");

	ABP_DLCDialogManager_C_CheckFreerun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLCDialogManager.BP_DLCDialogManager_C.DecideDialog
// (NetReliable, NetResponse, Static, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DLCDialogManager_C::STATIC_DecideDialog(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLCDialogManager.BP_DLCDialogManager_C.DecideDialog");

	ABP_DLCDialogManager_C_DecideDialog_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLCDialogManager.BP_DLCDialogManager_C.ChangePlayerBehavior
// (Net, NetReliable, NetRequest, Native, Static, MulticastDelegate, Private, Protected, NetServer, BlueprintCallable)
// Parameters:
// ES3PlayerBehavior              NewId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3PlayerBehavior              OldId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DLCDialogManager_C::STATIC_ChangePlayerBehavior(ES3PlayerBehavior NewId, ES3PlayerBehavior OldId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLCDialogManager.BP_DLCDialogManager_C.ChangePlayerBehavior");

	ABP_DLCDialogManager_C_ChangePlayerBehavior_Params params;
	params.NewId = NewId;
	params.OldId = OldId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLCDialogManager.BP_DLCDialogManager_C.ExecCheck
// (Net, NetReliable, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_DLCDialogManager_C::ExecCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLCDialogManager.BP_DLCDialogManager_C.ExecCheck");

	ABP_DLCDialogManager_C_ExecCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLCDialogManager.BP_DLCDialogManager_C.ShowDLCDialog
// (Net, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_DLCDialogManager_C::ShowDLCDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLCDialogManager.BP_DLCDialogManager_C.ShowDLCDialog");

	ABP_DLCDialogManager_C_ShowDLCDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLCDialogManager.BP_DLCDialogManager_C.FinishedDLC
// (NetReliable, NetRequest, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_DLCDialogManager_C::FinishedDLC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLCDialogManager.BP_DLCDialogManager_C.FinishedDLC");

	ABP_DLCDialogManager_C_FinishedDLC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLCDialogManager.BP_DLCDialogManager_C.ExecuteUbergraph_BP_DLCDialogManager
// (NetRequest, Exec, Event, MulticastDelegate, Public, Protected, HasOutParms, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DLCDialogManager_C::ExecuteUbergraph_BP_DLCDialogManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLCDialogManager.BP_DLCDialogManager_C.ExecuteUbergraph_BP_DLCDialogManager");

	ABP_DLCDialogManager_C_ExecuteUbergraph_BP_DLCDialogManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
