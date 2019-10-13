
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

// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.GetOverrideEnableRequestCounter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URequestCounter_C*       DisableRequestCounter          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HUDEnergyStatusManager_C::GetOverrideEnableRequestCounter(class URequestCounter_C** DisableRequestCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.GetOverrideEnableRequestCounter");

	ABP_HUDEnergyStatusManager_C_GetOverrideEnableRequestCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisableRequestCounter != nullptr)
		*DisableRequestCounter = params.DisableRequestCounter;
}


// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ShouldBeVisible
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class URequestCounter_C*       DisableRequestCounter          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HUDEnergyStatusManager_C::GetDisableRequestCounter(class URequestCounter_C** DisableRequestCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.GetDisableRequestCounter");

	ABP_HUDEnergyStatusManager_C_GetDisableRequestCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisableRequestCounter != nullptr)
		*DisableRequestCounter = params.DisableRequestCounter;
}


// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HUDEnergyStatusManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.UserConstructionScript");

	ABP_HUDEnergyStatusManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HUDEnergyStatusManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ReceiveBeginPlay");

	ABP_HUDEnergyStatusManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUDEnergyStatusManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ReceiveEndPlay");

	ABP_HUDEnergyStatusManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.UpdateVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUDEnergyStatusManager_C::UpdateVisibility(bool Instant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.UpdateVisibility");

	ABP_HUDEnergyStatusManager_C_UpdateVisibility_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUDEnergyStatusManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ReceiveTick");

	ABP_HUDEnergyStatusManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.OnMinimapValidityChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsValid                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HUDEnergyStatusManager_C::OnMinimapValidityChange(bool bIsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.OnMinimapValidityChange");

	ABP_HUDEnergyStatusManager_C_OnMinimapValidityChange_Params params;
	params.bIsValid = bIsValid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.CheckPlayerInBuilding
// (BlueprintCallable, BlueprintEvent)

void ABP_HUDEnergyStatusManager_C::CheckPlayerInBuilding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.CheckPlayerInBuilding");

	ABP_HUDEnergyStatusManager_C_CheckPlayerInBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HUDEnergyStatusManager.BP_HUDEnergyStatusManager_C.ExecuteUbergraph_BP_HUDEnergyStatusManager
// (HasDefaults)
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
