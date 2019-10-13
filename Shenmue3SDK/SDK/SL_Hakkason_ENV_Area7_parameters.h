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

// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.CheckYouHouseSyoji
struct ASL_Hakkason_ENV_Area7_C_CheckYouHouseSyoji_Params
{
	bool                                               Open;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.CheckHanautaCollision
struct ASL_Hakkason_ENV_Area7_C_CheckHanautaCollision_Params
{
};

// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.ReceiveEndPlay
struct ASL_Hakkason_ENV_Area7_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.UnspawnNPC
struct ASL_Hakkason_ENV_Area7_C_UnspawnNPC_Params
{
	struct FGameplayTag                                NPCID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.StartCutscene
struct ASL_Hakkason_ENV_Area7_C_StartCutscene_Params
{
};

// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.EndCutscene
struct ASL_Hakkason_ENV_Area7_C_EndCutscene_Params
{
};

// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.SpawnNPC
struct ASL_Hakkason_ENV_Area7_C_SpawnNPC_Params
{
	struct FGameplayTag                                NPCID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.BindNPCManager
struct ASL_Hakkason_ENV_Area7_C_BindNPCManager_Params
{
};

// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.ChangeDayTime
struct ASL_Hakkason_ENV_Area7_C_ChangeDayTime_Params
{
	ES3DayTimeEvent                                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.ReceiveBeginPlay
struct ASL_Hakkason_ENV_Area7_C_ReceiveBeginPlay_Params
{
};

// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.CheckNPCflagChange
struct ASL_Hakkason_ENV_Area7_C_CheckNPCflagChange_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.CheckStepChange
struct ASL_Hakkason_ENV_Area7_C_CheckStepChange_Params
{
	int                                                SetSteps;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_ENV_Area7.SL_Hakkason_ENV_Area7_C.ExecuteUbergraph_SL_Hakkason_ENV_Area7
struct ASL_Hakkason_ENV_Area7_C_ExecuteUbergraph_SL_Hakkason_ENV_Area7_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
