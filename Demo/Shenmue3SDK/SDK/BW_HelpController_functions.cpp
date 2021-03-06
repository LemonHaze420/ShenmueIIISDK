
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

// Function BW_HelpController.BW_HelpController_C.ChangeCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCheckBox*               CheckBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_HelpController_C::ChangeCheck(class UCheckBox* CheckBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.ChangeCheck");

	UBW_HelpController_C_ChangeCheck_Params params;
	params.CheckBox = CheckBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.OnAnalogValueChanged
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FAnalogInputEvent*      InAnalogInputEvent             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBW_HelpController_C::OnAnalogValueChanged(struct FGeometry* MyGeometry, struct FAnalogInputEvent* InAnalogInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.OnAnalogValueChanged");

	UBW_HelpController_C_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_HelpController.BW_HelpController_C.SetHelpFlag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UCheckBox*               flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_HelpController_C::SetHelpFlag(int Index, class UTextBlock* Text, class UCheckBox* flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.SetHelpFlag");

	UBW_HelpController_C_SetHelpFlag_Params params;
	params.Index = Index;
	params.Text = Text;
	params.flag = flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.MakeHelpFlagList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBW_HelpController_C::MakeHelpFlagList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.MakeHelpFlagList");

	UBW_HelpController_C_MakeHelpFlagList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.UpdateHelpFlag
// (Public, BlueprintCallable, BlueprintEvent)

void UBW_HelpController_C::UpdateHelpFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.UpdateHelpFlag");

	UBW_HelpController_C_UpdateHelpFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBW_HelpController_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.Construct");

	UBW_HelpController_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_HelpController_C::BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_HelpController_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.Tick");

	UBW_HelpController_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__Button0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_HelpController_C::BndEvt__Button0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__Button0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__Button0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__Button1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_HelpController_C::BndEvt__Button1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__Button1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__Button1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__Button2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_HelpController_C::BndEvt__Button2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__Button2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__Button2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__Button3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_HelpController_C::BndEvt__Button3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__Button3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__Button3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__Button4_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_HelpController_C::BndEvt__Button4_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__Button4_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__Button4_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__Button5_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_HelpController_C::BndEvt__Button5_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__Button5_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__Button5_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__Button6_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_HelpController_C::BndEvt__Button6_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__Button6_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__Button6_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__Button7_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_HelpController_C::BndEvt__Button7_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__Button7_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__Button7_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__Button8_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_HelpController_C::BndEvt__Button8_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__Button8_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__Button8_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__Button9_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_HelpController_C::BndEvt__Button9_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__Button9_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__Button9_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__S3Button_9_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBW_HelpController_C::BndEvt__S3Button_9_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__S3Button_9_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__S3Button_9_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.ExecuteUbergraph_BW_HelpController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_HelpController_C::ExecuteUbergraph_BW_HelpController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.ExecuteUbergraph_BW_HelpController");

	UBW_HelpController_C_ExecuteUbergraph_BW_HelpController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
