
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
// (Net, NetRequest, Exec, Native, Event, Static, Public, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugAutoConversationList_C::STATIC_InitLastButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.InitLastButton");

	UBW_DebugAutoConversationList_C_InitLastButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.CheckGotoCategory
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintEvent, BlueprintPure)
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
// (NetRequest, Exec, Native, NetResponse, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugAutoConversationList_C::UpdateFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.UpdateFocus");

	UBW_DebugAutoConversationList_C_UpdateFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.OnKeyDown
// (NetReliable, Event, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
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
// (Net, NetReliable, Exec, Event, MulticastDelegate, Private, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBW_DebugAutoConversationList_C::SetFocusToCategory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.SetFocusToCategory");

	UBW_DebugAutoConversationList_C_SetFocusToCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.SetFocusToItem
// (Event, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugAutoConversationList_C::STATIC_SetFocusToItem(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.SetFocusToItem");

	UBW_DebugAutoConversationList_C_SetFocusToItem_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.OnPreviewKeyDown
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBW_DebugAutoConversationList_C::STATIC_OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.OnPreviewKeyDown");

	UBW_DebugAutoConversationList_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.UpdateCutsceneList
// (Native, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)

void UBW_DebugAutoConversationList_C::STATIC_UpdateCutsceneList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.UpdateCutsceneList");

	UBW_DebugAutoConversationList_C_UpdateCutsceneList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.BuildCutsceneList
// (Exec, Native, Event, Static, NetMulticast, Public, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBW_DebugAutoConversationList_C::STATIC_BuildCutsceneList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.BuildCutsceneList");

	UBW_DebugAutoConversationList_C_BuildCutsceneList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.Construct
// (Net, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugAutoConversationList_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.Construct");

	UBW_DebugAutoConversationList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.BndEvt__CheckBoxUseAnother_K2Node_ComponentBoundEvent_159_OnCheckBoxComponentStateChanged__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugAutoConversationList_C::BndEvt__CheckBoxUseAnother_K2Node_ComponentBoundEvent_159_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.BndEvt__CheckBoxUseAnother_K2Node_ComponentBoundEvent_159_OnCheckBoxComponentStateChanged__DelegateSignature");

	UBW_DebugAutoConversationList_C_BndEvt__CheckBoxUseAnother_K2Node_ComponentBoundEvent_159_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.BndEvt__LastButton_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugAutoConversationList_C::STATIC_BndEvt__LastButton_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.BndEvt__LastButton_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugAutoConversationList_C_BndEvt__LastButton_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.BndEvt__S3Button_2_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugAutoConversationList_C::STATIC_BndEvt__S3Button_2_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.BndEvt__S3Button_2_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugAutoConversationList_C_BndEvt__S3Button_2_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.ExecuteUbergraph_BW_DebugAutoConversationList
// (Exec, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugAutoConversationList_C::STATIC_ExecuteUbergraph_BW_DebugAutoConversationList(int EntryPoint)
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
