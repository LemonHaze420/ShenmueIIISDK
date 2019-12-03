
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

// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.CanSkip
// (Net, NetReliable, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
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
// (Exec, Native, Event, NetResponse, NetMulticast, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_QTECutscenePlayer_C::UpdateQTEAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UpdateQTEAnimationState");

	ABP_QTECutscenePlayer_C_UpdateQTEAnimationState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.DebugSetIsQTEForceSuccess
// (NetRequest, Exec, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bForceSuccess                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QTECutscenePlayer_C::STATIC_DebugSetIsQTEForceSuccess(bool bForceSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.DebugSetIsQTEForceSuccess");

	ABP_QTECutscenePlayer_C_DebugSetIsQTEForceSuccess_Params params;
	params.bForceSuccess = bForceSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.OnFinishedQTELevelSequencePlayer
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, NetClient, BlueprintCallable, BlueprintPure, Const)
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
// (NetReliable, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_QTECutscenePlayer_C::DebugIsEnableToSkip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.DebugIsEnableToSkip");

	ABP_QTECutscenePlayer_C_DebugIsEnableToSkip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.EndSubSequence
// (NetResponse, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_QTECutscenePlayer_C::EndSubSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.EndSubSequence");

	ABP_QTECutscenePlayer_C_EndSubSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.PlaySubSequence
// (NetReliable, NetRequest, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_QTECutscenePlayer_C::PlaySubSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.PlaySubSequence");

	ABP_QTECutscenePlayer_C_PlaySubSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.FinalizeSubSequenceActor
// (Exec, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_QTECutscenePlayer_C::STATIC_FinalizeSubSequenceActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.FinalizeSubSequenceActor");

	ABP_QTECutscenePlayer_C_FinalizeSubSequenceActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InitializeSubSequenceActor
// (NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_QTECutscenePlayer_C::InitializeSubSequenceActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InitializeSubSequenceActor");

	ABP_QTECutscenePlayer_C_InitializeSubSequenceActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.SetupNextLevelSequence
// (Net, NetReliable, Native, NetMulticast, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_QTECutscenePlayer_C::SetupNextLevelSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.SetupNextLevelSequence");

	ABP_QTECutscenePlayer_C_SetupNextLevelSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UpdateLevelSequenceManually
// (Net, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void ABP_QTECutscenePlayer_C::STATIC_UpdateLevelSequenceManually()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UpdateLevelSequenceManually");

	ABP_QTECutscenePlayer_C_UpdateLevelSequenceManually_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.SetupCurrentSequenceToRetryPoint
// (Net, NetReliable, Exec, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_QTECutscenePlayer_C::SetupCurrentSequenceToRetryPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.SetupCurrentSequenceToRetryPoint");

	ABP_QTECutscenePlayer_C_SetupCurrentSequenceToRetryPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.ExecuteRetry
// (NetResponse, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_QTECutscenePlayer_C::ExecuteRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.ExecuteRetry");

	ABP_QTECutscenePlayer_C_ExecuteRetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UpdatePlayingSequenceToRetry
// (NetRequest, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void ABP_QTECutscenePlayer_C::STATIC_UpdatePlayingSequenceToRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UpdatePlayingSequenceToRetry");

	ABP_QTECutscenePlayer_C_UpdatePlayingSequenceToRetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.EndIntervalSequence
// (Exec, Event, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_QTECutscenePlayer_C::EndIntervalSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.EndIntervalSequence");

	ABP_QTECutscenePlayer_C_EndIntervalSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UpdatePlayingIntervalSequence
// (NetReliable, Native, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_QTECutscenePlayer_C::UpdatePlayingIntervalSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UpdatePlayingIntervalSequence");

	ABP_QTECutscenePlayer_C_UpdatePlayingIntervalSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.GetQTESingleRandomInputAction
// (Exec, Event, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (NetRequest, Native, Event, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.IsExistQTEInSequence
// (NetReliable, Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FST_QTESequence         InQTESequence                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_QTECutscenePlayer_C::STATIC_IsExistQTEInSequence(struct FST_QTESequence* InQTESequence)
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
// (Native, Event, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence*          InLevelSequence                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FoundIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_QTECutscenePlayer_C::FindQTESequenceFromLevelSequence(class ULevelSequence* InLevelSequence, int* FoundIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.FindQTESequenceFromLevelSequence");

	ABP_QTECutscenePlayer_C_FindQTESequenceFromLevelSequence_Params params;
	params.InLevelSequence = InLevelSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundIndex != nullptr)
		*FoundIndex = params.FoundIndex;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.GetLastQTEResult
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_QTECutscenePlayer_C::STATIC_GetLastQTEResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.GetLastQTEResult");

	ABP_QTECutscenePlayer_C_GetLastQTEResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InputQTE
// (Exec, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InInputAction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QTECutscenePlayer_C::STATIC_InputQTE(const struct FName& InInputAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InputQTE");

	ABP_QTECutscenePlayer_C_InputQTE_Params params;
	params.InInputAction = InInputAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.StartQTE
// (Net, Exec, NetResponse, Static, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_QTECutscenePlayer_C::STATIC_StartQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.StartQTE");

	ABP_QTECutscenePlayer_C_StartQTE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.SetupCurrentQTE
