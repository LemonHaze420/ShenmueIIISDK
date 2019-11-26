
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

// Function BW_EnumProperty.BW_EnumProperty_C.SetPropertyValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Byte                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CallDispatcher                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_EnumProperty_C::SetPropertyValue(unsigned char Byte, bool CallDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_EnumProperty.BW_EnumProperty_C.SetPropertyValue");

	UBW_EnumProperty_C_SetPropertyValue_Params params;
	params.Byte = Byte;
	params.CallDispatcher = CallDispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_EnumProperty.BW_EnumProperty_C.GetPropertyValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Byte                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBW_EnumProperty_C::GetPropertyValue(unsigned char* Byte)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_EnumProperty.BW_EnumProperty_C.GetPropertyValue");

	UBW_EnumProperty_C_GetPropertyValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Byte != nullptr)
		*Byte = params.Byte;
}


// Function BW_EnumProperty.BW_EnumProperty_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBW_EnumProperty_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_EnumProperty.BW_EnumProperty_C.OnKeyDown");

	UBW_EnumProperty_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_EnumProperty.BW_EnumProperty_C.GetParameterName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_EnumProperty_C::GetParameterName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_EnumProperty.BW_EnumProperty_C.GetParameterName");

	UBW_EnumProperty_C_GetParameterName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_EnumProperty.BW_EnumProperty_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBW_EnumProperty_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_EnumProperty.BW_EnumProperty_C.Construct");

	UBW_EnumProperty_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_EnumProperty.BW_EnumProperty_C.BndEvt__EnumComboBox_K2Node_ComponentBoundEvent_294_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_EnumProperty_C::BndEvt__EnumComboBox_K2Node_ComponentBoundEvent_294_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_EnumProperty.BW_EnumProperty_C.BndEvt__EnumComboBox_K2Node_ComponentBoundEvent_294_OnSelectionChangedEvent__DelegateSignature");

	UBW_EnumProperty_C_BndEvt__EnumComboBox_K2Node_ComponentBoundEvent_294_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_EnumProperty.BW_EnumProperty_C.SetStartingValue
// (BlueprintCallable, BlueprintEvent)

void UBW_EnumProperty_C::SetStartingValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_EnumProperty.BW_EnumProperty_C.SetStartingValue");

	UBW_EnumProperty_C_SetStartingValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_EnumProperty.BW_EnumProperty_C.PropertyChanged
// (BlueprintCallable, BlueprintEvent)

void UBW_EnumProperty_C::PropertyChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_EnumProperty.BW_EnumProperty_C.PropertyChanged");

	UBW_EnumProperty_C_PropertyChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_EnumProperty.BW_EnumProperty_C.ExecuteUbergraph_BW_EnumProperty
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_EnumProperty_C::ExecuteUbergraph_BW_EnumProperty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_EnumProperty.BW_EnumProperty_C.ExecuteUbergraph_BW_EnumProperty");

	UBW_EnumProperty_C_ExecuteUbergraph_BW_EnumProperty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_EnumProperty.BW_EnumProperty_C.EnumPropertyChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBW_EnumProperty_C::EnumPropertyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_EnumProperty.BW_EnumProperty_C.EnumPropertyChanged__DelegateSignature");

	UBW_EnumProperty_C_EnumPropertyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
