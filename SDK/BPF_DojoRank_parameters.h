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

// Function BPF_DojoRank.BPF_DojoRank_C.BPF_GetDojoRankIndex
struct UBPF_DojoRank_C_BPF_GetDojoRankIndex_Params
{
	TEnumAsByte<EDojoPlace>                            Dojo;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_DojoRank.BPF_DojoRank_C.BPF_GetPlayerDojoRank
struct UBPF_DojoRank_C_BPF_GetPlayerDojoRank_Params
{
	TEnumAsByte<EDojoPlace>                            Dojo;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3DojoRank                                        Rank;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_DojoRank.BPF_DojoRank_C.BPF_PlayerDojoRankGreaterOrEqual
struct UBPF_DojoRank_C_BPF_PlayerDojoRankGreaterOrEqual_Params
{
	struct FST_DojoRankRequirement                     Requirement;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_DojoRank.BPF_DojoRank_C.BPF_SetPlayerDojoRank
struct UBPF_DojoRank_C_BPF_SetPlayerDojoRank_Params
{
	TEnumAsByte<EDojoPlace>                            Dojo;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3DojoRank                                        Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_DojoRank.BPF_DojoRank_C.BPF_RankGreaterOrEqual
struct UBPF_DojoRank_C_BPF_RankGreaterOrEqual_Params
{
	TMap<TEnumAsByte<EDojoPlace>, ES3DojoRank>         RanksEarned;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FST_DojoRankRequirement                     Requirement;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_DojoRank.BPF_DojoRank_C.BPF_CalcDojoRankAsCrossDojoInt
struct UBPF_DojoRank_C_BPF_CalcDojoRankAsCrossDojoInt_Params
{
	TEnumAsByte<EDojoPlace>                            Dojo;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3DojoRank                                        Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ComparisonValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
