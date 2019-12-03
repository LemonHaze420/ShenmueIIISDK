
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

// Function WBP_Test_STGame.WBP_Test_STGame_C.SetGradationSpeed
// (Net, NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintPure)
// Parameters:
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Test_STGame_C::STATIC_SetGradationSpeed(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.SetGradationSpeed");

	UWBP_Test_STGame_C_SetGradationSpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.SetGradationPower
// (NetRequest, Native, NetResponse, NetMulticast, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Power                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Test_STGame_C::SetGradationPower(float Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.SetGradationPower");

	UWBP_Test_STGame_C_SetGradationPower_Params params;
	params.Power = Power;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.SetGradationScrollVisible
// (Exec, Native, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Test_STGame_C::SetGradationScrollVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.SetGradationScrollVisible");

	UWBP_Test_STGame_C_SetGradationScrollVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.SetThrowResult
// (Native, Event, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.SetSuccessRate
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, Public, Delegate, NetServer, NetClient, BlueprintPure)
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
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Test_STGame_C::STATIC_SetThrowResultVisible(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.SetThrowResultVisible");

	UWBP_Test_STGame_C_SetThrowResultVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.GetThrowResultVisibility
// (Native, NetMulticast, Private, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWBP_Test_STGame_C::GetThrowResultVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.GetThrowResultVisibility");

	UWBP_Test_STGame_C_GetThrowResultVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.SetResultVIsible
// (NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Test_STGame_C::STATIC_SetResultVIsible(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.SetResultVIsible");

	UWBP_Test_STGame_C_SetResultVIsible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.SetNormalVisible
// (Net, NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Test_STGame_C::STATIC_SetNormalVisible(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.SetNormalVisible");

	UWBP_Test_STGame_C_SetNormalVisible_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.GetResultVisibility
// (NetReliable, NetRequest, Exec, NetMulticast, Private, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (Net, NetReliable, Exec, NetMulticast, Private, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            InScore                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Test_STGame_C::STATIC_SetScore(int InScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.SetScore");

	UWBP_Test_STGame_C_SetScore_Params params;
	params.InScore = InScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.SetThrowCount
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            newParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Test_STGame_C::STATIC_SetThrowCount(int newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.SetThrowCount");

	UWBP_Test_STGame_C_SetThrowCount_Params params;
	params.newParam = newParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.Construct
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UWBP_Test_STGame_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.Construct");

	UWBP_Test_STGame_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Test_STGame.WBP_Test_STGame_C.ExecuteUbergraph_WBP_Test_STGame
// (Exec, Native, NetResponse, NetMulticast, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Test_STGame_C::ExecuteUbergraph_WBP_Test_STGame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Test_STGame.WBP_Test_STGame_C.ExecuteUbergraph_WBP_Test_STGame");

	UWBP_Test_STGame_C_ExecuteUbergraph_WBP_Test_STGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
