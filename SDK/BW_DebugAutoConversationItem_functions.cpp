
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

// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.StartAC
// (Net, Exec, Native, Event, Static, NetMulticast, Private, Protected, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugAutoConversationItem_C::STATIC_StartAC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.StartAC");

	UBW_DebugAutoConversationItem_C_StartAC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.SetFocusToButton
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UBW_DebugAutoConversationItem_C::STATIC_SetFocusToButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.SetFocusToButton");

	UBW_DebugAutoConversationItem_C_SetFocusToButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.GetCutsceneListLabel
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBW_DebugAutoConversationItem_C::GetCutsceneListLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.GetCutsceneListLabel");

	UBW_DebugAutoConversationItem_C_GetCutsceneListLabel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.Get_Description_Text
// (Net, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_DebugAutoConversationItem_C::Get_Description_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.Get_Description_Text");

	UBW_DebugAutoConversationItem_C_Get_Description_Text_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.Get_MainButtonLabel_Text
// (Exec, Event, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_DebugAutoConversationItem_C::Get_MainButtonLabel_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.Get_MainButtonLabel_Text");

	UBW_DebugAutoConversationItem_C_Get_MainButtonLabel_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.Construct
// (Net, NetReliable, NetRequest, Static, NetMulticast, Public, Private, Delegate, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBW_DebugAutoConversationItem_C::STATIC_Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.Construct");

	UBW_DebugAutoConversationItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (NetReliable, NetRequest, Static, NetMulticast, Public, Private, Delegate, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBW_DebugAutoConversationItem_C::STATIC_BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugAutoConversationItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.ExecuteUbergraph_BW_DebugAutoConversationItem
// (Net, NetRequest, Exec, Native, Event, Public, Protected, Delegate, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugAutoConversationItem_C::ExecuteUbergraph_BW_DebugAutoConversationItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.ExecuteUbergraph_BW_DebugAutoConversationItem");

	UBW_DebugAutoConversationItem_C_ExecuteUbergraph_BW_DebugAutoConversationItem_Params params;
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
