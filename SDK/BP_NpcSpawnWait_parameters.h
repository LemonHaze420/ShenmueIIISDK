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

// Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.CheckNpcAlpha
struct ABP_NpcSpawnWait_C_CheckNpcAlpha_Params
{
	bool                                               NPCVisible;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.InitSet
struct ABP_NpcSpawnWait_C_InitSet_Params
{
	struct FGameplayTag                                NPCID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              ChangeSpawnFadeTime;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CheckNpcAlpha;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.UserConstructionScript
struct ABP_NpcSpawnWait_C_UserConstructionScript_Params
{
};

// Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.EndNpcSpawnWait
struct ABP_NpcSpawnWait_C_EndNpcSpawnWait_Params
{
};

// Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.NPCSpawn
struct ABP_NpcSpawnWait_C_NPCSpawn_Params
{
	struct FGameplayTag                                NPCID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_NpcSpawnWait.BP_NpcSpawnWait_C.ExecuteUbergraph_BP_NpcSpawnWait
struct ABP_NpcSpawnWait_C_ExecuteUbergraph_BP_NpcSpawnWait_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
