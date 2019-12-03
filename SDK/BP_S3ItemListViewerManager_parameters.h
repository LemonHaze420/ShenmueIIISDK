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

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetPriority
struct ABP_S3ItemListViewerManager_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetDetectAction
struct ABP_S3ItemListViewerManager_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CheckTrialVersion
struct ABP_S3ItemListViewerManager_C_CheckTrialVersion_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsVisibleRStickOnlyViewMode
struct ABP_S3ItemListViewerManager_C_IsVisibleRStickOnlyViewMode_Params
{
	ES3ItemListMenuType                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InitializeCategories
struct ABP_S3ItemListViewerManager_C_InitializeCategories_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SetSelectMenuTypeList
struct ABP_S3ItemListViewerManager_C_SetSelectMenuTypeList_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsOnExchangeCategory
struct ABP_S3ItemListViewerManager_C_IsOnExchangeCategory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpdateSkillDisplay
struct ABP_S3ItemListViewerManager_C_UpdateSkillDisplay_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.AddItemDataToList
struct ABP_S3ItemListViewerManager_C_AddItemDataToList_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NextTableIdx;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FItemListItemTable>                  Table;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SimpleValueAdditiveSort
struct ABP_S3ItemListViewerManager_C_SimpleValueAdditiveSort_Params
{
	ES3ItemListMenuType                                CategoryType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FItemListItemTable>                  itemList;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SpaceOneItemPerRow
struct ABP_S3ItemListViewerManager_C_SpaceOneItemPerRow_Params
{
	TArray<struct FItemListItemTable>                  ItemDataList;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsSetMenu
struct ABP_S3ItemListViewerManager_C_IsSetMenu_Params
{
	ES3ItemListMenuType                                InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SortItemListByInt
struct ABP_S3ItemListViewerManager_C_SortItemListByInt_Params
{
	TArray<struct FItemListItemTable>                  SortArray;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        IntArray;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               dsc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MoveContentsOfArray
struct ABP_S3ItemListViewerManager_C_MoveContentsOfArray_Params
{
	TArray<struct FItemListItemTable>                  Sorce_Array;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FItemListItemTable>                  Temp_Array;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetDescriptionType
struct ABP_S3ItemListViewerManager_C_GetDescriptionType_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_Inventory_CategoryType>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.AllowsViewModeAxisInput
struct ABP_S3ItemListViewerManager_C_AllowsViewModeAxisInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	bool                                               TryTransit;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpdateCategoryTipsImage
struct ABP_S3ItemListViewerManager_C_UpdateCategoryTipsImage_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.NavigateSkillEditor
struct ABP_S3ItemListViewerManager_C_NavigateSkillEditor_Params
{
	TEnumAsByte<Een_skill_key_type>                    Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SetSkillWindow
struct ABP_S3ItemListViewerManager_C_SetSkillWindow_Params
{
	TEnumAsByte<EMenuType>                             InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MakeFocusItemList
struct ABP_S3ItemListViewerManager_C_MakeFocusItemList_Params
{
	int                                                ItemIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PlaySound
struct ABP_S3ItemListViewerManager_C_PlaySound_Params
{
	class USoundAtomCue*                               Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.OpenToFoodItem
struct ABP_S3ItemListViewerManager_C_OpenToFoodItem_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReleaseCursor
struct ABP_S3ItemListViewerManager_C_ReleaseCursor_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsValidSetExchange
struct ABP_S3ItemListViewerManager_C_IsValidSetExchange_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetIndex
struct ABP_S3ItemListViewerManager_C_GetIndex_Params
{
	struct FString                                     ItemLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ItemIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.TickSelectKeyPresses
struct ABP_S3ItemListViewerManager_C_TickSelectKeyPresses_Params
{
	float                                              DelayTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsViewHelp
struct ABP_S3ItemListViewerManager_C_IsViewHelp_Params
{
	bool                                               IsDisp;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.FlipPage
struct ABP_S3ItemListViewerManager_C_FlipPage_Params
{
	bool                                               DirRight;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CanUseItem
struct ABP_S3ItemListViewerManager_C_CanUseItem_Params
{
	bool                                               Warn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MovedCursor
struct ABP_S3ItemListViewerManager_C_MovedCursor_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.FormatItemString
struct ABP_S3ItemListViewerManager_C_FormatItemString_Params
{
	struct FS3ItemDataTable                            S3ItemDataTable;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutString;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.TrySelectCategory
struct ABP_S3ItemListViewerManager_C_TrySelectCategory_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CloseUseItemWindow
struct ABP_S3ItemListViewerManager_C_CloseUseItemWindow_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.LaunchUseItemWindow
struct ABP_S3ItemListViewerManager_C_LaunchUseItemWindow_Params
{
	TEnumAsByte<EMenuType>                             InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetCurrentItemUseAction
struct ABP_S3ItemListViewerManager_C_GetCurrentItemUseAction_Params
{
	ES3ItemEffectTarget                                Value_Target;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UseItem
struct ABP_S3ItemListViewerManager_C_UseItem_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetLocalizedText
struct ABP_S3ItemListViewerManager_C_GetLocalizedText_Params
{
	TEnumAsByte<EUIText_Enum>                          ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MakeLocalizedText
struct ABP_S3ItemListViewerManager_C_MakeLocalizedText_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PlayCommonSound
struct ABP_S3ItemListViewerManager_C_PlayCommonSound_Params
{
	TEnumAsByte<EN_InventorySE_List>                   ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MakeDetail
struct ABP_S3ItemListViewerManager_C_MakeDetail_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SetVisibleDetail
struct ABP_S3ItemListViewerManager_C_SetVisibleDetail_Params
{
	int                                                idx;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ResetSelect
struct ABP_S3ItemListViewerManager_C_ResetSelect_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.AddCurrentItemNum
struct ABP_S3ItemListViewerManager_C_AddCurrentItemNum_Params
{
	int                                                Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetItem
struct ABP_S3ItemListViewerManager_C_GetItem_Params
{
	int                                                ItemIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ItemIndexText;                                            // (Parm, OutParm)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.AllDestroy
struct ABP_S3ItemListViewerManager_C_AllDestroy_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SetCursorMode
struct ABP_S3ItemListViewerManager_C_SetCursorMode_Params
{
	bool                                               selectMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.RightCursor
struct ABP_S3ItemListViewerManager_C_RightCursor_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.LeftCursor
struct ABP_S3ItemListViewerManager_C_LeftCursor_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpCursor
struct ABP_S3ItemListViewerManager_C_UpCursor_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.DownCursor
struct ABP_S3ItemListViewerManager_C_DownCursor_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpdateDetailItemInfo
struct ABP_S3ItemListViewerManager_C_UpdateDetailItemInfo_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.changeItemList
struct ABP_S3ItemListViewerManager_C_changeItemList_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.RegisterForInput
struct ABP_S3ItemListViewerManager_C_RegisterForInput_Params
{
	bool                                               isOpe;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsNoScrollRange
struct ABP_S3ItemListViewerManager_C_IsNoScrollRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ChangeCursorPos
struct ABP_S3ItemListViewerManager_C_ChangeCursorPos_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ChangeStatus
struct ABP_S3ItemListViewerManager_C_ChangeStatus_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReturnStatus
struct ABP_S3ItemListViewerManager_C_ReturnStatus_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UserConstructionScript
struct ABP_S3ItemListViewerManager_C_UserConstructionScript_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_28
struct ABP_S3ItemListViewerManager_C_InpActEvt_SearchBottomButton_K2Node_InputActionEvent_28_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_27
struct ABP_S3ItemListViewerManager_C_InpActEvt_SearchRightButton_K2Node_InputActionEvent_27_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_Menu_K2Node_InputActionEvent_26
struct ABP_S3ItemListViewerManager_C_InpActEvt_Menu_K2Node_InputActionEvent_26_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_MenuPageLeft_K2Node_InputActionEvent_25
struct ABP_S3ItemListViewerManager_C_InpActEvt_MenuPageLeft_K2Node_InputActionEvent_25_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_MenuPageRight_K2Node_InputActionEvent_24
struct ABP_S3ItemListViewerManager_C_InpActEvt_MenuPageRight_K2Node_InputActionEvent_24_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_23
struct ABP_S3ItemListViewerManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_23_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_22
struct ABP_S3ItemListViewerManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_22_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_21
struct ABP_S3ItemListViewerManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_21_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_20
struct ABP_S3ItemListViewerManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_20_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_19
struct ABP_S3ItemListViewerManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_19_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_18
struct ABP_S3ItemListViewerManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_18_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_17
struct ABP_S3ItemListViewerManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_17_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16
struct ABP_S3ItemListViewerManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_Alt_P_K2Node_InputKeyEvent_2
struct ABP_S3ItemListViewerManager_C_InpActEvt_Alt_P_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_15
struct ABP_S3ItemListViewerManager_C_InpActEvt_ResetCamera_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReceiveBeginPlay
struct ABP_S3ItemListViewerManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReceiveTick
struct ABP_S3ItemListViewerManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReceiveEndPlay
struct ABP_S3ItemListViewerManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.DecideDetectAction
struct ABP_S3ItemListViewerManager_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_4
struct ABP_S3ItemListViewerManager_C_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_4_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_7
struct ABP_S3ItemListViewerManager_C_InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_7_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33
struct ABP_S3ItemListViewerManager_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CloseMenuSelf
struct ABP_S3ItemListViewerManager_C_CloseMenuSelf_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpSelect
struct ABP_S3ItemListViewerManager_C_UpSelect_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.DownSelect
struct ABP_S3ItemListViewerManager_C_DownSelect_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.LeftSelect
struct ABP_S3ItemListViewerManager_C_LeftSelect_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.RightSelect
struct ABP_S3ItemListViewerManager_C_RightSelect_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.OnGatchaAnimEnd
struct ABP_S3ItemListViewerManager_C_OnGatchaAnimEnd_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9
struct ABP_S3ItemListViewerManager_C_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.EndSetEcchange
struct ABP_S3ItemListViewerManager_C_EndSetEcchange_Params
{
	bool                                               DoBuy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.StartViewMode
struct ABP_S3ItemListViewerManager_C_StartViewMode_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PushL2R2_ViewMode
struct ABP_S3ItemListViewerManager_C_PushL2R2_ViewMode_Params
{
	float                                              InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_1
struct ABP_S3ItemListViewerManager_C_InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_3
struct ABP_S3ItemListViewerManager_C_InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_3_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.EnterViewModeInternal
struct ABP_S3ItemListViewerManager_C_EnterViewModeInternal_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.Private_SelectCategoryVert
struct ABP_S3ItemListViewerManager_C_Private_SelectCategoryVert_Params
{
	bool                                               Up;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CloseReserve
struct ABP_S3ItemListViewerManager_C_CloseReserve_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PermitHelpOnInit
struct ABP_S3ItemListViewerManager_C_PermitHelpOnInit_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PushButton
struct ABP_S3ItemListViewerManager_C_PushButton_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ExecuteUbergraph_BP_S3ItemListViewerManager
struct ABP_S3ItemListViewerManager_C_ExecuteUbergraph_BP_S3ItemListViewerManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ED_FinishInit__DelegateSignature
struct ABP_S3ItemListViewerManager_C_ED_FinishInit__DelegateSignature_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ED_DestroyManager__DelegateSignature
struct ABP_S3ItemListViewerManager_C_ED_DestroyManager__DelegateSignature_Params
{
};

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ED_shopEnd__DelegateSignature
struct ABP_S3ItemListViewerManager_C_ED_shopEnd__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
