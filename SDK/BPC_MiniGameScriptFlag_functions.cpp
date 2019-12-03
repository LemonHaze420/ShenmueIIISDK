
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
// (Net, NetReliable, Native, Event, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameScriptFlag_C::GetGlobalFlagMiniGameResultNum(int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameScriptFlag.BPC_MiniGameScriptFlag_C.GetGlobalFlagMiniGameResultNum");

	UBPC_MiniGameScriptFlag_C_GetGlobalFlagMiniGameResultNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPC_MiniGameScriptFlag.BPC_MiniGameScriptFlag_C.SetGlobalFlagMiniGameResultNum
// (NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameScriptFlag_C::SetGlobalFlagMiniGameResultNum(int Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameScriptFlag.BPC_MiniGameScriptFlag_C.SetGlobalFlagMiniGameResultNum");

	UBPC_MiniGameScriptFlag_C_SetGlobalFlagMiniGameResultNum_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_MiniGameScriptFlag.BPC_MiniGameScriptFlag_C.GetGlobalFlagMiniGameScore
// (NetReliable, Exec, NetResponse, Static, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// int                            Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameScriptFlag_C::STATIC_GetGlobalFlagMiniGameScore(int* Score)
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
// (NetReliable, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_MiniGameScriptFlag_C::SetGlobalFlagMiniGameScore(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_MiniGameScriptFlag.BPC_MiniGameScriptFlag_C.SetGlobalFlagMiniGameScore");

	UBPC_MiniGameScriptFlag_C_SetGlobalFlagMiniGameScore_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
