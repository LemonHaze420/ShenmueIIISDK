
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

// Function BP_BattleManagerBase.BP_BattleManagerBase_C.EnableHUD
// (NetReliable, Event, Static, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::STATIC_EnableHUD(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.EnableHUD");

	ABP_BattleManagerBase_C_EnableHUD_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.IsResultDecided
// (NetReliable, Exec, NetResponse, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BattleManagerBase_C::STATIC_IsResultDecided()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.IsResultDecided");

	ABP_BattleManagerBase_C_IsResultDecided_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.TryPlayerQuit
// (NetReliable, Exec, NetResponse, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::STATIC_TryPlayerQuit(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.TryPlayerQuit");

	ABP_BattleManagerBase_C_TryPlayerQuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.StartBattle
// (Net, Exec, NetResponse, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_BattleManagerBase_C::STATIC_StartBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.StartBattle");

	ABP_BattleManagerBase_C_StartBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.ExecuteDebugCommand
// (Exec, Native, Event, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Argument                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_BattleManagerBase_C::STATIC_ExecuteDebugCommand(const struct FString& Argument)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.ExecuteDebugCommand");

	ABP_BattleManagerBase_C_ExecuteDebugCommand_Params params;
	params.Argument = Argument;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.StartEndingBattle
// (NetRequest, Event, Static, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EBattleWinLoseResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::STATIC_StartEndingBattle(TEnumAsByte<EBattleWinLoseResult> Result, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.StartEndingBattle");

	ABP_BattleManagerBase_C_StartEndingBattle_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.CloseBattle
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::STATIC_CloseBattle(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.CloseBattle");

	ABP_BattleManagerBase_C_CloseBattle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.LaunchBattle
// (Net, NetReliable, Event, Static, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBTL_LaunchParameters_C* LaunchParams                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::STATIC_LaunchBattle(class UBTL_LaunchParameters_C* LaunchParams, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.LaunchBattle");

	ABP_BattleManagerBase_C_LaunchBattle_Params params;
	params.LaunchParams = LaunchParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.UserConstructionScript
// (Net, NetReliable, Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_BattleManagerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.UserConstructionScript");

	ABP_BattleManagerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnBattleClose__DelegateSignature
// (NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_BattleManagerBase_C::OnBattleClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnBattleClose__DelegateSignature");

	ABP_BattleManagerBase_C_OnBattleClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnBattleEnd__DelegateSignature
// (Net, NetReliable, Event, NetResponse, NetMulticast, Public, Private, Protected, NetClient, Const)
// Parameters:
// TEnumAsByte<EBattleWinLoseResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::OnBattleEnd__DelegateSignature(TEnumAsByte<EBattleWinLoseResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnBattleEnd__DelegateSignature");

	ABP_BattleManagerBase_C_OnBattleEnd__DelegateSignature_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
