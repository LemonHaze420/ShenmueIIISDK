
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetRotateIconVisiblity
// (Event, NetResponse, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::SetRotateIconVisiblity(bool Visible, bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetRotateIconVisiblity");

	ABP_UI_ShopBaseManager_C_SetRotateIconVisiblity_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetRStickIconPos
// (Net, NetRequest, Event, MulticastDelegate, Protected, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_UI_ShopBaseManager_C::SetRStickIconPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetRStickIconPos");

	ABP_UI_ShopBaseManager_C_SetRStickIconPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.IsVisibleRStickCenterPos
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsCenter                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::STATIC_IsVisibleRStickCenterPos(bool* IsCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.IsVisibleRStickCenterPos");

	ABP_UI_ShopBaseManager_C_IsVisibleRStickCenterPos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCenter != nullptr)
		*IsCenter = params.IsCenter;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.IsVisibleRStickOnlyViewMode
// (Net, NetReliable, Native, Event, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_UI_ShopBaseManager_C::IsVisibleRStickOnlyViewMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.IsVisibleRStickOnlyViewMode");

	ABP_UI_ShopBaseManager_C_IsVisibleRStickOnlyViewMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetViewModeSkip
// (Net, NetReliable, NetRequest, Native, Event, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           SkipFlag                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::SetViewModeSkip(bool SkipFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetViewModeSkip");

	ABP_UI_ShopBaseManager_C_SetViewModeSkip_Params params;
	params.SkipFlag = SkipFlag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.Get NowCategory
// (NetReliable, Exec, Native, Event, MulticastDelegate, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// ES3ItemDataGroup               Category                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::Get_NowCategory(ES3ItemDataGroup* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.Get NowCategory");

	ABP_UI_ShopBaseManager_C_Get_NowCategory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Category != nullptr)
		*Category = params.Category;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.IsPawnShopMagicNumber
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_UI_ShopBaseManager_C::STATIC_IsPawnShopMagicNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.IsPawnShopMagicNumber");

	ABP_UI_ShopBaseManager_C_IsPawnShopMagicNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SelectItemCount
// (Event, Static, Protected, NetServer, HasDefaults, NetClient, BlueprintPure)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::STATIC_SelectItemCount(int* Count)
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
// (Net, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_UI_ShopBaseManager_C::STATIC_SetSkillWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetSkillWindow");

	ABP_UI_ShopBaseManager_C_SetSkillWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ItemValidCheck
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::STATIC_ItemValidCheck(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ItemValidCheck");

	ABP_UI_ShopBaseManager_C_ItemValidCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.Calc_BuyPrice
// (NetRequest, Native, Event, NetMulticast, Public, Private, Protected, Delegate, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MarginPrice != nullptr)
		*MarginPrice = params.MarginPrice;
	if (Margin != nullptr)
		*Margin = params.Margin;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.Check_ItemDescription_Ruby
// (Exec, Native, NetResponse, Static, MulticastDelegate, Public, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ruby                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::STATIC_Check_ItemDescription_Ruby(int ItemId, bool* Ruby)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.Check_ItemDescription_Ruby");

	ABP_UI_ShopBaseManager_C_Check_ItemDescription_Ruby_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ruby != nullptr)
		*Ruby = params.Ruby;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.GetUITextData
// (NetReliable, NetResponse, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
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
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_UI_ShopBaseManager_C::STATIC_Check_CrueDragOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.Check_CrueDragOnly");

	ABP_UI_ShopBaseManager_C_Check_CrueDragOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CheckComplete
// (NetRequest, Native, Private, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FocusItemNo                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsComplete                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::CheckComplete(int FocusItemNo, bool* IsComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CheckComplete");

	ABP_UI_ShopBaseManager_C_CheckComplete_Params params;
	params.FocusItemNo = FocusItemNo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsComplete != nullptr)
		*IsComplete = params.IsComplete;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetExchange_CheckPayIcon
// (NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_UI_ShopBaseManager_C::STATIC_SetExchange_CheckPayIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetExchange_CheckPayIcon");

	ABP_UI_ShopBaseManager_C_SetExchange_CheckPayIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetShopName
// (Net, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (NetReliable, Exec, Event, Static, Public, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int>                    BuyItemList                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_UI_ShopBaseManager_C::STATIC_CheckSubEvent(TArray<int>* BuyItemList)
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
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_UI_ShopBaseManager_C::STATIC_BeforDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.BeforDestroy");

	ABP_UI_ShopBaseManager_C_BeforDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.PushAddSubButtonAfter
// (Net, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_UI_ShopBaseManager_C::STATIC_PushAddSubButtonAfter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.PushAddSubButtonAfter");

	ABP_UI_ShopBaseManager_C_PushAddSubButtonAfter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SubSetItem
// (Net, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_UI_ShopBaseManager_C::STATIC_SubSetItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SubSetItem");

	ABP_UI_ShopBaseManager_C_SubSetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.AddSetItem
// (NetReliable, Event, Static, MulticastDelegate, Public, Delegate)

void ABP_UI_ShopBaseManager_C::STATIC_AddSetItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.AddSetItem");

	ABP_UI_ShopBaseManager_C_AddSetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ChangePage
// (Net, NetRequest, Exec, Native, Event, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::ChangePage(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ChangePage");

	ABP_UI_ShopBaseManager_C_ChangePage_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InitPageIcon
// (NetReliable, NetRequest, Event, NetResponse, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)

void ABP_UI_ShopBaseManager_C::InitPageIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InitPageIcon");

	ABP_UI_ShopBaseManager_C_InitPageIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.MoveCategoryFocusAfter
