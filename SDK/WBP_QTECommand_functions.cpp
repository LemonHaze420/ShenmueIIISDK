
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

// Function WBP_QTECommand.WBP_QTECommand_C.GetInAnimationLength
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWBP_QTECommand_C::STATIC_GetInAnimationLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.GetInAnimationLength");

	UWBP_QTECommand_C_GetInAnimationLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTECommand.WBP_QTECommand_C.StartWaitTime
// (Exec, Native, Static, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTECommand_C::STATIC_StartWaitTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.StartWaitTime");

	UWBP_QTECommand_C_StartWaitTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommand.WBP_QTECommand_C.Update
// (Exec, Native, Event, NetResponse, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTECommand_C::Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.Update");

	UWBP_QTECommand_C_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommand.WBP_QTECommand_C.SetUseRealTime
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           UseRealTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTECommand_C::STATIC_SetUseRealTime(bool UseRealTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.SetUseRealTime");

	UWBP_QTECommand_C_SetUseRealTime_Params params;
	params.UseRealTime = UseRealTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommand.WBP_QTECommand_C.InstantHideBack
// (Net, NetReliable, NetRequest, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UWBP_QTECommand_C::InstantHideBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.InstantHideBack");

	UWBP_QTECommand_C_InstantHideBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommand.WBP_QTECommand_C.IsPlayingInputSuccess
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTECommand_C::STATIC_IsPlayingInputSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.IsPlayingInputSuccess");

	UWBP_QTECommand_C_IsPlayingInputSuccess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTECommand.WBP_QTECommand_C.IsPlayingInstructions
// (NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_QTECommand_C::STATIC_IsPlayingInstructions()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.IsPlayingInstructions");

	UWBP_QTECommand_C_IsPlayingInstructions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_QTECommand.WBP_QTECommand_C.ResetAllButtonZOrder
// (NetReliable, Static, NetMulticast, Public, Private, Protected, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UWBP_QTECommand_C::STATIC_ResetAllButtonZOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.ResetAllButtonZOrder");

	UWBP_QTECommand_C_ResetAllButtonZOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommand.WBP_QTECommand_C.ResetButtonZOrder
// (NetReliable, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_QTECommandButton_C* TargetButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTECommand_C::ResetButtonZOrder(class UWBP_QTECommandButton_C* TargetButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.ResetButtonZOrder");

	UWBP_QTECommand_C_ResetButtonZOrder_Params params;
	params.TargetButton = TargetButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommand.WBP_QTECommand_C.SetButtonZOrderToFront
// (Net, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_QTECommandButton_C* TargetButton                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTECommand_C::SetButtonZOrderToFront(class UWBP_QTECommandButton_C* TargetButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.SetButtonZOrderToFront");

	UWBP_QTECommand_C_SetButtonZOrderToFront_Params params;
	params.TargetButton = TargetButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommand.WBP_QTECommand_C.SetupButton
// (Net, NetReliable, NetRequest, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)

void UWBP_QTECommand_C::STATIC_SetupButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.SetupButton");

	UWBP_QTECommand_C_SetupButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommand.WBP_QTECommand_C.GetButtonImage
// (Native, NetResponse, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Image                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_QTECommand_C::GetButtonImage(const struct FName& InputName, class UTexture2D** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.GetButtonImage");

	UWBP_QTECommand_C_GetButtonImage_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Image != nullptr)
		*Image = params.Image;
}


// Function WBP_QTECommand.WBP_QTECommand_C.PlayInputSuccess
// (NetRequest, Exec, Native, Static, MulticastDelegate, Protected, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAutoHide                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTECommand_C::STATIC_PlayInputSuccess(const struct FName& InputName, bool IsAutoHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.PlayInputSuccess");

	UWBP_QTECommand_C_PlayInputSuccess_Params params;
	params.InputName = InputName;
	params.IsAutoHide = IsAutoHide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommand.WBP_QTECommand_C.PlayOutBack
// (Net, NetRequest, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UWBP_QTECommand_C::STATIC_PlayOutBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.PlayOutBack");

	UWBP_QTECommand_C_PlayOutBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommand.WBP_QTECommand_C.GetCurrentInstructionButton
