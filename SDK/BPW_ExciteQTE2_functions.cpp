
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

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetScore
// (Public, BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetSuccessPointPos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::SetSuccessPointPos(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetSuccessPointPos");

	UBPW_ExciteQTE2_C_SetSuccessPointPos_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetDifficultyText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::SetDifficultyText(int Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetDifficultyText");

	UBPW_ExciteQTE2_C_SetDifficultyText_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetSwitcher
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::SetSwitcher(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetSwitcher");

	UBPW_ExciteQTE2_C_SetSwitcher_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetHighScoreVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::SetHighScoreVisible(ESlateVisibility Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetHighScoreVisible");

	UBPW_ExciteQTE2_C_SetHighScoreVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetLiversIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_ExciteQTE2_C::SetLiversIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetLiversIcon");

	UBPW_ExciteQTE2_C_SetLiversIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.RestartMusic
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_ExciteQTE2_C::RestartMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.RestartMusic");

	UBPW_ExciteQTE2_C_RestartMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.PlayGameOver
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_ExciteQTE2_C::PlayGameOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.PlayGameOver");

	UBPW_ExciteQTE2_C_PlayGameOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.OneUp
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_ExciteQTE2_C::OneUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.OneUp");

	UBPW_ExciteQTE2_C_OneUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.AddToScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentScore                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::AddToScore(int Add, int* CurrentScore)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Multiplier                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::UpdateMultiplier(float* Multiplier)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBPW_ExciteQTE2_C::GetMultiplierVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetMultiplierVisibility");

	UBPW_ExciteQTE2_C_GetMultiplierVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.CalcScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Score                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::CalcScore(int* Score)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_ExciteQTE2_C::CheckGameOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.CheckGameOver");

	UBPW_ExciteQTE2_C_CheckGameOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetSuccessPointsColorAndOpacity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UBPW_ExciteQTE2_C::GetSuccessPointsColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetSuccessPointsColorAndOpacity");

	UBPW_ExciteQTE2_C_GetSuccessPointsColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetLastSuccessPoints
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_ExciteQTE2_C::GetLastSuccessPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetLastSuccessPoints");

	UBPW_ExciteQTE2_C_GetLastSuccessPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetHighScore
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_ExciteQTE2_C::GetHighScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetHighScore");

	UBPW_ExciteQTE2_C_GetHighScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetLastScore
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_ExciteQTE2_C::GetLastScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetLastScore");

	UBPW_ExciteQTE2_C_GetLastScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Beep
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_ExciteQTE2_C::Beep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Beep");

	UBPW_ExciteQTE2_C_Beep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.UnPause
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_ExciteQTE2_C::UnPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.UnPause");

	UBPW_ExciteQTE2_C_UnPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetButtonIconColorAndOpacity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UBPW_ExciteQTE2_C::GetButtonIconColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetButtonIconColorAndOpacity");

	UBPW_ExciteQTE2_C_GetButtonIconColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetCurrentScore
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_ExciteQTE2_C::GetCurrentScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetCurrentScore");

	UBPW_ExciteQTE2_C_GetCurrentScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Input_test
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_padSwitch>      Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::Input_test(TEnumAsByte<EN_padSwitch> Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Input_test");

	UBPW_ExciteQTE2_C_Input_test_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetFailureText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_ExciteQTE2_C::GetFailureText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetFailureText");

	UBPW_ExciteQTE2_C_GetFailureText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetFailureVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBPW_ExciteQTE2_C::GetFailureVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetFailureVisibility");

	UBPW_ExciteQTE2_C_GetFailureVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetProgressBarColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UBPW_ExciteQTE2_C::GetProgressBarColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetProgressBarColor");

	UBPW_ExciteQTE2_C_GetProgressBarColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Fail
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_ExciteQTE2_C::Fail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Fail");

	UBPW_ExciteQTE2_C_Fail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.ElapsedBar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPW_ExciteQTE2_C::ElapsedBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.ElapsedBar");

	UBPW_ExciteQTE2_C_ElapsedBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetVisibilityIsGameInProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBPW_ExciteQTE2_C::GetVisibilityIsGameInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetVisibilityIsGameInProgress");

	UBPW_ExciteQTE2_C_GetVisibilityIsGameInProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetButtonIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (BlueprintCallable, BlueprintEvent)

void UBPW_ExciteQTE2_C::Play_QTE_Beep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Play QTE Beep");

	UBPW_ExciteQTE2_C_Play_QTE_Beep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Play QTE Success
// (BlueprintCallable, BlueprintEvent)

void UBPW_ExciteQTE2_C::Play_QTE_Success()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Play QTE Success");

	UBPW_ExciteQTE2_C_Play_QTE_Success_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Play QTE Failure
// (BlueprintCallable, BlueprintEvent)

void UBPW_ExciteQTE2_C::Play_QTE_Failure()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Play QTE Failure");

	UBPW_ExciteQTE2_C_Play_QTE_Failure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_ExciteQTE2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Construct");

	UBPW_ExciteQTE2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Tick");

	UBPW_ExciteQTE2_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.StartGame
// (BlueprintCallable, BlueprintEvent)

void UBPW_ExciteQTE2_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.StartGame");

	UBPW_ExciteQTE2_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Next Button
// (BlueprintCallable, BlueprintEvent)

void UBPW_ExciteQTE2_C::Next_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Next Button");

	UBPW_ExciteQTE2_C_Next_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.TimeOutFailEnd
// (BlueprintCallable, BlueprintEvent)

void UBPW_ExciteQTE2_C::TimeOutFailEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.TimeOutFailEnd");

	UBPW_ExciteQTE2_C_TimeOutFailEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Input
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_padSwitch>      Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::Input(TEnumAsByte<EN_padSwitch> Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Input");

	UBPW_ExciteQTE2_C_Input_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Input Fail Finished
// (BlueprintCallable, BlueprintEvent)

void UBPW_ExciteQTE2_C::Input_Fail_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Input Fail Finished");

	UBPW_ExciteQTE2_C_Input_Fail_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.CancelGame
// (BlueprintCallable, BlueprintEvent)

void UBPW_ExciteQTE2_C::CancelGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.CancelGame");

	UBPW_ExciteQTE2_C_CancelGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.ExecuteUbergraph_BPW_ExciteQTE2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_ExciteQTE2_C::ExecuteUbergraph_BPW_ExciteQTE2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.ExecuteUbergraph_BPW_ExciteQTE2");

	UBPW_ExciteQTE2_C_ExecuteUbergraph_BPW_ExciteQTE2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.BeginGame__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPW_ExciteQTE2_C::BeginGame__DelegateSignature()
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
