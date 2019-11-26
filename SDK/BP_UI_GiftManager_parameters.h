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

// Function BP_UI_GiftManager.BP_UI_GiftManager_C.CheckResult
struct ABP_UI_GiftManager_C_CheckResult_Params
{
	TEnumAsByte<EN_UseItemResult>                      Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ConsumeFlag;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_GiftManager.BP_UI_GiftManager_C.GiftChangePage
struct ABP_UI_GiftManager_C_GiftChangePage_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_GiftManager.BP_UI_GiftManager_C.MakeCanUseItemIDList
struct ABP_UI_GiftManager_C_MakeCanUseItemIDList_Params
{
};

// Function BP_UI_GiftManager.BP_UI_GiftManager_C.InitItemDataLength
struct ABP_UI_GiftManager_C_InitItemDataLength_Params
{
};

// Function BP_UI_GiftManager.BP_UI_GiftManager_C.MakeItemIDList
struct ABP_UI_GiftManager_C_MakeItemIDList_Params
{
};

// Function BP_UI_GiftManager.BP_UI_GiftManager_C.UserConstructionScript
struct ABP_UI_GiftManager_C_UserConstructionScript_Params
{
};

// Function BP_UI_GiftManager.BP_UI_GiftManager_C.ReceiveBeginPlay
struct ABP_UI_GiftManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_UI_GiftManager.BP_UI_GiftManager_C.CheckVisibleAddButton
struct ABP_UI_GiftManager_C_CheckVisibleAddButton_Params
{
};

// Function BP_UI_GiftManager.BP_UI_GiftManager_C.CheckVisibleSubButton
struct ABP_UI_GiftManager_C_CheckVisibleSubButton_Params
{
};

// Function BP_UI_GiftManager.BP_UI_GiftManager_C.PushAddSubButtonAfter
struct ABP_UI_GiftManager_C_PushAddSubButtonAfter_Params
{
};

// Function BP_UI_GiftManager.BP_UI_GiftManager_C.PushCheckDialog
struct ABP_UI_GiftManager_C_PushCheckDialog_Params
{
	TEnumAsByte<EN_UI_Button>                          PushButton;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_GiftManager.BP_UI_GiftManager_C.BeforDestroy
struct ABP_UI_GiftManager_C_BeforDestroy_Params
{
};

// Function BP_UI_GiftManager.BP_UI_GiftManager_C.SetShopName
struct ABP_UI_GiftManager_C_SetShopName_Params
{
	int                                                ShopID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_GiftManager.BP_UI_GiftManager_C.ExecuteUbergraph_BP_UI_GiftManager
struct ABP_UI_GiftManager_C_ExecuteUbergraph_BP_UI_GiftManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_GiftManager.BP_UI_GiftManager_C.INFO_SuccessItem__DelegateSignature
struct ABP_UI_GiftManager_C_INFO_SuccessItem__DelegateSignature_Params
{
	int                                                ItemList;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_GiftManager.BP_UI_GiftManager_C.ED_UseItem__DelegateSignature
struct ABP_UI_GiftManager_C_ED_UseItem__DelegateSignature_Params
{
	TEnumAsByte<EN_UseItemResult>                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
