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

// Function BP_ShopDataManager.BP_ShopDataManager_C.GetProductList
struct ABP_ShopDataManager_C_GetProductList_Params
{
	int                                                ShopID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ItemIDs;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function BP_ShopDataManager.BP_ShopDataManager_C.UserConstructionScript
struct ABP_ShopDataManager_C_UserConstructionScript_Params
{
};

// Function BP_ShopDataManager.BP_ShopDataManager_C.ReceiveBeginPlay
struct ABP_ShopDataManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_ShopDataManager.BP_ShopDataManager_C.ExecuteUbergraph_BP_ShopDataManager
struct ABP_ShopDataManager_C_ExecuteUbergraph_BP_ShopDataManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
