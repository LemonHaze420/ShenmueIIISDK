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

// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.CheckHanautaStep
struct ABP_HakkasonYouManager_C_CheckHanautaStep_Params
{
};

// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.ChengeHanautaCollisionSize
struct ABP_HakkasonYouManager_C_ChengeHanautaCollisionSize_Params
{
};

// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.CheckEventFalg
struct ABP_HakkasonYouManager_C_CheckEventFalg_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.CheckYouHouseSyoji
struct ABP_HakkasonYouManager_C_CheckYouHouseSyoji_Params
{
	bool                                               Open;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.CheckHanautaCollision
struct ABP_HakkasonYouManager_C_CheckHanautaCollision_Params
{
};

// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.UserConstructionScript
struct ABP_HakkasonYouManager_C_UserConstructionScript_Params
{
};

// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.SpawnNPC
struct ABP_HakkasonYouManager_C_SpawnNPC_Params
{
	struct FGameplayTag                                NPCID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.UnspawnNPC
struct ABP_HakkasonYouManager_C_UnspawnNPC_Params
{
	struct FGameplayTag                                NPCID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.ReceiveEndPlay
struct ABP_HakkasonYouManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.BindNPCManager
struct ABP_HakkasonYouManager_C_BindNPCManager_Params
{
};

// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.ChangeDayTime
struct ABP_HakkasonYouManager_C_ChangeDayTime_Params
{
	ES3DayTimeEvent                                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.ReceiveBeginPlay
struct ABP_HakkasonYouManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.CheckNPCflagChange
struct ABP_HakkasonYouManager_C_CheckNPCflagChange_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.CheckStepChange
struct ABP_HakkasonYouManager_C_CheckStepChange_Params
{
	int                                                SetSteps;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.ChangeBehavior
struct ABP_HakkasonYouManager_C_ChangeBehavior_Params
{
	ES3PlayerBehavior                                  NewId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3PlayerBehavior                                  OldId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.StartTalk
struct ABP_HakkasonYouManager_C_StartTalk_Params
{
};

// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.EndTalk
struct ABP_HakkasonYouManager_C_EndTalk_Params
{
};

// Function BP_HakkasonYouManager.BP_HakkasonYouManager_C.ExecuteUbergraph_BP_HakkasonYouManager
struct ABP_HakkasonYouManager_C_ExecuteUbergraph_BP_HakkasonYouManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
