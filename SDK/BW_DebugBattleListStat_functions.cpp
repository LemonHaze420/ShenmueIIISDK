
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

// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.SetValueText
// (NetRequest, Native, Event, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBW_DebugBattleListStat_C::SetValueText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.SetValueText");

	UBW_DebugBattleListStat_C_SetValueText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.SetValueInt
// (Net, NetReliable, Exec, Event, NetResponse, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (NetReliable, Native, NetMulticast, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Ratio                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleListStat_C::SetValueRatio(float Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.SetValueRatio");

	UBW_DebugBattleListStat_C_SetValueRatio_Params params;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.SetValueInts
// (Native, Event, NetMulticast, MulticastDelegate, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.PreConstruct
// (Net, NetReliable, Native, Event, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleListStat_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.PreConstruct");

	UBW_DebugBattleListStat_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.BndEvt__Button_AddHP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugBattleListStat_C::BndEvt__Button_AddHP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.BndEvt__Button_AddHP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugBattleListStat_C_BndEvt__Button_AddHP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.BndEvt__Button_MinusHP_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugBattleListStat_C::BndEvt__Button_MinusHP_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.BndEvt__Button_MinusHP_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugBattleListStat_C_BndEvt__Button_MinusHP_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.BndEvt__S3Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (Net, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_DebugBattleListStat_C::BndEvt__S3Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.BndEvt__S3Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugBattleListStat_C_BndEvt__S3Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.ResetFocus
// (NetReliable, Native, Event, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugBattleListStat_C::ResetFocus(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.ResetFocus");

	UBW_DebugBattleListStat_C_ResetFocus_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.ExecuteUbergraph_BW_DebugBattleListStat
// (NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, BlueprintEvent, BlueprintPure)
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
// (NetReliable, NetRequest, Exec, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBW_DebugBattleListStat_C::OnMax__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.OnMax__DelegateSignature");

	UBW_DebugBattleListStat_C_OnMax__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.OnMinus__DelegateSignature
// (NetReliable, NetRequest, Exec, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void UBW_DebugBattleListStat_C::OnMinus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.OnMinus__DelegateSignature");

	UBW_DebugBattleListStat_C_OnMinus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugBattleListStat.BW_DebugBattleListStat_C.OnPlus__DelegateSignature
// (Net, NetRequest, Exec, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

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
