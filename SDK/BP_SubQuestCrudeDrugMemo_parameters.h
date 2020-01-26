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

// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.TryGetItemData
struct ABP_SubQuestCrudeDrugMemo_C_TryGetItemData_Params
{
	struct FName                                       InName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	struct FST_SUBQCrudeDrugMemo                       OutData;                                                  // (Parm, OutParm)
};

// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.CheckItemGetNum
struct ABP_SubQuestCrudeDrugMemo_C_CheckItemGetNum_Params
{
	struct FString                                     ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               PlayAc;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.CheckPlayAc
struct ABP_SubQuestCrudeDrugMemo_C_CheckPlayAc_Params
{
	bool                                               enable_play;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.CheckAllGetItem
struct ABP_SubQuestCrudeDrugMemo_C_CheckAllGetItem_Params
{
	bool                                               AllGet;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.GetItemNum
struct ABP_SubQuestCrudeDrugMemo_C_GetItemNum_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.SetCrudeDrugGlobalFlag
struct ABP_SubQuestCrudeDrugMemo_C_SetCrudeDrugGlobalFlag_Params
{
	int                                                FlagID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FlagValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               set_is_done;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.isEnableEvent
struct ABP_SubQuestCrudeDrugMemo_C_isEnableEvent_Params
{
	bool                                               Enable;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.UserConstructionScript
struct ABP_SubQuestCrudeDrugMemo_C_UserConstructionScript_Params
{
};

// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.ReceiveBeginPlay
struct ABP_SubQuestCrudeDrugMemo_C_ReceiveBeginPlay_Params
{
};

// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.StartEvent
struct ABP_SubQuestCrudeDrugMemo_C_StartEvent_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.LoadStartIn
struct ABP_SubQuestCrudeDrugMemo_C_LoadStartIn_Params
{
};

// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.ItemChange
struct ABP_SubQuestCrudeDrugMemo_C_ItemChange_Params
{
	struct FName                                       ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubQuestCrudeDrugMemo.BP_SubQuestCrudeDrugMemo_C.ExecuteUbergraph_BP_SubQuestCrudeDrugMemo
struct ABP_SubQuestCrudeDrugMemo_C_ExecuteUbergraph_BP_SubQuestCrudeDrugMemo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
