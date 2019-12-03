
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

// Function BP_BattleFlowBase.BP_BattleFlowBase_C.EnableDefaultEndConditions
// (Net, Event, Static, Public, Delegate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BattleFlowBase_C::STATIC_EnableDefaultEndConditions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleFlowBase.BP_BattleFlowBase_C.EnableDefaultEndConditions");

	ABP_BattleFlowBase_C_EnableDefaultEndConditions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BattleFlowBase.BP_BattleFlowBase_C.SetBattleManager
// (NetReliable, Native, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_BattleManagerBase_C* Manager                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleFlowBase_C::SetBattleManager(class ABP_BattleManagerBase_C* Manager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleFlowBase.BP_BattleFlowBase_C.SetBattleManager");

	ABP_BattleFlowBase_C_SetBattleManager_Params params;
	params.Manager = Manager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleFlowBase.BP_BattleFlowBase_C.Update
// (NetReliable, Native, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleFlowBase_C::Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleFlowBase.BP_BattleFlowBase_C.Update");

	ABP_BattleFlowBase_C_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleFlowBase.BP_BattleFlowBase_C.StartBattle
// (Net, Native, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_BattleFlowBase_C::StartBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleFlowBase.BP_BattleFlowBase_C.StartBattle");

	ABP_BattleFlowBase_C_StartBattle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleFlowBase.BP_BattleFlowBase_C.UserConstructionScript
// (NetReliable, Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_BattleFlowBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleFlowBase.BP_BattleFlowBase_C.UserConstructionScript");

	ABP_BattleFlowBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
