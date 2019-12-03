
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

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnClickedButtonQTEForceSuccess
// (Net, NetRequest, Exec, MulticastDelegate, Public, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugCutsceneList_C::OnClickedButtonQTEForceSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnClickedButtonQTEForceSuccess");

	UBW_DebugCutsceneList_C_OnClickedButtonQTEForceSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnCheckStateChangedQTEForceSuccess
// (NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugCutsceneList_C::STATIC_OnCheckStateChangedQTEForceSuccess(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnCheckStateChangedQTEForceSuccess");

	UBW_DebugCutsceneList_C_OnCheckStateChangedQTEForceSuccess_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.InitializeForQTEForceSuccess
// (Exec, NetResponse, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBW_DebugCutsceneList_C::InitializeForQTEForceSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.InitializeForQTEForceSuccess");

	UBW_DebugCutsceneList_C_InitializeForQTEForceSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.SearchLastSelectedDebugMenuCutsceneItem
// (NetReliable, NetRequest, Static, MulticastDelegate, Public, Private, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBW_DebugCutsceneListItem_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBW_DebugCutsceneListItem_C* UBW_DebugCutsceneList_C::STATIC_SearchLastSelectedDebugMenuCutsceneItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.SearchLastSelectedDebugMenuCutsceneItem");

	UBW_DebugCutsceneList_C_SearchLastSelectedDebugMenuCutsceneItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnClickedButtonSwitchSort
// (Net, MulticastDelegate, Public, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugCutsceneList_C::OnClickedButtonSwitchSort()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnClickedButtonSwitchSort");

	UBW_DebugCutsceneList_C_OnClickedButtonSwitchSort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnCheckStateChangedSwitchSort
// (NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugCutsceneList_C::OnCheckStateChangedSwitchSort(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnCheckStateChangedSwitchSort");

	UBW_DebugCutsceneList_C_OnCheckStateChangedSwitchSort_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.ConvertCutsceneIDForIDSort
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
// (Net, NetRequest, Event, NetMulticast, Public, HasOutParms, DLLImport, BlueprintEvent)

void UBW_DebugCutsceneList_C::InitializeForIDSort()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.InitializeForIDSort");

	UBW_DebugCutsceneList_C_InitializeForIDSort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.CheckGotoCategory
// (NetRequest, Exec, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            NewIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBW_DebugCutsceneList_C::STATIC_CheckGotoCategory(int NewIndex)
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
// (NetReliable, NetRequest, Exec, Native, NetResponse, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugCutsceneList_C::UpdateFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.UpdateFocus");

	UBW_DebugCutsceneList_C_UpdateFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnKeyDown
// (Net, NetReliable, Native, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBW_DebugCutsceneList_C::STATIC_OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnKeyDown");

	UBW_DebugCutsceneList_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.SetFocusToCategory
// (Net, Exec, Native, Event, Static, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBW_DebugCutsceneList_C::STATIC_SetFocusToCategory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.SetFocusToCategory");

	UBW_DebugCutsceneList_C_SetFocusToCategory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.SetFocusToItem
// (Event, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
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
// (Exec, Native, Event, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBW_DebugCutsceneList_C::STATIC_OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnPreviewKeyDown");

	UBW_DebugCutsceneList_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.UpdateCutsceneList
// (Net, NetRequest, Event, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void UBW_DebugCutsceneList_C::STATIC_UpdateCutsceneList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.UpdateCutsceneList");

	UBW_DebugCutsceneList_C_UpdateCutsceneList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.BuildCutsceneList
// (Net, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugCutsceneList_C::BuildCutsceneList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.BuildCutsceneList");

	UBW_DebugCutsceneList_C_BuildCutsceneList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.Construct
// (NetReliable, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugCutsceneList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.Construct");

	UBW_DebugCutsceneList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.EventOnCategoryChanged
// (Net, Exec, Static, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugCutsceneList_C::STATIC_EventOnCategoryChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
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
// (Net, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugCutsceneList_C::OnClickedButtonUseAnother()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnClickedButtonUseAnother");

	UBW_DebugCutsceneList_C_OnClickedButtonUseAnother_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnCheckStateChangedUseAnother
// (Net, Exec, Event, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
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
// (NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugCutsceneList_C::SetupAnotherSkeletalMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.SetupAnotherSkeletalMesh");

	UBW_DebugCutsceneList_C_SetupAnotherSkeletalMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnClickedButtonPlayLastSelected
// (NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugCutsceneList_C::OnClickedButtonPlayLastSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnClickedButtonPlayLastSelected");

	UBW_DebugCutsceneList_C_OnClickedButtonPlayLastSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.ExecuteUbergraph_BW_DebugCutsceneList
// (Net, NetReliable, Event, MulticastDelegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
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
