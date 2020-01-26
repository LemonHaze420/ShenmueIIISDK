
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

// Function BP_S3actionSelect.BP_S3actionSelect_C.Disable_StickIn
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3actionSelect_C::Disable_StickIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.Disable_StickIn");

	ABP_S3actionSelect_C_Disable_StickIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_TimeOver
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3actionSelect_C::doCmd_TimeOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_TimeOver");

	ABP_S3actionSelect_C_doCmd_TimeOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.degreeToPadinput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          degree                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_padSwitch>      Input                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           isInput                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3actionSelect_C::degreeToPadinput(float degree, TEnumAsByte<EN_padSwitch>* Input, bool* isInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.degreeToPadinput");

	ABP_S3actionSelect_C_degreeToPadinput_Params params;
	params.degree = degree;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Input != nullptr)
		*Input = params.Input;
	if (isInput != nullptr)
		*isInput = params.isInput;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_cancelTimer
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3actionSelect_C::doCmd_cancelTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_cancelTimer");

	ABP_S3actionSelect_C_doCmd_cancelTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.catch_onTimeover
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3actionSelect_C::catch_onTimeover()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.catch_onTimeover");

	ABP_S3actionSelect_C_catch_onTimeover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_pauseTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Pause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3actionSelect_C::doCmd_pauseTimer(bool Pause)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_pauseTimer");

	ABP_S3actionSelect_C_doCmd_pauseTimer_Params params;
	params.Pause = Pause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_startTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3actionSelect_C::doCmd_startTimer(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_startTimer");

	ABP_S3actionSelect_C_doCmd_startTimer_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_sendInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_padSwitch>      Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Press                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3actionSelect_C::doCmd_sendInput(TEnumAsByte<EN_padSwitch> Button, bool Press)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_sendInput");

	ABP_S3actionSelect_C_doCmd_sendInput_Params params;
	params.Button = Button;
	params.Press = Press;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_setText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3actionSelect_C::doCmd_setText(int Index, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_setText");

	ABP_S3actionSelect_C_doCmd_setText_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_changeText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3actionSelect_C::doCmd_changeText(int Index, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_changeText");

	ABP_S3actionSelect_C_doCmd_changeText_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_addItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3actionSelect_C::doCmd_addItem(int Index, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_addItem");

	ABP_S3actionSelect_C_doCmd_addItem_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_cancelSelection
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3actionSelect_C::doCmd_cancelSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_cancelSelection");

	ABP_S3actionSelect_C_doCmd_cancelSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_startSelection
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3actionSelect_C::doCmd_startSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.doCmd_startSelection");

	ABP_S3actionSelect_C_doCmd_startSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.catch_onEndFinishSelection
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3actionSelect_C::catch_onEndFinishSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.catch_onEndFinishSelection");

	ABP_S3actionSelect_C_catch_onEndFinishSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.catch_onEndStartSelection
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3actionSelect_C::catch_onEndStartSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.catch_onEndStartSelection");

	ABP_S3actionSelect_C_catch_onEndStartSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.catch_onSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3actionSelect_C::catch_onSelected(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.catch_onSelected");

	ABP_S3actionSelect_C_catch_onSelected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3actionSelect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.UserConstructionScript");

	ABP_S3actionSelect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3actionSelect_C::InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8");

	ABP_S3actionSelect_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3actionSelect_C::InpActEvt_SearchRightSelect_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_7");

	ABP_S3actionSelect_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3actionSelect_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_6");

	ABP_S3actionSelect_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3actionSelect_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_5");

	ABP_S3actionSelect_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3actionSelect_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1");

	ABP_S3actionSelect_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3actionSelect_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2");

	ABP_S3actionSelect_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3actionSelect_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.ReceiveBeginPlay");

	ABP_S3actionSelect_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.OnPressedUp
// (BlueprintCallable, BlueprintEvent)

void ABP_S3actionSelect_C::OnPressedUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.OnPressedUp");

	ABP_S3actionSelect_C_OnPressedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.OnPressedLeft
// (BlueprintCallable, BlueprintEvent)

void ABP_S3actionSelect_C::OnPressedLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.OnPressedLeft");

	ABP_S3actionSelect_C_OnPressedLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.OnPressedRight
// (BlueprintCallable, BlueprintEvent)

void ABP_S3actionSelect_C::OnPressedRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.OnPressedRight");

	ABP_S3actionSelect_C_OnPressedRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.OnPressedDown
// (BlueprintCallable, BlueprintEvent)

void ABP_S3actionSelect_C::OnPressedDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.OnPressedDown");

	ABP_S3actionSelect_C_OnPressedDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.OnAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void ABP_S3actionSelect_C::OnAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.OnAnimationFinished");

	ABP_S3actionSelect_C_OnAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3actionSelect_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.ReceiveEndPlay");

	ABP_S3actionSelect_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3actionSelect_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.ReceiveTick");

	ABP_S3actionSelect_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.EvtSizeSetEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_S3actionSelect_C::EvtSizeSetEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.EvtSizeSetEnd");

	ABP_S3actionSelect_C_EvtSizeSetEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.ExecuteUbergraph_BP_S3actionSelect
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3actionSelect_C::ExecuteUbergraph_BP_S3actionSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.ExecuteUbergraph_BP_S3actionSelect");

	ABP_S3actionSelect_C_ExecuteUbergraph_BP_S3actionSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.onTimerover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_S3actionSelect_C::onTimerover__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.onTimerover__DelegateSignature");

	ABP_S3actionSelect_C_onTimerover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.command_startSelection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_S3actionSelect_C::command_startSelection__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.command_startSelection__DelegateSignature");

	ABP_S3actionSelect_C_command_startSelection__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.onEndStartSelection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_S3actionSelect_C::onEndStartSelection__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.onEndStartSelection__DelegateSignature");

	ABP_S3actionSelect_C_onEndStartSelection__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3actionSelect.BP_S3actionSelect_C.onSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3actionSelect_C::onSelected__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3actionSelect.BP_S3actionSelect_C.onSelected__DelegateSignature");

	ABP_S3actionSelect_C_onSelected__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
