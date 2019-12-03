
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

// Function BP_MenuWindowManager.BP_MenuWindowManager_C.SetItemListViewerManagerClass
// (Net, NetReliable, Exec, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MenuWindowManager_C::STATIC_SetItemListViewerManagerClass(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.SetItemListViewerManagerClass");

	ABP_MenuWindowManager_C_SetItemListViewerManagerClass_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.CheckBehaviorState
// (NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MenuWindowManager_C::STATIC_CheckBehaviorState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.CheckBehaviorState");

	ABP_MenuWindowManager_C_CheckBehaviorState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.CheckDoorOpen
// (Net, NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable)
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
// (Net, NetReliable, Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)

void ABP_MenuWindowManager_C::StartAllActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.StartAllActor");

	ABP_MenuWindowManager_C_StartAllActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.StopAllActor
// (NetRequest, NetMulticast, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_MenuWindowManager_C::StopAllActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.StopAllActor");

	ABP_MenuWindowManager_C_StopAllActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.SetDenyFlag
// (NetRequest, Exec, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
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
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           IsDetected                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MenuWindowManager_C::IsDetected(bool* IsDetected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.IsDetected");

	ABP_MenuWindowManager_C_IsDetected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDetected != nullptr)
		*IsDetected = params.IsDetected;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.UserConstructionScript
// (NetRequest, Native, Event, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MenuWindowManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.UserConstructionScript");

	ABP_MenuWindowManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.ReceiveTick
// (Net, NetReliable, Exec, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
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
// (Native, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_MenuWindowManager_C::STATIC_doCmd_FirstDetectRetain_Menu_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.doCmd_FirstDetectRetain(Menu)");

	ABP_MenuWindowManager_C_doCmd_FirstDetectRetain_Menu__Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.delayedRegistCheck(detector)
// (Net, NetReliable, NetRequest, Exec, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_MenuWindowManager_C::STATIC_delayedRegistCheck_detector_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.delayedRegistCheck(detector)");

	ABP_MenuWindowManager_C_delayedRegistCheck_detector__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.StartMenu
// (Net, NetReliable, NetRequest, Exec, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_MenuWindowManager_C::STATIC_StartMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.StartMenu");

	ABP_MenuWindowManager_C_StartMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.ActionStartButton
// (NetReliable, Exec, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
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
// (NetReliable, NetRequest, Exec, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_MenuWindowManager_C::STATIC_FinishMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.FinishMenu");

	ABP_MenuWindowManager_C_FinishMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.OpenInventory_EatEvent
// (NetReliable, Exec, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
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
// (Net, NetRequest, Exec, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_MenuWindowManager_C::STATIC_Open_ItemWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.Open_ItemWindow");

	ABP_MenuWindowManager_C_Open_ItemWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.ReceiveBeginPlay
// (NetRequest, Exec, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_MenuWindowManager_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.ReceiveBeginPlay");

	ABP_MenuWindowManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.ExecuteUbergraph_BP_MenuWindowManager
// (Static, NetMulticast, MulticastDelegate, Public, HasDefaults, NetClient, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MenuWindowManager_C::STATIC_ExecuteUbergraph_BP_MenuWindowManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.ExecuteUbergraph_BP_MenuWindowManager");

	ABP_MenuWindowManager_C_ExecuteUbergraph_BP_MenuWindowManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuWindowManager.BP_MenuWindowManager_C.OnMenuClosed__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_MenuWindowManager_C::OnMenuClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuWindowManager.BP_MenuWindowManager_C.OnMenuClosed__DelegateSignature");

	ABP_MenuWindowManager_C_OnMenuClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
