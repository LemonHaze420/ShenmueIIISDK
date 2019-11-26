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

// Function BattleAdviceData.BattleAdviceData_C.IsLevelSufficient
struct UBattleAdviceData_C_IsLevelSufficient_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleAdviceData.BattleAdviceData_C.AddAdvice
struct UBattleAdviceData_C_AddAdvice_Params
{
	TEnumAsByte<EBattleAdvice>                         Advice;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleAdviceData.BattleAdviceData_C.IsRelevant
struct UBattleAdviceData_C_IsRelevant_Params
{
	TEnumAsByte<EBattleAdvice>                         ItemToFind;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleAdviceData.BattleAdviceData_C.GetMostRelevantAdvice
struct UBattleAdviceData_C_GetMostRelevantAdvice_Params
{
	TEnumAsByte<EBattleAdvice>                         Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleAdviceData.BattleAdviceData_C.CalculateAdvice
struct UBattleAdviceData_C_CalculateAdvice_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
