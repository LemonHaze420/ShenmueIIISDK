
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

// Function BPF_BattleDifficulty.BPF_BattleDifficulty_C.BPF_GetPlayerBattleDifficultyParams
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FST_BattleDifficultyParams Out_Row                        (Parm, OutParm)

void UBPF_BattleDifficulty_C::STATIC_BPF_GetPlayerBattleDifficultyParams(class UObject* __WorldContext, struct FST_BattleDifficultyParams* Out_Row)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_BattleDifficulty.BPF_BattleDifficulty_C.BPF_GetPlayerBattleDifficultyParams");

	UBPF_BattleDifficulty_C_BPF_GetPlayerBattleDifficultyParams_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out_Row != nullptr)
		*Out_Row = params.Out_Row;
}


// Function BPF_BattleDifficulty.BPF_BattleDifficulty_C.BPF_StepPlayerBattleDifficulty
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUpOrDown>         Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_BattleDifficulty_C::STATIC_BPF_StepPlayerBattleDifficulty(TEnumAsByte<EUpOrDown> Direction, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_BattleDifficulty.BPF_BattleDifficulty_C.BPF_StepPlayerBattleDifficulty");

	UBPF_BattleDifficulty_C_BPF_StepPlayerBattleDifficulty_Params params;
	params.Direction = Direction;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_BattleDifficulty.BPF_BattleDifficulty_C.BPF_SetPlayerBattleDifficulty
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBattleDifficulty> Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_BattleDifficulty_C::STATIC_BPF_SetPlayerBattleDifficulty(TEnumAsByte<EBattleDifficulty> Difficulty, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_BattleDifficulty.BPF_BattleDifficulty_C.BPF_SetPlayerBattleDifficulty");

	UBPF_BattleDifficulty_C_BPF_SetPlayerBattleDifficulty_Params params;
	params.Difficulty = Difficulty;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_BattleDifficulty.BPF_BattleDifficulty_C.BPF_GetPlayerBattleDifficulty
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBattleDifficulty> Difficulty                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_BattleDifficulty_C::STATIC_BPF_GetPlayerBattleDifficulty(class UObject* __WorldContext, TEnumAsByte<EBattleDifficulty>* Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_BattleDifficulty.BPF_BattleDifficulty_C.BPF_GetPlayerBattleDifficulty");

	UBPF_BattleDifficulty_C_BPF_GetPlayerBattleDifficulty_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difficulty != nullptr)
		*Difficulty = params.Difficulty;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
