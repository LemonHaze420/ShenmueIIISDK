
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

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetScore
// (Net, NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            HighScoreValue                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LastScoreValue                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::SetScore(int HighScoreValue, int LastScoreValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetScore");

	UBPW_ExciteQTE2_C_SetScore_Params params;
	params.HighScoreValue = HighScoreValue;
	params.LastScoreValue = LastScoreValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetSuccessPointPos
// (Exec, Native, NetResponse, Static, MulticastDelegate, Delegate, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::STATIC_SetSuccessPointPos(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetSuccessPointPos");

	UBPW_ExciteQTE2_C_SetSuccessPointPos_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetDifficultyText
// (NetReliable, NetRequest, Native, Event, NetResponse, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::SetDifficultyText(int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetDifficultyText");

	UBPW_ExciteQTE2_C_SetDifficultyText_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetSwitcher
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::STATIC_SetSwitcher(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetSwitcher");

	UBPW_ExciteQTE2_C_SetSwitcher_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetHighScoreVisible
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESlateVisibility               Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::STATIC_SetHighScoreVisible(ESlateVisibility Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetHighScoreVisible");

	UBPW_ExciteQTE2_C_SetHighScoreVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetLiversIcon
// (NetRequest, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPW_ExciteQTE2_C::SetLiversIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetLiversIcon");

	UBPW_ExciteQTE2_C_SetLiversIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.RestartMusic
// (NetReliable, NetRequest, NetMulticast, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)

void UBPW_ExciteQTE2_C::RestartMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.RestartMusic");

	UBPW_ExciteQTE2_C_RestartMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.PlayGameOver
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBPW_ExciteQTE2_C::STATIC_PlayGameOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.PlayGameOver");

	UBPW_ExciteQTE2_C_PlayGameOver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.OneUp
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBPW_ExciteQTE2_C::STATIC_OneUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.OneUp");

	UBPW_ExciteQTE2_C_OneUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.AddToScore
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentScore                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::STATIC_AddToScore(int Add, int* CurrentScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.AddToScore");

	UBPW_ExciteQTE2_C_AddToScore_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentScore != nullptr)
		*CurrentScore = params.CurrentScore;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetMultiplierText
// (NetRequest, NetMulticast, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_ExciteQTE2_C::GetMultiplierText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetMultiplierText");

	UBPW_ExciteQTE2_C_GetMultiplierText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.UpdateMultiplier
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// float                          Multiplier                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::STATIC_UpdateMultiplier(float* Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.UpdateMultiplier");

	UBPW_ExciteQTE2_C_UpdateMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Multiplier != nullptr)
		*Multiplier = params.Multiplier;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetMultiplierVisibility
// (NetRequest, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBPW_ExciteQTE2_C::STATIC_GetMultiplierVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetMultiplierVisibility");

	UBPW_ExciteQTE2_C_GetMultiplierVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.CalcScore
// (NetRequest, Event, NetResponse, Static, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::STATIC_CalcScore(int* Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.CalcScore");

	UBPW_ExciteQTE2_C_CalcScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Score != nullptr)
		*Score = params.Score;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.CheckGameOver
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBPW_ExciteQTE2_C::STATIC_CheckGameOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.CheckGameOver");

	UBPW_ExciteQTE2_C_CheckGameOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetSuccessPointsColorAndOpacity
// (NetReliable, NetRequest, Native, Static, NetMulticast, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UBPW_ExciteQTE2_C::STATIC_GetSuccessPointsColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetSuccessPointsColorAndOpacity");

	UBPW_ExciteQTE2_C_GetSuccessPointsColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetLastSuccessPoints
// (NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_ExciteQTE2_C::STATIC_GetLastSuccessPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetLastSuccessPoints");

	UBPW_ExciteQTE2_C_GetLastSuccessPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetHighScore
// (NetReliable, NetRequest, Native, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_ExciteQTE2_C::GetHighScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetHighScore");

	UBPW_ExciteQTE2_C_GetHighScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetLastScore
// (Net, Exec, Native, NetResponse, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_ExciteQTE2_C::GetLastScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetLastScore");

	UBPW_ExciteQTE2_C_GetLastScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Beep
// (NetRequest, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UBPW_ExciteQTE2_C::Beep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Beep");

	UBPW_ExciteQTE2_C_Beep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.UnPause
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBPW_ExciteQTE2_C::STATIC_UnPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.UnPause");

	UBPW_ExciteQTE2_C_UnPause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetButtonIconColorAndOpacity
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UBPW_ExciteQTE2_C::STATIC_GetButtonIconColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetButtonIconColorAndOpacity");

	UBPW_ExciteQTE2_C_GetButtonIconColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetCurrentScore
