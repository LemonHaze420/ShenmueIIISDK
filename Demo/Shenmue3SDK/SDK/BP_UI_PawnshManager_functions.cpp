
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

// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.IsVisibleRStickOnlyViewMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_PawnshManager_C::CheckEnabledByArea(const struct FName& ItemLabel, bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckEnabledByArea");

	ABP_UI_PawnshManager_C_CheckEnabledByArea_Params params;
	params.ItemLabel = ItemLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckItemGroup
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            item_id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3ItemDataGroup               Group                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_UI_PawnshManager_C::CheckItemGroup(int item_id, ES3ItemDataGroup* Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckItemGroup");

	ABP_UI_PawnshManager_C_CheckItemGroup_Params params;
	params.item_id = item_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Group != nullptr)
		*Group = params.Group;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CheckRewardGacha
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
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


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.GetItem
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::GetItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.GetItem");

	ABP_UI_PawnshManager_C_GetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SetPrice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::SetPrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SetPrice");

	ABP_UI_PawnshManager_C_SetPrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SetRightWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::SetRightWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.SetRightWindow");

	ABP_UI_PawnshManager_C_SetRightWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.RightWindowChange
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::RightWindowChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.RightWindowChange");

	ABP_UI_PawnshManager_C_RightWindowChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.MakeItemDataList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::MakeItemDataList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.MakeItemDataList");

	ABP_UI_PawnshManager_C_MakeItemDataList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.PawnshUpdateItemIDList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::PawnshUpdateItemIDList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.PawnshUpdateItemIDList");

	ABP_UI_PawnshManager_C_PawnshUpdateItemIDList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.PawnshChangePage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::MakeItemIdList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.MakeItemIdList");

	ABP_UI_PawnshManager_C_MakeItemIdList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.InitItemDataLength
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::InitItemDataLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.InitItemDataLength");

	ABP_UI_PawnshManager_C_InitItemDataLength_Params params;

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
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_PawnshManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.ReceiveTick");

	ABP_UI_PawnshManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

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


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.ChangePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_PawnshManager_C::ChangePage(int* Value)
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


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CustomEvent_2");

	ABP_UI_PawnshManager_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.PushCheckDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_UI_Button>*     PushButton                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_UI_PawnshManager_C::PushCheckDialog(TEnumAsByte<EN_UI_Button>* PushButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.PushCheckDialog");

	ABP_UI_PawnshManager_C_PushCheckDialog_Params params;
	params.PushButton = PushButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_UI_PawnshManager_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_UI_PawnshManager.BP_UI_PawnshManager_C.CustomEvent");

	ABP_UI_PawnshManager_C_CustomEvent_Params params;

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
