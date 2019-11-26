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

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.IsVisibleRStickOnlyViewMode
struct ABP_UI_PawnshManager_C_IsVisibleRStickOnlyViewMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckEnabledByArea
struct ABP_UI_PawnshManager_C_CheckEnabledByArea_Params
{
	struct FName                                       ItemLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckItemGroup
struct ABP_UI_PawnshManager_C_CheckItemGroup_Params
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

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.GetItem
struct ABP_UI_PawnshManager_C_GetItem_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SetPrice
struct ABP_UI_PawnshManager_C_SetPrice_Params
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

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.InitItemDataLength
struct ABP_UI_PawnshManager_C_InitItemDataLength_Params
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
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckVisibleAddButton
struct ABP_UI_PawnshManager_C_CheckVisibleAddButton_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckVisibleSubButton
struct ABP_UI_PawnshManager_C_CheckVisibleSubButton_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.ChangePage
struct ABP_UI_PawnshManager_C_ChangePage_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.UpdateItemIDList
struct ABP_UI_PawnshManager_C_UpdateItemIDList_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.MoveCategoryFocusAfter
struct ABP_UI_PawnshManager_C_MoveCategoryFocusAfter_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CustomEvent_2
struct ABP_UI_PawnshManager_C_CustomEvent_2_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.PushCheckDialog
struct ABP_UI_PawnshManager_C_PushCheckDialog_Params
{
	TEnumAsByte<EN_UI_Button>*                         PushButton;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CustomEvent
struct ABP_UI_PawnshManager_C_CustomEvent_Params
{
};

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SetSkillWindow
struct ABP_UI_PawnshManager_C_SetSkillWindow_Params
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
