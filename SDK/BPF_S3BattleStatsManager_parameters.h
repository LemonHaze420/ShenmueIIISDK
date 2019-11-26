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

// Function BPF_S3BattleStatsManager.BPF_S3BattleStatsManager_C.BPF_GetPlayerLevelStat
struct UBPF_S3BattleStatsManager_C_BPF_GetPlayerLevelStat_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3DerivedPlayerLevel*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_S3BattleStatsManager.BPF_S3BattleStatsManager_C.BPF_GetPlayerAttackStat
struct UBPF_S3BattleStatsManager_C_BPF_GetPlayerAttackStat_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3DerivedPlayerLevel*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_S3BattleStatsManager.BPF_S3BattleStatsManager_C.BPF_IsBattleStatsManagerValid
struct UBPF_S3BattleStatsManager_C_BPF_IsBattleStatsManagerValid_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_S3BattleStatsManager.BPF_S3BattleStatsManager_C.BPF_GetBattleStatsManager
struct UBPF_S3BattleStatsManager_C_BPF_GetBattleStatsManager_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3BattleStatsManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
