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

// Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.CheckStreetFight
struct UBP_TalkProcess_Bet_C_CheckStreetFight_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Price;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.OnBetCancel
struct UBP_TalkProcess_Bet_C_OnBetCancel_Params
{
};

// Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.OnBet
struct UBP_TalkProcess_Bet_C_OnBet_Params
{
};

// Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.WasEnteredBet
struct UBP_TalkProcess_Bet_C_WasEnteredBet_Params
{
};

// Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.CreateBetUI
struct UBP_TalkProcess_Bet_C_CreateBetUI_Params
{
	int                                                bet;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                maxbet;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FluctuationValue;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_ValueType>                          Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.Finalize
struct UBP_TalkProcess_Bet_C_Finalize_Params
{
};

// Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.Activate
struct UBP_TalkProcess_Bet_C_Activate_Params
{
};

// Function BP_TalkProcess_Bet.BP_TalkProcess_Bet_C.ExecuteUbergraph_BP_TalkProcess_Bet
struct UBP_TalkProcess_Bet_C_ExecuteUbergraph_BP_TalkProcess_Bet_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