// (NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_QTECommandButton_C* Button                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTECommand_C::STATIC_GetCurrentInstructionButton(class UWBP_QTECommandButton_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.GetCurrentInstructionButton");

	UWBP_QTECommand_C_GetCurrentInstructionButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;
}


// Function WBP_QTECommand.WBP_QTECommand_C.PlayInstructions
// (Exec, Native, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FName>           Inputs                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_QTECommand_C::STATIC_PlayInstructions(TArray<struct FName>* Inputs)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.PlayInstructions");

	UWBP_QTECommand_C_PlayInstructions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inputs != nullptr)
		*Inputs = params.Inputs;
}


// Function WBP_QTECommand.WBP_QTECommand_C.Reset
// (NetReliable, NetRequest, Event, NetResponse, MulticastDelegate, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)

void UWBP_QTECommand_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.Reset");

	UWBP_QTECommand_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommand.WBP_QTECommand_C.GetButtonFromInputName
// (NetReliable, Native, Event, Static, NetMulticast, Public, Private, Protected, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_QTECommandButton_C* Button                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QTECommand_C::STATIC_GetButtonFromInputName(const struct FName& InputName, class UWBP_QTECommandButton_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.GetButtonFromInputName");

	UWBP_QTECommand_C_GetButtonFromInputName_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;
}


// Function WBP_QTECommand.WBP_QTECommand_C.Construct
// (Net, NetReliable, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UWBP_QTECommand_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.Construct");

	UWBP_QTECommand_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommand.WBP_QTECommand_C.Tick
// (NetRequest, Event, NetResponse, Static, NetMulticast, Public, Private, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTECommand_C::STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.Tick");

	UWBP_QTECommand_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommand.WBP_QTECommand_C.OnButtonInstructionAnimationFinished
// (NetReliable, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UWBP_QTECommand_C::OnButtonInstructionAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.OnButtonInstructionAnimationFinished");

	UWBP_QTECommand_C_OnButtonInstructionAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommand.WBP_QTECommand_C.OnButtonInputAnimationFinished
// (NetReliable, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UWBP_QTECommand_C::OnButtonInputAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.OnButtonInputAnimationFinished");

	UWBP_QTECommand_C_OnButtonInputAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommand.WBP_QTECommand_C.OnOutBackAnimationFinished
// (Net, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UWBP_QTECommand_C::OnOutBackAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.OnOutBackAnimationFinished");

	UWBP_QTECommand_C_OnOutBackAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommand.WBP_QTECommand_C.PlayFirstInstruction
// (Net, Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UWBP_QTECommand_C::PlayFirstInstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.PlayFirstInstruction");

	UWBP_QTECommand_C_PlayFirstInstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommand.WBP_QTECommand_C.OnWaitTimeFinishedAfterPlayAnim
// (Public, Protected, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UWBP_QTECommand_C::OnWaitTimeFinishedAfterPlayAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.OnWaitTimeFinishedAfterPlayAnim");

	UWBP_QTECommand_C_OnWaitTimeFinishedAfterPlayAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommand.WBP_QTECommand_C.OnWaitTimeFinishedBeforeOutBack
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UWBP_QTECommand_C::STATIC_OnWaitTimeFinishedBeforeOutBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.OnWaitTimeFinishedBeforeOutBack");

	UWBP_QTECommand_C_OnWaitTimeFinishedBeforeOutBack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommand.WBP_QTECommand_C.ExecuteUbergraph_WBP_QTECommand
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QTECommand_C::STATIC_ExecuteUbergraph_WBP_QTECommand(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.ExecuteUbergraph_WBP_QTECommand");

	UWBP_QTECommand_C_ExecuteUbergraph_WBP_QTECommand_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommand.WBP_QTECommand_C.OnWaitTimeFinished__DelegateSignature
// (Net, NetReliable, NetRequest, NetResponse, Public, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UWBP_QTECommand_C::OnWaitTimeFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.OnWaitTimeFinished__DelegateSignature");

	UWBP_QTECommand_C_OnWaitTimeFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QTECommand.WBP_QTECommand_C.OnInstructionFinished__DelegateSignature
// (NetRequest, Exec, Event, Static, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UWBP_QTECommand_C::STATIC_OnInstructionFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QTECommand.WBP_QTECommand_C.OnInstructionFinished__DelegateSignature");

	UWBP_QTECommand_C_OnInstructionFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
