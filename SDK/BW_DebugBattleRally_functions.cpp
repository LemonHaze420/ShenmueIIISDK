
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

// Function BW_DebugBattleRally.BW_DebugBattleRally_C.MakeRewardNameText
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS3BRallyAwardStatus    Data                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBW_DebugBattleRally_C::MakeRewardNameText(const struct FS3BRallyAwardStatus& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleRally.BW_DebugBattleRally_C.MakeRewardNameText");

	UBW_DebugBattleRally_C_MakeRewardNameText_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugBattleRally.BW_DebugBattleRally_C.ListUpRewards
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBW_DebugBattleRally_C::ListUpRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleRally.BW_DebugBattleRally_C.ListUpRewards");

	UBW_DebugBattleRally_C_ListUpRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleRally.BW_DebugBattleRally_C.BuildMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_DebugBattleRally_C::BuildMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleRally.BW_DebugBattleRally_C.BuildMenu");

	UBW_DebugBattleRally_C_BuildMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleRally.BW_DebugBattleRally_C.SetInitialFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_DebugBattleRally_C::SetInitialFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleRally.BW_DebugBattleRally_C.SetInitialFocus");

	UBW_DebugBattleRally_C_SetInitialFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleRally.BW_DebugBattleRally_C.OnUserToggledAward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBW_SimpleDebugToggle_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ECheckBoxState                 NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleRally_C::OnUserToggledAward(class UBW_SimpleDebugToggle_C* Widget, ECheckBoxState NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleRally.BW_DebugBattleRally_C.OnUserToggledAward");

	UBW_DebugBattleRally_C_OnUserToggledAward_Params params;
	params.Widget = Widget;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleRally.BW_DebugBattleRally_C.OnUserChangeAwardCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBW_IntegerProperty_C*   Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_DebugBattleRally_C::OnUserChangeAwardCount(int Value, class UBW_IntegerProperty_C* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleRally.BW_DebugBattleRally_C.OnUserChangeAwardCount");

	UBW_DebugBattleRally_C_OnUserChangeAwardCount_Params params;
	params.Value = Value;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleRally.BW_DebugBattleRally_C.BndEvt__S3Button_58_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleRally_C::BndEvt__S3Button_58_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleRally.BW_DebugBattleRally_C.BndEvt__S3Button_58_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugBattleRally_C_BndEvt__S3Button_58_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleRally.BW_DebugBattleRally_C.BndEvt__Button_Save_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleRally_C::BndEvt__Button_Save_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleRally.BW_DebugBattleRally_C.BndEvt__Button_Save_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugBattleRally_C_BndEvt__Button_Save_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleRally.BW_DebugBattleRally_C.OnScrollBoxItemFocused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_DebugBattleRally_C::OnScrollBoxItemFocused(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleRally.BW_DebugBattleRally_C.OnScrollBoxItemFocused");

	UBW_DebugBattleRally_C_OnScrollBoxItemFocused_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleRally.BW_DebugBattleRally_C.ExecuteUbergraph_BW_DebugBattleRally
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleRally_C::ExecuteUbergraph_BW_DebugBattleRally(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleRally.BW_DebugBattleRally_C.ExecuteUbergraph_BW_DebugBattleRally");

	UBW_DebugBattleRally_C_ExecuteUbergraph_BW_DebugBattleRally_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
