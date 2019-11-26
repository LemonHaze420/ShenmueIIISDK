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

// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.InitDefaultLevelProgression
struct UBP_S3BattleStatsManager_C_InitDefaultLevelProgression_Params
{
};

// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.ReinitFixedLevel
struct UBP_S3BattleStatsManager_C_ReinitFixedLevel_Params
{
};

// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.Debug_TestSkillProgression
struct UBP_S3BattleStatsManager_C_Debug_TestSkillProgression_Params
{
};

// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.IsSkillEquipable
struct UBP_S3BattleStatsManager_C_IsSkillEquipable_Params
{
	struct FName                                       SkillId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.IsSkillLevelable
struct UBP_S3BattleStatsManager_C_IsSkillLevelable_Params
{
	struct FName                                       SkillItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.GetDojoRankMax
struct UBP_S3BattleStatsManager_C_GetDojoRankMax_Params
{
	TEnumAsByte<EDojoPlace>                            Dojo;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3DojoRank                                        Rank;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.InitBlueprint
struct UBP_S3BattleStatsManager_C_InitBlueprint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.SetLastAdviceData
struct UBP_S3BattleStatsManager_C_SetLastAdviceData_Params
{
	class UBattleAdviceData_C*                         AdviceData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.GetLastAdviceData
struct UBP_S3BattleStatsManager_C_GetLastAdviceData_Params
{
	class UBattleAdviceData_C*                         AdviceData;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.GetDojoRankIndex
struct UBP_S3BattleStatsManager_C_GetDojoRankIndex_Params
{
	struct FName                                       Dojo;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.DojoRankNameToEnum
struct UBP_S3BattleStatsManager_C_DojoRankNameToEnum_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3DojoRank                                        Rank;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.DojoRankEnumToName
struct UBP_S3BattleStatsManager_C_DojoRankEnumToName_Params
{
	ES3DojoRank                                        InRank;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       OutRank;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.GetDojoRankAsEnum
struct UBP_S3BattleStatsManager_C_GetDojoRankAsEnum_Params
{
	TEnumAsByte<EDojoPlace>                            Dojo;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3DojoRank                                        Rank;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BattleStatsManager.BP_S3BattleStatsManager_C.SetDojoRankAsEnum
struct UBP_S3BattleStatsManager_C_SetDojoRankAsEnum_Params
{
	TEnumAsByte<EDojoPlace>                            Dojo;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3DojoRank                                        Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
