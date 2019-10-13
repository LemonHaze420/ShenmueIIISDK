
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

// Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.SetFocusToButton
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_DebugBattleListItem_C::SetFocusToButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.SetFocusToButton");

	UBW_DebugBattleListItem_C_SetFocusToButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBW_DebugBattleListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.Construct");

	UBW_DebugBattleListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleListItem_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugBattleListItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UBW_DebugBattleListItem_C::OnAddedToFocusPath(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.OnAddedToFocusPath");

	UBW_DebugBattleListItem_C_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.ExecuteUbergraph_BW_DebugBattleListItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleListItem_C::ExecuteUbergraph_BW_DebugBattleListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.ExecuteUbergraph_BW_DebugBattleListItem");

	UBW_DebugBattleListItem_C_ExecuteUbergraph_BW_DebugBattleListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.OnFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3Button*               Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_DebugBattleListItem_C::OnFocused__DelegateSignature(class US3Button* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.OnFocused__DelegateSignature");

	UBW_DebugBattleListItem_C_OnFocused__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.OnStartBattle__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBW_DebugBattleListItem_C::OnStartBattle__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.OnStartBattle__DelegateSignature");

	UBW_DebugBattleListItem_C_OnStartBattle__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
