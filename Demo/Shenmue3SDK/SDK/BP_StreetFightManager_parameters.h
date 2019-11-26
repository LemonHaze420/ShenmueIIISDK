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

// Function BP_StreetFightManager.BP_StreetFightManager_C.ChangeFlag_Impl
struct ABP_StreetFightManager_C_ChangeFlag_Impl_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.Activate
struct ABP_StreetFightManager_C_Activate_Params
{
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.RandomBox
struct ABP_StreetFightManager_C_RandomBox_Params
{
	int                                                NextIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.IsIgnoreStep
struct ABP_StreetFightManager_C_IsIgnoreStep_Params
{
	bool                                               Ignore;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.CheckMainFlowBattle
struct ABP_StreetFightManager_C_CheckMainFlowBattle_Params
{
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.GetNextFighter
struct ABP_StreetFightManager_C_GetNextFighter_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.JudgeBattle
struct ABP_StreetFightManager_C_JudgeBattle_Params
{
	TEnumAsByte<Enum_StreetFightResult>                Reselt;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.UpdateFighter
struct ABP_StreetFightManager_C_UpdateFighter_Params
{
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.UpdateReward
struct ABP_StreetFightManager_C_UpdateReward_Params
{
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.IsChampion
struct ABP_StreetFightManager_C_IsChampion_Params
{
	bool                                               Champion;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.Reset
struct ABP_StreetFightManager_C_Reset_Params
{
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.UpdateEntryMoney
struct ABP_StreetFightManager_C_UpdateEntryMoney_Params
{
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.GetReward
struct ABP_StreetFightManager_C_GetReward_Params
{
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.ConvertMinite
struct ABP_StreetFightManager_C_ConvertMinite_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Minite;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.UpdateCheckTime
struct ABP_StreetFightManager_C_UpdateCheckTime_Params
{
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.UserConstructionScript
struct ABP_StreetFightManager_C_UserConstructionScript_Params
{
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.ReceiveBeginPlay
struct ABP_StreetFightManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.FinishStreetFight
struct ABP_StreetFightManager_C_FinishStreetFight_Params
{
	TEnumAsByte<Enum_StreetFightResult>                Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.ReceiveEndPlay
struct ABP_StreetFightManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.BeginTalk
struct ABP_StreetFightManager_C_BeginTalk_Params
{
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.EndTalk
struct ABP_StreetFightManager_C_EndTalk_Params
{
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.ChangeFlag
struct ABP_StreetFightManager_C_ChangeFlag_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StreetFightManager.BP_StreetFightManager_C.ExecuteUbergraph_BP_StreetFightManager
struct ABP_StreetFightManager_C_ExecuteUbergraph_BP_StreetFightManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