// (NetRequest, Event, Public, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_UI_ShopBaseManager_C::MoveCategoryFocusAfter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.MoveCategoryFocusAfter");

	ABP_UI_ShopBaseManager_C_MoveCategoryFocusAfter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.GetCategory
// (NetReliable, NetRequest, Native, NetResponse, Public, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintEvent)
// Parameters:
// ES3ItemDataGroup               Category                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::GetCategory(ES3ItemDataGroup* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.GetCategory");

	ABP_UI_ShopBaseManager_C_GetCategory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Category != nullptr)
		*Category = params.Category;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InitItemListWindow
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_UI_ShopBaseManager_C::STATIC_InitItemListWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InitItemListWindow");

	ABP_UI_ShopBaseManager_C_InitItemListWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.MoveCategoryFocus
// (NetReliable, Native, Event, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::MoveCategoryFocus(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.MoveCategoryFocus");

	ABP_UI_ShopBaseManager_C_MoveCategoryFocus_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetCategory
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDataTable*              DataTable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::STATIC_SetCategory(class UDataTable* DataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.SetCategory");

	ABP_UI_ShopBaseManager_C_SetCategory_Params params;
	params.DataTable = DataTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.UpdateItemIDList
// (NetReliable, NetRequest, Event, Private, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_UI_ShopBaseManager_C::UpdateItemIDList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.UpdateItemIDList");

	ABP_UI_ShopBaseManager_C_UpdateItemIDList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.VisibleButton_CheckDialog
// (Event, Static, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Visible_CheckDialog            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::STATIC_VisibleButton_CheckDialog(bool Visible_CheckDialog)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.VisibleButton_CheckDialog");

	ABP_UI_ShopBaseManager_C_VisibleButton_CheckDialog_Params params;
	params.Visible_CheckDialog = Visible_CheckDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CheckVisibleAddButton
// (Net, NetReliable, NetRequest, Event, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_UI_ShopBaseManager_C::CheckVisibleAddButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CheckVisibleAddButton");

	ABP_UI_ShopBaseManager_C_CheckVisibleAddButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CheckVisibleSubButton
// (Native, Static, Public, NetServer)

void ABP_UI_ShopBaseManager_C::STATIC_CheckVisibleSubButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CheckVisibleSubButton");

	ABP_UI_ShopBaseManager_C_CheckVisibleSubButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.GetDescription
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_UI_ShopBaseManager_C::STATIC_CheckFocusItemNo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.CheckFocusItemNo");

	ABP_UI_ShopBaseManager_C_CheckFocusItemNo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.UserConstructionScript
// (Net, NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_UI_ShopBaseManager_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.UserConstructionScript");

	ABP_UI_ShopBaseManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_18
// (Net, NetRequest, Event, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (NetRequest, Event, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (NetRequest, Event, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (Net, NetReliable, Event, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (NetReliable, Event, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (Net, Event, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (Net, Event, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (Event, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_UI_ShopBaseManager_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_10");

	ABP_UI_ShopBaseManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.PushCheckDialog
// (Net, NetRequest, Exec, Native, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_UI_Button>      PushButton                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::PushCheckDialog(TEnumAsByte<EN_UI_Button> PushButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.PushCheckDialog");

	ABP_UI_ShopBaseManager_C_PushCheckDialog_Params params;
	params.PushButton = PushButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.FinishPriceAnim
// (Net, NetRequest, NetResponse, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_UI_ShopBaseManager_C::FinishPriceAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.FinishPriceAnim");

	ABP_UI_ShopBaseManager_C_FinishPriceAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, Native, Event, Public, Protected, NetServer)

void ABP_UI_ShopBaseManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ReceiveBeginPlay");

	ABP_UI_ShopBaseManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.PushButton
// (Net, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_UI_Button>      newParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::PushButton(TEnumAsByte<EN_UI_Button> newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.PushButton");

	ABP_UI_ShopBaseManager_C_PushButton_Params params;
	params.newParam = newParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.DecideDetectAction
// (NetReliable, MulticastDelegate, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.DecideDetectAction");

	ABP_UI_ShopBaseManager_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.OpenYesNoDialog
// (Net, NetRequest, NetResponse, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_UI_ShopBaseManager_C::OpenYesNoDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.OpenYesNoDialog");

	ABP_UI_ShopBaseManager_C_OpenYesNoDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_4
// (Net, NetReliable, Exec, Event, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (NetReliable, Exec, Event, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (NetReliable, Exec, Event, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (Exec, Event, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (Net, NetReliable, NetRequest, Event, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ReceiveTick");

	ABP_UI_ShopBaseManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.PushL2R2_ViewMode
// (Net, NetReliable, NetRequest, Event, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (Net, NetResponse, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_UI_ShopBaseManager_C::UpDownReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.UpDownReset");

	ABP_UI_ShopBaseManager_C_UpDownReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ReceiveEndPlay
// (NetReliable, NetRequest, Event, NetResponse, Public, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ReceiveEndPlay");

	ABP_UI_ShopBaseManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_ShopBaseManager.BP_UI_ShopBaseManager_C.ExecuteUbergraph_BP_UI_ShopBaseManager
// (MulticastDelegate, NetServer, HasDefaults, NetClient, DLLImport)
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
// (Net, NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           DoBuy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_ShopBaseManager_C::STATIC_ED_Switch_DoBuy__DelegateSignature(bool DoBuy)
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
