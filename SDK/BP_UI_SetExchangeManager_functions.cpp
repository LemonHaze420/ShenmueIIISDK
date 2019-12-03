
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

// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.IsVisibleRStickCenterPos
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsCenter                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_SetExchangeManager_C::STATIC_IsVisibleRStickCenterPos(bool* IsCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.IsVisibleRStickCenterPos");

	ABP_UI_SetExchangeManager_C_IsVisibleRStickCenterPos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCenter != nullptr)
		*IsCenter = params.IsCenter;
}


// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.IsVisibleRStickOnlyViewMode
// (Exec, NetResponse, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_UI_SetExchangeManager_C::IsVisibleRStickOnlyViewMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.IsVisibleRStickOnlyViewMode");

	ABP_UI_SetExchangeManager_C_IsVisibleRStickOnlyViewMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.MakeAreaItemIdList
// (Net, NetReliable, Native, NetMulticast, MulticastDelegate, Delegate, NetClient, Const)

void ABP_UI_SetExchangeManager_C::MakeAreaItemIdList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.MakeAreaItemIdList");

	ABP_UI_SetExchangeManager_C_MakeAreaItemIdList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.GetItem
// (NetReliable, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void ABP_UI_SetExchangeManager_C::STATIC_GetItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.GetItem");

	ABP_UI_SetExchangeManager_C_GetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.SetRightWindow
// (Net, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_UI_SetExchangeManager_C::STATIC_SetRightWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.SetRightWindow");

	ABP_UI_SetExchangeManager_C_SetRightWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.SetExchangeChangePage
// (NetRequest, Event, NetMulticast, Public, Private, NetServer, NetClient, Const)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_SetExchangeManager_C::SetExchangeChangePage(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.SetExchangeChangePage");

	ABP_UI_SetExchangeManager_C_SetExchangeChangePage_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.MakeItemIdList
// (Net, NetRequest, Native, NetResponse, Public, Private, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent, BlueprintPure)

void ABP_UI_SetExchangeManager_C::MakeItemIdList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.MakeItemIdList");

	ABP_UI_SetExchangeManager_C_MakeItemIdList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.UserConstructionScript
// (Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_UI_SetExchangeManager_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.UserConstructionScript");

	ABP_UI_SetExchangeManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.ReceiveBeginPlay
// (NetReliable, Static, NetMulticast, Public, Protected, NetServer)

void ABP_UI_SetExchangeManager_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.ReceiveBeginPlay");

	ABP_UI_SetExchangeManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.ReceiveTick
// (Net, NetRequest, Exec, Event, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_SetExchangeManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.ReceiveTick");

	ABP_UI_SetExchangeManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.MoveCategoryFocusAfter
// (Net, NetReliable, NetRequest, NetResponse, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_UI_SetExchangeManager_C::MoveCategoryFocusAfter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.MoveCategoryFocusAfter");

	ABP_UI_SetExchangeManager_C_MoveCategoryFocusAfter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.ChangePage
// (Net, NetRequest, Exec, Event, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_SetExchangeManager_C::ChangePage(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.ChangePage");

	ABP_UI_SetExchangeManager_C_ChangePage_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.PushCheckDialog
// (NetRequest, Exec, Event, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_UI_Button>      PushButton                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_SetExchangeManager_C::PushCheckDialog(TEnumAsByte<EN_UI_Button> PushButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.PushCheckDialog");

	ABP_UI_SetExchangeManager_C_PushCheckDialog_Params params;
	params.PushButton = PushButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.ExecuteUbergraph_BP_UI_SetExchangeManager
// (Net, Exec, Native, Static, NetMulticast, Public, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_SetExchangeManager_C::STATIC_ExecuteUbergraph_BP_UI_SetExchangeManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_SetExchangeManager.BP_UI_SetExchangeManager_C.ExecuteUbergraph_BP_UI_SetExchangeManager");

	ABP_UI_SetExchangeManager_C_ExecuteUbergraph_BP_UI_SetExchangeManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
