#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WBP_Test_STGame.WBP_Test_STGame_C.SetGradationSpeed
struct UWBP_Test_STGame_C_SetGradationSpeed_Params
{
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Test_STGame.WBP_Test_STGame_C.SetGradationPower
struct UWBP_Test_STGame_C_SetGradationPower_Params
{
	float                                              Power;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Test_STGame.WBP_Test_STGame_C.SetGradationScrollVisible
struct UWBP_Test_STGame_C_SetGradationScrollVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Test_STGame.WBP_Test_STGame_C.SetThrowResult
struct UWBP_Test_STGame_C_SetThrowResult_Params
{
	bool                                               IsSuccess;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Test_STGame.WBP_Test_STGame_C.SetSuccessRate
struct UWBP_Test_STGame_C_SetSuccessRate_Params
{
	int                                                SuccessCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Test_STGame.WBP_Test_STGame_C.SetThrowResultVisible
struct UWBP_Test_STGame_C_SetThrowResultVisible_Params
{
	bool                                               IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Test_STGame.WBP_Test_STGame_C.GetThrowResultVisibility
struct UWBP_Test_STGame_C_GetThrowResultVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_Test_STGame.WBP_Test_STGame_C.SetResultVisible
struct UWBP_Test_STGame_C_SetResultVisible_Params
{
	bool                                               IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Test_STGame.WBP_Test_STGame_C.SetNormalVisible
struct UWBP_Test_STGame_C_SetNormalVisible_Params
{
	bool                                               IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Test_STGame.WBP_Test_STGame_C.GetResultVisibility
struct UWBP_Test_STGame_C_GetResultVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_Test_STGame.WBP_Test_STGame_C.GetNormalVisibility
struct UWBP_Test_STGame_C_GetNormalVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_Test_STGame.WBP_Test_STGame_C.SetScore
struct UWBP_Test_STGame_C_SetScore_Params
{
	int                                                InScore;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Test_STGame.WBP_Test_STGame_C.SetThrowCount
struct UWBP_Test_STGame_C_SetThrowCount_Params
{
	int                                                newParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Test_STGame.WBP_Test_STGame_C.Construct
struct UWBP_Test_STGame_C_Construct_Params
{
};

// Function WBP_Test_STGame.WBP_Test_STGame_C.ExecuteUbergraph_WBP_Test_STGame
struct UWBP_Test_STGame_C_ExecuteUbergraph_WBP_Test_STGame_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
