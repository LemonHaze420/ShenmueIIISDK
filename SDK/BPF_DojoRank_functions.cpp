
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

// Function BPF_DojoRank.BPF_DojoRank_C.BPF_GetDojoRankIndex
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDojoPlace>        Dojo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_DojoRank_C::STATIC_BPF_GetDojoRankIndex(TEnumAsByte<EDojoPlace> Dojo, class UObject* __WorldContext, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DojoRank.BPF_DojoRank_C.BPF_GetDojoRankIndex");

	UBPF_DojoRank_C_BPF_GetDojoRankIndex_Params params;
	params.Dojo = Dojo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BPF_DojoRank.BPF_DojoRank_C.BPF_GetPlayerDojoRank
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDojoPlace>        Dojo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3DojoRank                    Rank                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_DojoRank_C::STATIC_BPF_GetPlayerDojoRank(TEnumAsByte<EDojoPlace> Dojo, class UObject* __WorldContext, ES3DojoRank* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DojoRank.BPF_DojoRank_C.BPF_GetPlayerDojoRank");

	UBPF_DojoRank_C_BPF_GetPlayerDojoRank_Params params;
	params.Dojo = Dojo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rank != nullptr)
		*Rank = params.Rank;
}


// Function BPF_DojoRank.BPF_DojoRank_C.BPF_PlayerDojoRankGreaterOrEqual
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_DojoRankRequirement Requirement                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_DojoRank_C::STATIC_BPF_PlayerDojoRankGreaterOrEqual(const struct FST_DojoRankRequirement& Requirement, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DojoRank.BPF_DojoRank_C.BPF_PlayerDojoRankGreaterOrEqual");

	UBPF_DojoRank_C_BPF_PlayerDojoRankGreaterOrEqual_Params params;
	params.Requirement = Requirement;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_DojoRank.BPF_DojoRank_C.BPF_SetPlayerDojoRank
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDojoPlace>        Dojo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3DojoRank                    Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_DojoRank_C::STATIC_BPF_SetPlayerDojoRank(TEnumAsByte<EDojoPlace> Dojo, ES3DojoRank Rank, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DojoRank.BPF_DojoRank_C.BPF_SetPlayerDojoRank");

	UBPF_DojoRank_C_BPF_SetPlayerDojoRank_Params params;
	params.Dojo = Dojo;
	params.Rank = Rank;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_DojoRank.BPF_DojoRank_C.BPF_RankGreaterOrEqual
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<TEnumAsByte<EDojoPlace>, ES3DojoRank> RanksEarned                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FST_DojoRankRequirement Requirement                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_DojoRank_C::STATIC_BPF_RankGreaterOrEqual(const struct FST_DojoRankRequirement& Requirement, class UObject* __WorldContext, TMap<TEnumAsByte<EDojoPlace>, ES3DojoRank>* RanksEarned)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DojoRank.BPF_DojoRank_C.BPF_RankGreaterOrEqual");

	UBPF_DojoRank_C_BPF_RankGreaterOrEqual_Params params;
	params.Requirement = Requirement;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RanksEarned != nullptr)
		*RanksEarned = params.RanksEarned;

	return params.ReturnValue;
}


// Function BPF_DojoRank.BPF_DojoRank_C.BPF_CalcDojoRankAsCrossDojoInt
// (Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EDojoPlace>        Dojo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3DojoRank                    Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ComparisonValue                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_DojoRank_C::STATIC_BPF_CalcDojoRankAsCrossDojoInt(TEnumAsByte<EDojoPlace> Dojo, ES3DojoRank Rank, class UObject* __WorldContext, int* ComparisonValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DojoRank.BPF_DojoRank_C.BPF_CalcDojoRankAsCrossDojoInt");

	UBPF_DojoRank_C_BPF_CalcDojoRankAsCrossDojoInt_Params params;
	params.Dojo = Dojo;
	params.Rank = Rank;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ComparisonValue != nullptr)
		*ComparisonValue = params.ComparisonValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
