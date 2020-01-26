
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_DLCDialogManager.BP_DLCDialogManager_C.AddItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DLCDialogManager_C::AddItem(int ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLCDialogManager.BP_DLCDialogManager_C.AddItem");

	ABP_DLCDialogManager_C_AddItem_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLCDialogManager.BP_DLCDialogManager_C.CheckBattleRallyItem
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DLCDialogManager_C::CheckBattleRallyItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLCDialogManager.BP_DLCDialogManager_C.CheckBattleRallyItem");

	ABP_DLCDialogManager_C_CheckBattleRallyItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLCDialogManager.BP_DLCDialogManager_C.CheckDLCDialog
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DLCDialogManager_C::CheckDLCDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLCDialogManager.BP_DLCDialogManager_C.CheckDLCDialog");

	ABP_DLCDialogManager_C_CheckDLCDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLCDialogManager.BP_DLCDialogManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DLCDialogManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLCDialogManager.BP_DLCDialogManager_C.UserConstructionScript");

	ABP_DLCDialogManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLCDialogManager.BP_DLCDialogManager_C.CheckFreerun
// (BlueprintCallable, BlueprintEvent)

void ABP_DLCDialogManager_C::CheckFreerun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLCDialogManager.BP_DLCDialogManager_C.CheckFreerun");

	ABP_DLCDialogManager_C_CheckFreerun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLCDialogManager.BP_DLCDialogManager_C.DecideDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DLCDialogManager_C::DecideDialog(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLCDialogManager.BP_DLCDialogManager_C.DecideDialog");

	ABP_DLCDialogManager_C_DecideDialog_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLCDialogManager.BP_DLCDialogManager_C.ChangePlayerBehavior
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3PlayerBehavior              NewId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3PlayerBehavior              OldId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DLCDialogManager_C::ChangePlayerBehavior(ES3PlayerBehavior NewId, ES3PlayerBehavior OldId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLCDialogManager.BP_DLCDialogManager_C.ChangePlayerBehavior");

	ABP_DLCDialogManager_C_ChangePlayerBehavior_Params params;
	params.NewId = NewId;
	params.OldId = OldId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLCDialogManager.BP_DLCDialogManager_C.ExecCheck
// (BlueprintCallable, BlueprintEvent)

void ABP_DLCDialogManager_C::ExecCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLCDialogManager.BP_DLCDialogManager_C.ExecCheck");

	ABP_DLCDialogManager_C_ExecCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLCDialogManager.BP_DLCDialogManager_C.ShowDLCDialog
// (BlueprintCallable, BlueprintEvent)

void ABP_DLCDialogManager_C::ShowDLCDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLCDialogManager.BP_DLCDialogManager_C.ShowDLCDialog");

	ABP_DLCDialogManager_C_ShowDLCDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLCDialogManager.BP_DLCDialogManager_C.FinishedDLC
// (BlueprintCallable, BlueprintEvent)

void ABP_DLCDialogManager_C::FinishedDLC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DLCDialogManager.BP_DLCDialogManager_C.FinishedDLC");

	ABP_DLCDialogManager_C_FinishedDLC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DLCDialogManager.BP_DLCDialogManager_C.ExecuteUbergraph_BP_DLCDialogManager
// (HasDefaults)
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
