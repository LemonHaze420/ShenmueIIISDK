
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

// Function BP_S3DetectAction.BP_S3DetectAction_C.NewInfoEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              ButtonImageType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3DetectAction_C::NewInfoEffect(ES3ActionIconType ButtonImageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.NewInfoEffect");

	ABP_S3DetectAction_C_NewInfoEffect_Params params;
	params.ButtonImageType = ButtonImageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.IsActionGlobalForbidden
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3DetectAction_C::IsActionGlobalForbidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.IsActionGlobalForbidden");

	ABP_S3DetectAction_C_IsActionGlobalForbidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.IsHelpIconBlink
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isBlink                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3DetectAction_C::IsHelpIconBlink(bool* isBlink)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.IsHelpIconBlink");

	ABP_S3DetectAction_C_IsHelpIconBlink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isBlink != nullptr)
		*isBlink = params.isBlink;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.BlinkHelpIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           End                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3DetectAction_C::BlinkHelpIcon(bool End)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.BlinkHelpIcon");

	ABP_S3DetectAction_C_BlinkHelpIcon_Params params;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.RestoreInputPriority
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3DetectAction_C::RestoreInputPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.RestoreInputPriority");

	ABP_S3DetectAction_C_RestoreInputPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.ChangeInputPriority
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewPriority                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3DetectAction_C::ChangeInputPriority(int NewPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.ChangeInputPriority");

	ABP_S3DetectAction_C_ChangeInputPriority_Params params;
	params.NewPriority = NewPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.GetSelectedButtonActionProcess
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FS3DetectActionParam    OutProcess                     (Parm, OutParm)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3DetectAction_C::GetSelectedButtonActionProcess(int InIndex, struct FS3DetectActionParam* OutProcess, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.GetSelectedButtonActionProcess");

	ABP_S3DetectAction_C_GetSelectedButtonActionProcess_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutProcess != nullptr)
		*OutProcess = params.OutProcess;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.GetButtonActionProcesses
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FS3DetectActionParam> OutProcesses                   (Parm, OutParm, ZeroConstructor)

void ABP_S3DetectAction_C::GetButtonActionProcesses(int InIndex, TArray<struct FS3DetectActionParam>* OutProcesses)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.GetButtonActionProcesses");

	ABP_S3DetectAction_C_GetButtonActionProcesses_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutProcesses != nullptr)
		*OutProcesses = params.OutProcesses;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.InputButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActionSuccess                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3DetectAction_C::InputButton(int InIndex, bool* bActionSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.InputButton");

	ABP_S3DetectAction_C_InputButton_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bActionSuccess != nullptr)
		*bActionSuccess = params.bActionSuccess;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.IsDetectedActor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3DetectAction_C::IsDetectedActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.IsDetectedActor");

	ABP_S3DetectAction_C_IsDetectedActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.SetWidgetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3DetectAction_C::SetWidgetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.SetWidgetVisible");

	ABP_S3DetectAction_C_SetWidgetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.AttachPlayer
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           succes                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3DetectAction_C::AttachPlayer(bool* succes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.AttachPlayer");

	ABP_S3DetectAction_C_AttachPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (succes != nullptr)
		*succes = params.succes;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.AddDetectActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Unregister                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3DetectAction_C::AddDetectActor(class AActor* OtherActor, bool Unregister)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.AddDetectActor");

	ABP_S3DetectAction_C_AddDetectActor_Params params;
	params.OtherActor = OtherActor;
	params.Unregister = Unregister;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.PlayDetectSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3DetectAction_C::PlayDetectSound(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.PlayDetectSound");

	ABP_S3DetectAction_C_PlayDetectSound_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.InitWidget
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3DetectAction_C::InitWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.InitWidget");

	ABP_S3DetectAction_C_InitWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3DetectAction_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.UserConstructionScript");

	ABP_S3DetectAction_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3DetectAction_C::InpActEvt_SearchBottomButton_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_10");

	ABP_S3DetectAction_C_InpActEvt_SearchBottomButton_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3DetectAction_C::InpActEvt_SearchRightButton_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_9");

	ABP_S3DetectAction_C_InpActEvt_SearchRightButton_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.InpActEvt_SearchLeftButton_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3DetectAction_C::InpActEvt_SearchLeftButton_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.InpActEvt_SearchLeftButton_K2Node_InputActionEvent_8");

	ABP_S3DetectAction_C_InpActEvt_SearchLeftButton_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.InpActEvt_SearchTopButton_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3DetectAction_C::InpActEvt_SearchTopButton_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.InpActEvt_SearchTopButton_K2Node_InputActionEvent_7");

	ABP_S3DetectAction_C_InpActEvt_SearchTopButton_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.InpActEvt_Menu_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3DetectAction_C::InpActEvt_Menu_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.InpActEvt_Menu_K2Node_InputActionEvent_6");

	ABP_S3DetectAction_C_InpActEvt_Menu_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.InpActEvt_Ctrl+Alt_NumPadNine_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3DetectAction_C::InpActEvt_Ctrl_Alt_NumPadNine_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.InpActEvt_Ctrl+Alt_NumPadNine_K2Node_InputKeyEvent_2");

	ABP_S3DetectAction_C_InpActEvt_Ctrl_Alt_NumPadNine_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3DetectAction_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.ReceiveBeginPlay");

	ABP_S3DetectAction_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.delayedFirstAttach
// (BlueprintCallable, BlueprintEvent)

void ABP_S3DetectAction_C::delayedFirstAttach()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.delayedFirstAttach");

	ABP_S3DetectAction_C_delayedFirstAttach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.UpdateButton
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3DetectAction_C::UpdateButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.UpdateButton");

	ABP_S3DetectAction_C_UpdateButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.OnStartBS
// (Event, Public, BlueprintEvent)
// Parameters:
// class AS3Character*            TalkableActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3DetectAction_C::OnStartBS(class AS3Character* TalkableActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.OnStartBS");

	ABP_S3DetectAction_C_OnStartBS_Params params;
	params.TalkableActor = TalkableActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.OnEndTalk
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3DetectAction_C::OnEndTalk(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.OnEndTalk");

	ABP_S3DetectAction_C_OnEndTalk_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.StartInputCooldown
// (BlueprintCallable, BlueprintEvent)

void ABP_S3DetectAction_C::StartInputCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.StartInputCooldown");

	ABP_S3DetectAction_C_StartInputCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3DetectAction.BP_S3DetectAction_C.ExecuteUbergraph_BP_S3DetectAction
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3DetectAction_C::ExecuteUbergraph_BP_S3DetectAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3DetectAction.BP_S3DetectAction_C.ExecuteUbergraph_BP_S3DetectAction");

	ABP_S3DetectAction_C_ExecuteUbergraph_BP_S3DetectAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
