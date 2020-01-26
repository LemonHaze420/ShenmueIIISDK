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

// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.PrelaunchBattle
struct ABP_BattleMediatorBase_C_PrelaunchBattle_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.SelectLoadingHint
struct ABP_BattleMediatorBase_C_SelectLoadingHint_Params
{
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FST_LoadingHintWindowParam                  Hint;                                                     // (Parm, OutParm)
};

// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.CountHeldRecoveryItems
struct ABP_BattleMediatorBase_C_CountHeldRecoveryItems_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.AllowsRecoveryItems
struct ABP_BattleMediatorBase_C_AllowsRecoveryItems_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.IsSparring
struct ABP_BattleMediatorBase_C_IsSparring_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.GetRequiredLevels
struct ABP_BattleMediatorBase_C_GetRequiredLevels_Params
{
	TArray<struct FName>                               Levels;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               OneOrMore;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.StartLoadingLaunchData
struct ABP_BattleMediatorBase_C_StartLoadingLaunchData_Params
{
	class UBTL_LaunchParameters_C*                     LaunchDataObject;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.CreateLaunchDataObject
struct ABP_BattleMediatorBase_C_CreateLaunchDataObject_Params
{
	class UBTL_LaunchParameters_C*                     Object;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.GetBattleID
struct ABP_BattleMediatorBase_C_GetBattleID_Params
{
	struct FName                                       ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.StartBattle
struct ABP_BattleMediatorBase_C_StartBattle_Params
{
	class ABP_BattleManagerBase_C*                     BattleManager;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBTL_LaunchParameters_C*                     LaunchData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.ShutdownBattle
struct ABP_BattleMediatorBase_C_ShutdownBattle_Params
{
	class ABP_BattleManagerBase_C*                     Manager;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BattleMediatorBase.BP_BattleMediatorBase_C.UserConstructionScript
struct ABP_BattleMediatorBase_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
