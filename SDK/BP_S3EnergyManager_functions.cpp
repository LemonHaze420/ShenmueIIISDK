
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

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.IsLowEnergy
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Array                          (Parm, OutParm, ZeroConstructor)

void ABP_S3EnergyManager_C::SelectLowEnergyMessageList(TArray<struct FName>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.SelectLowEnergyMessageList");

	ABP_S3EnergyManager_C_SelectLowEnergyMessageList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.TryStartEatEvent
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Starting                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3EnergyManager_C::TryStartEatEvent(bool* Starting)
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
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3EnergyManager_C::TryMessageLowEnergyStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.TryMessageLowEnergyStatus");

	ABP_S3EnergyManager_C_TryMessageLowEnergyStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.DrainEnergyByRunningTick
// (Private, BlueprintCallable, BlueprintEvent)
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
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3EnergyManager_C::RegerateEnergy(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.RegerateEnergy");

	ABP_S3EnergyManager_C_RegerateEnergy_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.DrainEnergyByRunning
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3EnergyManager_C::DrainEnergyByRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.DrainEnergyByRunning");

	ABP_S3EnergyManager_C_DrainEnergyByRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3GameTimeManager*      TimeMan                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3EnergyManager_C::Setup(class AS3GameTimeManager* TimeMan)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.Setup");

	ABP_S3EnergyManager_C_Setup_Params params;
	params.TimeMan = TimeMan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.DrainEnergyByTime
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3EnergyManager_C::DrainEnergyByTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.DrainEnergyByTime");

	ABP_S3EnergyManager_C_DrainEnergyByTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3EnergyManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.UserConstructionScript");

	ABP_S3EnergyManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
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
// (Event, Protected, BlueprintEvent)

void ABP_S3EnergyManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.ReceiveBeginPlay");

	ABP_S3EnergyManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.OnPlayerBehaviorIdChanged
// (BlueprintCallable, BlueprintEvent)
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
// (Event, Public, BlueprintEvent)
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
// (BlueprintCallable, BlueprintEvent)

void ABP_S3EnergyManager_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.Reset");

	ABP_S3EnergyManager_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.ResetBattleFlag
// (BlueprintCallable, BlueprintEvent)

void ABP_S3EnergyManager_C::ResetBattleFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.ResetBattleFlag");

	ABP_S3EnergyManager_C_ResetBattleFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.ReenableLowEnergyMessage
// (BlueprintCallable, BlueprintEvent)

void ABP_S3EnergyManager_C::ReenableLowEnergyMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.ReenableLowEnergyMessage");

	ABP_S3EnergyManager_C_ReenableLowEnergyMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.StartMessageReenableTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_S3EnergyManager_C::StartMessageReenableTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.StartMessageReenableTimer");

	ABP_S3EnergyManager_C_StartMessageReenableTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.DrainRunEnergy
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3EnergyManager_C::DrainRunEnergy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3EnergyManager.BP_S3EnergyManager_C.DrainRunEnergy");

	ABP_S3EnergyManager_C_DrainRunEnergy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3EnergyManager.BP_S3EnergyManager_C.ExecuteUbergraph_BP_S3EnergyManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3EnergyManager_C::ExecuteUbergraph_BP_S3EnergyManager(int EntryPoint)
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
