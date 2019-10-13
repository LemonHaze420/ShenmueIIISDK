
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

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.CanSkip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_QTECutscenePlayer_C::CanSkip(bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.CanSkip");

	ABP_QTECutscenePlayer_C_CanSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UpdateQTEAnimationState
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::UpdateQTEAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UpdateQTEAnimationState");

	ABP_QTECutscenePlayer_C_UpdateQTEAnimationState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.DebugSetIsQTEForceSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bForceSuccess                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QTECutscenePlayer_C::DebugSetIsQTEForceSuccess(bool bForceSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.DebugSetIsQTEForceSuccess");

	ABP_QTECutscenePlayer_C_DebugSetIsQTEForceSuccess_Params params;
	params.bForceSuccess = bForceSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.OnFinishedQTELevelSequencePlayer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*    LevelSequencePlayer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QTECutscenePlayer_C::OnFinishedQTELevelSequencePlayer(class ULevelSequencePlayer* LevelSequencePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.OnFinishedQTELevelSequencePlayer");

	ABP_QTECutscenePlayer_C_OnFinishedQTELevelSequencePlayer_Params params;
	params.LevelSequencePlayer = LevelSequencePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.GetCurrentRetryCount
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ULevelSequence*          InLevelSequence                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_QTECutscenePlayer_C::GetCurrentRetryCount(class ULevelSequence* InLevelSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.GetCurrentRetryCount");

	ABP_QTECutscenePlayer_C_GetCurrentRetryCount_Params params;
	params.InLevelSequence = InLevelSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.DebugIsEnableToSkip
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_QTECutscenePlayer_C::DebugIsEnableToSkip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.DebugIsEnableToSkip");

	ABP_QTECutscenePlayer_C_DebugIsEnableToSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.EndSubSequence
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::EndSubSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.EndSubSequence");

	ABP_QTECutscenePlayer_C_EndSubSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.PlaySubSequence
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::PlaySubSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.PlaySubSequence");

	ABP_QTECutscenePlayer_C_PlaySubSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.FinalizeSubSequenceActor
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::FinalizeSubSequenceActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.FinalizeSubSequenceActor");

	ABP_QTECutscenePlayer_C_FinalizeSubSequenceActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InitializeSubSequenceActor
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::InitializeSubSequenceActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InitializeSubSequenceActor");

	ABP_QTECutscenePlayer_C_InitializeSubSequenceActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.SetupNextLevelSequence
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::SetupNextLevelSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.SetupNextLevelSequence");

	ABP_QTECutscenePlayer_C_SetupNextLevelSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UpdateLevelSequenceManually
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::UpdateLevelSequenceManually()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UpdateLevelSequenceManually");

	ABP_QTECutscenePlayer_C_UpdateLevelSequenceManually_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.SetupCurrentSequenceToRetryPoint
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::SetupCurrentSequenceToRetryPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.SetupCurrentSequenceToRetryPoint");

	ABP_QTECutscenePlayer_C_SetupCurrentSequenceToRetryPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.ExecuteRetry
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::ExecuteRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.ExecuteRetry");

	ABP_QTECutscenePlayer_C_ExecuteRetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UpdatePlayingSequenceToRetry
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::UpdatePlayingSequenceToRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UpdatePlayingSequenceToRetry");

	ABP_QTECutscenePlayer_C_UpdatePlayingSequenceToRetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.EndIntervalSequence
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::EndIntervalSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.EndIntervalSequence");

	ABP_QTECutscenePlayer_C_EndIntervalSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UpdatePlayingIntervalSequence
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::UpdatePlayingIntervalSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UpdatePlayingIntervalSequence");

	ABP_QTECutscenePlayer_C_UpdatePlayingIntervalSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.GetQTESingleRandomInputAction
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_QTECutscenePlayer_C::GetQTESingleRandomInputAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.GetQTESingleRandomInputAction");

	ABP_QTECutscenePlayer_C_GetQTESingleRandomInputAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.StartQTEInputSafeSlow
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RestLength                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          QTELengthBeforeCountTime       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          QTEInputLimitTime              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QTECutscenePlayer_C::StartQTEInputSafeSlow(float RestLength, float QTELengthBeforeCountTime, float QTEInputLimitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.StartQTEInputSafeSlow");

	ABP_QTECutscenePlayer_C_StartQTEInputSafeSlow_Params params;
	params.RestLength = RestLength;
	params.QTELengthBeforeCountTime = QTELengthBeforeCountTime;
	params.QTEInputLimitTime = QTEInputLimitTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.IsExistQTEInSequence
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FST_QTESequence         InQTESequence                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_QTECutscenePlayer_C::IsExistQTEInSequence(struct FST_QTESequence* InQTESequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.IsExistQTEInSequence");

	ABP_QTECutscenePlayer_C_IsExistQTEInSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InQTESequence != nullptr)
		*InQTESequence = params.InQTESequence;

	return params.ReturnValue;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.FindQTESequenceFromLevelSequence
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence*          InLevelSequence                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FoundIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_QTECutscenePlayer_C::FindQTESequenceFromLevelSequence(class ULevelSequence* InLevelSequence, int* FoundIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.FindQTESequenceFromLevelSequence");

	ABP_QTECutscenePlayer_C_FindQTESequenceFromLevelSequence_Params params;
	params.InLevelSequence = InLevelSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundIndex != nullptr)
		*FoundIndex = params.FoundIndex;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.GetLastQTEResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_QTECutscenePlayer_C::GetLastQTEResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.GetLastQTEResult");

	ABP_QTECutscenePlayer_C_GetLastQTEResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InputQTE
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InInputAction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QTECutscenePlayer_C::InputQTE(const struct FName& InInputAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InputQTE");

	ABP_QTECutscenePlayer_C_InputQTE_Params params;
	params.InInputAction = InInputAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.StartQTE
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::StartQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.StartQTE");

	ABP_QTECutscenePlayer_C_StartQTE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.SetupCurrentQTE
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::SetupCurrentQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.SetupCurrentQTE");

	ABP_QTECutscenePlayer_C_SetupCurrentQTE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.SetupCurrentSequenceFromIndex
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SequenceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QTECutscenePlayer_C::SetupCurrentSequenceFromIndex(int SequenceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.SetupCurrentSequenceFromIndex");

	ABP_QTECutscenePlayer_C_SetupCurrentSequenceFromIndex_Params params;
	params.SequenceIndex = SequenceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.FinalizeQTEComponent
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::FinalizeQTEComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.FinalizeQTEComponent");

	ABP_QTECutscenePlayer_C_FinalizeQTEComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InitializeQTEComponent
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::InitializeQTEComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InitializeQTEComponent");

	ABP_QTECutscenePlayer_C_InitializeQTEComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.DebugSkipToEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::DebugSkipToEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.DebugSkipToEnd");

	ABP_QTECutscenePlayer_C_DebugSkipToEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.EndSequence
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::EndSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.EndSequence");

	ABP_QTECutscenePlayer_C_EndSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.PlaySequence
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::PlaySequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.PlaySequence");

	ABP_QTECutscenePlayer_C_PlaySequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InitSequencePlay
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::InitSequencePlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InitSequencePlay");

	ABP_QTECutscenePlayer_C_InitSequencePlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.ExitCutscene
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::ExitCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.ExitCutscene");

	ABP_QTECutscenePlayer_C_ExitCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InitCutscene
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::InitCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InitCutscene");

	ABP_QTECutscenePlayer_C_InitCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UserConstructionScript");

	ABP_QTECutscenePlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_QTECutscenePlayer_C::InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16");

	ABP_QTECutscenePlayer_C_InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_QTECutscenePlayer_C::InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15");

	ABP_QTECutscenePlayer_C_InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_QTECutscenePlayer_C::InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14");

	ABP_QTECutscenePlayer_C_InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_QTECutscenePlayer_C::InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13");

	ABP_QTECutscenePlayer_C_InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_Top_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_QTECutscenePlayer_C::InpActEvt_QTE_Top_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_Top_K2Node_InputActionEvent_12");

	ABP_QTECutscenePlayer_C_InpActEvt_QTE_Top_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_QTECutscenePlayer_C::InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11");

	ABP_QTECutscenePlayer_C_InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_Left_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_QTECutscenePlayer_C::InpActEvt_QTE_Left_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_Left_K2Node_InputActionEvent_10");

	ABP_QTECutscenePlayer_C_InpActEvt_QTE_Left_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_Right_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_QTECutscenePlayer_C::InpActEvt_QTE_Right_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_Right_K2Node_InputActionEvent_9");

	ABP_QTECutscenePlayer_C_InpActEvt_QTE_Right_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QTECutscenePlayer_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.ReceiveTick");

	ABP_QTECutscenePlayer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.Event_InputStart
// (BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::Event_InputStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.Event_InputStart");

	ABP_QTECutscenePlayer_C_Event_InputStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.Event_StopAround
// (BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::Event_StopAround()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.Event_StopAround");

	ABP_QTECutscenePlayer_C_Event_StopAround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.Event_ResumeAround
// (BlueprintCallable, BlueprintEvent)

void ABP_QTECutscenePlayer_C::Event_ResumeAround()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.Event_ResumeAround");

	ABP_QTECutscenePlayer_C_Event_ResumeAround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.ExecuteUbergraph_BP_QTECutscenePlayer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QTECutscenePlayer_C::ExecuteUbergraph_BP_QTECutscenePlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.ExecuteUbergraph_BP_QTECutscenePlayer");

	ABP_QTECutscenePlayer_C_ExecuteUbergraph_BP_QTECutscenePlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
