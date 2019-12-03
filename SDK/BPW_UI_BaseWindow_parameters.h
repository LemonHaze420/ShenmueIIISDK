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

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.ResetSetName
struct UBPW_UI_BaseWindow_C_ResetSetName_Params
{
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.ClearSelectSellItem
struct UBPW_UI_BaseWindow_C_ClearSelectSellItem_Params
{
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.ResetSellItem
struct UBPW_UI_BaseWindow_C_ResetSellItem_Params
{
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.ResetSellItemIDList
struct UBPW_UI_BaseWindow_C_ResetSellItemIDList_Params
{
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetSellItemIDList
struct UBPW_UI_BaseWindow_C_GetSellItemIDList_Params
{
	TArray<int>                                        SellItemIDList;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.UpdateHaveItemNum
struct UBPW_UI_BaseWindow_C_UpdateHaveItemNum_Params
{
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetSellItemIDList
struct UBPW_UI_BaseWindow_C_SetSellItemIDList_Params
{
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.IsSellItem
struct UBPW_UI_BaseWindow_C_IsSellItem_Params
{
	bool                                               IsSellItem;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetTotalSellPrice
struct UBPW_UI_BaseWindow_C_GetTotalSellPrice_Params
{
	int                                                TotalPrice;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetSelectSellItemuNum
struct UBPW_UI_BaseWindow_C_GetSelectSellItemuNum_Params
{
	int                                                PageIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemNum;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.ResetSelectSellItemNum
struct UBPW_UI_BaseWindow_C_ResetSelectSellItemNum_Params
{
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetSelectSellItemListSize
struct UBPW_UI_BaseWindow_C_SetSelectSellItemListSize_Params
{
	int                                                MaxPage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetFocusItemGroup
struct UBPW_UI_BaseWindow_C_GetFocusItemGroup_Params
{
	int                                                FocusItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3ItemDataGroup                                   ItemNum;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetExchangeTitle
struct UBPW_UI_BaseWindow_C_SetExchangeTitle_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetCursorVisibility
struct UBPW_UI_BaseWindow_C_SetCursorVisibility_Params
{
	bool                                               SelectCategory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.EndViewMode
struct UBPW_UI_BaseWindow_C_EndViewMode_Params
{
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.StartViewMode
struct UBPW_UI_BaseWindow_C_StartViewMode_Params
{
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetShopName_Localize
struct UBPW_UI_BaseWindow_C_SetShopName_Localize_Params
{
	struct FString                                     ShopName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetShopName_Kanji
struct UBPW_UI_BaseWindow_C_SetShopName_Kanji_Params
{
	struct FString                                     ShopName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetSelectItemIDList
struct UBPW_UI_BaseWindow_C_GetSelectItemIDList_Params
{
	TArray<int>                                        SelectIDList;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.IsSelectNow
struct UBPW_UI_BaseWindow_C_IsSelectNow_Params
{
	bool                                               SelectNow;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SelectNum;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.CheckCanUseItem
struct UBPW_UI_BaseWindow_C_CheckCanUseItem_Params
{
	TArray<int>                                        CanUseItemIDList;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetPriceCheckCanvasVisibility
struct UBPW_UI_BaseWindow_C_SetPriceCheckCanvasVisibility_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.CalcTotalSetPrice
struct UBPW_UI_BaseWindow_C_CalcTotalSetPrice_Params
{
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetPageIconColor
struct UBPW_UI_BaseWindow_C_SetPageIconColor_Params
{
	int                                                page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.InitPageIcon
struct UBPW_UI_BaseWindow_C_InitPageIcon_Params
{
	int                                                MaxPage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetVisibilityPageCursor
struct UBPW_UI_BaseWindow_C_SetVisibilityPageCursor_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.FocusCategory
struct UBPW_UI_BaseWindow_C_FocusCategory_Params
{
	int                                                FocusNo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.AddCategory
struct UBPW_UI_BaseWindow_C_AddCategory_Params
{
	struct FString                                     name_jp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     name_eng;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FColor                                      str_col;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetVisibility_PayIcon
struct UBPW_UI_BaseWindow_C_SetVisibility_PayIcon_Params
{
	bool                                               CanPay;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetItemNum
struct UBPW_UI_BaseWindow_C_SetItemNum_Params
{
	int                                                ListItemNo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.DestroyWidget
struct UBPW_UI_BaseWindow_C_DestroyWidget_Params
{
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.PriceAnim
struct UBPW_UI_BaseWindow_C_PriceAnim_Params
{
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetPriceAnimeData
struct UBPW_UI_BaseWindow_C_SetPriceAnimeData_Params
{
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetUITitle
struct UBPW_UI_BaseWindow_C_SetUITitle_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.AddHaveItem
struct UBPW_UI_BaseWindow_C_AddHaveItem_Params
{
	TArray<int>                                        BuyItemList;                                              // (Parm, OutParm, ZeroConstructor)
	int                                                TotalItems;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetFocusItemPrice
struct UBPW_UI_BaseWindow_C_GetFocusItemPrice_Params
{
	int                                                FocusItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemPrice;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetTotalPrice
struct UBPW_UI_BaseWindow_C_GetTotalPrice_Params
{
	int                                                Price;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.CalcTotalPrice
struct UBPW_UI_BaseWindow_C_CalcTotalPrice_Params
{
	int                                                PageIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSubtraction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetPriceIconPostion
struct UBPW_UI_BaseWindow_C_SetPriceIconPostion_Params
{
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetPriceText
struct UBPW_UI_BaseWindow_C_SetPriceText_Params
{
	int                                                Money;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetFocusItemNum
struct UBPW_UI_BaseWindow_C_GetFocusItemNum_Params
{
	int                                                FocusItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemNum;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SubSelectItem
struct UBPW_UI_BaseWindow_C_SubSelectItem_Params
{
	int                                                FocusItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SubCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.addSelectItem
struct UBPW_UI_BaseWindow_C_addSelectItem_Params
{
	int                                                FocusItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemListPage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetDescription
struct UBPW_UI_BaseWindow_C_SetDescription_Params
{
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetItemMesh
struct UBPW_UI_BaseWindow_C_GetItemMesh_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.RotateViewItem
struct UBPW_UI_BaseWindow_C_RotateViewItem_Params
{
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SpawnViewItem
struct UBPW_UI_BaseWindow_C_SpawnViewItem_Params
{
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetRowCol
struct UBPW_UI_BaseWindow_C_GetRowCol_Params
{
	int                                                ItemListRow;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ItemListCol;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.FocusItem
struct UBPW_UI_BaseWindow_C_FocusItem_Params
{
	int                                                FocusItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetItemList
struct UBPW_UI_BaseWindow_C_SetItemList_Params
{
	TArray<struct FST_ItemList>                        itemList;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                page;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.InitItemList
struct UBPW_UI_BaseWindow_C_InitItemList_Params
{
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.PreConstruct
struct UBPW_UI_BaseWindow_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.Construct
struct UBPW_UI_BaseWindow_C_Construct_Params
{
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.Tick
struct UBPW_UI_BaseWindow_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.ExecuteUbergraph_BPW_UI_BaseWindow
struct UBPW_UI_BaseWindow_C_ExecuteUbergraph_BPW_UI_BaseWindow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.ED_PriceAnimFinish__DelegateSignature
struct UBPW_UI_BaseWindow_C_ED_PriceAnimFinish__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
