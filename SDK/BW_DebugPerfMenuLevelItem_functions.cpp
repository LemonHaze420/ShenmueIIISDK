
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

// Function BW_DebugPerfMenuLevelItem.BW_DebugPerfMenuLevelItem_C.SetFocusToButton
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_DebugPerfMenuLevelItem_C::SetFocusToButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugPerfMenuLevelItem.BW_DebugPerfMenuLevelItem_C.SetFocusToButton");

	UBW_DebugPerfMenuLevelItem_C_SetFocusToButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugPerfMenuLevelItem.BW_DebugPerfMenuLevelItem_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UBW_DebugPerfMenuLevelItem_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugPerfMenuLevelItem.BW_DebugPerfMenuLevelItem_C.OnAddedToFocusPath");

	UBW_DebugPerfMenuLevelItem_C_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugPerfMenuLevelItem.BW_DebugPerfMenuLevelItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBW_DebugPerfMenuLevelItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugPerfMenuLevelItem.BW_DebugPerfMenuLevelItem_C.Construct");

	UBW_DebugPerfMenuLevelItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugPerfMenuLevelItem.BW_DebugPerfMenuLevelItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugPerfMenuLevelItem_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugPerfMenuLevelItem.BW_DebugPerfMenuLevelItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugPerfMenuLevelItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugPerfMenuLevelItem.BW_DebugPerfMenuLevelItem_C.ExecuteUbergraph_BW_DebugPerfMenuLevelItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugPerfMenuLevelItem_C::ExecuteUbergraph_BW_DebugPerfMenuLevelItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugPerfMenuLevelItem.BW_DebugPerfMenuLevelItem_C.ExecuteUbergraph_BW_DebugPerfMenuLevelItem");

	UBW_DebugPerfMenuLevelItem_C_ExecuteUbergraph_BW_DebugPerfMenuLevelItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugPerfMenuLevelItem.BW_DebugPerfMenuLevelItem_C.OnFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3Button*               Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_DebugPerfMenuLevelItem_C::OnFocused__DelegateSignature(class US3Button* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugPerfMenuLevelItem.BW_DebugPerfMenuLevelItem_C.OnFocused__DelegateSignature");

	UBW_DebugPerfMenuLevelItem_C_OnFocused__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugPerfMenuLevelItem.BW_DebugPerfMenuLevelItem_C.OnLevelClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelStreaming*         Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugPerfMenuLevelItem_C::OnLevelClicked__DelegateSignature(class ULevelStreaming* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugPerfMenuLevelItem.BW_DebugPerfMenuLevelItem_C.OnLevelClicked__DelegateSignature");

	UBW_DebugPerfMenuLevelItem_C_OnLevelClicked__DelegateSignature_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
