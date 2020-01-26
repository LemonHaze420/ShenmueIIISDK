
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

// Function BW_DebugTextData.BW_DebugTextData_C.IsUseStepFilterPath
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBW_DebugTextData_C::IsUseStepFilterPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.IsUseStepFilterPath");

	UBW_DebugTextData_C_IsUseStepFilterPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugTextData.BW_DebugTextData_C.Get_DataListComboBox_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBW_DebugTextData_C::Get_DataListComboBox_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.Get_DataListComboBox_bIsEnabled_1");

	UBW_DebugTextData_C_Get_DataListComboBox_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugTextData.BW_DebugTextData_C.GetEventStepToString
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Result                         (Parm, OutParm, ZeroConstructor)

void UBW_DebugTextData_C::GetEventStepToString(struct FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.GetEventStepToString");

	UBW_DebugTextData_C_GetEventStepToString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BW_DebugTextData.BW_DebugTextData_C.IncrementTextDataIndex
// (Private, BlueprintCallable, BlueprintEvent)

void UBW_DebugTextData_C::IncrementTextDataIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.IncrementTextDataIndex");

	UBW_DebugTextData_C_IncrementTextDataIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTextData.BW_DebugTextData_C.IsUseEventStepFilter
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bUseFilter                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBW_DebugTextData_C::IsUseEventStepFilter(bool* bUseFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.IsUseEventStepFilter");

	UBW_DebugTextData_C_IsUseEventStepFilter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bUseFilter != nullptr)
		*bUseFilter = params.bUseFilter;
}


// Function BW_DebugTextData.BW_DebugTextData_C.Value Committed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpinBox*                InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextCommit>       Method                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugTextData_C::Value_Committed(class USpinBox* InputPin, float NewValue, TEnumAsByte<ETextCommit> Method)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.Value Committed");

	UBW_DebugTextData_C_Value_Committed_Params params;
	params.InputPin = InputPin;
	params.NewValue = NewValue;
	params.Method = Method;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTextData.BW_DebugTextData_C.Get_EventStepGroup_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBW_DebugTextData_C::Get_EventStepGroup_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.Get_EventStepGroup_bIsEnabled_1");

	UBW_DebugTextData_C_Get_EventStepGroup_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugTextData.BW_DebugTextData_C.Get_TextBlock_4_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_DebugTextData_C::Get_TextBlock_4_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.Get_TextBlock_4_Text_1");

	UBW_DebugTextData_C_Get_TextBlock_4_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugTextData.BW_DebugTextData_C.Get_CurrentTextdataIndex_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBW_DebugTextData_C::Get_CurrentTextdataIndex_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.Get_CurrentTextdataIndex_Text_1");

	UBW_DebugTextData_C_Get_CurrentTextdataIndex_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_DebugTextData.BW_DebugTextData_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBW_DebugTextData_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.Construct");

	UBW_DebugTextData_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTextData.BW_DebugTextData_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugTextData_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.Tick");

	UBW_DebugTextData_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTextData.BW_DebugTextData_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBW_DebugTextData_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.Destruct");

	UBW_DebugTextData_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__PathTypeProperty_K2Node_ComponentBoundEvent_175_EnumPropertyChanged__DelegateSignature
// (BlueprintEvent)

void UBW_DebugTextData_C::BndEvt__PathTypeProperty_K2Node_ComponentBoundEvent_175_EnumPropertyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__PathTypeProperty_K2Node_ComponentBoundEvent_175_EnumPropertyChanged__DelegateSignature");

	UBW_DebugTextData_C_BndEvt__PathTypeProperty_K2Node_ComponentBoundEvent_175_EnumPropertyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__LocaleProperty_K2Node_ComponentBoundEvent_184_EnumPropertyChanged__DelegateSignature
// (BlueprintEvent)

void UBW_DebugTextData_C::BndEvt__LocaleProperty_K2Node_ComponentBoundEvent_184_EnumPropertyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__LocaleProperty_K2Node_ComponentBoundEvent_184_EnumPropertyChanged__DelegateSignature");

	UBW_DebugTextData_C_BndEvt__LocaleProperty_K2Node_ComponentBoundEvent_184_EnumPropertyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTextData.BW_DebugTextData_C.UpdateTextDataAssets
// (BlueprintCallable, BlueprintEvent)

void UBW_DebugTextData_C::UpdateTextDataAssets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.UpdateTextDataAssets");

	UBW_DebugTextData_C_UpdateTextDataAssets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_205_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugTextData_C::BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_205_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_205_OnSelectionChangedEvent__DelegateSignature");

	UBW_DebugTextData_C_BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_205_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_43_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugTextData_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_43_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_43_OnButtonPressedEvent__DelegateSignature");

	UBW_DebugTextData_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_43_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_261_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_DebugTextData_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_261_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_261_OnButtonPressedEvent__DelegateSignature");

	UBW_DebugTextData_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_261_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTextData.BW_DebugTextData_C.Finalize
// (BlueprintCallable, BlueprintEvent)

void UBW_DebugTextData_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.Finalize");

	UBW_DebugTextData_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTextData.BW_DebugTextData_C.PlaySubtitlePlayer
// (BlueprintCallable, BlueprintEvent)

void UBW_DebugTextData_C::PlaySubtitlePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.PlaySubtitlePlayer");

	UBW_DebugTextData_C_PlaySubtitlePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTextData.BW_DebugTextData_C.OnChangeStep
// (BlueprintCallable, BlueprintEvent)

void UBW_DebugTextData_C::OnChangeStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.OnChangeStep");

	UBW_DebugTextData_C_OnChangeStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__SpinBox_145_K2Node_ComponentBoundEvent_67_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugTextData_C::BndEvt__SpinBox_145_K2Node_ComponentBoundEvent_67_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__SpinBox_145_K2Node_ComponentBoundEvent_67_OnSpinBoxValueCommittedEvent__DelegateSignature");

	UBW_DebugTextData_C_BndEvt__SpinBox_145_K2Node_ComponentBoundEvent_67_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__SpinBox_83_K2Node_ComponentBoundEvent_82_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugTextData_C::BndEvt__SpinBox_83_K2Node_ComponentBoundEvent_82_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__SpinBox_83_K2Node_ComponentBoundEvent_82_OnSpinBoxValueCommittedEvent__DelegateSignature");

	UBW_DebugTextData_C_BndEvt__SpinBox_83_K2Node_ComponentBoundEvent_82_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__DataListComboBox_K2Node_ComponentBoundEvent_1010_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugTextData_C::BndEvt__DataListComboBox_K2Node_ComponentBoundEvent_1010_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.BndEvt__DataListComboBox_K2Node_ComponentBoundEvent_1010_OnSelectionChangedEvent__DelegateSignature");

	UBW_DebugTextData_C_BndEvt__DataListComboBox_K2Node_ComponentBoundEvent_1010_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTextData.BW_DebugTextData_C.UpdatePullDownTextDataList
// (BlueprintCallable, BlueprintEvent)

void UBW_DebugTextData_C::UpdatePullDownTextDataList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.UpdatePullDownTextDataList");

	UBW_DebugTextData_C_UpdatePullDownTextDataList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_DebugTextData.BW_DebugTextData_C.ExecuteUbergraph_BW_DebugTextData
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_DebugTextData_C::ExecuteUbergraph_BW_DebugTextData(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_DebugTextData.BW_DebugTextData_C.ExecuteUbergraph_BW_DebugTextData");

	UBW_DebugTextData_C_ExecuteUbergraph_BW_DebugTextData_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
