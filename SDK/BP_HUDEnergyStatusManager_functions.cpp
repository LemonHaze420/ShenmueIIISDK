
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

// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.UpdateVisiblity_Impl
// (Exec, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUDEnergyStatusManager_C::UpdateVisiblity_Impl(bool Instant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.UpdateVisiblity_Impl");

	ABP_HUDEnergyStatusManager_C_UpdateVisiblity_Impl_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.GetOverrideEnableRequestCounter
// (Exec, Native, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URequestCounter_C*       DisableRequestCounter          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HUDEnergyStatusManager_C::GetOverrideEnableRequestCounter(class URequestCounter_C** DisableRequestCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.GetOverrideEnableRequestCounter");

	ABP_HUDEnergyStatusManager_C_GetOverrideEnableRequestCounter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisableRequestCounter != nullptr)
		*DisableRequestCounter = params.DisableRequestCounter;
}


// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ShouldBeVisible
// (Exec, Event, NetResponse, NetMulticast, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_HUDEnergyStatusManager_C::ShouldBeVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ShouldBeVisible");

	ABP_HUDEnergyStatusManager_C_ShouldBeVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.GetDisableRequestCounter
// (Net, NetReliable, NetRequest, Native, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URequestCounter_C*       DisableRequestCounter          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HUDEnergyStatusManager_C::GetDisableRequestCounter(class URequestCounter_C** DisableRequestCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.GetDisableRequestCounter");

	ABP_HUDEnergyStatusManager_C_GetDisableRequestCounter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisableRequestCounter != nullptr)
		*DisableRequestCounter = params.DisableRequestCounter;
}


// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Native, Private, Protected, Delegate, Const)

void ABP_HUDEnergyStatusManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.UserConstructionScript");

	ABP_HUDEnergyStatusManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ReceiveBeginPlay
// (Net, NetReliable, Exec, Native, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_HUDEnergyStatusManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ReceiveBeginPlay");

	ABP_HUDEnergyStatusManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ReceiveEndPlay
// (Net, NetRequest, Native, NetResponse, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUDEnergyStatusManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ReceiveEndPlay");

	ABP_HUDEnergyStatusManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.UpdateVisibility
// (NetRequest, Native, NetResponse, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUDEnergyStatusManager_C::UpdateVisibility(bool Instant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.UpdateVisibility");

	ABP_HUDEnergyStatusManager_C_UpdateVisibility_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ReceiveTick
// (NetReliable, Native, NetResponse, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUDEnergyStatusManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ReceiveTick");

	ABP_HUDEnergyStatusManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.OnMinimapValidityChange
// (Net, NetReliable, Native, NetResponse, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bIsValid                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUDEnergyStatusManager_C::OnMinimapValidityChange(bool bIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.OnMinimapValidityChange");

	ABP_HUDEnergyStatusManager_C_OnMinimapValidityChange_Params params;
	params.bIsValid = bIsValid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.CheckPlayerInBuilding
// (Net, Exec, Native, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_HUDEnergyStatusManager_C::CheckPlayerInBuilding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.CheckPlayerInBuilding");

	ABP_HUDEnergyStatusManager_C_CheckPlayerInBuilding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ExecuteUbergraph_BP_HUDEnergyStatusManager
// (Net, NetRequest, Exec, Event, NetMulticast, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUDEnergyStatusManager_C::ExecuteUbergraph_BP_HUDEnergyStatusManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ExecuteUbergraph_BP_HUDEnergyStatusManager");

	ABP_HUDEnergyStatusManager_C_ExecuteUbergraph_BP_HUDEnergyStatusManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
