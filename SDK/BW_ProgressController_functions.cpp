
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

// Function BW_ProgressController.BW_ProgressController_C.SetEventStep
// (Exec, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            NewStep                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_ProgressController_C::STATIC_SetEventStep(int NewStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ProgressController.BW_ProgressController_C.SetEventStep");

	UBW_ProgressController_C_SetEventStep_Params params;
	params.NewStep = NewStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ProgressController.BW_ProgressController_C.ValueCommitted
// (NetRequest, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class USpinBox*                SpinBox                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextCommit>       Method                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_ProgressController_C::STATIC_ValueCommitted(class USpinBox* SpinBox, float Value, TEnumAsByte<ETextCommit> Method)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ProgressController.BW_ProgressController_C.ValueCommitted");

	UBW_ProgressController_C_ValueCommitted_Params params;
	params.SpinBox = SpinBox;
	params.Value = Value;
	params.Method = Method;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ProgressController.BW_ProgressController_C.CheckFocus
// (Exec, NetResponse, Static, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USpinBox*                SpinBox                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBW_ProgressController_C::STATIC_CheckFocus(class USpinBox* SpinBox, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ProgressController.BW_ProgressController_C.CheckFocus");

	UBW_ProgressController_C_CheckFocus_Params params;
	params.SpinBox = SpinBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BW_ProgressController.BW_ProgressController_C.OnAnalogValueChanged
// (Net, NetReliable, NetRequest, NetResponse, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FAnalogInputEvent       InAnalogInputEvent             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBW_ProgressController_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ProgressController.BW_ProgressController_C.OnAnalogValueChanged");

	UBW_ProgressController_C_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BW_ProgressController.BW_ProgressController_C.JointValue_Short
// (NetReliable, Native, NetResponse, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBW_ProgressController_C::JointValue_Short()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ProgressController.BW_ProgressController_C.JointValue_Short");

	UBW_ProgressController_C_JointValue_Short_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ProgressController.BW_ProgressController_C.Tick
// (Net, NetReliable, NetRequest, Exec, NetMulticast, Public, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_ProgressController_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ProgressController.BW_ProgressController_C.Tick");

	UBW_ProgressController_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ProgressController.BW_ProgressController_C.ChangeStep_Short
// (Net, Native, NetResponse, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBW_ProgressController_C::ChangeStep_Short()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ProgressController.BW_ProgressController_C.ChangeStep_Short");

	UBW_ProgressController_C_ChangeStep_Short_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ProgressController.BW_ProgressController_C.ChangeLevel
// (Native, NetResponse, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBW_ProgressController_C::ChangeLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ProgressController.BW_ProgressController_C.ChangeLevel");

	UBW_ProgressController_C_ChangeLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ProgressController.BW_ProgressController_C.ChangeLanguage
// (Native, NetResponse, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBW_ProgressController_C::ChangeLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ProgressController.BW_ProgressController_C.ChangeLanguage");

	UBW_ProgressController_C_ChangeLanguage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ProgressController.BW_ProgressController_C.BndEvt__SpinBox_83_K2Node_ComponentBoundEvent_82_OnSpinBoxValueCommittedEvent__DelegateSignature
// (Net, Exec, NetMulticast, Public, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_ProgressController_C::BndEvt__SpinBox_83_K2Node_ComponentBoundEvent_82_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ProgressController.BW_ProgressController_C.BndEvt__SpinBox_83_K2Node_ComponentBoundEvent_82_OnSpinBoxValueCommittedEvent__DelegateSignature");

	UBW_ProgressController_C_BndEvt__SpinBox_83_K2Node_ComponentBoundEvent_82_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ProgressController.BW_ProgressController_C.BndEvt__SpinBox_145_K2Node_ComponentBoundEvent_67_OnSpinBoxValueCommittedEvent__DelegateSignature
// (Net, NetRequest, NetMulticast, Public, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_ProgressController_C::BndEvt__SpinBox_145_K2Node_ComponentBoundEvent_67_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ProgressController.BW_ProgressController_C.BndEvt__SpinBox_145_K2Node_ComponentBoundEvent_67_OnSpinBoxValueCommittedEvent__DelegateSignature");

	UBW_ProgressController_C_BndEvt__SpinBox_145_K2Node_ComponentBoundEvent_67_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ProgressController.BW_ProgressController_C.Construct
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBW_ProgressController_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ProgressController.BW_ProgressController_C.Construct");

	UBW_ProgressController_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ProgressController.BW_ProgressController_C.BndEvt__HakkasonButton_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBW_ProgressController_C::BndEvt__HakkasonButton_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ProgressController.BW_ProgressController_C.BndEvt__HakkasonButton_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature");

	UBW_ProgressController_C_BndEvt__HakkasonButton_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ProgressController.BW_ProgressController_C.BndEvt__ChobuButton_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature
// (Net, NetRequest, Exec, NetResponse, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBW_ProgressController_C::BndEvt__ChobuButton_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ProgressController.BW_ProgressController_C.BndEvt__ChobuButton_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature");

	UBW_ProgressController_C_BndEvt__ChobuButton_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ProgressController.BW_ProgressController_C.ChangeStep
// (Net, NetRequest, Exec, NetResponse, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBW_ProgressController_C::ChangeStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ProgressController.BW_ProgressController_C.ChangeStep");

	UBW_ProgressController_C_ChangeStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ProgressController.BW_ProgressController_C.ChangeVoiceLanguage
// (NetRequest, Exec, NetResponse, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBW_ProgressController_C::ChangeVoiceLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ProgressController.BW_ProgressController_C.ChangeVoiceLanguage");

	UBW_ProgressController_C_ChangeVoiceLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BW_ProgressController.BW_ProgressController_C.ExecuteUbergraph_BW_ProgressController
// (NetReliable, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBW_ProgressController_C::ExecuteUbergraph_BW_ProgressController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ProgressController.BW_ProgressController_C.ExecuteUbergraph_BW_ProgressController");

	UBW_ProgressController_C_ExecuteUbergraph_BW_ProgressController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
