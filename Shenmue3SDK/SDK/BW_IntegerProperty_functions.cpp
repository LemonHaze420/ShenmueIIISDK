
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

// Function BW_IntegerProperty.BW_IntegerProperty_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_IntegerProperty_C::SetValue(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntegerProperty.BW_IntegerProperty_C.SetValue");

	UBW_IntegerProperty_C_SetValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_IntegerProperty.BW_IntegerProperty_C.GetIntToFloatConvertValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBW_IntegerProperty_C::GetIntToFloatConvertValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntegerProperty.BW_IntegerProperty_C.GetIntToFloatConvertValue");

	UBW_IntegerProperty_C_GetIntToFloatConvertValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_IntegerProperty.BW_IntegerProperty_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_IntegerProperty_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntegerProperty.BW_IntegerProperty_C.Reset");

	UBW_IntegerProperty_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_IntegerProperty.BW_IntegerProperty_C.ClampNewValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBW_IntegerProperty_C::ClampNewValue(int InValue, int* OutValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntegerProperty.BW_IntegerProperty_C.ClampNewValue");

	UBW_IntegerProperty_C_ClampNewValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
}


// Function BW_IntegerProperty.BW_IntegerProperty_C.OnAnalogValueChanged
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FAnalogInputEvent*      InAnalogInputEvent             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBW_IntegerProperty_C::OnAnalogValueChanged(struct FGeometry* MyGeometry, struct FAnalogInputEvent* InAnalogInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntegerProperty.BW_IntegerProperty_C.OnAnalogValueChanged");

	UBW_IntegerProperty_C_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_IntegerProperty.BW_IntegerProperty_C.SetIntegerParameterValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CallDispatcher                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_IntegerProperty_C::SetIntegerParameterValue(int NewValue, bool CallDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntegerProperty.BW_IntegerProperty_C.SetIntegerParameterValue");

	UBW_IntegerProperty_C_SetIntegerParameterValue_Params params;
	params.NewValue = NewValue;
	params.CallDispatcher = CallDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_IntegerProperty.BW_IntegerProperty_C.GetIntegerParameterValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBW_IntegerProperty_C::GetIntegerParameterValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntegerProperty.BW_IntegerProperty_C.GetIntegerParameterValue");

	UBW_IntegerProperty_C_GetIntegerParameterValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_IntegerProperty.BW_IntegerProperty_C.GetParameterName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_IntegerProperty_C::GetParameterName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntegerProperty.BW_IntegerProperty_C.GetParameterName");

	UBW_IntegerProperty_C_GetParameterName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_IntegerProperty.BW_IntegerProperty_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBW_IntegerProperty_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntegerProperty.BW_IntegerProperty_C.Construct");

	UBW_IntegerProperty_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_IntegerProperty.BW_IntegerProperty_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_IntegerProperty_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntegerProperty.BW_IntegerProperty_C.Tick");

	UBW_IntegerProperty_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_IntegerProperty.BW_IntegerProperty_C.BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_IntegerProperty_C::BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntegerProperty.BW_IntegerProperty_C.BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature");

	UBW_IntegerProperty_C_BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_IntegerProperty.BW_IntegerProperty_C.GetMinMax
// (BlueprintCallable, BlueprintEvent)

void UBW_IntegerProperty_C::GetMinMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntegerProperty.BW_IntegerProperty_C.GetMinMax");

	UBW_IntegerProperty_C_GetMinMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_IntegerProperty.BW_IntegerProperty_C.BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_150_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_IntegerProperty_C::BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_150_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntegerProperty.BW_IntegerProperty_C.BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_150_OnSpinBoxValueCommittedEvent__DelegateSignature");

	UBW_IntegerProperty_C_BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_150_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_IntegerProperty.BW_IntegerProperty_C.PropertyChanged
// (BlueprintCallable, BlueprintEvent)

void UBW_IntegerProperty_C::PropertyChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntegerProperty.BW_IntegerProperty_C.PropertyChanged");

	UBW_IntegerProperty_C_PropertyChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_IntegerProperty.BW_IntegerProperty_C.ExecuteUbergraph_BW_IntegerProperty
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_IntegerProperty_C::ExecuteUbergraph_BW_IntegerProperty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntegerProperty.BW_IntegerProperty_C.ExecuteUbergraph_BW_IntegerProperty");

	UBW_IntegerProperty_C_ExecuteUbergraph_BW_IntegerProperty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_IntegerProperty.BW_IntegerProperty_C.IntegerPropertyChangedWithData__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBW_IntegerProperty_C*   Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_IntegerProperty_C::IntegerPropertyChangedWithData__DelegateSignature(int Value, class UBW_IntegerProperty_C* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntegerProperty.BW_IntegerProperty_C.IntegerPropertyChangedWithData__DelegateSignature");

	UBW_IntegerProperty_C_IntegerPropertyChangedWithData__DelegateSignature_Params params;
	params.Value = Value;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_IntegerProperty.BW_IntegerProperty_C.IntegerPropertyChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBW_IntegerProperty_C::IntegerPropertyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntegerProperty.BW_IntegerProperty_C.IntegerPropertyChanged__DelegateSignature");

	UBW_IntegerProperty_C_IntegerPropertyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
