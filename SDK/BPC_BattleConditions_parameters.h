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

// Function BPC_BattleConditions.BPC_BattleConditions_C.ShouldDelayHPCheckFor
struct UBPC_BattleConditions_C_ShouldDelayHPCheckFor_Params
{
	TEnumAsByte<EBattleWinLoseResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_BattleConditions.BPC_BattleConditions_C.ConvertActorsToIDs
struct UBPC_BattleConditions_C_ConvertActorsToIDs_Params
{
};

// Function BPC_BattleConditions.BPC_BattleConditions_C.ReceiveBeginPlay
struct UBPC_BattleConditions_C_ReceiveBeginPlay_Params
{
};

// Function BPC_BattleConditions.BPC_BattleConditions_C.ExecuteUbergraph_BPC_BattleConditions
struct UBPC_BattleConditions_C_ExecuteUbergraph_BPC_BattleConditions_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
