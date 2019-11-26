
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::EnableHUD(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.EnableHUD");

	ABP_BattleManagerBase_C_EnableHUD_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.IsResultDecided
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BattleManagerBase_C::IsResultDecided()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.IsResultDecided");

	ABP_BattleManagerBase_C_IsResultDecided_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.TryPlayerQuit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::TryPlayerQuit(bool* dummy)
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
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleManagerBase_C::StartBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.StartBattle");

	ABP_BattleManagerBase_C_StartBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.ExecuteDebugCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Argument                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_BattleManagerBase_C::ExecuteDebugCommand(const struct FString& Argument)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.ExecuteDebugCommand");

	ABP_BattleManagerBase_C_ExecuteDebugCommand_Params params;
	params.Argument = Argument;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.StartEndingBattle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBattleWinLoseResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::StartEndingBattle(TEnumAsByte<EBattleWinLoseResult> Result, bool* dummy)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::CloseBattle(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.CloseBattle");

	ABP_BattleManagerBase_C_CloseBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.LaunchBattle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBTL_LaunchParameters_C* LaunchParams                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BattleManagerBase_C::LaunchBattle(class UBTL_LaunchParameters_C* LaunchParams, bool* dummy)
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
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleManagerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.UserConstructionScript");

	ABP_BattleManagerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnBattleClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_BattleManagerBase_C::OnBattleClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnBattleClose__DelegateSignature");

	ABP_BattleManagerBase_C_OnBattleClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleManagerBase.BP_BattleManagerBase_C.OnBattleEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
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
