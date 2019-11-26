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

// Function BP_NPC_Lead_She.BP_NPC_Lead_She_C.CanEnterBuilding
struct ABP_NPC_Lead_She_C_CanEnterBuilding_Params
{
	class ABP_S3BuildingStaticMeshActor_C**            Building;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_NPC_Lead_She.BP_NPC_Lead_She_C.UserConstructionScript
struct ABP_NPC_Lead_She_C_UserConstructionScript_Params
{
};

// Function BP_NPC_Lead_She.BP_NPC_Lead_She_C.ReceiveBeginPlay
struct ABP_NPC_Lead_She_C_ReceiveBeginPlay_Params
{
};

// Function BP_NPC_Lead_She.BP_NPC_Lead_She_C.ExecuteUbergraph_BP_NPC_Lead_She
struct ABP_NPC_Lead_She_C_ExecuteUbergraph_BP_NPC_Lead_She_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
