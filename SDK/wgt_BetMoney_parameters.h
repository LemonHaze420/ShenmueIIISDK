#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function wgt_BetMoney.wgt_BetMoney_C.GetFadeAnimations
struct Uwgt_BetMoney_C_GetFadeAnimations_Params
{
	TArray<class UWidgetAnimation*>                    Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function wgt_BetMoney.wgt_BetMoney_C.FormatMoneyText
struct Uwgt_BetMoney_C_FormatMoneyText_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function wgt_BetMoney.wgt_BetMoney_C.GetActualBetMin
struct Uwgt_BetMoney_C_GetActualBetMin_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function wgt_BetMoney.wgt_BetMoney_C.GetActualBetMax
struct Uwgt_BetMoney_C_GetActualBetMax_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function wgt_BetMoney.wgt_BetMoney_C.SetMoney
struct Uwgt_BetMoney_C_SetMoney_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BetMoney.wgt_BetMoney_C.GetActualFluctuation
struct Uwgt_BetMoney_C_GetActualFluctuation_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function wgt_BetMoney.wgt_BetMoney_C.UpdateBetMoneyText
struct Uwgt_BetMoney_C_UpdateBetMoneyText_Params
{
};

// Function wgt_BetMoney.wgt_BetMoney_C.CanAdjustBet
struct Uwgt_BetMoney_C_CanAdjustBet_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function wgt_BetMoney.wgt_BetMoney_C.GetBetMoney
struct Uwgt_BetMoney_C_GetBetMoney_Params
{
	int                                                BetMoney;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_BetMoney.wgt_BetMoney_C.DecideCancel
struct Uwgt_BetMoney_C_DecideCancel_Params
{
};

// Function wgt_BetMoney.wgt_BetMoney_C.Construct
struct Uwgt_BetMoney_C_Construct_Params
{
};

// Function wgt_BetMoney.wgt_BetMoney_C.SelectBetUp
struct Uwgt_BetMoney_C_SelectBetUp_Params
{
};

// Function wgt_BetMoney.wgt_BetMoney_C.SelectBetDown
struct Uwgt_BetMoney_C_SelectBetDown_Params
{
};

// Function wgt_BetMoney.wgt_BetMoney_C.SelectMaxBet
struct Uwgt_BetMoney_C_SelectMaxBet_Params
{
};

// Function wgt_BetMoney.wgt_BetMoney_C.SelectCancel
struct Uwgt_BetMoney_C_SelectCancel_Params
{
};

// Function wgt_BetMoney.wgt_BetMoney_C.DecideBet
struct Uwgt_BetMoney_C_DecideBet_Params
{
};

// Function wgt_BetMoney.wgt_BetMoney_C.ExecuteUbergraph_wgt_BetMoney
struct Uwgt_BetMoney_C_ExecuteUbergraph_wgt_BetMoney_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
