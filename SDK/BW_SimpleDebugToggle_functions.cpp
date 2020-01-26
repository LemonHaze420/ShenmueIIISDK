
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

// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECheckBoxState                 State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_SimpleDebugToggle_C::SetState(ECheckBoxState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.SetState");

	UBW_SimpleDebugToggle_C_SetState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.GetState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ECheckBoxState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECheckBoxState UBW_SimpleDebugToggle_C::GetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.GetState");

	UBW_SimpleDebugToggle_C_GetState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.GetParameterName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_SimpleDebugToggle_C::GetParameterName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.GetParameterName");

	UBW_SimpleDebugToggle_C_GetParameterName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_SimpleDebugToggle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.Tick");

	UBW_SimpleDebugToggle_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.BndEvt__S3Button_12_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_SimpleDebugToggle_C::BndEvt__S3Button_12_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.BndEvt__S3Button_12_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature");

	UBW_SimpleDebugToggle_C_BndEvt__S3Button_12_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_SimpleDebugToggle_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.PreConstruct");

	UBW_SimpleDebugToggle_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UBW_SimpleDebugToggle_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.OnAddedToFocusPath");

	UBW_SimpleDebugToggle_C_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.BndEvt__BoolValue_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_SimpleDebugToggle_C::BndEvt__BoolValue_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.BndEvt__BoolValue_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	UBW_SimpleDebugToggle_C_BndEvt__BoolValue_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.ExecuteUbergraph_BW_SimpleDebugToggle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_SimpleDebugToggle_C::ExecuteUbergraph_BW_SimpleDebugToggle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.ExecuteUbergraph_BW_SimpleDebugToggle");

	UBW_SimpleDebugToggle_C_ExecuteUbergraph_BW_SimpleDebugToggle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.OnFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_SimpleDebugToggle_C::OnFocused__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.OnFocused__DelegateSignature");

	UBW_SimpleDebugToggle_C_OnFocused__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.OnChangedByUser__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBW_SimpleDebugToggle_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ECheckBoxState                 NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_SimpleDebugToggle_C::OnChangedByUser__DelegateSignature(class UBW_SimpleDebugToggle_C* Widget, ECheckBoxState NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_SimpleDebugToggle.BW_SimpleDebugToggle_C.OnChangedByUser__DelegateSignature");

	UBW_SimpleDebugToggle_C_OnChangedByUser__DelegateSignature_Params params;
	params.Widget = Widget;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
