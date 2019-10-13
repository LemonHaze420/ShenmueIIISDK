#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPF_BattleDifficulty.BPF_BattleDifficulty_C.BPF_GetPlayerBattleDifficultyParams
struct UBPF_BattleDifficulty_C_BPF_GetPlayerBattleDifficultyParams_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_BattleDifficultyParams                  Out_Row;                                                  // (Parm, OutParm)
};

// Function BPF_BattleDifficulty.BPF_BattleDifficulty_C.BPF_StepPlayerBattleDifficulty
struct UBPF_BattleDifficulty_C_BPF_StepPlayerBattleDifficulty_Params
{
	TEnumAsByte<EUpOrDown>                             Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_BattleDifficulty.BPF_BattleDifficulty_C.BPF_SetPlayerBattleDifficulty
struct UBPF_BattleDifficulty_C_BPF_SetPlayerBattleDifficulty_Params
{
	TEnumAsByte<EBattleDifficulty>                     Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_BattleDifficulty.BPF_BattleDifficulty_C.BPF_GetPlayerBattleDifficulty
struct UBPF_BattleDifficulty_C_BPF_GetPlayerBattleDifficulty_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBattleDifficulty>                     Difficulty;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
