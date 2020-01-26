
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

// Function BP_MenuWindowManager.BP_MenuWindowManager_C.SetItemListViewerManagerClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MenuWindowManager_C::SetItemListViewerManagerClass(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.SetItemListViewerManagerClass");

	ABP_MenuWindowManager_C_SetItemListViewerManagerClass_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.CheckBehaviorState
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MenuWindowManager_C::CheckBehaviorState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.CheckBehaviorState");

	ABP_MenuWindowManager_C_CheckBehaviorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.CheckDoorOpen
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           DoMenu                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MenuWindowManager_C::CheckDoorOpen(bool* DoMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.CheckDoorOpen");

	ABP_MenuWindowManager_C_CheckDoorOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DoMenu != nullptr)
		*DoMenu = params.DoMenu;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.StartAllActor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MenuWindowManager_C::StartAllActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.StartAllActor");

	ABP_MenuWindowManager_C_StartAllActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.StopAllActor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MenuWindowManager_C::StopAllActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.StopAllActor");

	ABP_MenuWindowManager_C_StopAllActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.SetDenyFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Deny                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           succes                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MenuWindowManager_C::SetDenyFlag(bool Deny, bool* succes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.SetDenyFlag");

	ABP_MenuWindowManager_C_SetDenyFlag_Params params;
	params.Deny = Deny;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (succes != nullptr)
		*succes = params.succes;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.IsDetected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsDetected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MenuWindowManager_C::IsDetected(bool* IsDetected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.IsDetected");

	ABP_MenuWindowManager_C_IsDetected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDetected != nullptr)
		*IsDetected = params.IsDetected;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MenuWindowManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.UserConstructionScript");

	ABP_MenuWindowManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MenuWindowManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.ReceiveTick");

	ABP_MenuWindowManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.doCmd_FirstDetectRetain(Menu)
// (BlueprintCallable, BlueprintEvent)

void ABP_MenuWindowManager_C::doCmd_FirstDetectRetain_Menu_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.doCmd_FirstDetectRetain(Menu)");

	ABP_MenuWindowManager_C_doCmd_FirstDetectRetain_Menu__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.delayedRegistCheck(detector)
// (BlueprintCallable, BlueprintEvent)

void ABP_MenuWindowManager_C::delayedRegistCheck_detector_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.delayedRegistCheck(detector)");

	ABP_MenuWindowManager_C_delayedRegistCheck_detector__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.StartMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_MenuWindowManager_C::StartMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.StartMenu");

	ABP_MenuWindowManager_C_StartMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.ActionStartButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPress                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MenuWindowManager_C::ActionStartButton(bool IsPress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.ActionStartButton");

	ABP_MenuWindowManager_C_ActionStartButton_Params params;
	params.IsPress = IsPress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.FinishMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_MenuWindowManager_C::FinishMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.FinishMenu");

	ABP_MenuWindowManager_C_FinishMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.OpenInventory_EatEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MenuWindowManager_C::OpenInventory_EatEvent(int ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.OpenInventory_EatEvent");

	ABP_MenuWindowManager_C_OpenInventory_EatEvent_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.Open_ItemWindow
// (BlueprintCallable, BlueprintEvent)

void ABP_MenuWindowManager_C::Open_ItemWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.Open_ItemWindow");

	ABP_MenuWindowManager_C_Open_ItemWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MenuWindowManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.ReceiveBeginPlay");

	ABP_MenuWindowManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.ExecuteUbergraph_BP_MenuWindowManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MenuWindowManager_C::ExecuteUbergraph_BP_MenuWindowManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.ExecuteUbergraph_BP_MenuWindowManager");

	ABP_MenuWindowManager_C_ExecuteUbergraph_BP_MenuWindowManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.OnMenuClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MenuWindowManager_C::OnMenuClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.OnMenuClosed__DelegateSignature");

	ABP_MenuWindowManager_C_OnMenuClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
