
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

// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.SetAllValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MinRate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxRate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentRate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BasePercent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MinLimitRate                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugMiniGameListStat_C::SetAllValue(float MinRate, float MaxRate, float CurrentRate, float BasePercent, float MinLimitRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.SetAllValue");

	UBW_DebugMiniGameListStat_C_SetAllValue_Params params;
	params.MinRate = MinRate;
	params.MaxRate = MaxRate;
	params.CurrentRate = CurrentRate;
	params.BasePercent = BasePercent;
	params.MinLimitRate = MinLimitRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.SetValueText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PercentBase                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MinRate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_DebugMiniGameListStat_C::SetValueText(float Rate, float PercentBase, float MinRate, class UTextBlock* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.SetValueText");

	UBW_DebugMiniGameListStat_C_SetValueText_Params params;
	params.Rate = Rate;
	params.PercentBase = PercentBase;
	params.MinRate = MinRate;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugMiniGameListStat_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.PreConstruct");

	UBW_DebugMiniGameListStat_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.BndEvt__Button_AddHP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugMiniGameListStat_C::BndEvt__Button_AddHP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.BndEvt__Button_AddHP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugMiniGameListStat_C_BndEvt__Button_AddHP_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.BndEvt__Button_MinusHP_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugMiniGameListStat_C::BndEvt__Button_MinusHP_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.BndEvt__Button_MinusHP_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugMiniGameListStat_C_BndEvt__Button_MinusHP_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.ResetFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugMiniGameListStat_C::ResetFocus(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.ResetFocus");

	UBW_DebugMiniGameListStat_C_ResetFocus_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.BndEvt__S3Button_0_K2Node_ComponentBoundEvent_128_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugMiniGameListStat_C::BndEvt__S3Button_0_K2Node_ComponentBoundEvent_128_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.BndEvt__S3Button_0_K2Node_ComponentBoundEvent_128_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugMiniGameListStat_C_BndEvt__S3Button_0_K2Node_ComponentBoundEvent_128_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.BndEvt__S3Button_1_K2Node_ComponentBoundEvent_145_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugMiniGameListStat_C::BndEvt__S3Button_1_K2Node_ComponentBoundEvent_145_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.BndEvt__S3Button_1_K2Node_ComponentBoundEvent_145_OnButtonClickedEvent__DelegateSignature");

	UBW_DebugMiniGameListStat_C_BndEvt__S3Button_1_K2Node_ComponentBoundEvent_145_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.ExecuteUbergraph_BW_DebugMiniGameListStat
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugMiniGameListStat_C::ExecuteUbergraph_BW_DebugMiniGameListStat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.ExecuteUbergraph_BW_DebugMiniGameListStat");

	UBW_DebugMiniGameListStat_C_ExecuteUbergraph_BW_DebugMiniGameListStat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.OnMinusMax__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBW_DebugMiniGameListStat_C::OnMinusMax__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.OnMinusMax__DelegateSignature");

	UBW_DebugMiniGameListStat_C_OnMinusMax__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.OnPlusMax__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBW_DebugMiniGameListStat_C::OnPlusMax__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.OnPlusMax__DelegateSignature");

	UBW_DebugMiniGameListStat_C_OnPlusMax__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.OnMinusMin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBW_DebugMiniGameListStat_C::OnMinusMin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.OnMinusMin__DelegateSignature");

	UBW_DebugMiniGameListStat_C_OnMinusMin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.OnPlusMin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBW_DebugMiniGameListStat_C::OnPlusMin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugMiniGameListStat.BW_DebugMiniGameListStat_C.OnPlusMin__DelegateSignature");

	UBW_DebugMiniGameListStat_C_OnPlusMin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
