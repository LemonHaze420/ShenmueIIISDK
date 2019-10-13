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

// Function BPC_BattleSoftlockSettings.BPC_BattleSoftlockSettings_C.AdjustForDifficultySetting
struct UBPC_BattleSoftlockSettings_C_AdjustForDifficultySetting_Params
{
	int                                                PlayerLevelsAbove;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_BattleSoftlockSettings.BPC_BattleSoftlockSettings_C.CalcEnemyTeamAdjust
struct UBPC_BattleSoftlockSettings_C_CalcEnemyTeamAdjust_Params
{
	int                                                LevelRef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxSimultaneousAttacks;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_BattleSoftlockSettings.BPC_BattleSoftlockSettings_C.CalcEnemyAdjust
struct UBPC_BattleSoftlockSettings_C_CalcEnemyAdjust_Params
{
	int                                                PlayerLevelAbove;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AIStep;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_BattleSoftlockSettings.BPC_BattleSoftlockSettings_C.DebugPrintEffects
struct UBPC_BattleSoftlockSettings_C_DebugPrintEffects_Params
{
	int                                                RelativeLevel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InDamage;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Adjust;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Short;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BPC_BattleSoftlockSettings.BPC_BattleSoftlockSettings_C.PrintExampleStats
struct UBPC_BattleSoftlockSettings_C_PrintExampleStats_Params
{
};

// Function BPC_BattleSoftlockSettings.BPC_BattleSoftlockSettings_C.CalcPlayerAdjust
struct UBPC_BattleSoftlockSettings_C_CalcPlayerAdjust_Params
{
	int                                                PlayerLevelsAbove;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Apply;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              InDamageRatio;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageRatio;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
