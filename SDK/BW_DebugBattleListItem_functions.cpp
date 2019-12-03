
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

// Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.SetFocusToButton
// (NetRequest, Exec, Native, Event, NetResponse, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBW_DebugBattleListItem_C::SetFocusToButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.SetFocusToButton");

	UBW_DebugBattleListItem_C_SetFocusToButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.Construct
// (Net, NetRequest, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBW_DebugBattleListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.Construct");

	UBW_DebugBattleListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (Net, NetRequest, Event, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBW_DebugBattleListItem_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugBattleListItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.OnAddedToFocusPath
// (NetReliable, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UBW_DebugBattleListItem_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.OnAddedToFocusPath");

	UBW_DebugBattleListItem_C_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.ExecuteUbergraph_BW_DebugBattleListItem
// (Net, NetRequest, NetResponse, Static, MulticastDelegate, Delegate, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleListItem_C::STATIC_ExecuteUbergraph_BW_DebugBattleListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.ExecuteUbergraph_BW_DebugBattleListItem");

	UBW_DebugBattleListItem_C_ExecuteUbergraph_BW_DebugBattleListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListItem.BW_DebugBattleListItem_C.OnFocused__DelegateSignature
// (Exec, NetResponse, NetMulticast, Public, Private, Protected, NetClient, Const)
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
// (Exec, NetResponse, NetMulticast, Public, Private, Protected, NetClient, Const)

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
