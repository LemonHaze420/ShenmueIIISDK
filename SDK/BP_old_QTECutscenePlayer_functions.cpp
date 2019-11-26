
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
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
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
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          limitTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTECutscenePlayer_C::SetQTEInputLimitTime(float limitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.SetQTEInputLimitTime");

	ABP_old_QTECutscenePlayer_C_SetQTEInputLimitTime_Params params;
	params.limitTime = limitTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.IsUseEndFadeIn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsUseFade                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTECutscenePlayer_C::IsUseEndFadeIn(bool* IsUseFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.IsUseEndFadeIn");

	ABP_old_QTECutscenePlayer_C_IsUseEndFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsUseFade != nullptr)
		*IsUseFade = params.IsUseFade;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.GetQTEResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_old_QTECutscenePlayer_C::GetQTEResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.GetQTEResult");

	ABP_old_QTECutscenePlayer_C_GetQTEResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.SetCurrentRestartPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  RestartPoint                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTECutscenePlayer_C::SetCurrentRestartPoint(class AActor* RestartPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.SetCurrentRestartPoint");

	ABP_old_QTECutscenePlayer_C_SetCurrentRestartPoint_Params params;
	params.RestartPoint = RestartPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.Restart
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_old_QTECutscenePlayer_C::Restart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.Restart");

	ABP_old_QTECutscenePlayer_C_Restart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.DebugSkipToEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_old_QTECutscenePlayer_C::DebugSkipToEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.DebugSkipToEnd");

	ABP_old_QTECutscenePlayer_C_DebugSkipToEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.ExitCutscene
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_old_QTECutscenePlayer_C::ExitCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.ExitCutscene");

	ABP_old_QTECutscenePlayer_C_ExitCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.SetupSequence
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            QTESequenceIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTECutscenePlayer_C::SetupSequence(int QTESequenceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.SetupSequence");

	ABP_old_QTECutscenePlayer_C_SetupSequence_Params params;
	params.QTESequenceIndex = QTESequenceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.Retry
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_old_QTECutscenePlayer_C::Retry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.Retry");

	ABP_old_QTECutscenePlayer_C_Retry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.UpdatePlayingSequenceToRetry
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_old_QTECutscenePlayer_C::UpdatePlayingSequenceToRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.UpdatePlayingSequenceToRetry");

	ABP_old_QTECutscenePlayer_C_UpdatePlayingSequenceToRetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.IsExistQTEInCurrent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_old_QTECutscenePlayer_C::IsExistQTEInCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.IsExistQTEInCurrent");

	ABP_old_QTECutscenePlayer_C_IsExistQTEInCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.UpdatePlayingIntervalSequence
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_old_QTECutscenePlayer_C::UpdatePlayingIntervalSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.UpdatePlayingIntervalSequence");

	ABP_old_QTECutscenePlayer_C_UpdatePlayingIntervalSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.IsExistNextLevelSequence
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_old_QTECutscenePlayer_C::IsExistNextLevelSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.IsExistNextLevelSequence");

	ABP_old_QTECutscenePlayer_C_IsExistNextLevelSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.EndIntervalSequence
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_old_QTECutscenePlayer_C::EndIntervalSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.EndIntervalSequence");

	ABP_old_QTECutscenePlayer_C_EndIntervalSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InitQTESequence
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_old_QTECutscenePlayer_C::InitQTESequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InitQTESequence");

	ABP_old_QTECutscenePlayer_C_InitQTESequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.PlaySequence
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_old_QTECutscenePlayer_C::PlaySequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.PlaySequence");

	ABP_old_QTECutscenePlayer_C_PlaySequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InitCutscene
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_old_QTECutscenePlayer_C::InitCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InitCutscene");

	ABP_old_QTECutscenePlayer_C_InitCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_old_QTECutscenePlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.UserConstructionScript");

	ABP_old_QTECutscenePlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTECutscenePlayer_C::InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16");

	ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTECutscenePlayer_C::InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15");

	ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTECutscenePlayer_C::InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14");

	ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTECutscenePlayer_C::InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13");

	ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_Top_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTECutscenePlayer_C::InpActEvt_QTE_Top_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_Top_K2Node_InputActionEvent_12");

	ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_Top_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTECutscenePlayer_C::InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11");

	ABP_old_QTECutscenePlayer_C_InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.InpActEvt_QTE_Left_K2Node_InputActionEvent_10
// (BlueprintEvent)
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
// (BlueprintEvent)
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
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTECutscenePlayer_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.ReceiveTick");

	ABP_old_QTECutscenePlayer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.Event_InputStart
// (BlueprintCallable, BlueprintEvent)

void ABP_old_QTECutscenePlayer_C::Event_InputStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.Event_InputStart");

	ABP_old_QTECutscenePlayer_C_Event_InputStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.Event_InputEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_old_QTECutscenePlayer_C::Event_InputEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.Event_InputEnd");

	ABP_old_QTECutscenePlayer_C_Event_InputEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.ExecuteUbergraph_BP_old_QTECutscenePlayer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTECutscenePlayer_C::ExecuteUbergraph_BP_old_QTECutscenePlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C.ExecuteUbergraph_BP_old_QTECutscenePlayer");

	ABP_old_QTECutscenePlayer_C_ExecuteUbergraph_BP_old_QTECutscenePlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
