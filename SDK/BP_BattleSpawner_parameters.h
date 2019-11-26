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

// Function BP_BattleSpawner.BP_BattleSpawner_C.EndBattle
struct ABP_BattleSpawner_C_EndBattle_Params
{
	TEnumAsByte<EBattleWinLoseResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleSpawner.BP_BattleSpawner_C.StartBattleTask_FromData
struct ABP_BattleSpawner_C_StartBattleTask_FromData_Params
{
	struct FDataTableRowHandle                         BattleId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       WinEventID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LoseEventID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FadeBetweenModes;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FadeColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class ABP_BattleTaskBase_C*                        Task;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleSpawner.BP_BattleSpawner_C.RegisterMediator
struct ABP_BattleSpawner_C_RegisterMediator_Params
{
	class ABP_BattleMediatorBase_C*                    Mediator;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleSpawner.BP_BattleSpawner_C.OnBattleEndEvent
struct ABP_BattleSpawner_C_OnBattleEndEvent_Params
{
	TEnumAsByte<EBattleWinLoseResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleSpawner.BP_BattleSpawner_C.StartBattleTask
struct ABP_BattleSpawner_C_StartBattleTask_Params
{
	struct FName                                       BattleId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       WinEventID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LoseEventID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FadeBetweenModes;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_BattleMediatorBase_C*                    MediatorBase;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FadeColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class ABP_BattleTaskBase_C*                        Task;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleSpawner.BP_BattleSpawner_C.LaunchDebugBattleImpl
struct ABP_BattleSpawner_C_LaunchDebugBattleImpl_Params
{
};

// Function BP_BattleSpawner.BP_BattleSpawner_C.CheckBattleExist
struct ABP_BattleSpawner_C_CheckBattleExist_Params
{
	bool                                               Exist;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleSpawner.BP_BattleSpawner_C.UserConstructionScript
struct ABP_BattleSpawner_C_UserConstructionScript_Params
{
};

// Function BP_BattleSpawner.BP_BattleSpawner_C.LaunchDebugBattle
struct ABP_BattleSpawner_C_LaunchDebugBattle_Params
{
};

// Function BP_BattleSpawner.BP_BattleSpawner_C.ExecuteUbergraph_BP_BattleSpawner
struct ABP_BattleSpawner_C_ExecuteUbergraph_BP_BattleSpawner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
