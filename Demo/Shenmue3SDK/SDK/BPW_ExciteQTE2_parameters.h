#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetScore
struct UBPW_ExciteQTE2_C_SetScore_Params
{
	int                                                HighScoreValue;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LastScoreValue;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetSuccessPointPos
struct UBPW_ExciteQTE2_C_SetSuccessPointPos_Params
{
	float                                              Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetDifficultyText
struct UBPW_ExciteQTE2_C_SetDifficultyText_Params
{
	int                                                Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetSwitcher
struct UBPW_ExciteQTE2_C_SetSwitcher_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetHighScoreVisible
struct UBPW_ExciteQTE2_C_SetHighScoreVisible_Params
{
	ESlateVisibility                                   Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.SetLiversIcon
struct UBPW_ExciteQTE2_C_SetLiversIcon_Params
{
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.RestartMusic
struct UBPW_ExciteQTE2_C_RestartMusic_Params
{
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.PlayGameOver
struct UBPW_ExciteQTE2_C_PlayGameOver_Params
{
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.OneUp
struct UBPW_ExciteQTE2_C_OneUp_Params
{
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.AddToScore
struct UBPW_ExciteQTE2_C_AddToScore_Params
{
	int                                                Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentScore;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetMultiplierText
struct UBPW_ExciteQTE2_C_GetMultiplierText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.UpdateMultiplier
struct UBPW_ExciteQTE2_C_UpdateMultiplier_Params
{
	float                                              Multiplier;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetMultiplierVisibility
struct UBPW_ExciteQTE2_C_GetMultiplierVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.CalcScore
struct UBPW_ExciteQTE2_C_CalcScore_Params
{
	int                                                Score;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.CheckGameOver
struct UBPW_ExciteQTE2_C_CheckGameOver_Params
{
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetSuccessPointsColorAndOpacity
struct UBPW_ExciteQTE2_C_GetSuccessPointsColorAndOpacity_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetLastSuccessPoints
struct UBPW_ExciteQTE2_C_GetLastSuccessPoints_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetHighScore
struct UBPW_ExciteQTE2_C_GetHighScore_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetLastScore
struct UBPW_ExciteQTE2_C_GetLastScore_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Beep
struct UBPW_ExciteQTE2_C_Beep_Params
{
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.UnPause
struct UBPW_ExciteQTE2_C_UnPause_Params
{
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetButtonIconColorAndOpacity
struct UBPW_ExciteQTE2_C_GetButtonIconColorAndOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetCurrentScore
struct UBPW_ExciteQTE2_C_GetCurrentScore_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Input_test
struct UBPW_ExciteQTE2_C_Input_test_Params
{
	TEnumAsByte<EN_padSwitch>                          Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetFailureText
struct UBPW_ExciteQTE2_C_GetFailureText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetFailureVisibility
struct UBPW_ExciteQTE2_C_GetFailureVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetProgressBarColor
struct UBPW_ExciteQTE2_C_GetProgressBarColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Fail
struct UBPW_ExciteQTE2_C_Fail_Params
{
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.ElapsedBar
struct UBPW_ExciteQTE2_C_ElapsedBar_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetVisibilityIsGameInProgress
struct UBPW_ExciteQTE2_C_GetVisibilityIsGameInProgress_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.GetButtonIcon
struct UBPW_ExciteQTE2_C_GetButtonIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Play QTE Beep
struct UBPW_ExciteQTE2_C_Play_QTE_Beep_Params
{
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Play QTE Success
struct UBPW_ExciteQTE2_C_Play_QTE_Success_Params
{
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Play QTE Failure
struct UBPW_ExciteQTE2_C_Play_QTE_Failure_Params
{
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Construct
struct UBPW_ExciteQTE2_C_Construct_Params
{
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Tick
struct UBPW_ExciteQTE2_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.StartGame
struct UBPW_ExciteQTE2_C_StartGame_Params
{
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Next Button
struct UBPW_ExciteQTE2_C_Next_Button_Params
{
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.TimeOutFailEnd
struct UBPW_ExciteQTE2_C_TimeOutFailEnd_Params
{
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Input
struct UBPW_ExciteQTE2_C_Input_Params
{
	TEnumAsByte<EN_padSwitch>                          Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.Input Fail Finished
struct UBPW_ExciteQTE2_C_Input_Fail_Finished_Params
{
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.CancelGame
struct UBPW_ExciteQTE2_C_CancelGame_Params
{
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.ExecuteUbergraph_BPW_ExciteQTE2
struct UBPW_ExciteQTE2_C_ExecuteUbergraph_BPW_ExciteQTE2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_ExciteQTE2.BPW_ExciteQTE2_C.BeginGame__DelegateSignature
struct UBPW_ExciteQTE2_C_BeginGame__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
