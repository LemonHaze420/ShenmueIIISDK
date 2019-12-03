
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

// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetPriority
// (Net, NetRequest, Exec, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
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
// (NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_S3ItemListViewerManager_C::STATIC_GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetDetectAction");

	ABP_S3ItemListViewerManager_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CheckTrialVersion
// (Net, Event, NetResponse, Static, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)

void ABP_S3ItemListViewerManager_C::STATIC_CheckTrialVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CheckTrialVersion");

	ABP_S3ItemListViewerManager_C_CheckTrialVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsVisibleRStickOnlyViewMode
// (Native, NetResponse, Static, NetMulticast, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3ItemListMenuType            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3ItemListViewerManager_C::STATIC_IsVisibleRStickOnlyViewMode(ES3ItemListMenuType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsVisibleRStickOnlyViewMode");

	ABP_S3ItemListViewerManager_C_IsVisibleRStickOnlyViewMode_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InitializeCategories
// (NetReliable, NetResponse, Static, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_S3ItemListViewerManager_C::STATIC_InitializeCategories()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InitializeCategories");

	ABP_S3ItemListViewerManager_C_InitializeCategories_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SetSelectMenuTypeList
// (NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3ItemListViewerManager_C::SetSelectMenuTypeList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SetSelectMenuTypeList");

	ABP_S3ItemListViewerManager_C_SetSelectMenuTypeList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsOnExchangeCategory
// (NetRequest, Exec, Event, NetResponse, Static, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3ItemListViewerManager_C::STATIC_IsOnExchangeCategory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsOnExchangeCategory");

	ABP_S3ItemListViewerManager_C_IsOnExchangeCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpdateSkillDisplay
// (Net, NetRequest, Exec, Native, Static, MulticastDelegate, Public, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_S3ItemListViewerManager_C::STATIC_UpdateSkillDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpdateSkillDisplay");

	ABP_S3ItemListViewerManager_C_UpdateSkillDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.AddItemDataToList
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Delegate, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextTableIdx != nullptr)
		*NextTableIdx = params.NextTableIdx;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SimpleValueAdditiveSort
// (Exec, Native, Event, Static, NetMulticast, Public, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3ItemListMenuType            CategoryType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FItemListItemTable> itemList                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_S3ItemListViewerManager_C::STATIC_SimpleValueAdditiveSort(ES3ItemListMenuType CategoryType, TArray<struct FItemListItemTable>* itemList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SimpleValueAdditiveSort");

	ABP_S3ItemListViewerManager_C_SimpleValueAdditiveSort_Params params;
	params.CategoryType = CategoryType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (itemList != nullptr)
		*itemList = params.itemList;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SpaceOneItemPerRow
// (NetRequest, Exec, Event, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
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
// (Net, NetRequest, Event, NetResponse, Static, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ES3ItemListMenuType            InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3ItemListViewerManager_C::STATIC_IsSetMenu(ES3ItemListMenuType InputPin)
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
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FItemListItemTable> SortArray                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    IntArray                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           dsc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::STATIC_SortItemListByInt(TArray<int> IntArray, bool dsc, TArray<struct FItemListItemTable>* SortArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SortItemListByInt");

	ABP_S3ItemListViewerManager_C_SortItemListByInt_Params params;
	params.IntArray = IntArray;
	params.dsc = dsc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SortArray != nullptr)
		*SortArray = params.SortArray;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MoveContentsOfArray
// (Net, NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate)
// Parameters:
// TArray<struct FItemListItemTable> Sorce_Array                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FItemListItemTable> Temp_Array                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_S3ItemListViewerManager_C::STATIC_MoveContentsOfArray(TArray<struct FItemListItemTable>* Sorce_Array, TArray<struct FItemListItemTable>* Temp_Array)
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
// (Net, NetRequest, Exec, Event, Static, MulticastDelegate, Public, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_Inventory_CategoryType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EN_Inventory_CategoryType> ABP_S3ItemListViewerManager_C::STATIC_GetDescriptionType(int Index)
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
// (Net, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// bool                           TryTransit                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ABP_S3ItemListViewerManager_C::STATIC_AllowsViewModeAxisInput(bool* TryTransit)
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
// (NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3ItemListViewerManager_C::STATIC_UpdateCategoryTipsImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpdateCategoryTipsImage");

	ABP_S3ItemListViewerManager_C_UpdateCategoryTipsImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.NavigateSkillEditor
