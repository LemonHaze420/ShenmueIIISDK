
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.ResetSetName
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_UI_BaseWindow_C::ResetSetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.ResetSetName");

	UBPW_UI_BaseWindow_C_ResetSetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.ClearSelectSellItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_UI_BaseWindow_C::ClearSelectSellItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.ClearSelectSellItem");

	UBPW_UI_BaseWindow_C_ClearSelectSellItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.ResetSellItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_UI_BaseWindow_C::ResetSellItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.ResetSellItem");

	UBPW_UI_BaseWindow_C_ResetSellItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.ResetSellItemIDList
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_UI_BaseWindow_C::ResetSellItemIDList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.ResetSellItemIDList");

	UBPW_UI_BaseWindow_C_ResetSellItemIDList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetSellItemIDList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int>                    SellItemIDList                 (Parm, OutParm, ZeroConstructor)

void UBPW_UI_BaseWindow_C::GetSellItemIDList(TArray<int>* SellItemIDList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetSellItemIDList");

	UBPW_UI_BaseWindow_C_GetSellItemIDList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SellItemIDList != nullptr)
		*SellItemIDList = params.SellItemIDList;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.UpdateHaveItemNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_UI_BaseWindow_C::UpdateHaveItemNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.UpdateHaveItemNum");

	UBPW_UI_BaseWindow_C_UpdateHaveItemNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetSellItemIDList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_UI_BaseWindow_C::SetSellItemIDList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetSellItemIDList");

	UBPW_UI_BaseWindow_C_SetSellItemIDList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.IsSellItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsSellItem                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::IsSellItem(bool* IsSellItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.IsSellItem");

	UBPW_UI_BaseWindow_C_IsSellItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSellItem != nullptr)
		*IsSellItem = params.IsSellItem;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetTotalSellPrice
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            TotalPrice                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::GetTotalSellPrice(int* TotalPrice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetTotalSellPrice");

	UBPW_UI_BaseWindow_C_GetTotalSellPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TotalPrice != nullptr)
		*TotalPrice = params.TotalPrice;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetSelectSellItemuNum
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            PageIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemNum                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::GetSelectSellItemuNum(int PageIndex, int ItemId, int* ItemNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetSelectSellItemuNum");

	UBPW_UI_BaseWindow_C_GetSelectSellItemuNum_Params params;
	params.PageIndex = PageIndex;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemNum != nullptr)
		*ItemNum = params.ItemNum;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.ResetSelectSellItemNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_UI_BaseWindow_C::ResetSelectSellItemNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.ResetSelectSellItemNum");

	UBPW_UI_BaseWindow_C_ResetSelectSellItemNum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetSelectSellItemListSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MaxPage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::SetSelectSellItemListSize(int MaxPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetSelectSellItemListSize");

	UBPW_UI_BaseWindow_C_SetSelectSellItemListSize_Params params;
	params.MaxPage = MaxPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetFocusItemGroup
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            FocusItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3ItemDataGroup               ItemNum                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::GetFocusItemGroup(int FocusItem, ES3ItemDataGroup* ItemNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetFocusItemGroup");

	UBPW_UI_BaseWindow_C_GetFocusItemGroup_Params params;
	params.FocusItem = FocusItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemNum != nullptr)
		*ItemNum = params.ItemNum;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetExchangeTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_UI_BaseWindow_C::SetExchangeTitle(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetExchangeTitle");

	UBPW_UI_BaseWindow_C_SetExchangeTitle_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetCursorVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SelectCategory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::SetCursorVisibility(bool SelectCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetCursorVisibility");

	UBPW_UI_BaseWindow_C_SetCursorVisibility_Params params;
	params.SelectCategory = SelectCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.EndViewMode
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_UI_BaseWindow_C::EndViewMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.EndViewMode");

	UBPW_UI_BaseWindow_C_EndViewMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.StartViewMode
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_UI_BaseWindow_C::StartViewMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.StartViewMode");

	UBPW_UI_BaseWindow_C_StartViewMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetShopName_Localize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ShopName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPW_UI_BaseWindow_C::SetShopName_Localize(const struct FString& ShopName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetShopName_Localize");

	UBPW_UI_BaseWindow_C_SetShopName_Localize_Params params;
	params.ShopName = ShopName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetShopName_Kanji
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ShopName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBPW_UI_BaseWindow_C::SetShopName_Kanji(const struct FString& ShopName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetShopName_Kanji");

	UBPW_UI_BaseWindow_C_SetShopName_Kanji_Params params;
	params.ShopName = ShopName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetSelectItemIDList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int>                    SelectIDList                   (Parm, OutParm, ZeroConstructor)

void UBPW_UI_BaseWindow_C::GetSelectItemIDList(TArray<int>* SelectIDList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetSelectItemIDList");

	UBPW_UI_BaseWindow_C_GetSelectItemIDList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectIDList != nullptr)
		*SelectIDList = params.SelectIDList;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.IsSelectNow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           SelectNow                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SelectNum                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::IsSelectNow(bool* SelectNow, int* SelectNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.IsSelectNow");

	UBPW_UI_BaseWindow_C_IsSelectNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectNow != nullptr)
		*SelectNow = params.SelectNow;
	if (SelectNum != nullptr)
		*SelectNum = params.SelectNum;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.CheckCanUseItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    CanUseItemIDList               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPW_UI_BaseWindow_C::CheckCanUseItem(TArray<int>* CanUseItemIDList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.CheckCanUseItem");

	UBPW_UI_BaseWindow_C_CheckCanUseItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanUseItemIDList != nullptr)
		*CanUseItemIDList = params.CanUseItemIDList;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetPriceCheckCanvasVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::SetPriceCheckCanvasVisibility(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetPriceCheckCanvasVisibility");

	UBPW_UI_BaseWindow_C_SetPriceCheckCanvasVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.CalcTotalSetPrice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_UI_BaseWindow_C::CalcTotalSetPrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.CalcTotalSetPrice");

	UBPW_UI_BaseWindow_C_CalcTotalSetPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetPageIconColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::SetPageIconColor(int page)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetPageIconColor");

	UBPW_UI_BaseWindow_C_SetPageIconColor_Params params;
	params.page = page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.InitPageIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MaxPage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::InitPageIcon(int MaxPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.InitPageIcon");

	UBPW_UI_BaseWindow_C_InitPageIcon_Params params;
	params.MaxPage = MaxPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetVisibilityPageCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::SetVisibilityPageCursor(ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetVisibilityPageCursor");

	UBPW_UI_BaseWindow_C_SetVisibilityPageCursor_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.FocusCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FocusNo                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::FocusCategory(int FocusNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.FocusCategory");

	UBPW_UI_BaseWindow_C_FocusCategory_Params params;
	params.FocusNo = FocusNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.AddCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 name_jp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 name_eng                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FColor                  str_col                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPW_UI_BaseWindow_C::AddCategory(const struct FString& name_jp, const struct FString& name_eng, const struct FColor& str_col)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.AddCategory");

	UBPW_UI_BaseWindow_C_AddCategory_Params params;
	params.name_jp = name_jp;
	params.name_eng = name_eng;
	params.str_col = str_col;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetVisibility_PayIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanPay                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::SetVisibility_PayIcon(bool CanPay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetVisibility_PayIcon");

	UBPW_UI_BaseWindow_C_SetVisibility_PayIcon_Params params;
	params.CanPay = CanPay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetItemNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ListItemNo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::SetItemNum(int ListItemNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetItemNum");

	UBPW_UI_BaseWindow_C_SetItemNum_Params params;
	params.ListItemNo = ListItemNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.DestroyWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_UI_BaseWindow_C::DestroyWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.DestroyWidget");

	UBPW_UI_BaseWindow_C_DestroyWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.PriceAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_UI_BaseWindow_C::PriceAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.PriceAnim");

	UBPW_UI_BaseWindow_C_PriceAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetPriceAnimeData
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_UI_BaseWindow_C::SetPriceAnimeData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetPriceAnimeData");

	UBPW_UI_BaseWindow_C_SetPriceAnimeData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetUITitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_UI_BaseWindow_C::SetUITitle(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetUITitle");

	UBPW_UI_BaseWindow_C_SetUITitle_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.AddHaveItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    BuyItemList                    (Parm, OutParm, ZeroConstructor)
// int                            TotalItems                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::AddHaveItem(TArray<int>* BuyItemList, int* TotalItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.AddHaveItem");

	UBPW_UI_BaseWindow_C_AddHaveItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuyItemList != nullptr)
		*BuyItemList = params.BuyItemList;
	if (TotalItems != nullptr)
		*TotalItems = params.TotalItems;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetFocusItemPrice
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            FocusItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemPrice                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::GetFocusItemPrice(int FocusItem, int* ItemPrice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetFocusItemPrice");

	UBPW_UI_BaseWindow_C_GetFocusItemPrice_Params params;
	params.FocusItem = FocusItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemPrice != nullptr)
		*ItemPrice = params.ItemPrice;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetTotalPrice
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::GetTotalPrice(int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetTotalPrice");

	UBPW_UI_BaseWindow_C_GetTotalPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Price != nullptr)
		*Price = params.Price;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.CalcTotalPrice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PageIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSubtraction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::CalcTotalPrice(int PageIndex, bool IsSubtraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.CalcTotalPrice");

	UBPW_UI_BaseWindow_C_CalcTotalPrice_Params params;
	params.PageIndex = PageIndex;
	params.IsSubtraction = IsSubtraction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetPriceIconPostion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_UI_BaseWindow_C::SetPriceIconPostion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetPriceIconPostion");

	UBPW_UI_BaseWindow_C_SetPriceIconPostion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetPriceText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Money                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::SetPriceText(int Money)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetPriceText");

	UBPW_UI_BaseWindow_C_SetPriceText_Params params;
	params.Money = Money;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetFocusItemNum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            FocusItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemNum                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::GetFocusItemNum(int FocusItem, int* ItemNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetFocusItemNum");

	UBPW_UI_BaseWindow_C_GetFocusItemNum_Params params;
	params.FocusItem = FocusItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemNum != nullptr)
		*ItemNum = params.ItemNum;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SubSelectItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FocusItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SubCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::SubSelectItem(int FocusItem, int SubCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SubSelectItem");

	UBPW_UI_BaseWindow_C_SubSelectItem_Params params;
	params.FocusItem = FocusItem;
	params.SubCount = SubCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.AddSelectItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FocusItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AddCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemListPage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::AddSelectItem(int FocusItem, int AddCount, int ItemListPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.AddSelectItem");

	UBPW_UI_BaseWindow_C_AddSelectItem_Params params;
	params.FocusItem = FocusItem;
	params.AddCount = AddCount;
	params.ItemListPage = ItemListPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetDescription
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_UI_BaseWindow_C::SetDescription(const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetDescription");

	UBPW_UI_BaseWindow_C_SetDescription_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetItemMesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::GetItemMesh(int ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetItemMesh");

	UBPW_UI_BaseWindow_C_GetItemMesh_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.RotateViewItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_UI_BaseWindow_C::RotateViewItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.RotateViewItem");

	UBPW_UI_BaseWindow_C_RotateViewItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SpawnViewItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_UI_BaseWindow_C::SpawnViewItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SpawnViewItem");

	UBPW_UI_BaseWindow_C_SpawnViewItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetRowCol
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ItemListRow                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ItemListCol                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::GetRowCol(int* ItemListRow, int* ItemListCol)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.GetRowCol");

	UBPW_UI_BaseWindow_C_GetRowCol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemListRow != nullptr)
		*ItemListRow = params.ItemListRow;
	if (ItemListCol != nullptr)
		*ItemListCol = params.ItemListCol;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.FocusItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FocusItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::FocusItem(int FocusItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.FocusItem");

	UBPW_UI_BaseWindow_C_FocusItem_Params params;
	params.FocusItem = FocusItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetItemList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_ItemList>    ItemList                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::SetItemList(int page, TArray<struct FST_ItemList>* ItemList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.SetItemList");

	UBPW_UI_BaseWindow_C_SetItemList_Params params;
	params.page = page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemList != nullptr)
		*ItemList = params.ItemList;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.InitItemList
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_UI_BaseWindow_C::InitItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.InitItemList");

	UBPW_UI_BaseWindow_C_InitItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.PreConstruct");

	UBPW_UI_BaseWindow_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_UI_BaseWindow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.Construct");

	UBPW_UI_BaseWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.Tick");

	UBPW_UI_BaseWindow_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.ExecuteUbergraph_BPW_UI_BaseWindow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_UI_BaseWindow_C::ExecuteUbergraph_BPW_UI_BaseWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.ExecuteUbergraph_BPW_UI_BaseWindow");

	UBPW_UI_BaseWindow_C_ExecuteUbergraph_BPW_UI_BaseWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.ED_PriceAnimFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPW_UI_BaseWindow_C::ED_PriceAnimFinish__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_UI_BaseWindow.BPW_UI_BaseWindow_C.ED_PriceAnimFinish__DelegateSignature");

	UBPW_UI_BaseWindow_C_ED_PriceAnimFinish__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
