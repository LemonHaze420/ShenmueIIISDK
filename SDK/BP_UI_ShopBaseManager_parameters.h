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

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.TryChangePage
struct ABP_UI_ShopBaseManager_C_TryChangePage_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.HasValidVisibleItemId
struct ABP_UI_ShopBaseManager_C_HasValidVisibleItemId_Params
{
	int                                                FocusItemIdx;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.IsSetCompletionItem
struct ABP_UI_ShopBaseManager_C_IsSetCompletionItem_Params
{
	int                                                FocusItemNum;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.UpdateDescription
struct ABP_UI_ShopBaseManager_C_UpdateDescription_Params
{
	class UBPW_UI_BaseWindow_C*                        ShopWindow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CalcSetItemIconRange
struct ABP_UI_ShopBaseManager_C_CalcSetItemIconRange_Params
{
	int                                                FocusItemNo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FirstItem;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                LastItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.IsSetExchangeShop
struct ABP_UI_ShopBaseManager_C_IsSetExchangeShop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ApplyCheatPrice
struct ABP_UI_ShopBaseManager_C_ApplyCheatPrice_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BaseValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetRotateIconVisiblity
struct ABP_UI_ShopBaseManager_C_SetRotateIconVisiblity_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetRStickIconPos
struct ABP_UI_ShopBaseManager_C_SetRStickIconPos_Params
{
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.IsVisibleRStickCenterPos
struct ABP_UI_ShopBaseManager_C_IsVisibleRStickCenterPos_Params
{
	bool                                               IsCenter;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.IsVisibleRStickOnlyViewMode
struct ABP_UI_ShopBaseManager_C_IsVisibleRStickOnlyViewMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetViewModeSkip
struct ABP_UI_ShopBaseManager_C_SetViewModeSkip_Params
{
	bool                                               SkipFlag;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.GetNowCategory
struct ABP_UI_ShopBaseManager_C_GetNowCategory_Params
{
	ES3ItemDataGroup                                   Category;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.IsPawnShopSetExchangeCategory
struct ABP_UI_ShopBaseManager_C_IsPawnShopSetExchangeCategory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.GetItemIncrementNum
struct ABP_UI_ShopBaseManager_C_GetItemIncrementNum_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetSkillWindow
struct ABP_UI_ShopBaseManager_C_SetSkillWindow_Params
{
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ItemValidCheck
struct ABP_UI_ShopBaseManager_C_ItemValidCheck_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.Calc_BuyPrice
struct ABP_UI_ShopBaseManager_C_Calc_BuyPrice_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MarginPrice;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Margin;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.UpdateDescription_Ruby
struct ABP_UI_ShopBaseManager_C_UpdateDescription_Ruby_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ruby;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.GetUITextData
struct ABP_UI_ShopBaseManager_C_GetUITextData_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutString;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.IsCrudeDrugOnly
struct ABP_UI_ShopBaseManager_C_IsCrudeDrugOnly_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.IsFocusedSetComplete
struct ABP_UI_ShopBaseManager_C_IsFocusedSetComplete_Params
{
	int                                                FocusItemNo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsComplete;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetExchange_CheckPayIcon
struct ABP_UI_ShopBaseManager_C_SetExchange_CheckPayIcon_Params
{
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetShopName
struct ABP_UI_ShopBaseManager_C_SetShopName_Params
{
	int                                                ShopID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CheckSubEvent
struct ABP_UI_ShopBaseManager_C_CheckSubEvent_Params
{
	TArray<int>                                        BuyItemList;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.BeforDestroy
struct ABP_UI_ShopBaseManager_C_BeforDestroy_Params
{
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.PushAddSubButtonAfter
struct ABP_UI_ShopBaseManager_C_PushAddSubButtonAfter_Params
{
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SubSetItem
struct ABP_UI_ShopBaseManager_C_SubSetItem_Params
{
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.AddSetItem
struct ABP_UI_ShopBaseManager_C_AddSetItem_Params
{
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ChangePage
struct ABP_UI_ShopBaseManager_C_ChangePage_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InitPageIcon
struct ABP_UI_ShopBaseManager_C_InitPageIcon_Params
{
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.MoveCategoryFocusAfter
struct ABP_UI_ShopBaseManager_C_MoveCategoryFocusAfter_Params
{
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.GetCategory
struct ABP_UI_ShopBaseManager_C_GetCategory_Params
{
	ES3ItemDataGroup                                   Category;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InitItemListWindow
struct ABP_UI_ShopBaseManager_C_InitItemListWindow_Params
{
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.MoveCategoryFocus
struct ABP_UI_ShopBaseManager_C_MoveCategoryFocus_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetCategory
struct ABP_UI_ShopBaseManager_C_SetCategory_Params
{
	class UDataTable*                                  DataTable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.UpdateItemIDList
struct ABP_UI_ShopBaseManager_C_UpdateItemIDList_Params
{
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.VisibleButton_CheckDialog
struct ABP_UI_ShopBaseManager_C_VisibleButton_CheckDialog_Params
{
	bool                                               Visible_CheckDialog;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CheckVisibleAddButton
struct ABP_UI_ShopBaseManager_C_CheckVisibleAddButton_Params
{
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CheckVisibleSubButton
struct ABP_UI_ShopBaseManager_C_CheckVisibleSubButton_Params
{
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.UpdateDescriptionSub
struct ABP_UI_ShopBaseManager_C_UpdateDescriptionSub_Params
{
	struct FText                                       Description;                                              // (Parm, OutParm)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CheckFocusItemNo
struct ABP_UI_ShopBaseManager_C_CheckFocusItemNo_Params
{
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.UserConstructionScript
struct ABP_UI_ShopBaseManager_C_UserConstructionScript_Params
{
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_18
struct ABP_UI_ShopBaseManager_C_InpActEvt_ResetCamera_K2Node_InputActionEvent_18_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_17
struct ABP_UI_ShopBaseManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_17_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16
struct ABP_UI_ShopBaseManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_15
struct ABP_UI_ShopBaseManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_14
struct ABP_UI_ShopBaseManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_13
struct ABP_UI_ShopBaseManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_12
struct ABP_UI_ShopBaseManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_11
struct ABP_UI_ShopBaseManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_10
struct ABP_UI_ShopBaseManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.PushCheckDialog
struct ABP_UI_ShopBaseManager_C_PushCheckDialog_Params
{
	TEnumAsByte<EN_UI_Button>                          PushButton;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.FinishPriceAnim
struct ABP_UI_ShopBaseManager_C_FinishPriceAnim_Params
{
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ReceiveBeginPlay
struct ABP_UI_ShopBaseManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.DecideDetectAction
struct ABP_UI_ShopBaseManager_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.OpenYesNoDialog
struct ABP_UI_ShopBaseManager_C_OpenYesNoDialog_Params
{
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_4
struct ABP_UI_ShopBaseManager_C_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_4_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_7
struct ABP_UI_ShopBaseManager_C_InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_7_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33
struct ABP_UI_ShopBaseManager_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9
struct ABP_UI_ShopBaseManager_C_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ReceiveTick
struct ABP_UI_ShopBaseManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.PushL2R2_ViewMode
struct ABP_UI_ShopBaseManager_C_PushL2R2_ViewMode_Params
{
	float                                              InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.UpDownReset
struct ABP_UI_ShopBaseManager_C_UpDownReset_Params
{
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ReceiveEndPlay
struct ABP_UI_ShopBaseManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.PushButton
struct ABP_UI_ShopBaseManager_C_PushButton_Params
{
	TEnumAsByte<EN_UI_Button>                          newParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ExecuteUbergraph_BP_UI_ShopBaseManager
struct ABP_UI_ShopBaseManager_C_ExecuteUbergraph_BP_UI_ShopBaseManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ED_Switch_DoBuy__DelegateSignature
struct ABP_UI_ShopBaseManager_C_ED_Switch_DoBuy__DelegateSignature_Params
{
	bool                                               DoBuy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
