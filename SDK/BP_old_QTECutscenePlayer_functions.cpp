
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

// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.DebugIsEnabledToSkip
// (NetResponse, NetMulticast, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_old_QTECutscenePlayer_C::DebugIsEnabledToSkip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.DebugIsEnabledToSkip");

	ABP_old_QTECutscenePlayer_C_DebugIsEnabledToSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.SetQTEInputLimitTime
// (Net, NetReliable, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          limitTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTECutscenePlayer_C::STATIC_SetQTEInputLimitTime(float limitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.SetQTEInputLimitTime");

	ABP_old_QTECutscenePlayer_C_SetQTEInputLimitTime_Params params;
	params.limitTime = limitTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.IsUseEndFadeIn
// (Net, NetRequest, Native, NetResponse, Static, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsUseFade                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTECutscenePlayer_C::STATIC_IsUseEndFadeIn(bool* IsUseFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.IsUseEndFadeIn");

	ABP_old_QTECutscenePlayer_C_IsUseEndFadeIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUseFade != nullptr)
		*IsUseFade = params.IsUseFade;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.GetQTEResult
// (Net, Native, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_old_QTECutscenePlayer_C::GetQTEResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.GetQTEResult");

	ABP_old_QTECutscenePlayer_C_GetQTEResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.SetCurrentRestartPoint
// (NetRequest, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  RestartPoint                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTECutscenePlayer_C::STATIC_SetCurrentRestartPoint(class AActor* RestartPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.SetCurrentRestartPoint");

	ABP_old_QTECutscenePlayer_C_SetCurrentRestartPoint_Params params;
	params.RestartPoint = RestartPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.Restart
// (Exec, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_old_QTECutscenePlayer_C::Restart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.Restart");

	ABP_old_QTECutscenePlayer_C_Restart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.DebugSkipToEnd
// (NetRequest, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTECutscenePlayer_C::DebugSkipToEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.DebugSkipToEnd");

	ABP_old_QTECutscenePlayer_C_DebugSkipToEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.ExitCutscene
// (NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTECutscenePlayer_C::ExitCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.ExitCutscene");

	ABP_old_QTECutscenePlayer_C_ExitCutscene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.SetupSequence
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            QTESequenceIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTECutscenePlayer_C::STATIC_SetupSequence(int QTESequenceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.SetupSequence");

	ABP_old_QTECutscenePlayer_C_SetupSequence_Params params;
	params.QTESequenceIndex = QTESequenceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.Retry
// (NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_old_QTECutscenePlayer_C::STATIC_Retry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.Retry");

	ABP_old_QTECutscenePlayer_C_Retry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.UpdatePlayingSequenceToRetry
// (Event, NetResponse, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTECutscenePlayer_C::UpdatePlayingSequenceToRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.UpdatePlayingSequenceToRetry");

	ABP_old_QTECutscenePlayer_C_UpdatePlayingSequenceToRetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.IsExistQTEInCurrent
// (Net, NetRequest, Static, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_old_QTECutscenePlayer_C::STATIC_IsExistQTEInCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.IsExistQTEInCurrent");

	ABP_old_QTECutscenePlayer_C_IsExistQTEInCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.UpdatePlayingIntervalSequence
// (NetReliable, Native, Event, Static, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_old_QTECutscenePlayer_C::STATIC_UpdatePlayingIntervalSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.UpdatePlayingIntervalSequence");

	ABP_old_QTECutscenePlayer_C_UpdatePlayingIntervalSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.IsExistNextLevelSequence
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_old_QTECutscenePlayer_C::IsExistNextLevelSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.IsExistNextLevelSequence");

	ABP_old_QTECutscenePlayer_C_IsExistNextLevelSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.EndIntervalSequence
// (NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTECutscenePlayer_C::EndIntervalSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.EndIntervalSequence");

	ABP_old_QTECutscenePlayer_C_EndIntervalSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InitQTESequence
// (Exec, NetResponse, Static, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTECutscenePlayer_C::STATIC_InitQTESequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InitQTESequence");

	ABP_old_QTECutscenePlayer_C_InitQTESequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.PlaySequence
// (NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTECutscenePlayer_C::PlaySequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.PlaySequence");

	ABP_old_QTECutscenePlayer_C_PlaySequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InitCutscene
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTECutscenePlayer_C::STATIC_InitCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InitCutscene");

	ABP_old_QTECutscenePlayer_C_InitCutscene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.UserConstructionScript
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_old_QTECutscenePlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.UserConstructionScript");

	ABP_old_QTECutscenePlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16
// (NetRequest, Native, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTECutscenePlayer_C::InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16");

	ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15
// (Net, NetReliable, Native, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTECutscenePlayer_C::InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15");

	ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14
// (NetReliable, Native, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTECutscenePlayer_C::InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14");

	ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13
// (Net, Native, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTECutscenePlayer_C::InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13");

	ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_Top_K2Node_InputActionEvent_12
// (Net, Native, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTECutscenePlayer_C::InpActEvt_QTE_Top_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_Top_K2Node_InputActionEvent_12");

	ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_Top_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11
// (Native, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTECutscenePlayer_C::InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11");

	ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_Left_K2Node_InputActionEvent_10
// (NetReliable, NetRequest, Exec, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTECutscenePlayer_C::InpActEvt_QTE_Left_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_Left_K2Node_InputActionEvent_10");

	ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_Left_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_Right_K2Node_InputActionEvent_9
// (Net, NetReliable, NetRequest, Exec, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTECutscenePlayer_C::InpActEvt_QTE_Right_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_Right_K2Node_InputActionEvent_9");

	ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_Right_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.ReceiveTick
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTECutscenePlayer_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.ReceiveTick");

	ABP_old_QTECutscenePlayer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.Event_InputStart
// (NetReliable, NetRequest, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTECutscenePlayer_C::STATIC_Event_InputStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.Event_InputStart");

	ABP_old_QTECutscenePlayer_C_Event_InputStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.Event_InputEnd
// (Net, NetRequest, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTECutscenePlayer_C::STATIC_Event_InputEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.Event_InputEnd");

	ABP_old_QTECutscenePlayer_C_Event_InputEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.ExecuteUbergraph_BP_old_QTECutscenePlayer
// (NetRequest, Native, Event, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTECutscenePlayer_C::ExecuteUbergraph_BP_old_QTECutscenePlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.ExecuteUbergraph_BP_old_QTECutscenePlayer");

	ABP_old_QTECutscenePlayer_C_ExecuteUbergraph_BP_old_QTECutscenePlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
