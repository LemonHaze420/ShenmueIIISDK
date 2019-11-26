
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

// Function BW_BoolProperty.BW_BoolProperty_C.GetCheckedState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ECheckBoxState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECheckBoxState UBW_BoolProperty_C::GetCheckedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_BoolProperty.BW_BoolProperty_C.GetCheckedState");

	UBW_BoolProperty_C_GetCheckedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_BoolProperty.BW_BoolProperty_C.GetParameterName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_BoolProperty_C::GetParameterName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_BoolProperty.BW_BoolProperty_C.GetParameterName");

	UBW_BoolProperty_C_GetParameterName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_BoolProperty.BW_BoolProperty_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_BoolProperty_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_BoolProperty.BW_BoolProperty_C.Tick");

	UBW_BoolProperty_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_BoolProperty.BW_BoolProperty_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_131_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_BoolProperty_C::BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_131_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_BoolProperty.BW_BoolProperty_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_131_OnCheckBoxComponentStateChanged__DelegateSignature");

	UBW_BoolProperty_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_131_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_BoolProperty.BW_BoolProperty_C.BndEvt__S3Button_12_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_BoolProperty_C::BndEvt__S3Button_12_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_BoolProperty.BW_BoolProperty_C.BndEvt__S3Button_12_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature");

	UBW_BoolProperty_C_BndEvt__S3Button_12_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_BoolProperty.BW_BoolProperty_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_BoolProperty_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_BoolProperty.BW_BoolProperty_C.PreConstruct");

	UBW_BoolProperty_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_BoolProperty.BW_BoolProperty_C.ExecuteUbergraph_BW_BoolProperty
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_BoolProperty_C::ExecuteUbergraph_BW_BoolProperty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_BoolProperty.BW_BoolProperty_C.ExecuteUbergraph_BW_BoolProperty");

	UBW_BoolProperty_C_ExecuteUbergraph_BW_BoolProperty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_BoolProperty.BW_BoolProperty_C.BoolPropertyChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBW_BoolProperty_C::BoolPropertyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_BoolProperty.BW_BoolProperty_C.BoolPropertyChanged__DelegateSignature");

	UBW_BoolProperty_C_BoolPropertyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
