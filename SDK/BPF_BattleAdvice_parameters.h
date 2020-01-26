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

// Function BPF_BattleAdvice.BPF_BattleAdvice_C.BPF_FilterOutBattleAdvice
struct UBPF_BattleAdvice_C_BPF_FilterOutBattleAdvice_Params
{
	TArray<TEnumAsByte<EBattleAdvice>>                 TargetList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<TEnumAsByte<EBattleAdvice>>                 Remove;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_BattleAdvice.BPF_BattleAdvice_C.BPF_IsBattleAdviceRelevant
struct UBPF_BattleAdvice_C_BPF_IsBattleAdviceRelevant_Params
{
	TEnumAsByte<EBattleAdvice>                         Advice;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_BattleAdvice.BPF_BattleAdvice_C.BPF_GetRelevantBattleAdvice
struct UBPF_BattleAdvice_C_BPF_GetRelevantBattleAdvice_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EBattleAdvice>>                 SortedAdvice;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_BattleAdvice.BPF_BattleAdvice_C.BPF_GetMostRelevantBattleAdvice
struct UBPF_BattleAdvice_C_BPF_GetMostRelevantBattleAdvice_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBattleAdvice>                         newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
