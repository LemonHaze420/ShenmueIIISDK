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

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.IsLowEnergy
struct ABP_S3EnergyManager_C_IsLowEnergy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.SelectLowEnergyMessageList
struct ABP_S3EnergyManager_C_SelectLowEnergyMessageList_Params
{
	TArray<struct FName>                               Array;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.TryStartEatEvent
struct ABP_S3EnergyManager_C_TryStartEatEvent_Params
{
	bool                                               Starting;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.TryMessageLowEnergyStatus
struct ABP_S3EnergyManager_C_TryMessageLowEnergyStatus_Params
{
};

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.DrainEnergyByRunningTick
struct ABP_S3EnergyManager_C_DrainEnergyByRunningTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.RegerateEnergy
struct ABP_S3EnergyManager_C_RegerateEnergy_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.DrainEnergyByRunning
struct ABP_S3EnergyManager_C_DrainEnergyByRunning_Params
{
};

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.Setup
struct ABP_S3EnergyManager_C_Setup_Params
{
	class AS3GameTimeManager*                          TimeMan;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.DrainEnergyByTime
struct ABP_S3EnergyManager_C_DrainEnergyByTime_Params
{
};

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.UserConstructionScript
struct ABP_S3EnergyManager_C_UserConstructionScript_Params
{
};

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.ReceiveTick
struct ABP_S3EnergyManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.ReceiveBeginPlay
struct ABP_S3EnergyManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.OnPlayerBehaviorIdChanged
struct ABP_S3EnergyManager_C_OnPlayerBehaviorIdChanged_Params
{
	ES3PlayerBehavior                                  NewId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3PlayerBehavior                                  OldId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.ReceiveEndPlay
struct ABP_S3EnergyManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.Reset
struct ABP_S3EnergyManager_C_Reset_Params
{
};

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.ResetBattleFlag
struct ABP_S3EnergyManager_C_ResetBattleFlag_Params
{
};

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.ReenableLowEnergyMessage
struct ABP_S3EnergyManager_C_ReenableLowEnergyMessage_Params
{
};

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.StartMessageReenableTimer
struct ABP_S3EnergyManager_C_StartMessageReenableTimer_Params
{
};

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.DrainRunEnergy
struct ABP_S3EnergyManager_C_DrainRunEnergy_Params
{
};

// Function BP_S3EnergyManager.BP_S3EnergyManager_C.ExecuteUbergraph_BP_S3EnergyManager
struct ABP_S3EnergyManager_C_ExecuteUbergraph_BP_S3EnergyManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
