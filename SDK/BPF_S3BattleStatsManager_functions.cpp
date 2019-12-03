
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

// Function BPF_S3BattleStatsManager.BPF_S3BattleStatsManager_C.BPF_GetPlayerLevelStat
// (Net, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3DerivedPlayerLevel*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class US3DerivedPlayerLevel* UBPF_S3BattleStatsManager_C::STATIC_BPF_GetPlayerLevelStat(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_S3BattleStatsManager.BPF_S3BattleStatsManager_C.BPF_GetPlayerLevelStat");

	UBPF_S3BattleStatsManager_C_BPF_GetPlayerLevelStat_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_S3BattleStatsManager.BPF_S3BattleStatsManager_C.BPF_GetPlayerAttackStat
// (Net, NetReliable, Exec, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3DerivedPlayerLevel*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class US3DerivedPlayerLevel* UBPF_S3BattleStatsManager_C::STATIC_BPF_GetPlayerAttackStat(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_S3BattleStatsManager.BPF_S3BattleStatsManager_C.BPF_GetPlayerAttackStat");

	UBPF_S3BattleStatsManager_C_BPF_GetPlayerAttackStat_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_S3BattleStatsManager.BPF_S3BattleStatsManager_C.BPF_IsBattleStatsManagerValid
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_S3BattleStatsManager_C::STATIC_BPF_IsBattleStatsManagerValid(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_S3BattleStatsManager.BPF_S3BattleStatsManager_C.BPF_IsBattleStatsManagerValid");

	UBPF_S3BattleStatsManager_C_BPF_IsBattleStatsManagerValid_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_S3BattleStatsManager.BPF_S3BattleStatsManager_C.BPF_GetBattleStatsManager
// (Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, DLLImport, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3BattleStatsManager*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class US3BattleStatsManager* UBPF_S3BattleStatsManager_C::STATIC_BPF_GetBattleStatsManager(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_S3BattleStatsManager.BPF_S3BattleStatsManager_C.BPF_GetBattleStatsManager");

	UBPF_S3BattleStatsManager_C_BPF_GetBattleStatsManager_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
