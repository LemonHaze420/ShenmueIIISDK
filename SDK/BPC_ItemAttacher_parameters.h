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

// Function BPC_ItemAttacher.BPC_ItemAttacher_C.TryGetItemSocketLocation
struct UBPC_ItemAttacher_C_TryGetItemSocketLocation_Params
{
	struct FName                                       InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_ItemAttacher.BPC_ItemAttacher_C.IsItemSpawned
struct UBPC_ItemAttacher_C_IsItemSpawned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_ItemAttacher.BPC_ItemAttacher_C.GetItemActor
struct UBPC_ItemAttacher_C_GetItemActor_Params
{
	class ABP_PlayerTalkItem_C*                        ItemBP;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_ItemAttacher.BPC_ItemAttacher_C.DestroyItem
struct UBPC_ItemAttacher_C_DestroyItem_Params
{
};

// Function BPC_ItemAttacher.BPC_ItemAttacher_C.SpawnItem
struct UBPC_ItemAttacher_C_SpawnItem_Params
{
	struct FName                                       ItemName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowToOther;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_ItemAttacher.BPC_ItemAttacher_C.SetupItemMaterial
struct UBPC_ItemAttacher_C_SetupItemMaterial_Params
{
};

// Function BPC_ItemAttacher.BPC_ItemAttacher_C.ReceiveBeginPlay
struct UBPC_ItemAttacher_C_ReceiveBeginPlay_Params
{
};

// Function BPC_ItemAttacher.BPC_ItemAttacher_C.HiddenItem
struct UBPC_ItemAttacher_C_HiddenItem_Params
{
};

// Function BPC_ItemAttacher.BPC_ItemAttacher_C.ReceiveEndPlay
struct UBPC_ItemAttacher_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_ItemAttacher.BPC_ItemAttacher_C.ExecuteUbergraph_BPC_ItemAttacher
struct UBPC_ItemAttacher_C_ExecuteUbergraph_BPC_ItemAttacher_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
