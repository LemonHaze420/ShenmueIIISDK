
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function WBP_Test_STGame.WBP_Test_STGame_C.SetGradationSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Test_STGame_C::SetGradationSpeed(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.SetGradationSpeed");

	UWBP_Test_STGame_C_SetGradationSpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.SetGradationPower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Power                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Test_STGame_C::SetGradationPower(float Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.SetGradationPower");

	UWBP_Test_STGame_C_SetGradationPower_Params params;
	params.Power = Power;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.SetGradationScrollVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Test_STGame_C::SetGradationScrollVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.SetGradationScrollVisible");

	UWBP_Test_STGame_C_SetGradationScrollVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.SetThrowResult
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Point                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Test_STGame_C::SetThrowResult(bool IsSuccess, int Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.SetThrowResult");

	UWBP_Test_STGame_C_SetThrowResult_Params params;
	params.IsSuccess = IsSuccess;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.SetSuccessRate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SuccessCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Test_STGame_C::SetSuccessRate(int SuccessCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.SetSuccessRate");

	UWBP_Test_STGame_C_SetSuccessRate_Params params;
	params.SuccessCount = SuccessCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.SetThrowResultVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Test_STGame_C::SetThrowResultVisible(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.SetThrowResultVisible");

	UWBP_Test_STGame_C_SetThrowResultVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.GetThrowResultVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_Test_STGame_C::GetThrowResultVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.GetThrowResultVisibility");

	UWBP_Test_STGame_C_GetThrowResultVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.SetResultVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Test_STGame_C::SetResultVisible(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.SetResultVisible");

	UWBP_Test_STGame_C_SetResultVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.SetNormalVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Test_STGame_C::SetNormalVisible(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.SetNormalVisible");

	UWBP_Test_STGame_C_SetNormalVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.GetResultVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_Test_STGame_C::GetResultVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.GetResultVisibility");

	UWBP_Test_STGame_C_GetResultVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.GetNormalVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_Test_STGame_C::GetNormalVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.GetNormalVisibility");

	UWBP_Test_STGame_C_GetNormalVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.SetScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InScore                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Test_STGame_C::SetScore(int InScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.SetScore");

	UWBP_Test_STGame_C_SetScore_Params params;
	params.InScore = InScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.SetThrowCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            newParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Test_STGame_C::SetThrowCount(int newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.SetThrowCount");

	UWBP_Test_STGame_C_SetThrowCount_Params params;
	params.newParam = newParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Test_STGame_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.Construct");

	UWBP_Test_STGame_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.ExecuteUbergraph_WBP_Test_STGame
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Test_STGame_C::ExecuteUbergraph_WBP_Test_STGame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.ExecuteUbergraph_WBP_Test_STGame");

	UWBP_Test_STGame_C_ExecuteUbergraph_WBP_Test_STGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
