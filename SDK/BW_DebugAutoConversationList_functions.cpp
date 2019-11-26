
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

// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.InitLastButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBW_DebugAutoConversationList_C::InitLastButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.InitLastButton");

	UBW_DebugAutoConversationList_C_InitLastButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.CheckGotoCategory
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            NewIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBW_DebugAutoConversationList_C::CheckGotoCategory(int NewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.CheckGotoCategory");

	UBW_DebugAutoConversationList_C_CheckGotoCategory_Params params;
	params.NewIndex = NewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.UpdateFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_DebugAutoConversationList_C::UpdateFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.UpdateFocus");

	UBW_DebugAutoConversationList_C_UpdateFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBW_DebugAutoConversationList_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.OnKeyDown");

	UBW_DebugAutoConversationList_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.SetFocusToCategory
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_DebugAutoConversationList_C::SetFocusToCategory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.SetFocusToCategory");

	UBW_DebugAutoConversationList_C_SetFocusToCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.SetFocusToItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugAutoConversationList_C::SetFocusToItem(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.SetFocusToItem");

	UBW_DebugAutoConversationList_C_SetFocusToItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBW_DebugAutoConversationList_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.OnPreviewKeyDown");

	UBW_DebugAutoConversationList_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.UpdateCutsceneList
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_DebugAutoConversationList_C::UpdateCutsceneList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.UpdateCutsceneList");

	UBW_DebugAutoConversationList_C_UpdateCutsceneList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.BuildCutsceneList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBW_DebugAutoConversationList_C::BuildCutsceneList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.BuildCutsceneList");

	UBW_DebugAutoConversationList_C_BuildCutsceneList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBW_DebugAutoConversationList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.Construct");

	UBW_DebugAutoConversationList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.BndEvt__CheckBoxUseAnother_K2Node_ComponentBoundEvent_159_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugAutoConversationList_C::BndEvt__CheckBoxUseAnother_K2Node_ComponentBoundEvent_159_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.BndEvt__CheckBoxUseAnother_K2Node_ComponentBoundEvent_159_OnCheckBoxComponentStateChanged__DelegateSignature");

	UBW_DebugAutoConversationList_C_BndEvt__CheckBoxUseAnother_K2Node_ComponentBoundEvent_159_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.BndEvt__LastButton_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugAutoConversationList_C::BndEvt__LastButton_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.BndEvt__LastButton_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugAutoConversationList_C_BndEvt__LastButton_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.BndEvt__S3Button_2_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugAutoConversationList_C::BndEvt__S3Button_2_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.BndEvt__S3Button_2_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugAutoConversationList_C_BndEvt__S3Button_2_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.ExecuteUbergraph_BW_DebugAutoConversationList
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugAutoConversationList_C::ExecuteUbergraph_BW_DebugAutoConversationList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.ExecuteUbergraph_BW_DebugAutoConversationList");

	UBW_DebugAutoConversationList_C_ExecuteUbergraph_BW_DebugAutoConversationList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
