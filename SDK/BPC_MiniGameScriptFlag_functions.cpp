
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

// Function BPC_MiniGameScriptFlag.BPC_MiniGameScriptFlag_C.GetGlobalFlagMiniGameResultNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameScriptFlag_C::GetGlobalFlagMiniGameResultNum(int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameScriptFlag.BPC_MiniGameScriptFlag_C.GetGlobalFlagMiniGameResultNum");

	UBPC_MiniGameScriptFlag_C_GetGlobalFlagMiniGameResultNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPC_MiniGameScriptFlag.BPC_MiniGameScriptFlag_C.SetGlobalFlagMiniGameResultNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameScriptFlag_C::SetGlobalFlagMiniGameResultNum(int Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameScriptFlag.BPC_MiniGameScriptFlag_C.SetGlobalFlagMiniGameResultNum");

	UBPC_MiniGameScriptFlag_C_SetGlobalFlagMiniGameResultNum_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameScriptFlag.BPC_MiniGameScriptFlag_C.GetGlobalFlagMiniGameScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameScriptFlag_C::GetGlobalFlagMiniGameScore(int* Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameScriptFlag.BPC_MiniGameScriptFlag_C.GetGlobalFlagMiniGameScore");

	UBPC_MiniGameScriptFlag_C_GetGlobalFlagMiniGameScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Score != nullptr)
		*Score = params.Score;
}


// Function BPC_MiniGameScriptFlag.BPC_MiniGameScriptFlag_C.SetGlobalFlagMiniGameScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameScriptFlag_C::SetGlobalFlagMiniGameScore(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameScriptFlag.BPC_MiniGameScriptFlag_C.SetGlobalFlagMiniGameScore");

	UBPC_MiniGameScriptFlag_C_SetGlobalFlagMiniGameScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