// (Net, NetReliable, Native, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_ExciteQTE2_C::GetCurrentScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetCurrentScore");

	UBPW_ExciteQTE2_C_GetCurrentScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Input_test
// (Net, NetRequest, Event, Static, NetMulticast, Public, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_padSwitch>      Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::STATIC_Input_test(TEnumAsByte<EN_padSwitch> Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Input_test");

	UBPW_ExciteQTE2_C_Input_test_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetFailureText
// (NetReliable, Exec, Event, Static, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_ExciteQTE2_C::STATIC_GetFailureText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetFailureText");

	UBPW_ExciteQTE2_C_GetFailureText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetFailureVisibility
// (Net, NetReliable, NetRequest, Native, NetResponse, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBPW_ExciteQTE2_C::GetFailureVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetFailureVisibility");

	UBPW_ExciteQTE2_C_GetFailureVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetProgressBarColor
// (Net, NetRequest, Exec, Native, Event, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UBPW_ExciteQTE2_C::GetProgressBarColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetProgressBarColor");

	UBPW_ExciteQTE2_C_GetProgressBarColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Fail
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void UBPW_ExciteQTE2_C::Fail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Fail");

	UBPW_ExciteQTE2_C_Fail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.ElapsedBar
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPW_ExciteQTE2_C::STATIC_ElapsedBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.ElapsedBar");

	UBPW_ExciteQTE2_C_ElapsedBar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetVisibilityIsGameInProgress
// (NetRequest, Exec, Native, NetResponse, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBPW_ExciteQTE2_C::GetVisibilityIsGameInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetVisibilityIsGameInProgress");

	UBPW_ExciteQTE2_C_GetVisibilityIsGameInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetButtonIcon
// (Net, NetResponse, Private, Protected, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UBPW_ExciteQTE2_C::GetButtonIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetButtonIcon");

	UBPW_ExciteQTE2_C_GetButtonIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Play QTE Beep
// (NetReliable, Exec, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UBPW_ExciteQTE2_C::Play_QTE_Beep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Play QTE Beep");

	UBPW_ExciteQTE2_C_Play_QTE_Beep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Play QTE Success
// (Net, Exec, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UBPW_ExciteQTE2_C::Play_QTE_Success()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Play QTE Success");

	UBPW_ExciteQTE2_C_Play_QTE_Success_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Play QTE Failure
// (Net, Exec, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UBPW_ExciteQTE2_C::Play_QTE_Failure()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Play QTE Failure");

	UBPW_ExciteQTE2_C_Play_QTE_Failure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Construct
// (Exec, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UBPW_ExciteQTE2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Construct");

	UBPW_ExciteQTE2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Tick
// (Net, NetRequest, Exec, Native, Static, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Tick");

	UBPW_ExciteQTE2_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.StartGame
// (Net, NetReliable, NetRequest, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UBPW_ExciteQTE2_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.StartGame");

	UBPW_ExciteQTE2_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Next Button
// (Net, NetReliable, NetRequest, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UBPW_ExciteQTE2_C::Next_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Next Button");

	UBPW_ExciteQTE2_C_Next_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.TimeOutFailEnd
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UBPW_ExciteQTE2_C::TimeOutFailEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.TimeOutFailEnd");

	UBPW_ExciteQTE2_C_TimeOutFailEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Input
// (Exec, Native, NetResponse, Static, NetMulticast, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_padSwitch>      Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::STATIC_Input(TEnumAsByte<EN_padSwitch> Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Input");

	UBPW_ExciteQTE2_C_Input_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Input Fail Finished
// (Net, NetRequest, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UBPW_ExciteQTE2_C::Input_Fail_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Input Fail Finished");

	UBPW_ExciteQTE2_C_Input_Fail_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.CancelGame
// (Net, NetRequest, NetResponse, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void UBPW_ExciteQTE2_C::CancelGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.CancelGame");

	UBPW_ExciteQTE2_C_CancelGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.ExecuteUbergraph_BPW_ExciteQTE2
// (Net, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::ExecuteUbergraph_BPW_ExciteQTE2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.ExecuteUbergraph_BPW_ExciteQTE2");

	UBPW_ExciteQTE2_C_ExecuteUbergraph_BPW_ExciteQTE2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.BeginGame__DelegateSignature
// (NetReliable, NetRequest, Event, Static, NetMulticast, Public, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UBPW_ExciteQTE2_C::STATIC_BeginGame__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.BeginGame__DelegateSignature");

	UBPW_ExciteQTE2_C_BeginGame__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
