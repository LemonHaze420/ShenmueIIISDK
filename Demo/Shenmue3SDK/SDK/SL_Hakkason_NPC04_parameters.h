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

// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SetRotationNPC
struct ASL_Hakkason_NPC04_C_SetRotationNPC_Params
{
	struct FGameplayTag                                NPCID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.DestroyNPC
struct ASL_Hakkason_NPC04_C_DestroyNPC_Params
{
	struct FGameplayTag                                NPCID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SpawnNPC
struct ASL_Hakkason_NPC04_C_SpawnNPC_Params
{
	struct FGameplayTag                                NPCID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTransform                                  Transform;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SetLocationNPC
struct ASL_Hakkason_NPC04_C_SetLocationNPC_Params
{
	struct FGameplayTag                                NPCID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               EnableCollision;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionIrori_Amimono
struct ASL_Hakkason_NPC04_C_ShenfaActionIrori_Amimono_Params
{
};

// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionYouIrori
struct ASL_Hakkason_NPC04_C_ShenfaActionYouIrori_Params
{
};

// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaSpawnDoor2
struct ASL_Hakkason_NPC04_C_ShenfaSpawnDoor2_Params
{
};

// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaSpawnDoor1
struct ASL_Hakkason_NPC04_C_ShenfaSpawnDoor1_Params
{
};

// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionDaidokoro
struct ASL_Hakkason_NPC04_C_ShenfaActionDaidokoro_Params
{
};

// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionIsu
struct ASL_Hakkason_NPC04_C_ShenfaActionIsu_Params
{
};

// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaActionIrori
struct ASL_Hakkason_NPC04_C_ShenfaActionIrori_Params
{
};

// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SHE_Move
struct ASL_Hakkason_NPC04_C_SHE_Move_Params
{
};

// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.SHE_Hide
struct ASL_Hakkason_NPC04_C_SHE_Hide_Params
{
};

// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaDestroy
struct ASL_Hakkason_NPC04_C_ShenfaDestroy_Params
{
};

// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ShenfaSpawn
struct ASL_Hakkason_NPC04_C_ShenfaSpawn_Params
{
};

// Function SL_Hakkason_NPC04.SL_Hakkason_NPC04_C.ExecuteUbergraph_SL_Hakkason_NPC04
struct ASL_Hakkason_NPC04_C_ExecuteUbergraph_SL_Hakkason_NPC04_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
