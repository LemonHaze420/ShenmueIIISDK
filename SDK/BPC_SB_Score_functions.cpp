
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

// Function BPC_SB_Score.BPC_SB_Score_C.GetScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_SB_Score_C::GetScore(int* Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_SB_Score.BPC_SB_Score_C.GetScore");

	UBPC_SB_Score_C_GetScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Score != nullptr)
		*Score = params.Score;
}


// Function BPC_SB_Score.BPC_SB_Score_C.AddScore
// (BlueprintCallable, BlueprintEvent)

void UBPC_SB_Score_C::AddScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_SB_Score.BPC_SB_Score_C.AddScore");

	UBPC_SB_Score_C_AddScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_SB_Score.BPC_SB_Score_C.ExecuteUbergraph_BPC_SB_Score
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_SB_Score_C::ExecuteUbergraph_BPC_SB_Score(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_SB_Score.BPC_SB_Score_C.ExecuteUbergraph_BPC_SB_Score");

	UBPC_SB_Score_C_ExecuteUbergraph_BPC_SB_Score_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_SB_Score.BPC_SB_Score_C.OnAddScore__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GiveScore                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_SB_Score_C::OnAddScore__DelegateSignature(int GiveScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_SB_Score.BPC_SB_Score_C.OnAddScore__DelegateSignature");

	UBPC_SB_Score_C_OnAddScore__DelegateSignature_Params params;
	params.GiveScore = GiveScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
