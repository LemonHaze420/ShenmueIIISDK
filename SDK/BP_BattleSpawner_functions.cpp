
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

// Function BP_BattleSpawner.BP_BattleSpawner_C.EndBattle
// (NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, NetClient, Const)
// Parameters:
// TEnumAsByte<EBattleWinLoseResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleSpawner_C::STATIC_EndBattle(TEnumAsByte<EBattleWinLoseResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleSpawner.BP_BattleSpawner_C.EndBattle");

	ABP_BattleSpawner_C_EndBattle_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleSpawner.BP_BattleSpawner_C.StartBattleTask_FromData
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetClient, Const)
// Parameters:
// struct FDataTableRowHandle     BattleId                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   WinEventID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LoseEventID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FadeBetweenModes               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            FadeColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class ABP_BattleTaskBase_C*    Task                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleSpawner_C::StartBattleTask_FromData(const struct FDataTableRowHandle& BattleId, const struct FName& WinEventID, const struct FName& LoseEventID, bool FadeBetweenModes, const struct FLinearColor& FadeColor, class ABP_BattleTaskBase_C** Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleSpawner.BP_BattleSpawner_C.StartBattleTask_FromData");

	ABP_BattleSpawner_C_StartBattleTask_FromData_Params params;
	params.BattleId = BattleId;
	params.WinEventID = WinEventID;
	params.LoseEventID = LoseEventID;
	params.FadeBetweenModes = FadeBetweenModes;
	params.FadeColor = FadeColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Task != nullptr)
		*Task = params.Task;
}


// Function BP_BattleSpawner.BP_BattleSpawner_C.RegisterMediator
// (Exec, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// class ABP_BattleMediatorBase_C* Mediator                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleSpawner_C::STATIC_RegisterMediator(class ABP_BattleMediatorBase_C* Mediator, bool Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleSpawner.BP_BattleSpawner_C.RegisterMediator");

	ABP_BattleSpawner_C_RegisterMediator_Params params;
	params.Mediator = Mediator;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleSpawner.BP_BattleSpawner_C.OnBattleEndEvent
// (NetReliable, Exec, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// TEnumAsByte<EBattleWinLoseResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleSpawner_C::STATIC_OnBattleEndEvent(TEnumAsByte<EBattleWinLoseResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleSpawner.BP_BattleSpawner_C.OnBattleEndEvent");

	ABP_BattleSpawner_C_OnBattleEndEvent_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleSpawner.BP_BattleSpawner_C.StartBattleTask
// (Native, Event, Static, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   BattleId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LevelID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   WinEventID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LoseEventID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FadeBetweenModes               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_BattleMediatorBase_C* MediatorBase                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            FadeColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class ABP_BattleTaskBase_C*    Task                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleSpawner_C::STATIC_StartBattleTask(const struct FName& BattleId, const struct FName& LevelID, const struct FName& WinEventID, const struct FName& LoseEventID, bool FadeBetweenModes, class ABP_BattleMediatorBase_C* MediatorBase, const struct FLinearColor& FadeColor, class ABP_BattleTaskBase_C** Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleSpawner.BP_BattleSpawner_C.StartBattleTask");

	ABP_BattleSpawner_C_StartBattleTask_Params params;
	params.BattleId = BattleId;
	params.LevelID = LevelID;
	params.WinEventID = WinEventID;
	params.LoseEventID = LoseEventID;
	params.FadeBetweenModes = FadeBetweenModes;
	params.MediatorBase = MediatorBase;
	params.FadeColor = FadeColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Task != nullptr)
		*Task = params.Task;
}


// Function BP_BattleSpawner.BP_BattleSpawner_C.LaunchDebugBattleImpl
// (Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, Const)

void ABP_BattleSpawner_C::STATIC_LaunchDebugBattleImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleSpawner.BP_BattleSpawner_C.LaunchDebugBattleImpl");

	ABP_BattleSpawner_C_LaunchDebugBattleImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleSpawner.BP_BattleSpawner_C.CheckBattleExist
// (Net, NetRequest, Exec, NetResponse, Static, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Exist                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleSpawner_C::STATIC_CheckBattleExist(bool* Exist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleSpawner.BP_BattleSpawner_C.CheckBattleExist");

	ABP_BattleSpawner_C_CheckBattleExist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Exist != nullptr)
		*Exist = params.Exist;
}


// Function BP_BattleSpawner.BP_BattleSpawner_C.UserConstructionScript
// (NetRequest, Exec, Native, Event, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_BattleSpawner_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleSpawner.BP_BattleSpawner_C.UserConstructionScript");

	ABP_BattleSpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleSpawner.BP_BattleSpawner_C.LaunchDebugBattle
// (Exec, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_BattleSpawner_C::STATIC_LaunchDebugBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleSpawner.BP_BattleSpawner_C.LaunchDebugBattle");

	ABP_BattleSpawner_C_LaunchDebugBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleSpawner.BP_BattleSpawner_C.ExecuteUbergraph_BP_BattleSpawner
// (Net, NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleSpawner_C::STATIC_ExecuteUbergraph_BP_BattleSpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleSpawner.BP_BattleSpawner_C.ExecuteUbergraph_BP_BattleSpawner");

	ABP_BattleSpawner_C_ExecuteUbergraph_BP_BattleSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
