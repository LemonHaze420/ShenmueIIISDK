
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

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.IsLowEnergy
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3EnergyManager_C::IsLowEnergy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.IsLowEnergy");

	ABP_S3EnergyManager_C_IsLowEnergy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.SelectLowEnergyMessageList
// (NetReliable, Native, NetResponse, Public, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           Array                          (Parm, OutParm, ZeroConstructor)

void ABP_S3EnergyManager_C::SelectLowEnergyMessageList(TArray<struct FName>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.SelectLowEnergyMessageList");

	ABP_S3EnergyManager_C_SelectLowEnergyMessageList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.TryStartEatEvent
// (NetResponse, Static, NetMulticast, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Starting                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3EnergyManager_C::STATIC_TryStartEatEvent(bool* Starting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.TryStartEatEvent");

	ABP_S3EnergyManager_C_TryStartEatEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Starting != nullptr)
		*Starting = params.Starting;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.TryMessageLowEnergyStatus
// (NetRequest, Event, NetMulticast, MulticastDelegate, Private, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3EnergyManager_C::TryMessageLowEnergyStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.TryMessageLowEnergyStatus");

	ABP_S3EnergyManager_C_TryMessageLowEnergyStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.DrainEnergyByRunningTick
// (NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3EnergyManager_C::DrainEnergyByRunningTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.DrainEnergyByRunningTick");

	ABP_S3EnergyManager_C_DrainEnergyByRunningTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.RegerateEnergy
// (NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, Public, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3EnergyManager_C::STATIC_RegerateEnergy(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.RegerateEnergy");

	ABP_S3EnergyManager_C_RegerateEnergy_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.DrainEnergyByRunning
// (Net, NetReliable, NetRequest, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_S3EnergyManager_C::DrainEnergyByRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.DrainEnergyByRunning");

	ABP_S3EnergyManager_C_DrainEnergyByRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.Setup
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AS3GameTimeManager*      TimeMan                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3EnergyManager_C::STATIC_Setup(class AS3GameTimeManager* TimeMan)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.Setup");

	ABP_S3EnergyManager_C_Setup_Params params;
	params.TimeMan = TimeMan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.DrainEnergyByTime
// (NetReliable, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void ABP_S3EnergyManager_C::DrainEnergyByTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.DrainEnergyByTime");

	ABP_S3EnergyManager_C_DrainEnergyByTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.UserConstructionScript
// (Net, NetReliable, NetRequest, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_S3EnergyManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.UserConstructionScript");

	ABP_S3EnergyManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.ReceiveTick
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3EnergyManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.ReceiveTick");

	ABP_S3EnergyManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.ReceiveBeginPlay
// (NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3EnergyManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.ReceiveBeginPlay");

	ABP_S3EnergyManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.OnPlayerBehaviorIdChanged
// (Net, NetReliable, NetRequest, Exec, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ES3PlayerBehavior              NewId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3PlayerBehavior              OldId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3EnergyManager_C::OnPlayerBehaviorIdChanged(ES3PlayerBehavior NewId, ES3PlayerBehavior OldId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.OnPlayerBehaviorIdChanged");

	ABP_S3EnergyManager_C_OnPlayerBehaviorIdChanged_Params params;
	params.NewId = NewId;
	params.OldId = OldId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.ReceiveEndPlay
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3EnergyManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.ReceiveEndPlay");

	ABP_S3EnergyManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.Reset
// (Net, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3EnergyManager_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.Reset");

	ABP_S3EnergyManager_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.ResetBattleFlag
// (Exec, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3EnergyManager_C::ResetBattleFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.ResetBattleFlag");

	ABP_S3EnergyManager_C_ResetBattleFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.ReenableLowEnergyMessage
// (Exec, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3EnergyManager_C::ReenableLowEnergyMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.ReenableLowEnergyMessage");

	ABP_S3EnergyManager_C_ReenableLowEnergyMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.StartMessageReenableTimer
// (Net, NetReliable, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3EnergyManager_C::StartMessageReenableTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.StartMessageReenableTimer");

	ABP_S3EnergyManager_C_StartMessageReenableTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.DrainRunEnergy
// (Net, NetReliable, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3EnergyManager_C::DrainRunEnergy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.DrainRunEnergy");

	ABP_S3EnergyManager_C_DrainRunEnergy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.ExecuteUbergraph_BP_S3EnergyManager
// (NetReliable, NetResponse, Static, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3EnergyManager_C::STATIC_ExecuteUbergraph_BP_S3EnergyManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.ExecuteUbergraph_BP_S3EnergyManager");

	ABP_S3EnergyManager_C_ExecuteUbergraph_BP_S3EnergyManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