// (Net, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<Een_skill_key_type> Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::NavigateSkillEditor(TEnumAsByte<Een_skill_key_type> Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.NavigateSkillEditor");

	ABP_S3ItemListViewerManager_C_NavigateSkillEditor_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SetSkillWindow
// (Net, Native, Event, NetMulticast, MulticastDelegate, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EMenuType>         InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::SetSkillWindow(TEnumAsByte<EMenuType> InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SetSkillWindow");

	ABP_S3ItemListViewerManager_C_SetSkillWindow_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MakeFocusItemList
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate)
// Parameters:
// int                            ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::STATIC_MakeFocusItemList(int ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MakeFocusItemList");

	ABP_S3ItemListViewerManager_C_MakeFocusItemList_Params params;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PlaySound
// (Net, NetReliable, Exec, Native, NetMulticast, MulticastDelegate, Private, Protected, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USoundAtomCue*           Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::PlaySound(class USoundAtomCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PlaySound");

	ABP_S3ItemListViewerManager_C_PlaySound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.OpenToFoodItem
// (Net, Static, Public, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ItemId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::STATIC_OpenToFoodItem(int ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.OpenToFoodItem");

	ABP_S3ItemListViewerManager_C_OpenToFoodItem_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReleaseCursor
// (Net, NetReliable, NetRequest, Exec, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_S3ItemListViewerManager_C::ReleaseCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReleaseCursor");

	ABP_S3ItemListViewerManager_C_ReleaseCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsValidSetExchange
// (Exec, Native, NetMulticast, MulticastDelegate, Private, Protected, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::IsValidSetExchange(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsValidSetExchange");

	ABP_S3ItemListViewerManager_C_IsValidSetExchange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetIndex
// (Net, NetReliable, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport)
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
// (NetReliable, NetRequest, Exec, NetResponse, Protected, NetServer, BlueprintEvent, BlueprintPure)
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
// (NetReliable, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsDisp                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::STATIC_IsViewHelp(bool* IsDisp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsViewHelp");

	ABP_S3ItemListViewerManager_C_IsViewHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDisp != nullptr)
		*IsDisp = params.IsDisp;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.FlipPage
// (Net, NetRequest, Event, Static, NetMulticast, Public, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           DirRight                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::STATIC_FlipPage(bool DirRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.FlipPage");

	ABP_S3ItemListViewerManager_C_FlipPage_Params params;
	params.DirRight = DirRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CanUseItem
// (NetRequest, Exec, Event, NetResponse, Public, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (NetReliable, NetRequest, Exec, Static, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_S3ItemListViewerManager_C::STATIC_MovedCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MovedCursor");

	ABP_S3ItemListViewerManager_C_MovedCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.FormatItemString
// (Net, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (NetReliable, NetRequest, Exec, Event, Static, MulticastDelegate, Public, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_S3ItemListViewerManager_C::STATIC_TrySelectCategory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.TrySelectCategory");

	ABP_S3ItemListViewerManager_C_TrySelectCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CloseUseItemWindow
// (Net, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3ItemListViewerManager_C::CloseUseItemWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CloseUseItemWindow");

	ABP_S3ItemListViewerManager_C_CloseUseItemWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.LaunchUseItemWindow
// (Event, MulticastDelegate, Public, Protected, NetServer)
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
// (Net, Exec, Native, Event, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ES3ItemEffectTarget            Value_Target                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::GetCurrentItemUseAction(ES3ItemEffectTarget* Value_Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetCurrentItemUseAction");

	ABP_S3ItemListViewerManager_C_GetCurrentItemUseAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value_Target != nullptr)
		*Value_Target = params.Value_Target;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UseItem
