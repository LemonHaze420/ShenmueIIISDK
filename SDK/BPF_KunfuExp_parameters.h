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

// Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_GetPlayerStat_Vitality
struct UBPF_KunfuExp_C_BPF_GetPlayerStat_Vitality_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3DerivedPlayerLevel*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_GetPlayerStats_Kunfu
struct UBPF_KunfuExp_C_BPF_GetPlayerStats_Kunfu_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3PlayerExpCollection*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_AddKunFuLevel
struct UBPF_KunfuExp_C_BPF_AddKunFuLevel_Params
{
	struct FName                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddLPevel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_GetKunFuLevel
struct UBPF_KunfuExp_C_BPF_GetKunFuLevel_Params
{
	struct FName                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutLevel;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutNextRatio;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_GetKunFuLevelRange
struct UBPF_KunfuExp_C_BPF_GetKunFuLevelRange_Params
{
	struct FName                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Min;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_SetKunFuLevel
struct UBPF_KunfuExp_C_BPF_SetKunFuLevel_Params
{
	struct FName                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_SetKunfuRatio
struct UBPF_KunfuExp_C_BPF_SetKunfuRatio_Params
{
	struct FName                                       Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_AddKunfuRatio
struct UBPF_KunfuExp_C_BPF_AddKunfuRatio_Params
{
	struct FName                                       Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_SetKunfuPoints
struct UBPF_KunfuExp_C_BPF_SetKunfuPoints_Params
{
	struct FName                                       Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_KunfuExp.BPF_KunfuExp_C.BPF_AddKunfuPoints
struct UBPF_KunfuExp_C_BPF_AddKunfuPoints_Params
{
	struct FName                                       Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amt;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
