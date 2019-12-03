
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

// Function BW_DebugTalk.BW_DebugTalk_C.GetText_2
// (NetResponse, Public, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_DebugTalk_C::GetText_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTalk.BW_DebugTalk_C.GetText_2");

	UBW_DebugTalk_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugTalk.BW_DebugTalk_C.On_MenuAnchor_Script_GetMenuContent_1
// (Net, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UBW_DebugTalk_C::STATIC_On_MenuAnchor_Script_GetMenuContent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTalk.BW_DebugTalk_C.On_MenuAnchor_Script_GetMenuContent_1");

	UBW_DebugTalk_C_On_MenuAnchor_Script_GetMenuContent_1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugTalk.BW_DebugTalk_C.On_MenuAnchor_TextData_GetMenuContent_1
// (Net, NetRequest, Exec, NetResponse, MulticastDelegate, Private, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UBW_DebugTalk_C::On_MenuAnchor_TextData_GetMenuContent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTalk.BW_DebugTalk_C.On_MenuAnchor_TextData_GetMenuContent_1");

	UBW_DebugTalk_C_On_MenuAnchor_TextData_GetMenuContent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugTalk.BW_DebugTalk_C.GetText_1
// (Net, NetReliable, Exec, Native, Event, Public, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_DebugTalk_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTalk.BW_DebugTalk_C.GetText_1");

	UBW_DebugTalk_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugTalk.BW_DebugTalk_C.SetUserFocusByChildIndex
// (NetResponse, NetMulticast, MulticastDelegate, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugTalk_C::SetUserFocusByChildIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTalk.BW_DebugTalk_C.SetUserFocusByChildIndex");

	UBW_DebugTalk_C_SetUserFocusByChildIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTalk.BW_DebugTalk_C.ResetUserFocus
// (NetRequest, NetMulticast, Public, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBW_DebugTalk_C::ResetUserFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTalk.BW_DebugTalk_C.ResetUserFocus");

	UBW_DebugTalk_C_ResetUserFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTalk.BW_DebugTalk_C.OnPreviewKeyDown
// (NetRequest, NetResponse, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBW_DebugTalk_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTalk.BW_DebugTalk_C.OnPreviewKeyDown");

	UBW_DebugTalk_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugTalk.BW_DebugTalk_C.Construct
// (NetReliable, Exec, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugTalk_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTalk.BW_DebugTalk_C.Construct");

	UBW_DebugTalk_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTalk.BW_DebugTalk_C.BndEvt__S3Button_0_K2Node_ComponentBoundEvent_50_OnButtonPressedEvent__DelegateSignature
// (NetReliable, Exec, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugTalk_C::STATIC_BndEvt__S3Button_0_K2Node_ComponentBoundEvent_50_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTalk.BW_DebugTalk_C.BndEvt__S3Button_0_K2Node_ComponentBoundEvent_50_OnButtonPressedEvent__DelegateSignature");

	UBW_DebugTalk_C_BndEvt__S3Button_0_K2Node_ComponentBoundEvent_50_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTalk.BW_DebugTalk_C.BndEvt__MenuAnchor_TextData_K2Node_ComponentBoundEvent_10_OnMenuOpenChangedEvent__DelegateSignature
// (Exec, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugTalk_C::STATIC_BndEvt__MenuAnchor_TextData_K2Node_ComponentBoundEvent_10_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTalk.BW_DebugTalk_C.BndEvt__MenuAnchor_TextData_K2Node_ComponentBoundEvent_10_OnMenuOpenChangedEvent__DelegateSignature");

	UBW_DebugTalk_C_BndEvt__MenuAnchor_TextData_K2Node_ComponentBoundEvent_10_OnMenuOpenChangedEvent__DelegateSignature_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTalk.BW_DebugTalk_C.PreConstruct
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugTalk_C::STATIC_PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTalk.BW_DebugTalk_C.PreConstruct");

	UBW_DebugTalk_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTalk.BW_DebugTalk_C.BndEvt__Button_Script_K2Node_ComponentBoundEvent_95_OnButtonPressedEvent__DelegateSignature
// (Net, NetReliable, Exec, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugTalk_C::STATIC_BndEvt__Button_Script_K2Node_ComponentBoundEvent_95_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTalk.BW_DebugTalk_C.BndEvt__Button_Script_K2Node_ComponentBoundEvent_95_OnButtonPressedEvent__DelegateSignature");

	UBW_DebugTalk_C_BndEvt__Button_Script_K2Node_ComponentBoundEvent_95_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTalk.BW_DebugTalk_C.BndEvt__MenuAnchor_Script_K2Node_ComponentBoundEvent_111_OnMenuOpenChangedEvent__DelegateSignature
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugTalk_C::STATIC_BndEvt__MenuAnchor_Script_K2Node_ComponentBoundEvent_111_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTalk.BW_DebugTalk_C.BndEvt__MenuAnchor_Script_K2Node_ComponentBoundEvent_111_OnMenuOpenChangedEvent__DelegateSignature");

	UBW_DebugTalk_C_BndEvt__MenuAnchor_Script_K2Node_ComponentBoundEvent_111_OnMenuOpenChangedEvent__DelegateSignature_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTalk.BW_DebugTalk_C.ExecuteUbergraph_BW_DebugTalk
// (Net, NetRequest, Exec, Native, NetResponse, Static, Public, HasOutParms, DLLImport, BlueprintEvent)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugTalk_C::STATIC_ExecuteUbergraph_BW_DebugTalk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTalk.BW_DebugTalk_C.ExecuteUbergraph_BW_DebugTalk");

	UBW_DebugTalk_C_ExecuteUbergraph_BW_DebugTalk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