// (Net, NetRequest, Exec, NetResponse, Static, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_S3ItemListViewerManager_C::STATIC_UseItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UseItem");

	ABP_S3ItemListViewerManager_C_UseItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.GetLocalizedText
// (NetReliable, Event, NetResponse, MulticastDelegate, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (NetReliable, Exec, Native, Event, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_S3ItemListViewerManager_C::MakeLocalizedText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MakeLocalizedText");

	ABP_S3ItemListViewerManager_C_MakeLocalizedText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PlayCommonSound
// (Exec, Native, MulticastDelegate, Public, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_InventorySE_List> ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::PlayCommonSound(TEnumAsByte<EN_InventorySE_List> ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PlayCommonSound");

	ABP_S3ItemListViewerManager_C_PlayCommonSound_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MakeDetail
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_S3ItemListViewerManager_C::STATIC_MakeDetail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.MakeDetail");

	ABP_S3ItemListViewerManager_C_MakeDetail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SetVisibleDetail
// (NetReliable, NetRequest, Native, Static, Public, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            idx                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::STATIC_SetVisibleDetail(int idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SetVisibleDetail");

	ABP_S3ItemListViewerManager_C_SetVisibleDetail_Params params;
	params.idx = idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ResetSelect
// (NetRequest, Event, NetResponse, MulticastDelegate, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_S3ItemListViewerManager_C::ResetSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ResetSelect");

	ABP_S3ItemListViewerManager_C_ResetSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.AddCurrentItemNum
// (Exec, NetResponse, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (Net, NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ItemIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ItemIndexText                  (Parm, OutParm)

void ABP_S3ItemListViewerManager_C::STATIC_GetItem(int ItemIndex, struct FText* ItemIndexText)
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
// (NetReliable, Exec, NetResponse, Static, NetMulticast, Public, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_S3ItemListViewerManager_C::STATIC_AllDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.AllDestroy");

	ABP_S3ItemListViewerManager_C_AllDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.SetCursorMode
// (Net, NetMulticast, MulticastDelegate, Delegate, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Public, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3ItemListViewerManager_C::STATIC_RightCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.RightCursor");

	ABP_S3ItemListViewerManager_C_RightCursor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.LeftCursor
// (Net, NetReliable, Static, Protected, NetServer, BlueprintEvent, BlueprintPure)

void ABP_S3ItemListViewerManager_C::STATIC_LeftCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.LeftCursor");

	ABP_S3ItemListViewerManager_C_LeftCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpCursor
// (NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Public, Private, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_S3ItemListViewerManager_C::STATIC_UpCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpCursor");

	ABP_S3ItemListViewerManager_C_UpCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.DownCursor
// (NetReliable, NetRequest, Exec, Event, NetResponse, Public, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3ItemListViewerManager_C::DownCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.DownCursor");

	ABP_S3ItemListViewerManager_C_DownCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpdateDetailItemInfo
// (NetReliable, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_S3ItemListViewerManager_C::STATIC_UpdateDetailItemInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpdateDetailItemInfo");

	ABP_S3ItemListViewerManager_C_UpdateDetailItemInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.changeItemList
// (Public, Private, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_S3ItemListViewerManager_C::changeItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.changeItemList");

	ABP_S3ItemListViewerManager_C_changeItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.RegisterForInput
// (Net, NetRequest, Exec, Event, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (Static, MulticastDelegate, Private, Protected, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3ItemListViewerManager_C::STATIC_IsNoScrollRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.IsNoScrollRange");

	ABP_S3ItemListViewerManager_C_IsNoScrollRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ChangeCursorPos
// (NetReliable, NetRequest, Native, NetResponse, Static, Delegate, NetServer)

void ABP_S3ItemListViewerManager_C::STATIC_ChangeCursorPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ChangeCursorPos");

	ABP_S3ItemListViewerManager_C_ChangeCursorPos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ChangeStatus
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate)

void ABP_S3ItemListViewerManager_C::STATIC_ChangeStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ChangeStatus");

	ABP_S3ItemListViewerManager_C_ChangeStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReturnStatus
