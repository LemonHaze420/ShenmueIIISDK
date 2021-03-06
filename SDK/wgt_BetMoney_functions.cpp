
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

// Function wgt_BetMoney.wgt_BetMoney_C.GetFadeAnimations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UWidgetAnimation*> Array                          (Parm, OutParm, ZeroConstructor)

void Uwgt_BetMoney_C::GetFadeAnimations(TArray<class UWidgetAnimation*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BetMoney.wgt_BetMoney_C.GetFadeAnimations");

	Uwgt_BetMoney_C_GetFadeAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function wgt_BetMoney.wgt_BetMoney_C.FormatMoneyText
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uwgt_BetMoney_C::FormatMoneyText(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BetMoney.wgt_BetMoney_C.FormatMoneyText");

	Uwgt_BetMoney_C_FormatMoneyText_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_BetMoney.wgt_BetMoney_C.GetActualBetMin
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int Uwgt_BetMoney_C::GetActualBetMin()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BetMoney.wgt_BetMoney_C.GetActualBetMin");

	Uwgt_BetMoney_C_GetActualBetMin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_BetMoney.wgt_BetMoney_C.GetActualBetMax
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int Uwgt_BetMoney_C::GetActualBetMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BetMoney.wgt_BetMoney_C.GetActualBetMax");

	Uwgt_BetMoney_C_GetActualBetMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_BetMoney.wgt_BetMoney_C.SetMoney
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BetMoney_C::SetMoney(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BetMoney.wgt_BetMoney_C.SetMoney");

	Uwgt_BetMoney_C_SetMoney_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BetMoney.wgt_BetMoney_C.GetActualFluctuation
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int Uwgt_BetMoney_C::GetActualFluctuation()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BetMoney.wgt_BetMoney_C.GetActualFluctuation");

	Uwgt_BetMoney_C_GetActualFluctuation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_BetMoney.wgt_BetMoney_C.UpdateBetMoneyText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uwgt_BetMoney_C::UpdateBetMoneyText()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BetMoney.wgt_BetMoney_C.UpdateBetMoneyText");

	Uwgt_BetMoney_C_UpdateBetMoneyText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BetMoney.wgt_BetMoney_C.CanAdjustBet
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uwgt_BetMoney_C::CanAdjustBet()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BetMoney.wgt_BetMoney_C.CanAdjustBet");

	Uwgt_BetMoney_C_CanAdjustBet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function wgt_BetMoney.wgt_BetMoney_C.GetBetMoney
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BetMoney                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwgt_BetMoney_C::GetBetMoney(int* BetMoney)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BetMoney.wgt_BetMoney_C.GetBetMoney");

	Uwgt_BetMoney_C_GetBetMoney_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BetMoney != nullptr)
		*BetMoney = params.BetMoney;
}


// Function wgt_BetMoney.wgt_BetMoney_C.DecideCancel
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_BetMoney_C::DecideCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BetMoney.wgt_BetMoney_C.DecideCancel");

	Uwgt_BetMoney_C_DecideCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BetMoney.wgt_BetMoney_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uwgt_BetMoney_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BetMoney.wgt_BetMoney_C.Construct");

	Uwgt_BetMoney_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BetMoney.wgt_BetMoney_C.SelectBetUp
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_BetMoney_C::SelectBetUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BetMoney.wgt_BetMoney_C.SelectBetUp");

	Uwgt_BetMoney_C_SelectBetUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BetMoney.wgt_BetMoney_C.SelectBetDown
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_BetMoney_C::SelectBetDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BetMoney.wgt_BetMoney_C.SelectBetDown");

	Uwgt_BetMoney_C_SelectBetDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BetMoney.wgt_BetMoney_C.SelectMaxBet
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_BetMoney_C::SelectMaxBet()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BetMoney.wgt_BetMoney_C.SelectMaxBet");

	Uwgt_BetMoney_C_SelectMaxBet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BetMoney.wgt_BetMoney_C.SelectCancel
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_BetMoney_C::SelectCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BetMoney.wgt_BetMoney_C.SelectCancel");

	Uwgt_BetMoney_C_SelectCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BetMoney.wgt_BetMoney_C.DecideBet
// (Public, BlueprintCallable, BlueprintEvent)

void Uwgt_BetMoney_C::DecideBet()
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BetMoney.wgt_BetMoney_C.DecideBet");

	Uwgt_BetMoney_C_DecideBet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_BetMoney.wgt_BetMoney_C.ExecuteUbergraph_wgt_BetMoney
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_BetMoney_C::ExecuteUbergraph_wgt_BetMoney(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_BetMoney.wgt_BetMoney_C.ExecuteUbergraph_wgt_BetMoney");

	Uwgt_BetMoney_C_ExecuteUbergraph_wgt_BetMoney_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
