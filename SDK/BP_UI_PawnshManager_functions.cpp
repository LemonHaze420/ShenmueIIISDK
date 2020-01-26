
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.HasEnoughToSellItem
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3ItemDataGroup               currentCategory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3ItemDataGroup               ItemGroup                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HaveNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_UI_PawnshManager_C::HasEnoughToSellItem(ES3ItemDataGroup currentCategory, ES3ItemDataGroup ItemGroup, int HaveNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.HasEnoughToSellItem");

	ABP_UI_PawnshManager_C_HasEnoughToSellItem_Params params;
	params.currentCategory = currentCategory;
	params.ItemGroup = ItemGroup;
	params.HaveNum = HaveNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.IsVisibleRStickCenterPos
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsCenter                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_PawnshManager_C::IsVisibleRStickCenterPos(bool* IsCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.IsVisibleRStickCenterPos");

	ABP_UI_PawnshManager_C_IsVisibleRStickCenterPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsCenter != nullptr)
		*IsCenter = params.IsCenter;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckWearableClothItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3ItemDataGroup               currentCategory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3ItemDataGroup               ItemListGroup                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Add_List                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_PawnshManager_C::CheckWearableClothItem(ES3ItemDataGroup currentCategory, ES3ItemDataGroup ItemListGroup, bool* Add_List)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckWearableClothItem");

	ABP_UI_PawnshManager_C_CheckWearableClothItem_Params params;
	params.currentCategory = currentCategory;
	params.ItemListGroup = ItemListGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Add_List != nullptr)
		*Add_List = params.Add_List;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.IsVisibleRStickOnlyViewMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_UI_PawnshManager_C::IsVisibleRStickOnlyViewMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.IsVisibleRStickOnlyViewMode");

	ABP_UI_PawnshManager_C_IsVisibleRStickOnlyViewMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckEnabledByArea
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_PawnshManager_C::CheckEnabledByArea(int ItemId, bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckEnabledByArea");

	ABP_UI_PawnshManager_C_CheckEnabledByArea_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.GetItemGroup
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            item_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3ItemDataGroup               Group                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_PawnshManager_C::GetItemGroup(int item_id, ES3ItemDataGroup* Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.GetItemGroup");

	ABP_UI_PawnshManager_C_GetItemGroup_Params params;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Group != nullptr)
		*Group = params.Group;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckRewardGacha
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3ItemDataGroup               currentCategory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3ItemDataGroup               ItemListGroup                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Add_List                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_PawnshManager_C::CheckRewardGacha(ES3ItemDataGroup currentCategory, ES3ItemDataGroup ItemListGroup, bool* Add_List)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckRewardGacha");

	ABP_UI_PawnshManager_C_CheckRewardGacha_Params params;
	params.currentCategory = currentCategory;
	params.ItemListGroup = ItemListGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Add_List != nullptr)
		*Add_List = params.Add_List;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckClothItem
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3ItemDataGroup               currentCategory                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3ItemDataGroup               ItemListGroup                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Add_List                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_PawnshManager_C::CheckClothItem(ES3ItemDataGroup currentCategory, ES3ItemDataGroup ItemListGroup, bool* Add_List)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckClothItem");

	ABP_UI_PawnshManager_C_CheckClothItem_Params params;
	params.currentCategory = currentCategory;
	params.ItemListGroup = ItemListGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Add_List != nullptr)
		*Add_List = params.Add_List;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SubtractItemSetFromInventory
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::SubtractItemSetFromInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SubtractItemSetFromInventory");

	ABP_UI_PawnshManager_C_SubtractItemSetFromInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SetPriceFromSetItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::SetPriceFromSetItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SetPriceFromSetItem");

	ABP_UI_PawnshManager_C_SetPriceFromSetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SetRightWindow
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::SetRightWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SetRightWindow");

	ABP_UI_PawnshManager_C_SetRightWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.RightWindowChange
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::RightWindowChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.RightWindowChange");

	ABP_UI_PawnshManager_C_RightWindowChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.MakeItemDataList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::MakeItemDataList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.MakeItemDataList");

	ABP_UI_PawnshManager_C_MakeItemDataList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.PawnshUpdateItemIDList
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::PawnshUpdateItemIDList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.PawnshUpdateItemIDList");

	ABP_UI_PawnshManager_C_PawnshUpdateItemIDList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.PawnshChangePage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_PawnshManager_C::PawnshChangePage(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.PawnshChangePage");

	ABP_UI_PawnshManager_C_PawnshChangePage_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.MakeItemIdList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::MakeItemIdList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.MakeItemIdList");

	ABP_UI_PawnshManager_C_MakeItemIdList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.UserConstructionScript");

	ABP_UI_PawnshManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_UI_PawnshManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.ReceiveBeginPlay");

	ABP_UI_PawnshManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_PawnshManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.ReceiveTick");

	ABP_UI_PawnshManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_PawnshManager_C::ChangePage(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.ChangePage");

	ABP_UI_PawnshManager_C_ChangePage_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.UpdateItemIDList
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::UpdateItemIDList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.UpdateItemIDList");

	ABP_UI_PawnshManager_C_UpdateItemIDList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.MoveCategoryFocusAfter
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::MoveCategoryFocusAfter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.MoveCategoryFocusAfter");

	ABP_UI_PawnshManager_C_MoveCategoryFocusAfter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SellAnimFinish_RegularShop
// (BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::SellAnimFinish_RegularShop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SellAnimFinish_RegularShop");

	ABP_UI_PawnshManager_C_SellAnimFinish_RegularShop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.PushCheckDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_UI_Button>      PushButton                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_PawnshManager_C::PushCheckDialog(TEnumAsByte<EN_UI_Button> PushButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.PushCheckDialog");

	ABP_UI_PawnshManager_C_PushCheckDialog_Params params;
	params.PushButton = PushButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SellAnimFinish_Set
// (BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::SellAnimFinish_Set()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SellAnimFinish_Set");

	ABP_UI_PawnshManager_C_SellAnimFinish_Set_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SetSkillWindow
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::SetSkillWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SetSkillWindow");

	ABP_UI_PawnshManager_C_SetSkillWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckVisibleSubButton
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::CheckVisibleSubButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckVisibleSubButton");

	ABP_UI_PawnshManager_C_CheckVisibleSubButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckVisibleAddButton
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::CheckVisibleAddButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckVisibleAddButton");

	ABP_UI_PawnshManager_C_CheckVisibleAddButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.ExecuteUbergraph_BP_UI_PawnshManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_PawnshManager_C::ExecuteUbergraph_BP_UI_PawnshManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.ExecuteUbergraph_BP_UI_PawnshManager");

	ABP_UI_PawnshManager_C_ExecuteUbergraph_BP_UI_PawnshManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
