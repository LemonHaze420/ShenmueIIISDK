
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

// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.StartAC
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBW_DebugAutoConversationItem_C::StartAC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.StartAC");

	UBW_DebugAutoConversationItem_C_StartAC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.SetFocusToButton
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_DebugAutoConversationItem_C::SetFocusToButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.SetFocusToButton");

	UBW_DebugAutoConversationItem_C_SetFocusToButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.GetCutsceneListLabel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBW_DebugAutoConversationItem_C::GetCutsceneListLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.GetCutsceneListLabel");

	UBW_DebugAutoConversationItem_C_GetCutsceneListLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.Get_Description_Text
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_DebugAutoConversationItem_C::Get_Description_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.Get_Description_Text");

	UBW_DebugAutoConversationItem_C_Get_Description_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.Get_MainButtonLabel_Text
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBW_DebugAutoConversationItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.Construct");

	UBW_DebugAutoConversationItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugAutoConversationItem_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugAutoConversationItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.ExecuteUbergraph_BW_DebugAutoConversationItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugAutoConversationItem_C::ExecuteUbergraph_BW_DebugAutoConversationItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.ExecuteUbergraph_BW_DebugAutoConversationItem");

	UBW_DebugAutoConversationItem_C_ExecuteUbergraph_BW_DebugAutoConversationItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
