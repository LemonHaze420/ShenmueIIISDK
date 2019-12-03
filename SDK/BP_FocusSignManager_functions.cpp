
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

// Function BP_FocusSignManager.BP_FocusSignManager_C.IsEnabledPlayerState
// (Net, Event, Static, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_FocusSignManager_C::STATIC_IsEnabledPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FocusSignManager.BP_FocusSignManager_C.IsEnabledPlayerState");

	ABP_FocusSignManager_C_IsEnabledPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_FocusSignManager.BP_FocusSignManager_C.CheckMoveCamera
// (Net, NetRequest, Exec, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// bool                           Move                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FocusSignManager_C::CheckMoveCamera(bool* Move)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FocusSignManager.BP_FocusSignManager_C.CheckMoveCamera");

	ABP_FocusSignManager_C_CheckMoveCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Move != nullptr)
		*Move = params.Move;
}


// Function BP_FocusSignManager.BP_FocusSignManager_C.IsSearchSightEnabled
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer)
// Parameters:
// bool                           IsEnabled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FocusSignManager_C::STATIC_IsSearchSightEnabled(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FocusSignManager.BP_FocusSignManager_C.IsSearchSightEnabled");

	ABP_FocusSignManager_C_IsSearchSightEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;
}


// Function BP_FocusSignManager.BP_FocusSignManager_C.UpdateWidget
// (Exec, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_FocusSignManager_C::UpdateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FocusSignManager.BP_FocusSignManager_C.UpdateWidget");

	ABP_FocusSignManager_C_UpdateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FocusSignManager.BP_FocusSignManager_C.UserConstructionScript
// (Net, NetReliable, NetRequest, NetResponse, NetMulticast, Public, Private, Protected, NetClient, Const)

void ABP_FocusSignManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FocusSignManager.BP_FocusSignManager_C.UserConstructionScript");

	ABP_FocusSignManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FocusSignManager.BP_FocusSignManager_C.ReceiveBeginPlay
// (NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_FocusSignManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FocusSignManager.BP_FocusSignManager_C.ReceiveBeginPlay");

	ABP_FocusSignManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FocusSignManager.BP_FocusSignManager_C.ReceiveTick
// (Net, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FocusSignManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FocusSignManager.BP_FocusSignManager_C.ReceiveTick");

	ABP_FocusSignManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FocusSignManager.BP_FocusSignManager_C.ReceiveEndPlay
// (NetReliable, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FocusSignManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FocusSignManager.BP_FocusSignManager_C.ReceiveEndPlay");

	ABP_FocusSignManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FocusSignManager.BP_FocusSignManager_C.ExecuteUbergraph_BP_FocusSignManager
// (Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FocusSignManager_C::STATIC_ExecuteUbergraph_BP_FocusSignManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FocusSignManager.BP_FocusSignManager_C.ExecuteUbergraph_BP_FocusSignManager");

	ABP_FocusSignManager_C_ExecuteUbergraph_BP_FocusSignManager_Params params;
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