// (Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate)

void ABP_S3ItemListViewerManager_C::STATIC_ReturnStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReturnStatus");

	ABP_S3ItemListViewerManager_C_ReturnStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UserConstructionScript
// (Net, Native, Event, NetMulticast, MulticastDelegate, BlueprintEvent, BlueprintPure)

void ABP_S3ItemListViewerManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UserConstructionScript");

	ABP_S3ItemListViewerManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_28
// (Net, NetReliable, NetRequest, Exec, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
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
// (NetReliable, NetRequest, Exec, Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_SearchRightButton_K2Node_InputActionEvent_27(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_27");

	ABP_S3ItemListViewerManager_C_InpActEvt_SearchRightButton_K2Node_InputActionEvent_27_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_Menu_K2Node_InputActionEvent_26
// (Exec, Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_Menu_K2Node_InputActionEvent_26(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_Menu_K2Node_InputActionEvent_26");

	ABP_S3ItemListViewerManager_C_InpActEvt_Menu_K2Node_InputActionEvent_26_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_MenuPageLeft_K2Node_InputActionEvent_25
// (Net, NetReliable, NetRequest, Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_MenuPageLeft_K2Node_InputActionEvent_25(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_MenuPageLeft_K2Node_InputActionEvent_25");

	ABP_S3ItemListViewerManager_C_InpActEvt_MenuPageLeft_K2Node_InputActionEvent_25_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_MenuPageRight_K2Node_InputActionEvent_24
// (NetReliable, NetRequest, Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_MenuPageRight_K2Node_InputActionEvent_24(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_MenuPageRight_K2Node_InputActionEvent_24");

	ABP_S3ItemListViewerManager_C_InpActEvt_MenuPageRight_K2Node_InputActionEvent_24_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_23
// (Net, NetRequest, Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_23(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_23");

	ABP_S3ItemListViewerManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_23_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_22
// (Net, NetRequest, Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_22(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_22");

	ABP_S3ItemListViewerManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_22_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_21
// (NetRequest, Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_21(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_21");

	ABP_S3ItemListViewerManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_21_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_20
// (Net, NetReliable, Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_20(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_20");

	ABP_S3ItemListViewerManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_20_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_19
// (NetReliable, Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_19(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_19");

	ABP_S3ItemListViewerManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_19_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_18
// (NetReliable, Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_18");

	ABP_S3ItemListViewerManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_17
// (Net, Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_SearchRightSelect_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_17");

	ABP_S3ItemListViewerManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16
// (Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16");

	ABP_S3ItemListViewerManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_Alt_P_K2Node_InputKeyEvent_2
// (NetReliable, NetRequest, Exec, Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_Alt_P_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_Alt_P_K2Node_InputKeyEvent_2");

	ABP_S3ItemListViewerManager_C_InpActEvt_Alt_P_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_15
// (Net, NetRequest, Exec, Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3ItemListViewerManager_C::InpActEvt_ResetCamera_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_15");

	ABP_S3ItemListViewerManager_C_InpActEvt_ResetCamera_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReceiveBeginPlay
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, Public, Protected, NetServer)

void ABP_S3ItemListViewerManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReceiveBeginPlay");

	ABP_S3ItemListViewerManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReceiveTick
// (NetRequest, Exec, Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReceiveTick");

	ABP_S3ItemListViewerManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReceiveEndPlay
// (Net, NetReliable, Exec, Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ReceiveEndPlay");

	ABP_S3ItemListViewerManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.DecideDetectAction
// (Net, NetReliable, Exec, Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.DecideDetectAction");

	ABP_S3ItemListViewerManager_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_4
// (NetReliable, Exec, Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_4(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_4");

	ABP_S3ItemListViewerManager_C_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_4_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_7
// (Net, Exec, Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_7(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_7");

	ABP_S3ItemListViewerManager_C_InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_7_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33
// (Exec, Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33");

	ABP_S3ItemListViewerManager_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CloseMenuSelf
