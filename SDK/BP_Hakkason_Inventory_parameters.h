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

// Function BP_Hakkason_Inventory.BP_Hakkason_Inventory_C.InitSet
struct ABP_Hakkason_Inventory_C_InitSet_Params
{
	int                                                UseItemset_ID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_Inventory.BP_Hakkason_Inventory_C.UserConstructionScript
struct ABP_Hakkason_Inventory_C_UserConstructionScript_Params
{
};

// Function BP_Hakkason_Inventory.BP_Hakkason_Inventory_C.RenewalActorCount
struct ABP_Hakkason_Inventory_C_RenewalActorCount_Params
{
	TEnumAsByte<EN_MainFlowActorID>                    ActorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RenewalCounter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_Inventory.BP_Hakkason_Inventory_C.ReceiveTick
struct ABP_Hakkason_Inventory_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_Inventory.BP_Hakkason_Inventory_C.TickChangeCheckKill
struct ABP_Hakkason_Inventory_C_TickChangeCheckKill_Params
{
};

// Function BP_Hakkason_Inventory.BP_Hakkason_Inventory_C.Result_Inventory
struct ABP_Hakkason_Inventory_C_Result_Inventory_Params
{
	TEnumAsByte<EN_UseItemResult>                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_Inventory.BP_Hakkason_Inventory_C.ExecuteUbergraph_BP_Hakkason_Inventory
struct ABP_Hakkason_Inventory_C_ExecuteUbergraph_BP_Hakkason_Inventory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
