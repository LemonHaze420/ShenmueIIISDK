
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

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnClickedButtonQTEForceSuccess
// (Private, BlueprintCallable, BlueprintEvent)

void UBW_DebugCutsceneList_C::OnClickedButtonQTEForceSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnClickedButtonQTEForceSuccess");

	UBW_DebugCutsceneList_C_OnClickedButtonQTEForceSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnCheckStateChangedQTEForceSuccess
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugCutsceneList_C::OnCheckStateChangedQTEForceSuccess(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnCheckStateChangedQTEForceSuccess");

	UBW_DebugCutsceneList_C_OnCheckStateChangedQTEForceSuccess_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.InitializeForQTEForceSuccess
// (Protected, BlueprintCallable, BlueprintEvent)

void UBW_DebugCutsceneList_C::InitializeForQTEForceSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.InitializeForQTEForceSuccess");

	UBW_DebugCutsceneList_C_InitializeForQTEForceSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.SearchLastSelectedDebugMenuCutsceneItem
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBW_DebugCutsceneListItem_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBW_DebugCutsceneListItem_C* UBW_DebugCutsceneList_C::SearchLastSelectedDebugMenuCutsceneItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.SearchLastSelectedDebugMenuCutsceneItem");

	UBW_DebugCutsceneList_C_SearchLastSelectedDebugMenuCutsceneItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnClickedButtonSwitchSort
// (Private, BlueprintCallable, BlueprintEvent)

void UBW_DebugCutsceneList_C::OnClickedButtonSwitchSort()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnClickedButtonSwitchSort");

	UBW_DebugCutsceneList_C_OnClickedButtonSwitchSort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnCheckStateChangedSwitchSort
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugCutsceneList_C::OnCheckStateChangedSwitchSort(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnCheckStateChangedSwitchSort");

	UBW_DebugCutsceneList_C_OnCheckStateChangedSwitchSort_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.ConvertCutsceneIDForIDSort
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InCutsceneID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 ConvertedCutsceneID            (Parm, OutParm, ZeroConstructor)

void UBW_DebugCutsceneList_C::ConvertCutsceneIDForIDSort(const struct FString& InCutsceneID, struct FString* ConvertedCutsceneID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.ConvertCutsceneIDForIDSort");

	UBW_DebugCutsceneList_C_ConvertCutsceneIDForIDSort_Params params;
	params.InCutsceneID = InCutsceneID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConvertedCutsceneID != nullptr)
		*ConvertedCutsceneID = params.ConvertedCutsceneID;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.InitializeForIDSort
// (Protected, BlueprintCallable, BlueprintEvent)

void UBW_DebugCutsceneList_C::InitializeForIDSort()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.InitializeForIDSort");

	UBW_DebugCutsceneList_C_InitializeForIDSort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.CheckGotoCategory
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            NewIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBW_DebugCutsceneList_C::CheckGotoCategory(int NewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.CheckGotoCategory");

	UBW_DebugCutsceneList_C_CheckGotoCategory_Params params;
	params.NewIndex = NewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.UpdateFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_DebugCutsceneList_C::UpdateFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.UpdateFocus");

	UBW_DebugCutsceneList_C_UpdateFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBW_DebugCutsceneList_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnKeyDown");

	UBW_DebugCutsceneList_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.SetFocusToCategory
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_DebugCutsceneList_C::SetFocusToCategory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.SetFocusToCategory");

	UBW_DebugCutsceneList_C_SetFocusToCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.SetFocusToItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugCutsceneList_C::SetFocusToItem(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.SetFocusToItem");

	UBW_DebugCutsceneList_C_SetFocusToItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBW_DebugCutsceneList_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnPreviewKeyDown");

	UBW_DebugCutsceneList_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.UpdateCutsceneList
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_DebugCutsceneList_C::UpdateCutsceneList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.UpdateCutsceneList");

	UBW_DebugCutsceneList_C_UpdateCutsceneList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.BuildCutsceneList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBW_DebugCutsceneList_C::BuildCutsceneList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.BuildCutsceneList");

	UBW_DebugCutsceneList_C_BuildCutsceneList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBW_DebugCutsceneList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.Construct");

	UBW_DebugCutsceneList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.EventOnCategoryChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugCutsceneList_C::EventOnCategoryChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.EventOnCategoryChanged");

	UBW_DebugCutsceneList_C_EventOnCategoryChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnClickedButtonUseAnother
// (BlueprintCallable, BlueprintEvent)

void UBW_DebugCutsceneList_C::OnClickedButtonUseAnother()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnClickedButtonUseAnother");

	UBW_DebugCutsceneList_C_OnClickedButtonUseAnother_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnCheckStateChangedUseAnother
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugCutsceneList_C::OnCheckStateChangedUseAnother(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnCheckStateChangedUseAnother");

	UBW_DebugCutsceneList_C_OnCheckStateChangedUseAnother_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.SetupAnotherSkeletalMesh
// (BlueprintCallable, BlueprintEvent)

void UBW_DebugCutsceneList_C::SetupAnotherSkeletalMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.SetupAnotherSkeletalMesh");

	UBW_DebugCutsceneList_C_SetupAnotherSkeletalMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnClickedButtonPlayLastSelected
// (BlueprintCallable, BlueprintEvent)

void UBW_DebugCutsceneList_C::OnClickedButtonPlayLastSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnClickedButtonPlayLastSelected");

	UBW_DebugCutsceneList_C_OnClickedButtonPlayLastSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.ExecuteUbergraph_BW_DebugCutsceneList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugCutsceneList_C::ExecuteUbergraph_BW_DebugCutsceneList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.ExecuteUbergraph_BW_DebugCutsceneList");

	UBW_DebugCutsceneList_C_ExecuteUbergraph_BW_DebugCutsceneList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
