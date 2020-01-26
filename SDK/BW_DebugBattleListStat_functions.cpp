
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

// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.SetValueText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBW_DebugBattleListStat_C::SetValueText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.SetValueText");

	UBW_DebugBattleListStat_C_SetValueText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.SetValueInt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Numb                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleListStat_C::SetValueInt(int Numb)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.SetValueInt");

	UBW_DebugBattleListStat_C_SetValueInt_Params params;
	params.Numb = Numb;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.SetValueRatio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Ratio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleListStat_C::SetValueRatio(float Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.SetValueRatio");

	UBW_DebugBattleListStat_C_SetValueRatio_Params params;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.SetValueInts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Enum                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Denom                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleListStat_C::SetValueInts(int Enum, int Denom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.SetValueInts");

	UBW_DebugBattleListStat_C_SetValueInts_Params params;
	params.Enum = Enum;
	params.Denom = Denom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleListStat_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.PreConstruct");

	UBW_DebugBattleListStat_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.BndEvt__Button_AddHP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleListStat_C::BndEvt__Button_AddHP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.BndEvt__Button_AddHP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugBattleListStat_C_BndEvt__Button_AddHP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.BndEvt__Button_MinusHP_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleListStat_C::BndEvt__Button_MinusHP_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.BndEvt__Button_MinusHP_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugBattleListStat_C_BndEvt__Button_MinusHP_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.BndEvt__S3Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugBattleListStat_C::BndEvt__S3Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.BndEvt__S3Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugBattleListStat_C_BndEvt__S3Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.ResetFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleListStat_C::ResetFocus(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.ResetFocus");

	UBW_DebugBattleListStat_C_ResetFocus_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.ExecuteUbergraph_BW_DebugBattleListStat
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleListStat_C::ExecuteUbergraph_BW_DebugBattleListStat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.ExecuteUbergraph_BW_DebugBattleListStat");

	UBW_DebugBattleListStat_C_ExecuteUbergraph_BW_DebugBattleListStat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.OnMax__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBW_DebugBattleListStat_C::OnMax__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.OnMax__DelegateSignature");

	UBW_DebugBattleListStat_C_OnMax__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.OnMinus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBW_DebugBattleListStat_C::OnMinus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.OnMinus__DelegateSignature");

	UBW_DebugBattleListStat_C_OnMinus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.OnPlus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBW_DebugBattleListStat_C::OnPlus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.OnPlus__DelegateSignature");

	UBW_DebugBattleListStat_C_OnPlus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
