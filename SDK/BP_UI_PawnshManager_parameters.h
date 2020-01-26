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

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.HasEnoughToSellItem
struct ABP_UI_PawnshManager_C_HasEnoughToSellItem_Params
{
	ES3ItemDataGroup                                   currentCategory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3ItemDataGroup                                   ItemGroup;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HaveNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.IsVisibleRStickCenterPos
struct ABP_UI_PawnshManager_C_IsVisibleRStickCenterPos_Params
{
	bool                                               IsCenter;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckWearableClothItem
struct ABP_UI_PawnshManager_C_CheckWearableClothItem_Params
{
	ES3ItemDataGroup                                   currentCategory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3ItemDataGroup                                   ItemListGroup;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Add_List;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.IsVisibleRStickOnlyViewMode
struct ABP_UI_PawnshManager_C_IsVisibleRStickOnlyViewMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckEnabledByArea
struct ABP_UI_PawnshManager_C_CheckEnabledByArea_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.GetItemGroup
struct ABP_UI_PawnshManager_C_GetItemGroup_Params
{
	int                                                item_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3ItemDataGroup                                   Group;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckRewardGacha
struct ABP_UI_PawnshManager_C_CheckRewardGacha_Params
{
	ES3ItemDataGroup                                   currentCategory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3ItemDataGroup                                   ItemListGroup;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Add_List;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckClothItem
struct ABP_UI_PawnshManager_C_CheckClothItem_Params
{
	ES3ItemDataGroup                                   currentCategory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3ItemDataGroup                                   ItemListGroup;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Add_List;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SubtractItemSetFromInventory
struct ABP_UI_PawnshManager_C_SubtractItemSetFromInventory_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SetPriceFromSetItem
struct ABP_UI_PawnshManager_C_SetPriceFromSetItem_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SetRightWindow
struct ABP_UI_PawnshManager_C_SetRightWindow_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.RightWindowChange
struct ABP_UI_PawnshManager_C_RightWindowChange_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.MakeItemDataList
struct ABP_UI_PawnshManager_C_MakeItemDataList_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.PawnshUpdateItemIDList
struct ABP_UI_PawnshManager_C_PawnshUpdateItemIDList_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.PawnshChangePage
struct ABP_UI_PawnshManager_C_PawnshChangePage_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.MakeItemIdList
struct ABP_UI_PawnshManager_C_MakeItemIdList_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.UserConstructionScript
struct ABP_UI_PawnshManager_C_UserConstructionScript_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.ReceiveBeginPlay
struct ABP_UI_PawnshManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.ReceiveTick
struct ABP_UI_PawnshManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.ChangePage
struct ABP_UI_PawnshManager_C_ChangePage_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.UpdateItemIDList
struct ABP_UI_PawnshManager_C_UpdateItemIDList_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.MoveCategoryFocusAfter
struct ABP_UI_PawnshManager_C_MoveCategoryFocusAfter_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SellAnimFinish_RegularShop
struct ABP_UI_PawnshManager_C_SellAnimFinish_RegularShop_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.PushCheckDialog
struct ABP_UI_PawnshManager_C_PushCheckDialog_Params
{
	TEnumAsByte<EN_UI_Button>                          PushButton;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SellAnimFinish_Set
struct ABP_UI_PawnshManager_C_SellAnimFinish_Set_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SetSkillWindow
struct ABP_UI_PawnshManager_C_SetSkillWindow_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckVisibleSubButton
struct ABP_UI_PawnshManager_C_CheckVisibleSubButton_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckVisibleAddButton
struct ABP_UI_PawnshManager_C_CheckVisibleAddButton_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.ExecuteUbergraph_BP_UI_PawnshManager
struct ABP_UI_PawnshManager_C_ExecuteUbergraph_BP_UI_PawnshManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
