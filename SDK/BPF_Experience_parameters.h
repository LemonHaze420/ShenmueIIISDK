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

// Function BPF_Experience.BPF_Experience_C.BPF_UpdateTrainingLevelUpData
struct UBPF_Experience_C_BPF_UpdateTrainingLevelUpData_Params
{
	struct FST_SparringResultLevelUpData               Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FST_SparringResultLevelUpData               ATK;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FST_SparringResultLevelUpData               VIT;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_Experience.BPF_Experience_C.BPF_InitializeTrainingLevelUpData
struct UBPF_Experience_C_BPF_InitializeTrainingLevelUpData_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_SparringResultLevelUpData               Player;                                                   // (Parm, OutParm)
	struct FST_SparringResultLevelUpData               ATK;                                                      // (Parm, OutParm)
	struct FST_SparringResultLevelUpData               VIT;                                                      // (Parm, OutParm)
};

// Function BPF_Experience.BPF_Experience_C.BPF_ShouldShowExpHintPostTraining
struct UBPF_Experience_C_BPF_ShouldShowExpHintPostTraining_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_Experience.BPF_Experience_C.BPF_CalcPlayerExpModifer_Energy_Lerp
struct UBPF_Experience_C_BPF_CalcPlayerExpModifer_Energy_Lerp_Params
{
	float                                              Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Experience.BPF_Experience_C.BPF_DebugLogPlayerExpModifier
struct UBPF_Experience_C_BPF_DebugLogPlayerExpModifier_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Experience.BPF_Experience_C.BPF_CalcPlayerExpModifier_Energy
struct UBPF_Experience_C_BPF_CalcPlayerExpModifier_Energy_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Experience.BPF_Experience_C.BPF_CalcPlayerExpModifier_Difficulty
struct UBPF_Experience_C_BPF_CalcPlayerExpModifier_Difficulty_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_Experience.BPF_Experience_C.BPF_CalcPlayerExpModifier
struct UBPF_Experience_C_BPF_CalcPlayerExpModifier_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
