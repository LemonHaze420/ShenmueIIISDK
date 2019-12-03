
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
// (Native, Event, NetMulticast, MulticastDelegate, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBW_FloatProperty_C::ClampNewValue(float InValue, float* OutValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_FloatProperty.BW_FloatProperty_C.ClampNewValue");

	UBW_FloatProperty_C_ClampNewValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
}


// Function BW_FloatProperty.BW_FloatProperty_C.OnAnalogValueChanged
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, NetServer, BlueprintEvent, BlueprintPure)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_FloatProperty.BW_FloatProperty_C.SetFloatParameterValue
// (Net, Event, Static, MulticastDelegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CallDispatcher                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_FloatProperty_C::STATIC_SetFloatParameterValue(float NewValue, bool CallDispatcher)
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
// (NetRequest, Exec, NetResponse, Static, NetMulticast, Public, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBW_FloatProperty_C::STATIC_GetFloatParameterValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_FloatProperty.BW_FloatProperty_C.GetFloatParameterValue");

	UBW_FloatProperty_C_GetFloatParameterValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_FloatProperty.BW_FloatProperty_C.GetParameterName
// (Net, Exec, Native, Event, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_FloatProperty_C::GetParameterName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_FloatProperty.BW_FloatProperty_C.GetParameterName");

	UBW_FloatProperty_C_GetParameterName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_FloatProperty.BW_FloatProperty_C.BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature
// (NetRequest, Exec, Native, Event, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_FloatProperty_C::STATIC_BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_FloatProperty.BW_FloatProperty_C.BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature");

	UBW_FloatProperty_C_BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_FloatProperty.BW_FloatProperty_C.Tick
// (Net, NetReliable, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_FloatProperty.BW_FloatProperty_C.GetMinMax
// (Net, Exec, Native, NetResponse, NetMulticast, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_FloatProperty_C::GetMinMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_FloatProperty.BW_FloatProperty_C.GetMinMax");

	UBW_FloatProperty_C_GetMinMax_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_FloatProperty.BW_FloatProperty_C.Construct
// (Exec, Native, NetResponse, NetMulticast, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_FloatProperty_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_FloatProperty.BW_FloatProperty_C.Construct");

	UBW_FloatProperty_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_FloatProperty.BW_FloatProperty_C.BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_150_OnSpinBoxValueCommittedEvent__DelegateSignature
// (NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (Net, NetReliable, NetRequest, Native, NetResponse, NetMulticast, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_FloatProperty_C::PropertyChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_FloatProperty.BW_FloatProperty_C.PropertyChanged");

	UBW_FloatProperty_C_PropertyChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_FloatProperty.BW_FloatProperty_C.ExecuteUbergraph_BW_FloatProperty
// (NetRequest, Exec, Event, NetResponse, Public, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (Net, NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Private, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_FloatProperty_C::STATIC_FloatPropertyChanged__DelegateSignature()
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
