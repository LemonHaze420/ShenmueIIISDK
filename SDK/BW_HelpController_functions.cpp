
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

// Function BW_HelpController.BW_HelpController_C.ChangeCheck
// (Event, NetResponse, Static, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class UCheckBox*               CheckBox                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBW_HelpController_C::STATIC_ChangeCheck(class UCheckBox* CheckBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.ChangeCheck");

	UBW_HelpController_C_ChangeCheck_Params params;
	params.CheckBox = CheckBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.OnAnalogValueChanged
// (NetReliable, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FAnalogInputEvent       InAnalogInputEvent             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBW_HelpController_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.OnAnalogValueChanged");

	UBW_HelpController_C_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_HelpController.BW_HelpController_C.SetHelpFlag
// (NetReliable, NetRequest, Native, Event, NetMulticast, Private, Protected, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.MakeHelpFlagList
// (Net, NetReliable, NetRequest, Event, NetMulticast, Private, Protected, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBW_HelpController_C::MakeHelpFlagList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.MakeHelpFlagList");

	UBW_HelpController_C_MakeHelpFlagList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.UpdateHelpFlag
// (Exec, Native, Event, Static, Public, HasOutParms, DLLImport, BlueprintEvent)

void UBW_HelpController_C::STATIC_UpdateHelpFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.UpdateHelpFlag");

	UBW_HelpController_C_UpdateHelpFlag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.Construct
// (NetRequest, Native, NetResponse, NetMulticast, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_HelpController_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.Construct");

	UBW_HelpController_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
// (Net, Exec, Native, Event, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_HelpController_C::STATIC_BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.Tick
// (Native, Event, NetResponse, MulticastDelegate, Private, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_HelpController_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.Tick");

	UBW_HelpController_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__Button0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (NetReliable, Native, NetResponse, NetMulticast, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_HelpController_C::BndEvt__Button0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__Button0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__Button0_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__Button1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (NetReliable, Native, NetResponse, NetMulticast, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_HelpController_C::BndEvt__Button1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__Button1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__Button1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__Button2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (Net, Native, NetResponse, NetMulticast, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_HelpController_C::BndEvt__Button2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__Button2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__Button2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__Button3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (Net, Native, NetResponse, NetMulticast, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_HelpController_C::BndEvt__Button3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__Button3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__Button3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__Button4_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (Native, NetResponse, NetMulticast, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_HelpController_C::BndEvt__Button4_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__Button4_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__Button4_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__Button5_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (Native, NetResponse, NetMulticast, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_HelpController_C::BndEvt__Button5_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__Button5_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__Button5_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__Button6_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_HelpController_C::BndEvt__Button6_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__Button6_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__Button6_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__Button7_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_HelpController_C::BndEvt__Button7_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__Button7_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__Button7_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__Button8_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_HelpController_C::BndEvt__Button8_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__Button8_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__Button8_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__Button9_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_HelpController_C::BndEvt__Button9_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__Button9_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__Button9_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.BndEvt__S3Button_9_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (Net, NetRequest, Exec, NetResponse, NetMulticast, Public, Protected, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBW_HelpController_C::BndEvt__S3Button_9_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_HelpController.BW_HelpController_C.BndEvt__S3Button_9_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");

	UBW_HelpController_C_BndEvt__S3Button_9_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_HelpController.BW_HelpController_C.ExecuteUbergraph_BW_HelpController
// (Net, NetRequest, Exec, NetResponse, NetMulticast, MulticastDelegate, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintPure, Const)
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
