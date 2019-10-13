
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

// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.IsAnyButtonAnimating
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTEFreeCommand_C::IsAnyButtonAnimating()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.IsAnyButtonAnimating");

	UWBP_QTEFreeCommand_C_IsAnyButtonAnimating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.PlayBlinkAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3PadButtonIndex              Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTEFreeCommand_C::PlayBlinkAnimation(ES3PadButtonIndex Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.PlayBlinkAnimation");

	UWBP_QTEFreeCommand_C_PlayBlinkAnimation_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.GetLightFromPadIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3PadButtonIndex              PadIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_QTESimonLight_C*    Light                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTEFreeCommand_C::GetLightFromPadIndex(ES3PadButtonIndex PadIndex, class UWBP_QTESimonLight_C** Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.GetLightFromPadIndex");

	UWBP_QTEFreeCommand_C_GetLightFromPadIndex_Params params;
	params.PadIndex = PadIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Light != nullptr)
		*Light = params.Light;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.PlayLightAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3PadButtonIndex              Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTEFreeCommand_C::PlayLightAnimation(ES3PadButtonIndex Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.PlayLightAnimation");

	UWBP_QTEFreeCommand_C_PlayLightAnimation_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.GetButtonFromPadIndex
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ES3PadButtonIndex              Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_QTEFreeCommandButton_C* Button                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTEFreeCommand_C::GetButtonFromPadIndex(ES3PadButtonIndex Selection, class UWBP_QTEFreeCommandButton_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.GetButtonFromPadIndex");

	UWBP_QTEFreeCommand_C_GetButtonFromPadIndex_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.SetSuccessText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_QTEFreeCommand_C::SetSuccessText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.SetSuccessText");

	UWBP_QTEFreeCommand_C_SetSuccessText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.GetMaxOutAnimationLength
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_QTEFreeCommand_C::GetMaxOutAnimationLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.GetMaxOutAnimationLength");

	UWBP_QTEFreeCommand_C_GetMaxOutAnimationLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.GetInAnimationLength
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_QTEFreeCommand_C::GetInAnimationLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.GetInAnimationLength");

	UWBP_QTEFreeCommand_C_GetInAnimationLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.SetAutoOutOkAfterInputSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAutoOut                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTEFreeCommand_C::SetAutoOutOkAfterInputSuccess(bool IsAutoOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.SetAutoOutOkAfterInputSuccess");

	UWBP_QTEFreeCommand_C_SetAutoOutOkAfterInputSuccess_Params params;
	params.IsAutoOut = IsAutoOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.SetTimeGaugeRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTEFreeCommand_C::SetTimeGaugeRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.SetTimeGaugeRate");

	UWBP_QTEFreeCommand_C_SetTimeGaugeRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.IsPlayingOut
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTEFreeCommand_C::IsPlayingOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.IsPlayingOut");

	UWBP_QTEFreeCommand_C_IsPlayingOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.IsPlayingIn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTEFreeCommand_C::IsPlayingIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.IsPlayingIn");

	UWBP_QTEFreeCommand_C_IsPlayingIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.PlayOutNg
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTEFreeCommand_C::PlayOutNg()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.PlayOutNg");

	UWBP_QTEFreeCommand_C_PlayOutNg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.PlayOutOk
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTEFreeCommand_C::PlayOutOk()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.PlayOutOk");

	UWBP_QTEFreeCommand_C_PlayOutOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.PlayIn
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QTEFreeCommand_C::PlayIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.PlayIn");

	UWBP_QTEFreeCommand_C_PlayIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.IsPlayingInputSuccess
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTEFreeCommand_C::IsPlayingInputSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.IsPlayingInputSuccess");

	UWBP_QTEFreeCommand_C_IsPlayingInputSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.ResetAllButtonZOrder
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_QTEFreeCommand_C::ResetAllButtonZOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.ResetAllButtonZOrder");

	UWBP_QTEFreeCommand_C_ResetAllButtonZOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.ResetButtonZOrder
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_QTEFreeCommandButton_C* TargetButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTEFreeCommand_C::ResetButtonZOrder(class UWBP_QTEFreeCommandButton_C* TargetButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.ResetButtonZOrder");

	UWBP_QTEFreeCommand_C_ResetButtonZOrder_Params params;
	params.TargetButton = TargetButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.SetButtonZOrderToFront
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_QTEFreeCommandButton_C* TargetButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTEFreeCommand_C::SetButtonZOrderToFront(class UWBP_QTEFreeCommandButton_C* TargetButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.SetButtonZOrderToFront");

	UWBP_QTEFreeCommand_C_SetButtonZOrderToFront_Params params;
	params.TargetButton = TargetButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.SetupButtonImages
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QTEFreeCommand_C::SetupButtonImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.SetupButtonImages");

	UWBP_QTEFreeCommand_C_SetupButtonImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.PlayInputSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAutoHide                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTEFreeCommand_C::PlayInputSuccess(const struct FName& InputName, bool IsAutoHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.PlayInputSuccess");

	UWBP_QTEFreeCommand_C_PlayInputSuccess_Params params;
	params.InputName = InputName;
	params.IsAutoHide = IsAutoHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_QTEFreeCommand_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.Reset");

	UWBP_QTEFreeCommand_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.GetButtonFromInputName
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_QTEFreeCommandButton_C* Button                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTEFreeCommand_C::GetButtonFromInputName(const struct FName& InputName, class UWBP_QTEFreeCommandButton_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.GetButtonFromInputName");

	UWBP_QTEFreeCommand_C_GetButtonFromInputName_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QTEFreeCommand_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.Construct");

	UWBP_QTEFreeCommand_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.OnButtonInputAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_QTEFreeCommand_C::OnButtonInputAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.OnButtonInputAnimationFinished");

	UWBP_QTEFreeCommand_C_OnButtonInputAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.BndEvt__Outro_Success_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UWBP_QTEFreeCommand_C::BndEvt__Outro_Success_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.BndEvt__Outro_Success_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UWBP_QTEFreeCommand_C_BndEvt__Outro_Success_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.BndEvt__Outro_Failure_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UWBP_QTEFreeCommand_C::BndEvt__Outro_Failure_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.BndEvt__Outro_Failure_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UWBP_QTEFreeCommand_C_BndEvt__Outro_Failure_K2Node_ComponentBoundEvent_4_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.ExecuteUbergraph_WBP_QTEFreeCommand
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTEFreeCommand_C::ExecuteUbergraph_WBP_QTEFreeCommand(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.ExecuteUbergraph_WBP_QTEFreeCommand");

	UWBP_QTEFreeCommand_C_ExecuteUbergraph_WBP_QTEFreeCommand_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.OnOutAnimationFinishedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_QTEFreeCommand_C::OnOutAnimationFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.OnOutAnimationFinishedDispatcher__DelegateSignature");

	UWBP_QTEFreeCommand_C_OnOutAnimationFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.OnInAnimationFinishedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_QTEFreeCommand_C::OnInAnimationFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.OnInAnimationFinishedDispatcher__DelegateSignature");

	UWBP_QTEFreeCommand_C_OnInAnimationFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_QTEFreeCommand_C::OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTEFreeCommand.WBP_QTEFreeCommand_C.OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature");

	UWBP_QTEFreeCommand_C_OnCurrentAnimationPlayListFinishedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
