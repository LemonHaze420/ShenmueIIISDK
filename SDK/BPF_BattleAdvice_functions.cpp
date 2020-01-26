
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

// Function BPF_BattleAdvice.BPF_BattleAdvice_C.BPF_FilterOutBattleAdvice
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TEnumAsByte<EBattleAdvice>> TargetList                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<TEnumAsByte<EBattleAdvice>> Remove                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_BattleAdvice_C::STATIC_BPF_FilterOutBattleAdvice(class UObject* __WorldContext, TArray<TEnumAsByte<EBattleAdvice>>* TargetList, TArray<TEnumAsByte<EBattleAdvice>>* Remove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_BattleAdvice.BPF_BattleAdvice_C.BPF_FilterOutBattleAdvice");

	UBPF_BattleAdvice_C_BPF_FilterOutBattleAdvice_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetList != nullptr)
		*TargetList = params.TargetList;
	if (Remove != nullptr)
		*Remove = params.Remove;
}


// Function BPF_BattleAdvice.BPF_BattleAdvice_C.BPF_IsBattleAdviceRelevant
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EBattleAdvice>     Advice                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_BattleAdvice_C::STATIC_BPF_IsBattleAdviceRelevant(TEnumAsByte<EBattleAdvice> Advice, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_BattleAdvice.BPF_BattleAdvice_C.BPF_IsBattleAdviceRelevant");

	UBPF_BattleAdvice_C_BPF_IsBattleAdviceRelevant_Params params;
	params.Advice = Advice;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_BattleAdvice.BPF_BattleAdvice_C.BPF_GetRelevantBattleAdvice
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<EBattleAdvice>> SortedAdvice                   (Parm, OutParm, ZeroConstructor)

void UBPF_BattleAdvice_C::STATIC_BPF_GetRelevantBattleAdvice(class UObject* __WorldContext, TArray<TEnumAsByte<EBattleAdvice>>* SortedAdvice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_BattleAdvice.BPF_BattleAdvice_C.BPF_GetRelevantBattleAdvice");

	UBPF_BattleAdvice_C_BPF_GetRelevantBattleAdvice_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SortedAdvice != nullptr)
		*SortedAdvice = params.SortedAdvice;
}


// Function BPF_BattleAdvice.BPF_BattleAdvice_C.BPF_GetMostRelevantBattleAdvice
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBattleAdvice>     newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_BattleAdvice_C::STATIC_BPF_GetMostRelevantBattleAdvice(class UObject* __WorldContext, TEnumAsByte<EBattleAdvice>* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_BattleAdvice.BPF_BattleAdvice_C.BPF_GetMostRelevantBattleAdvice");

	UBPF_BattleAdvice_C_BPF_GetMostRelevantBattleAdvice_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
