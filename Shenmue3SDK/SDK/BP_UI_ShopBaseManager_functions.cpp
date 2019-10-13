
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

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.IsVisibleRStickOnlyViewMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_UI_ShopBaseManager_C::IsVisibleRStickOnlyViewMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.IsVisibleRStickOnlyViewMode");

	ABP_UI_ShopBaseManager_C_IsVisibleRStickOnlyViewMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetRStickIconVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::SetRStickIconVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetRStickIconVisible");

	ABP_UI_ShopBaseManager_C_SetRStickIconVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetViewModeSkip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SkipFlag                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::SetViewModeSkip(bool SkipFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetViewModeSkip");

	ABP_UI_ShopBaseManager_C_SetViewModeSkip_Params params;
	params.SkipFlag = SkipFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.Get NowCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3ItemDataGroup               Category                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::Get_NowCategory(ES3ItemDataGroup* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.Get NowCategory");

	ABP_UI_ShopBaseManager_C_Get_NowCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Category != nullptr)
		*Category = params.Category;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.IsPawnShopMagicNumber
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_UI_ShopBaseManager_C::IsPawnShopMagicNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.IsPawnShopMagicNumber");

	ABP_UI_ShopBaseManager_C_IsPawnShopMagicNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SelectItemCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::SelectItemCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SelectItemCount");

	ABP_UI_ShopBaseManager_C_SelectItemCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetSkillWindow
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ShopBaseManager_C::SetSkillWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetSkillWindow");

	ABP_UI_ShopBaseManager_C_SetSkillWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ItemValidCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::ItemValidCheck(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ItemValidCheck");

	ABP_UI_ShopBaseManager_C_ItemValidCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.Calc_BuyPrice
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MarginPrice                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Margin                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::Calc_BuyPrice(int ItemId, int Price, int* MarginPrice, float* Margin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.Calc_BuyPrice");

	ABP_UI_ShopBaseManager_C_Calc_BuyPrice_Params params;
	params.ItemId = ItemId;
	params.Price = Price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MarginPrice != nullptr)
		*MarginPrice = params.MarginPrice;
	if (Margin != nullptr)
		*Margin = params.Margin;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.Check_ItemDescription_Ruby
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ruby                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::Check_ItemDescription_Ruby(int ItemId, bool* Ruby)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.Check_ItemDescription_Ruby");

	ABP_UI_ShopBaseManager_C_Check_ItemDescription_Ruby_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ruby != nullptr)
		*Ruby = params.Ruby;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.GetUITextData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutString                      (Parm, OutParm, ZeroConstructor)

void ABP_UI_ShopBaseManager_C::GetUITextData(const struct FName& Label, struct FString* OutString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.GetUITextData");

	ABP_UI_ShopBaseManager_C_GetUITextData_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutString != nullptr)
		*OutString = params.OutString;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.Check_CrueDragOnly
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_UI_ShopBaseManager_C::Check_CrueDragOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.Check_CrueDragOnly");

	ABP_UI_ShopBaseManager_C_Check_CrueDragOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CheckComplete
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            FocusItemNo                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsComplete                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::CheckComplete(int FocusItemNo, bool* IsComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CheckComplete");

	ABP_UI_ShopBaseManager_C_CheckComplete_Params params;
	params.FocusItemNo = FocusItemNo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsComplete != nullptr)
		*IsComplete = params.IsComplete;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetExchange_CheckPayIcon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ShopBaseManager_C::SetExchange_CheckPayIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetExchange_CheckPayIcon");

	ABP_UI_ShopBaseManager_C_SetExchange_CheckPayIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetShopName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ShopID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::SetShopName(int ShopID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetShopName");

	ABP_UI_ShopBaseManager_C_SetShopName_Params params;
	params.ShopID = ShopID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CheckSubEvent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    BuyItemList                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_UI_ShopBaseManager_C::CheckSubEvent(TArray<int>* BuyItemList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CheckSubEvent");

	ABP_UI_ShopBaseManager_C_CheckSubEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuyItemList != nullptr)
		*BuyItemList = params.BuyItemList;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.BeforDestroy
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ShopBaseManager_C::BeforDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.BeforDestroy");

	ABP_UI_ShopBaseManager_C_BeforDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.PushAddSubButtonAfter
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ShopBaseManager_C::PushAddSubButtonAfter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.PushAddSubButtonAfter");

	ABP_UI_ShopBaseManager_C_PushAddSubButtonAfter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SubSetItem
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ShopBaseManager_C::SubSetItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SubSetItem");

	ABP_UI_ShopBaseManager_C_SubSetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.AddSetItem
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ShopBaseManager_C::AddSetItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.AddSetItem");

	ABP_UI_ShopBaseManager_C_AddSetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ChangePage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::ChangePage(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ChangePage");

	ABP_UI_ShopBaseManager_C_ChangePage_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InitPageIcon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ShopBaseManager_C::InitPageIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InitPageIcon");

	ABP_UI_ShopBaseManager_C_InitPageIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.MoveCategoryFocusAfter
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ShopBaseManager_C::MoveCategoryFocusAfter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.MoveCategoryFocusAfter");

	ABP_UI_ShopBaseManager_C_MoveCategoryFocusAfter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.GetCategory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3ItemDataGroup               Category                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::GetCategory(ES3ItemDataGroup* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.GetCategory");

	ABP_UI_ShopBaseManager_C_GetCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Category != nullptr)
		*Category = params.Category;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InitItemListWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_UI_ShopBaseManager_C::InitItemListWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InitItemListWindow");

	ABP_UI_ShopBaseManager_C_InitItemListWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.MoveCategoryFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::MoveCategoryFocus(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.MoveCategoryFocus");

	ABP_UI_ShopBaseManager_C_MoveCategoryFocus_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*              DataTable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::SetCategory(class UDataTable* DataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetCategory");

	ABP_UI_ShopBaseManager_C_SetCategory_Params params;
	params.DataTable = DataTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.UpdateItemIDList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_UI_ShopBaseManager_C::UpdateItemIDList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.UpdateItemIDList");

	ABP_UI_ShopBaseManager_C_UpdateItemIDList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.VisibleButton_CheckDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible_CheckDialog            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::VisibleButton_CheckDialog(bool Visible_CheckDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.VisibleButton_CheckDialog");

	ABP_UI_ShopBaseManager_C_VisibleButton_CheckDialog_Params params;
	params.Visible_CheckDialog = Visible_CheckDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CheckVisibleAddButton
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ShopBaseManager_C::CheckVisibleAddButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CheckVisibleAddButton");

	ABP_UI_ShopBaseManager_C_CheckVisibleAddButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CheckVisibleSubButton
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ShopBaseManager_C::CheckVisibleSubButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CheckVisibleSubButton");

	ABP_UI_ShopBaseManager_C_CheckVisibleSubButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.GetDescription
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Description                    (Parm, OutParm)

void ABP_UI_ShopBaseManager_C::GetDescription(struct FText* Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.GetDescription");

	ABP_UI_ShopBaseManager_C_GetDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Description != nullptr)
		*Description = params.Description;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CheckFocusItemNo
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ShopBaseManager_C::CheckFocusItemNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CheckFocusItemNo");

	ABP_UI_ShopBaseManager_C_CheckFocusItemNo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_ShopBaseManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.UserConstructionScript");

	ABP_UI_ShopBaseManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ShopBaseManager_C::InpActEvt_ResetCamera_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_18");

	ABP_UI_ShopBaseManager_C_InpActEvt_ResetCamera_K2Node_InputActionEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ShopBaseManager_C::InpActEvt_SearchRightSelect_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_17");

	ABP_UI_ShopBaseManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ShopBaseManager_C::InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16");

	ABP_UI_ShopBaseManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ShopBaseManager_C::InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_15");

	ABP_UI_ShopBaseManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ShopBaseManager_C::InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_14");

	ABP_UI_ShopBaseManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ShopBaseManager_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_13");

	ABP_UI_ShopBaseManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ShopBaseManager_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_12");

	ABP_UI_ShopBaseManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ShopBaseManager_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_11");

	ABP_UI_ShopBaseManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ShopBaseManager_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_10");

	ABP_UI_ShopBaseManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.PushCheckDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_UI_Button>      PushButton                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::PushCheckDialog(TEnumAsByte<EN_UI_Button> PushButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.PushCheckDialog");

	ABP_UI_ShopBaseManager_C_PushCheckDialog_Params params;
	params.PushButton = PushButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.FinishPriceAnim
// (BlueprintCallable, BlueprintEvent)

void ABP_UI_ShopBaseManager_C::FinishPriceAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.FinishPriceAnim");

	ABP_UI_ShopBaseManager_C_FinishPriceAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_UI_ShopBaseManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ReceiveBeginPlay");

	ABP_UI_ShopBaseManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.PushButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_UI_Button>*     newParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::PushButton(TEnumAsByte<EN_UI_Button>* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.PushButton");

	ABP_UI_ShopBaseManager_C_PushButton_Params params;
	params.newParam = newParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType*             Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::DecideDetectAction(ES3ActionIconType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.DecideDetectAction");

	ABP_UI_ShopBaseManager_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.OpenYesNoDialog
// (BlueprintCallable, BlueprintEvent)

void ABP_UI_ShopBaseManager_C::OpenYesNoDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.OpenYesNoDialog");

	ABP_UI_ShopBaseManager_C_OpenYesNoDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_4
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_4(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_4");

	ABP_UI_ShopBaseManager_C_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_4_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_7
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_7(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_7");

	ABP_UI_ShopBaseManager_C_InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_7_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33");

	ABP_UI_ShopBaseManager_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9");

	ABP_UI_ShopBaseManager_C_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ReceiveTick");

	ABP_UI_ShopBaseManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.PushL2R2_ViewMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::PushL2R2_ViewMode(float InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.PushL2R2_ViewMode");

	ABP_UI_ShopBaseManager_C_PushL2R2_ViewMode_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.UpDownReset
// (BlueprintCallable, BlueprintEvent)

void ABP_UI_ShopBaseManager_C::UpDownReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.UpDownReset");

	ABP_UI_ShopBaseManager_C_UpDownReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ReceiveEndPlay");

	ABP_UI_ShopBaseManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ExecuteUbergraph_BP_UI_ShopBaseManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::ExecuteUbergraph_BP_UI_ShopBaseManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ExecuteUbergraph_BP_UI_ShopBaseManager");

	ABP_UI_ShopBaseManager_C_ExecuteUbergraph_BP_UI_ShopBaseManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ED_Switch_DoBuy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoBuy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::ED_Switch_DoBuy__DelegateSignature(bool DoBuy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ED_Switch_DoBuy__DelegateSignature");

	ABP_UI_ShopBaseManager_C_ED_Switch_DoBuy__DelegateSignature_Params params;
	params.DoBuy = DoBuy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
