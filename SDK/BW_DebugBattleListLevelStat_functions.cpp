
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

// Function BW_DebugBattleListLevelStat.BW_DebugBattleListLevelStat_C.SetValueInts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Enum                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Denom                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleListLevelStat_C::SetValueInts(int Enum, int Denom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListLevelStat.BW_DebugBattleListLevelStat_C.SetValueInts");

	UBW_DebugBattleListLevelStat_C_SetValueInts_Params params;
	params.Enum = Enum;
	params.Denom = Denom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListLevelStat.BW_DebugBattleListLevelStat_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleListLevelStat_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListLevelStat.BW_DebugBattleListLevelStat_C.PreConstruct");

	UBW_DebugBattleListLevelStat_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListLevelStat.BW_DebugBattleListLevelStat_C.BndEvt__Button_AddHP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleListLevelStat_C::BndEvt__Button_AddHP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListLevelStat.BW_DebugBattleListLevelStat_C.BndEvt__Button_AddHP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugBattleListLevelStat_C_BndEvt__Button_AddHP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListLevelStat.BW_DebugBattleListLevelStat_C.BndEvt__Button_MinusHP_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleListLevelStat_C::BndEvt__Button_MinusHP_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListLevelStat.BW_DebugBattleListLevelStat_C.BndEvt__Button_MinusHP_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugBattleListLevelStat_C_BndEvt__Button_MinusHP_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListLevelStat.BW_DebugBattleListLevelStat_C.BndEvt__S3Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleListLevelStat_C::BndEvt__S3Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListLevelStat.BW_DebugBattleListLevelStat_C.BndEvt__S3Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugBattleListLevelStat_C_BndEvt__S3Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListLevelStat.BW_DebugBattleListLevelStat_C.BndEvt__SpinBox_101_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleListLevelStat_C::BndEvt__SpinBox_101_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListLevelStat.BW_DebugBattleListLevelStat_C.BndEvt__SpinBox_101_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature");

	UBW_DebugBattleListLevelStat_C_BndEvt__SpinBox_101_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListLevelStat.BW_DebugBattleListLevelStat_C.BndEvt__Button_Min_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleListLevelStat_C::BndEvt__Button_Min_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListLevelStat.BW_DebugBattleListLevelStat_C.BndEvt__Button_Min_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UBW_DebugBattleListLevelStat_C_BndEvt__Button_Min_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListLevelStat.BW_DebugBattleListLevelStat_C.ResetFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleListLevelStat_C::ResetFocus(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListLevelStat.BW_DebugBattleListLevelStat_C.ResetFocus");

	UBW_DebugBattleListLevelStat_C_ResetFocus_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListLevelStat.BW_DebugBattleListLevelStat_C.ExecuteUbergraph_BW_DebugBattleListLevelStat
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleListLevelStat_C::ExecuteUbergraph_BW_DebugBattleListLevelStat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListLevelStat.BW_DebugBattleListLevelStat_C.ExecuteUbergraph_BW_DebugBattleListLevelStat");

	UBW_DebugBattleListLevelStat_C_ExecuteUbergraph_BW_DebugBattleListLevelStat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListLevelStat.BW_DebugBattleListLevelStat_C.OnChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleListLevelStat_C::OnChanged__DelegateSignature(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListLevelStat.BW_DebugBattleListLevelStat_C.OnChanged__DelegateSignature");

	UBW_DebugBattleListLevelStat_C_OnChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
