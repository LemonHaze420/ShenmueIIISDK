
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

// Function BW_IntProperty.BW_IntProperty_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBW_IntProperty_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntProperty.BW_IntProperty_C.OnKeyDown");

	UBW_IntProperty_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_IntProperty.BW_IntProperty_C.GetFloatForSpinBox
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBW_IntProperty_C::GetFloatForSpinBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntProperty.BW_IntProperty_C.GetFloatForSpinBox");

	UBW_IntProperty_C_GetFloatForSpinBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_IntProperty.BW_IntProperty_C.ClampNewValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBW_IntProperty_C::ClampNewValue(float InValue, float* OutValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntProperty.BW_IntProperty_C.ClampNewValue");

	UBW_IntProperty_C_ClampNewValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;
}


// Function BW_IntProperty.BW_IntProperty_C.SetIntParameterValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_IntProperty_C::SetIntParameterValue(int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntProperty.BW_IntProperty_C.SetIntParameterValue");

	UBW_IntProperty_C_SetIntParameterValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_IntProperty.BW_IntProperty_C.GetIntParameterValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBW_IntProperty_C::GetIntParameterValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntProperty.BW_IntProperty_C.GetIntParameterValue");

	UBW_IntProperty_C_GetIntParameterValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_IntProperty.BW_IntProperty_C.GetParameterName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_IntProperty_C::GetParameterName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntProperty.BW_IntProperty_C.GetParameterName");

	UBW_IntProperty_C_GetParameterName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_IntProperty.BW_IntProperty_C.BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_IntProperty_C::BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntProperty.BW_IntProperty_C.BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature");

	UBW_IntProperty_C_BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_187_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_IntProperty.BW_IntProperty_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_IntProperty_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntProperty.BW_IntProperty_C.Tick");

	UBW_IntProperty_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_IntProperty.BW_IntProperty_C.GetMinMax
// (BlueprintCallable, BlueprintEvent)

void UBW_IntProperty_C::GetMinMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntProperty.BW_IntProperty_C.GetMinMax");

	UBW_IntProperty_C_GetMinMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_IntProperty.BW_IntProperty_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBW_IntProperty_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntProperty.BW_IntProperty_C.Construct");

	UBW_IntProperty_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_IntProperty.BW_IntProperty_C.BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_150_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_IntProperty_C::BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_150_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntProperty.BW_IntProperty_C.BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_150_OnSpinBoxValueCommittedEvent__DelegateSignature");

	UBW_IntProperty_C_BndEvt__FloatSpinBox_K2Node_ComponentBoundEvent_150_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_IntProperty.BW_IntProperty_C.PropertyChanged
// (BlueprintCallable, BlueprintEvent)

void UBW_IntProperty_C::PropertyChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntProperty.BW_IntProperty_C.PropertyChanged");

	UBW_IntProperty_C_PropertyChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_IntProperty.BW_IntProperty_C.ExecuteUbergraph_BW_IntProperty
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_IntProperty_C::ExecuteUbergraph_BW_IntProperty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntProperty.BW_IntProperty_C.ExecuteUbergraph_BW_IntProperty");

	UBW_IntProperty_C_ExecuteUbergraph_BW_IntProperty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_IntProperty.BW_IntProperty_C.FloatPropertyChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBW_IntProperty_C::FloatPropertyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_IntProperty.BW_IntProperty_C.FloatPropertyChanged__DelegateSignature");

	UBW_IntProperty_C_FloatPropertyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
