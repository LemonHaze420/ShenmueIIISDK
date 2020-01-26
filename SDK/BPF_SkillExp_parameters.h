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

// Function BPF_SkillExp.BPF_SkillExp_C.BPF_ShouldShowSkillAquisitionHint
struct UBPF_SkillExp_C_BPF_ShouldShowSkillAquisitionHint_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_SkillExp.BPF_SkillExp_C.BPF_HasPlayerMasteredAllSkills
struct UBPF_SkillExp_C_BPF_HasPlayerMasteredAllSkills_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_SkillExp.BPF_SkillExp_C.BPF_CountNonMasteredSkills
struct UBPF_SkillExp_C_BPF_CountNonMasteredSkills_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_SkillExp.BPF_SkillExp_C.BPF_IsPlayerSkillMastered
struct UBPF_SkillExp_C_BPF_IsPlayerSkillMastered_Params
{
	struct FName                                       SkillItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_SkillExp.BPF_SkillExp_C.BPF_GetPlayerSkillLevelData
struct UBPF_SkillExp_C_BPF_GetPlayerSkillLevelData_Params
{
	struct FName                                       SkillItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutLevel;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutNextRatio;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SkillMinLevel;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SkillMaxLevel;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_SkillExp.BPF_SkillExp_C.BPF_GetPlayerSkillLevelMax
struct UBPF_SkillExp_C_BPF_GetPlayerSkillLevelMax_Params
{
	struct FName                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutLevel;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_SkillExp.BPF_SkillExp_C.BPF_GetPlayerSkillLevelAsRatio
struct UBPF_SkillExp_C_BPF_GetPlayerSkillLevelAsRatio_Params
{
	struct FName                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_SkillExp.BPF_SkillExp_C.BPF_GetPlayerSkillLevel
struct UBPF_SkillExp_C_BPF_GetPlayerSkillLevel_Params
{
	struct FName                                       SkillItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutLevel;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_SkillExp.BPF_SkillExp_C.BPF_GetPlayerSkillStats
struct UBPF_SkillExp_C_BPF_GetPlayerSkillStats_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3PlayerExpCollection*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