// (Net, NetReliable, NetRequest, Native, Event, Static, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_QTECutscenePlayer_C::STATIC_SetupCurrentQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.SetupCurrentQTE");

	ABP_QTECutscenePlayer_C_SetupCurrentQTE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.SetupCurrentSequenceFromIndex
// (NetRequest, Exec, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SequenceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QTECutscenePlayer_C::STATIC_SetupCurrentSequenceFromIndex(int SequenceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.SetupCurrentSequenceFromIndex");

	ABP_QTECutscenePlayer_C_SetupCurrentSequenceFromIndex_Params params;
	params.SequenceIndex = SequenceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.FinalizeQTEComponent
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_QTECutscenePlayer_C::FinalizeQTEComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.FinalizeQTEComponent");

	ABP_QTECutscenePlayer_C_FinalizeQTEComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InitializeQTEComponent
// (Exec, Event, NetResponse, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_QTECutscenePlayer_C::InitializeQTEComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InitializeQTEComponent");

	ABP_QTECutscenePlayer_C_InitializeQTEComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.DebugSkipToEnd
// (NetReliable, Native, Event, NetResponse, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_QTECutscenePlayer_C::DebugSkipToEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.DebugSkipToEnd");

	ABP_QTECutscenePlayer_C_DebugSkipToEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.EndSequence
// (Net, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_QTECutscenePlayer_C::STATIC_EndSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.EndSequence");

	ABP_QTECutscenePlayer_C_EndSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.PlaySequence
// (Net, NetReliable, NetRequest, Native, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_QTECutscenePlayer_C::PlaySequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.PlaySequence");

	ABP_QTECutscenePlayer_C_PlaySequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InitSequencePlay
// (NetRequest, Exec, Event, NetResponse, Static, Private, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_QTECutscenePlayer_C::STATIC_InitSequencePlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InitSequencePlay");

	ABP_QTECutscenePlayer_C_InitSequencePlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.ExitCutscene
// (NetReliable, NetRequest, Native, NetResponse, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_QTECutscenePlayer_C::ExitCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.ExitCutscene");

	ABP_QTECutscenePlayer_C_ExitCutscene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InitCutscene
// (Exec, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_QTECutscenePlayer_C::STATIC_InitCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InitCutscene");

	ABP_QTECutscenePlayer_C_InitCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UserConstructionScript
// (NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_QTECutscenePlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.UserConstructionScript");

	ABP_QTECutscenePlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16
// (NetReliable, Exec, Native, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_QTECutscenePlayer_C::InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16");

	ABP_QTECutscenePlayer_C_InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15
// (Net, Exec, Native, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_QTECutscenePlayer_C::InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15");

	ABP_QTECutscenePlayer_C_InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14
// (Exec, Native, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_QTECutscenePlayer_C::InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14");

	ABP_QTECutscenePlayer_C_InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13
// (Net, NetReliable, NetRequest, Native, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_QTECutscenePlayer_C::InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13");

	ABP_QTECutscenePlayer_C_InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_Top_K2Node_InputActionEvent_12
// (Net, NetReliable, NetRequest, Native, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_QTECutscenePlayer_C::InpActEvt_QTE_Top_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_Top_K2Node_InputActionEvent_12");

	ABP_QTECutscenePlayer_C_InpActEvt_QTE_Top_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11
// (NetReliable, NetRequest, Native, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_QTECutscenePlayer_C::InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11");

	ABP_QTECutscenePlayer_C_InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_Left_K2Node_InputActionEvent_10
// (Net, NetRequest, Native, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_QTECutscenePlayer_C::InpActEvt_QTE_Left_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_Left_K2Node_InputActionEvent_10");

	ABP_QTECutscenePlayer_C_InpActEvt_QTE_Left_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_Right_K2Node_InputActionEvent_9
// (NetRequest, Native, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_QTECutscenePlayer_C::InpActEvt_QTE_Right_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.InpActEvt_QTE_Right_K2Node_InputActionEvent_9");

	ABP_QTECutscenePlayer_C_InpActEvt_QTE_Right_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.ReceiveTick
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QTECutscenePlayer_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.ReceiveTick");

	ABP_QTECutscenePlayer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.Event_InputStart
// (Native, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_QTECutscenePlayer_C::STATIC_Event_InputStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.Event_InputStart");

	ABP_QTECutscenePlayer_C_Event_InputStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.Event_StopAround
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_QTECutscenePlayer_C::STATIC_Event_StopAround()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.Event_StopAround");

	ABP_QTECutscenePlayer_C_Event_StopAround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.Event_ResumeAround
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_QTECutscenePlayer_C::STATIC_Event_ResumeAround()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.Event_ResumeAround");

	ABP_QTECutscenePlayer_C_Event_ResumeAround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.ExecuteUbergraph_BP_QTECutscenePlayer
// (NetReliable, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_QTECutscenePlayer_C::STATIC_ExecuteUbergraph_BP_QTECutscenePlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QTECutscenePlayer.BP_QTECutscenePlayer_C.ExecuteUbergraph_BP_QTECutscenePlayer");

	ABP_QTECutscenePlayer_C_ExecuteUbergraph_BP_QTECutscenePlayer_Params params;
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
