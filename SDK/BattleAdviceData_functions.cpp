
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

// Function BattleAdviceData.BattleAdviceData_C.IsLevelSufficient
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleAdviceData_C::IsLevelSufficient()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleAdviceData.BattleAdviceData_C.IsLevelSufficient");

	UBattleAdviceData_C_IsLevelSufficient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleAdviceData.BattleAdviceData_C.AddAdvice
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBattleAdvice>     Advice                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattleAdviceData_C::AddAdvice(TEnumAsByte<EBattleAdvice> Advice, float Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleAdviceData.BattleAdviceData_C.AddAdvice");

	UBattleAdviceData_C_AddAdvice_Params params;
	params.Advice = Advice;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleAdviceData.BattleAdviceData_C.IsRelevant
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EBattleAdvice>     ItemToFind                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleAdviceData_C::IsRelevant(TEnumAsByte<EBattleAdvice> ItemToFind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleAdviceData.BattleAdviceData_C.IsRelevant");

	UBattleAdviceData_C_IsRelevant_Params params;
	params.ItemToFind = ItemToFind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleAdviceData.BattleAdviceData_C.GetMostRelevantAdvice
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EBattleAdvice>     Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBattleAdviceData_C::GetMostRelevantAdvice(TEnumAsByte<EBattleAdvice>* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleAdviceData.BattleAdviceData_C.GetMostRelevantAdvice");

	UBattleAdviceData_C_GetMostRelevantAdvice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BattleAdviceData.BattleAdviceData_C.CalculateAdvice
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleAdviceData_C::CalculateAdvice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleAdviceData.BattleAdviceData_C.CalculateAdvice");

	UBattleAdviceData_C_CalculateAdvice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
