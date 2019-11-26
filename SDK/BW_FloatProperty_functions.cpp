
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

// Function BW_FloatProperty.BW_FloatProperty_C.ClampNewValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBW_FloatProperty_C::ClampNewValue(float InValue, float* OutValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_FloatProperty.BW_FloatProperty_C.ClampNewValue");

	UBW_FloatProperty_C_ClampNewValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
}


// Function BW_FloatProperty.BW_FloatProperty_C.OnAnalogValueChanged
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FAnalogInputEvent       InAnalogInputEvent             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBW_FloatProperty_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_FloatProperty.BW_FloatProperty_C.OnAnalogValueChanged");

	UBW_FloatProperty_C_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_FloatProperty.BW_FloatProperty_C.SetFloatParameterValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CallDispatcher                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_FloatProperty_C::SetFloatParameterValue(float NewValue, bool CallDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_FloatProperty.BW_FloatProperty_C.SetFloatParameterValue");

	UBW_FloatProperty_C_SetFloatParameterValue_Params params;
	params.NewValue = NewValue;
	params.CallDispatcher = CallDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_FloatProperty.BW_FloatProperty_C.GetFloatParameterValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBW_FloatProperty_C::GetFloatParameterValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_FloatProperty.BW_FloatProperty_C.GetFloatParameterValue");

	UBW_FloatProperty_C_GetFloatParameterValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_FloatProperty.BW_FloatProperty_C.GetParameterName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_FloatProperty_C::GetParameterName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_FloatProperty.BW_FloatProperty_C.GetParameterName");

	UBW_FloatProperty_C_GetParameterName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_FloatProperty.BW_FloatProperty_C.BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_FloatProperty_C::BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_FloatProperty.BW_FloatProperty_C.BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature");

	UBW_FloatProperty_C_BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_FloatProperty.BW_FloatProperty_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_FloatProperty_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_FloatProperty.BW_FloatProperty_C.Tick");

	UBW_FloatProperty_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_FloatProperty.BW_FloatProperty_C.GetMinMax
// (BlueprintCallable, BlueprintEvent)

void UBW_FloatProperty_C::GetMinMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_FloatProperty.BW_FloatProperty_C.GetMinMax");

	UBW_FloatProperty_C_GetMinMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_FloatProperty.BW_FloatProperty_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBW_FloatProperty_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_FloatProperty.BW_FloatProperty_C.Construct");

	UBW_FloatProperty_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_FloatProperty.BW_FloatProperty_C.BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_150_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_FloatProperty_C::BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_150_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_FloatProperty.BW_FloatProperty_C.BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_150_OnSpinBoxValueCommittedEvent__DelegateSignature");

	UBW_FloatProperty_C_BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_150_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_FloatProperty.BW_FloatProperty_C.PropertyChanged
// (BlueprintCallable, BlueprintEvent)

void UBW_FloatProperty_C::PropertyChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_FloatProperty.BW_FloatProperty_C.PropertyChanged");

	UBW_FloatProperty_C_PropertyChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_FloatProperty.BW_FloatProperty_C.ExecuteUbergraph_BW_FloatProperty
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_FloatProperty_C::ExecuteUbergraph_BW_FloatProperty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_FloatProperty.BW_FloatProperty_C.ExecuteUbergraph_BW_FloatProperty");

	UBW_FloatProperty_C_ExecuteUbergraph_BW_FloatProperty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_FloatProperty.BW_FloatProperty_C.FloatPropertyChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBW_FloatProperty_C::FloatPropertyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_FloatProperty.BW_FloatProperty_C.FloatPropertyChanged__DelegateSignature");

	UBW_FloatProperty_C_FloatPropertyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
