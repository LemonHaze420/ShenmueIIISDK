
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

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_S3ItemListViewerManager_C::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetPriority");

	ABP_S3ItemListViewerManager_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_S3ItemListViewerManager_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetDetectAction");

	ABP_S3ItemListViewerManager_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CheckTrialVersion
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::CheckTrialVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CheckTrialVersion");

	ABP_S3ItemListViewerManager_C_CheckTrialVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsVisibleRStickOnlyViewMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3ItemListMenuType            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3ItemListViewerManager_C::IsVisibleRStickOnlyViewMode(ES3ItemListMenuType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsVisibleRStickOnlyViewMode");

	ABP_S3ItemListViewerManager_C_IsVisibleRStickOnlyViewMode_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InitializeCategories
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::InitializeCategories()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InitializeCategories");

	ABP_S3ItemListViewerManager_C_InitializeCategories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SetSelectMenuTypeList
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::SetSelectMenuTypeList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SetSelectMenuTypeList");

	ABP_S3ItemListViewerManager_C_SetSelectMenuTypeList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsOnExchangeCategory
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3ItemListViewerManager_C::IsOnExchangeCategory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsOnExchangeCategory");

	ABP_S3ItemListViewerManager_C_IsOnExchangeCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpdateSkillDisplay
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::UpdateSkillDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpdateSkillDisplay");

	ABP_S3ItemListViewerManager_C_UpdateSkillDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.AddItemDataToList
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NextTableIdx                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FItemListItemTable> Table                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_S3ItemListViewerManager_C::AddItemDataToList(int ItemId, TArray<struct FItemListItemTable> Table, int* NextTableIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.AddItemDataToList");

	ABP_S3ItemListViewerManager_C_AddItemDataToList_Params params;
	params.ItemId = ItemId;
	params.Table = Table;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextTableIdx != nullptr)
		*NextTableIdx = params.NextTableIdx;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SimpleValueAdditiveSort
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ItemListMenuType            CategoryType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FItemListItemTable> ItemList                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_S3ItemListViewerManager_C::SimpleValueAdditiveSort(ES3ItemListMenuType CategoryType, TArray<struct FItemListItemTable>* ItemList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SimpleValueAdditiveSort");

	ABP_S3ItemListViewerManager_C_SimpleValueAdditiveSort_Params params;
	params.CategoryType = CategoryType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemList != nullptr)
		*ItemList = params.ItemList;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SpaceOneItemPerRow
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FItemListItemTable> ItemDataList                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_S3ItemListViewerManager_C::SpaceOneItemPerRow(TArray<struct FItemListItemTable>* ItemDataList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SpaceOneItemPerRow");

	ABP_S3ItemListViewerManager_C_SpaceOneItemPerRow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemDataList != nullptr)
		*ItemDataList = params.ItemDataList;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsSetMenu
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3ItemListMenuType            InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3ItemListViewerManager_C::IsSetMenu(ES3ItemListMenuType InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsSetMenu");

	ABP_S3ItemListViewerManager_C_IsSetMenu_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SortItemListByInt
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FItemListItemTable> SortArray                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    IntArray                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           dsc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::SortItemListByInt(TArray<int> IntArray, bool dsc, TArray<struct FItemListItemTable>* SortArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SortItemListByInt");

	ABP_S3ItemListViewerManager_C_SortItemListByInt_Params params;
	params.IntArray = IntArray;
	params.dsc = dsc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SortArray != nullptr)
		*SortArray = params.SortArray;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MoveContentsOfArray
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FItemListItemTable> Sorce_Array                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FItemListItemTable> Temp_Array                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_S3ItemListViewerManager_C::MoveContentsOfArray(TArray<struct FItemListItemTable>* Sorce_Array, TArray<struct FItemListItemTable>* Temp_Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MoveContentsOfArray");

	ABP_S3ItemListViewerManager_C_MoveContentsOfArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Sorce_Array != nullptr)
		*Sorce_Array = params.Sorce_Array;
	if (Temp_Array != nullptr)
		*Temp_Array = params.Temp_Array;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetDescriptionType
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_Inventory_CategoryType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EN_Inventory_CategoryType> ABP_S3ItemListViewerManager_C::GetDescriptionType(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetDescriptionType");

	ABP_S3ItemListViewerManager_C_GetDescriptionType_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.AllowsViewModeAxisInput
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// bool                           TryTransit                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ABP_S3ItemListViewerManager_C::AllowsViewModeAxisInput(bool* TryTransit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.AllowsViewModeAxisInput");

	ABP_S3ItemListViewerManager_C_AllowsViewModeAxisInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TryTransit != nullptr)
		*TryTransit = params.TryTransit;

	return params.ReturnValue;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpdateCategoryTipsImage
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::UpdateCategoryTipsImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpdateCategoryTipsImage");

	ABP_S3ItemListViewerManager_C_UpdateCategoryTipsImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.NavigateSkillEditor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Een_skill_key_type> Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::NavigateSkillEditor(TEnumAsByte<Een_skill_key_type> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.NavigateSkillEditor");

	ABP_S3ItemListViewerManager_C_NavigateSkillEditor_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SetSkillWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuType>         InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::SetSkillWindow(TEnumAsByte<EMenuType> InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SetSkillWindow");

	ABP_S3ItemListViewerManager_C_SetSkillWindow_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MakeFocusItemList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::MakeFocusItemList(int ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MakeFocusItemList");

	ABP_S3ItemListViewerManager_C_MakeFocusItemList_Params params;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PlaySound
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAtomCue*           Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::PlaySound(class USoundAtomCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PlaySound");

	ABP_S3ItemListViewerManager_C_PlaySound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.OpenToFoodItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::OpenToFoodItem(int ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.OpenToFoodItem");

	ABP_S3ItemListViewerManager_C_OpenToFoodItem_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReleaseCursor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::ReleaseCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReleaseCursor");

	ABP_S3ItemListViewerManager_C_ReleaseCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsValidSetExchange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::IsValidSetExchange(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsValidSetExchange");

	ABP_S3ItemListViewerManager_C_IsValidSetExchange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ItemLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ItemIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::GetIndex(const struct FString& ItemLabel, int* ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetIndex");

	ABP_S3ItemListViewerManager_C_GetIndex_Params params;
	params.ItemLabel = ItemLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIndex != nullptr)
		*ItemIndex = params.ItemIndex;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.TickSelectKeyPresses
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DelayTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::TickSelectKeyPresses(float DelayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.TickSelectKeyPresses");

	ABP_S3ItemListViewerManager_C_TickSelectKeyPresses_Params params;
	params.DelayTime = DelayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsViewHelp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           isDisp                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::IsViewHelp(bool* isDisp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsViewHelp");

	ABP_S3ItemListViewerManager_C_IsViewHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isDisp != nullptr)
		*isDisp = params.isDisp;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.FlipPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DirRight                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::FlipPage(bool DirRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.FlipPage");

	ABP_S3ItemListViewerManager_C_FlipPage_Params params;
	params.DirRight = DirRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CanUseItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Warn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3ItemListViewerManager_C::CanUseItem(bool Warn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CanUseItem");

	ABP_S3ItemListViewerManager_C_CanUseItem_Params params;
	params.Warn = Warn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MovedCursor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::MovedCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MovedCursor");

	ABP_S3ItemListViewerManager_C_MovedCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.FormatItemString
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS3ItemDataTable        S3ItemDataTable                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutString                      (Parm, OutParm, ZeroConstructor)

void ABP_S3ItemListViewerManager_C::FormatItemString(const struct FS3ItemDataTable& S3ItemDataTable, bool Show, struct FString* OutString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.FormatItemString");

	ABP_S3ItemListViewerManager_C_FormatItemString_Params params;
	params.S3ItemDataTable = S3ItemDataTable;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutString != nullptr)
		*OutString = params.OutString;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.TrySelectCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::TrySelectCategory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.TrySelectCategory");

	ABP_S3ItemListViewerManager_C_TrySelectCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CloseUseItemWindow
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::CloseUseItemWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CloseUseItemWindow");

	ABP_S3ItemListViewerManager_C_CloseUseItemWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.LaunchUseItemWindow
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuType>         InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::LaunchUseItemWindow(TEnumAsByte<EMenuType> InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.LaunchUseItemWindow");

	ABP_S3ItemListViewerManager_C_LaunchUseItemWindow_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetCurrentItemUseAction
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3ItemEffectTarget            Value_Target                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::GetCurrentItemUseAction(ES3ItemEffectTarget* Value_Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetCurrentItemUseAction");

	ABP_S3ItemListViewerManager_C_GetCurrentItemUseAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value_Target != nullptr)
		*Value_Target = params.Value_Target;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UseItem
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::UseItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UseItem");

	ABP_S3ItemListViewerManager_C_UseItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetLocalizedText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EUIText_Enum>      ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor)

void ABP_S3ItemListViewerManager_C::GetLocalizedText(TEnumAsByte<EUIText_Enum> ID, struct FString* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetLocalizedText");

	ABP_S3ItemListViewerManager_C_GetLocalizedText_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MakeLocalizedText
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::MakeLocalizedText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MakeLocalizedText");

	ABP_S3ItemListViewerManager_C_MakeLocalizedText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PlayCommonSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_InventorySE_List> ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::PlayCommonSound(TEnumAsByte<EN_InventorySE_List> ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PlayCommonSound");

	ABP_S3ItemListViewerManager_C_PlayCommonSound_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MakeDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::MakeDetail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MakeDetail");

	ABP_S3ItemListViewerManager_C_MakeDetail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SetVisibleDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            idx                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::SetVisibleDetail(int idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SetVisibleDetail");

	ABP_S3ItemListViewerManager_C_SetVisibleDetail_Params params;
	params.idx = idx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ResetSelect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::ResetSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ResetSelect");

	ABP_S3ItemListViewerManager_C_ResetSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.AddCurrentItemNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::AddCurrentItemNum(int Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.AddCurrentItemNum");

	ABP_S3ItemListViewerManager_C_AddCurrentItemNum_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ItemIndexText                  (Parm, OutParm)

void ABP_S3ItemListViewerManager_C::GetItem(int ItemIndex, struct FText* ItemIndexText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetItem");

	ABP_S3ItemListViewerManager_C_GetItem_Params params;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIndexText != nullptr)
		*ItemIndexText = params.ItemIndexText;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.AllDestroy
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::AllDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.AllDestroy");

	ABP_S3ItemListViewerManager_C_AllDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SetCursorMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           selectMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::SetCursorMode(bool selectMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SetCursorMode");

	ABP_S3ItemListViewerManager_C_SetCursorMode_Params params;
	params.selectMode = selectMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.RightCursor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::RightCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.RightCursor");

	ABP_S3ItemListViewerManager_C_RightCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.LeftCursor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::LeftCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.LeftCursor");

	ABP_S3ItemListViewerManager_C_LeftCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpCursor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::UpCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpCursor");

	ABP_S3ItemListViewerManager_C_UpCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.DownCursor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::DownCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.DownCursor");

	ABP_S3ItemListViewerManager_C_DownCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpdateDetailItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::UpdateDetailItemInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpdateDetailItemInfo");

	ABP_S3ItemListViewerManager_C_UpdateDetailItemInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.changeItemList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::changeItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.changeItemList");

	ABP_S3ItemListViewerManager_C_changeItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.RegisterForInput
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isOpe                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::RegisterForInput(bool isOpe)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.RegisterForInput");

	ABP_S3ItemListViewerManager_C_RegisterForInput_Params params;
	params.isOpe = isOpe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsNoScrollRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3ItemListViewerManager_C::IsNoScrollRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsNoScrollRange");

	ABP_S3ItemListViewerManager_C_IsNoScrollRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ChangeCursorPos
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::ChangeCursorPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ChangeCursorPos");

	ABP_S3ItemListViewerManager_C_ChangeCursorPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ChangeStatus
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::ChangeStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ChangeStatus");

	ABP_S3ItemListViewerManager_C_ChangeStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReturnStatus
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::ReturnStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReturnStatus");

	ABP_S3ItemListViewerManager_C_ReturnStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UserConstructionScript");

	ABP_S3ItemListViewerManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_28
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_SearchBottomButton_K2Node_InputActionEvent_28(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_28");

	ABP_S3ItemListViewerManager_C_InpActEvt_SearchBottomButton_K2Node_InputActionEvent_28_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_27
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_SearchRightButton_K2Node_InputActionEvent_27(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_27");

	ABP_S3ItemListViewerManager_C_InpActEvt_SearchRightButton_K2Node_InputActionEvent_27_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_Menu_K2Node_InputActionEvent_26
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_Menu_K2Node_InputActionEvent_26(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_Menu_K2Node_InputActionEvent_26");

	ABP_S3ItemListViewerManager_C_InpActEvt_Menu_K2Node_InputActionEvent_26_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_MenuPageLeft_K2Node_InputActionEvent_25
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_MenuPageLeft_K2Node_InputActionEvent_25(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_MenuPageLeft_K2Node_InputActionEvent_25");

	ABP_S3ItemListViewerManager_C_InpActEvt_MenuPageLeft_K2Node_InputActionEvent_25_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_MenuPageRight_K2Node_InputActionEvent_24
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_MenuPageRight_K2Node_InputActionEvent_24(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_MenuPageRight_K2Node_InputActionEvent_24");

	ABP_S3ItemListViewerManager_C_InpActEvt_MenuPageRight_K2Node_InputActionEvent_24_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_23
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_23(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_23");

	ABP_S3ItemListViewerManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_23_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_22(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_22");

	ABP_S3ItemListViewerManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_22_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_21(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_21");

	ABP_S3ItemListViewerManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_21_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_20(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_20");

	ABP_S3ItemListViewerManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_20_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_19(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_19");

	ABP_S3ItemListViewerManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_19_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_18");

	ABP_S3ItemListViewerManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_SearchRightSelect_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_17");

	ABP_S3ItemListViewerManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16");

	ABP_S3ItemListViewerManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_Alt_P_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_Alt_P_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_Alt_P_K2Node_InputKeyEvent_2");

	ABP_S3ItemListViewerManager_C_InpActEvt_Alt_P_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_ResetCamera_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_15");

	ABP_S3ItemListViewerManager_C_InpActEvt_ResetCamera_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReceiveBeginPlay");

	ABP_S3ItemListViewerManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReceiveTick");

	ABP_S3ItemListViewerManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReceiveEndPlay");

	ABP_S3ItemListViewerManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.DecideDetectAction");

	ABP_S3ItemListViewerManager_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_4
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_4(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_4");

	ABP_S3ItemListViewerManager_C_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_4_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_7
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_7(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_7");

	ABP_S3ItemListViewerManager_C_InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_7_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33");

	ABP_S3ItemListViewerManager_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CloseMenuSelf
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::CloseMenuSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CloseMenuSelf");

	ABP_S3ItemListViewerManager_C_CloseMenuSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpSelect
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::UpSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpSelect");

	ABP_S3ItemListViewerManager_C_UpSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.DownSelect
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::DownSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.DownSelect");

	ABP_S3ItemListViewerManager_C_DownSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.LeftSelect
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::LeftSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.LeftSelect");

	ABP_S3ItemListViewerManager_C_LeftSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.RightSelect
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::RightSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.RightSelect");

	ABP_S3ItemListViewerManager_C_RightSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.OnGatchaAnimEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::OnGatchaAnimEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.OnGatchaAnimEnd");

	ABP_S3ItemListViewerManager_C_OnGatchaAnimEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9");

	ABP_S3ItemListViewerManager_C_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.EndSetEcchange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoBuy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::EndSetEcchange(bool DoBuy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.EndSetEcchange");

	ABP_S3ItemListViewerManager_C_EndSetEcchange_Params params;
	params.DoBuy = DoBuy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.StartViewMode
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::StartViewMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.StartViewMode");

	ABP_S3ItemListViewerManager_C_StartViewMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PushL2R2_ViewMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::PushL2R2_ViewMode(float InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PushL2R2_ViewMode");

	ABP_S3ItemListViewerManager_C_PushL2R2_ViewMode_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_1");

	ABP_S3ItemListViewerManager_C_InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_3
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_3(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_3");

	ABP_S3ItemListViewerManager_C_InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_3_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.EnterViewModeInternal
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::EnterViewModeInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.EnterViewModeInternal");

	ABP_S3ItemListViewerManager_C_EnterViewModeInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.Private_SelectCategoryVert
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Up                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::Private_SelectCategoryVert(bool Up)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.Private_SelectCategoryVert");

	ABP_S3ItemListViewerManager_C_Private_SelectCategoryVert_Params params;
	params.Up = Up;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CloseReserve
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::CloseReserve()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CloseReserve");

	ABP_S3ItemListViewerManager_C_CloseReserve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PermitHelpOnInit
// (BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::PermitHelpOnInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PermitHelpOnInit");

	ABP_S3ItemListViewerManager_C_PermitHelpOnInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PushButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::PushButton(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PushButton");

	ABP_S3ItemListViewerManager_C_PushButton_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ExecuteUbergraph_BP_S3ItemListViewerManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::ExecuteUbergraph_BP_S3ItemListViewerManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ExecuteUbergraph_BP_S3ItemListViewerManager");

	ABP_S3ItemListViewerManager_C_ExecuteUbergraph_BP_S3ItemListViewerManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ED_FinishInit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::ED_FinishInit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ED_FinishInit__DelegateSignature");

	ABP_S3ItemListViewerManager_C_ED_FinishInit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ED_DestroyManager__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::ED_DestroyManager__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ED_DestroyManager__DelegateSignature");

	ABP_S3ItemListViewerManager_C_ED_DestroyManager__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ED_shopEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_S3ItemListViewerManager_C::ED_shopEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ED_shopEnd__DelegateSignature");

	ABP_S3ItemListViewerManager_C_ED_shopEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