// (Net, Exec, Event, NetResponse, NetMulticast, Public, Protected, NetServer)

void ABP_S3ItemListViewerManager_C::CloseMenuSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CloseMenuSelf");

	ABP_S3ItemListViewerManager_C_CloseMenuSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpSelect
// (Net, Exec, Event, NetResponse, NetMulticast, Public, Protected, NetServer)

void ABP_S3ItemListViewerManager_C::UpSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.UpSelect");

	ABP_S3ItemListViewerManager_C_UpSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.DownSelect
// (Exec, Event, NetResponse, NetMulticast, Public, Protected, NetServer)

void ABP_S3ItemListViewerManager_C::DownSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.DownSelect");

	ABP_S3ItemListViewerManager_C_DownSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.LeftSelect
// (Exec, Event, NetResponse, NetMulticast, Public, Protected, NetServer)

void ABP_S3ItemListViewerManager_C::LeftSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.LeftSelect");

	ABP_S3ItemListViewerManager_C_LeftSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.RightSelect
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, Public, Protected, NetServer)

void ABP_S3ItemListViewerManager_C::RightSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.RightSelect");

	ABP_S3ItemListViewerManager_C_RightSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.OnGatchaAnimEnd
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, Public, Protected, NetServer)

void ABP_S3ItemListViewerManager_C::OnGatchaAnimEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.OnGatchaAnimEnd");

	ABP_S3ItemListViewerManager_C_OnGatchaAnimEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9
// (NetRequest, Event, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
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
// (Net, NetReliable, Event, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
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
// (Net, NetReliable, Native, Event, NetResponse, NetMulticast, Public, Protected, NetServer)

void ABP_S3ItemListViewerManager_C::StartViewMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.StartViewMode");

	ABP_S3ItemListViewerManager_C_StartViewMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PushL2R2_ViewMode
// (NetReliable, Event, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
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
// (Net, Event, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
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
// (Net, Event, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
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
// (Net, Native, Event, NetResponse, NetMulticast, Public, Protected, NetServer)

void ABP_S3ItemListViewerManager_C::EnterViewModeInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.EnterViewModeInternal");

	ABP_S3ItemListViewerManager_C_EnterViewModeInternal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.Private_SelectCategoryVert
// (Event, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
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
// (Native, Event, NetResponse, NetMulticast, Public, Protected, NetServer)

void ABP_S3ItemListViewerManager_C::CloseReserve()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.CloseReserve");

	ABP_S3ItemListViewerManager_C_CloseReserve_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PermitHelpOnInit
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Public, Protected, NetServer)

void ABP_S3ItemListViewerManager_C::PermitHelpOnInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PermitHelpOnInit");

	ABP_S3ItemListViewerManager_C_PermitHelpOnInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PushButton
// (Net, NetReliable, NetRequest, Exec, Native, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3ItemListViewerManager_C::PushButton(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.PushButton");

	ABP_S3ItemListViewerManager_C_PushButton_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ExecuteUbergraph_BP_S3ItemListViewerManager
// (MulticastDelegate, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Net, Native, Event, NetMulticast, MulticastDelegate, BlueprintEvent, BlueprintPure)

void ABP_S3ItemListViewerManager_C::ED_FinishInit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ED_FinishInit__DelegateSignature");

	ABP_S3ItemListViewerManager_C_ED_FinishInit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ED_DestroyManager__DelegateSignature
// (Net, Native, Event, NetMulticast, MulticastDelegate, BlueprintEvent, BlueprintPure)

void ABP_S3ItemListViewerManager_C::ED_DestroyManager__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ED_DestroyManager__DelegateSignature");

	ABP_S3ItemListViewerManager_C_ED_DestroyManager__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ED_shopEnd__DelegateSignature
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void ABP_S3ItemListViewerManager_C::STATIC_ED_shopEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3ItemListViewerManager.BP_S3ItemListViewerManager_C.ED_shopEnd__DelegateSignature");

	ABP_S3ItemListViewerManager_C_ED_shopEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
