
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

// Function BPC_BattleSoftlockSettings.BPC_BattleSoftlockSettings_C.AdjustForDifficultySetting
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            PlayerLevelsAbove              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBPC_BattleSoftlockSettings_C::AdjustForDifficultySetting(int PlayerLevelsAbove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BattleSoftlockSettings.BPC_BattleSoftlockSettings_C.AdjustForDifficultySetting");

	UBPC_BattleSoftlockSettings_C_AdjustForDifficultySetting_Params params;
	params.PlayerLevelsAbove = PlayerLevelsAbove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_BattleSoftlockSettings.BPC_BattleSoftlockSettings_C.CalcEnemyTeamAdjust
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LevelRef                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxSimultaneousAttacks         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_BattleSoftlockSettings_C::CalcEnemyTeamAdjust(int LevelRef, int* MaxSimultaneousAttacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BattleSoftlockSettings.BPC_BattleSoftlockSettings_C.CalcEnemyTeamAdjust");

	UBPC_BattleSoftlockSettings_C_CalcEnemyTeamAdjust_Params params;
	params.LevelRef = LevelRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxSimultaneousAttacks != nullptr)
		*MaxSimultaneousAttacks = params.MaxSimultaneousAttacks;
}


// Function BPC_BattleSoftlockSettings.BPC_BattleSoftlockSettings_C.CalcEnemyAdjust
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerLevelAbove               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AIStep                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_BattleSoftlockSettings_C::CalcEnemyAdjust(int PlayerLevelAbove, int* AIStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BattleSoftlockSettings.BPC_BattleSoftlockSettings_C.CalcEnemyAdjust");

	UBPC_BattleSoftlockSettings_C_CalcEnemyAdjust_Params params;
	params.PlayerLevelAbove = PlayerLevelAbove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AIStep != nullptr)
		*AIStep = params.AIStep;
}


// Function BPC_BattleSoftlockSettings.BPC_BattleSoftlockSettings_C.DebugPrintEffects
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RelativeLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InDamage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutDamage                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Adjust                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Short                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBPC_BattleSoftlockSettings_C::DebugPrintEffects(int RelativeLevel, float InDamage, float OutDamage, int Adjust, bool Short)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BattleSoftlockSettings.BPC_BattleSoftlockSettings_C.DebugPrintEffects");

	UBPC_BattleSoftlockSettings_C_DebugPrintEffects_Params params;
	params.RelativeLevel = RelativeLevel;
	params.InDamage = InDamage;
	params.OutDamage = OutDamage;
	params.Adjust = Adjust;
	params.Short = Short;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_BattleSoftlockSettings.BPC_BattleSoftlockSettings_C.PrintExampleStats
// (Private, BlueprintCallable, BlueprintEvent)

void UBPC_BattleSoftlockSettings_C::PrintExampleStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BattleSoftlockSettings.BPC_BattleSoftlockSettings_C.PrintExampleStats");

	UBPC_BattleSoftlockSettings_C_PrintExampleStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_BattleSoftlockSettings.BPC_BattleSoftlockSettings_C.CalcPlayerAdjust
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerLevelsAbove              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Apply                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          InDamageRatio                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageRatio                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_BattleSoftlockSettings_C::CalcPlayerAdjust(int PlayerLevelsAbove, bool* Apply, float* InDamageRatio, float* OutDamageRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_BattleSoftlockSettings.BPC_BattleSoftlockSettings_C.CalcPlayerAdjust");

	UBPC_BattleSoftlockSettings_C_CalcPlayerAdjust_Params params;
	params.PlayerLevelsAbove = PlayerLevelsAbove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Apply != nullptr)
		*Apply = params.Apply;
	if (InDamageRatio != nullptr)
		*InDamageRatio = params.InDamageRatio;
	if (OutDamageRatio != nullptr)
		*OutDamageRatio = params.OutDamageRatio;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
