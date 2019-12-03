
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

// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.SetBackRealTimeSecondsForQTESlow
// (Net, Exec, Native, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          NewTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTEMultiTypeCutscenePlayer_C::STATIC_SetBackRealTimeSecondsForQTESlow(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.SetBackRealTimeSecondsForQTESlow");

	ABP_old_QTEMultiTypeCutscenePlayer_C_SetBackRealTimeSecondsForQTESlow_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.GetQTESlowPlayRate
// (Exec, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_old_QTEMultiTypeCutscenePlayer_C::GetQTESlowPlayRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.GetQTESlowPlayRate");

	ABP_old_QTEMultiTypeCutscenePlayer_C_GetQTESlowPlayRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.IsQTESlowPlaying
// (Net, NetReliable, Exec, Native, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_old_QTEMultiTypeCutscenePlayer_C::STATIC_IsQTESlowPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.IsQTESlowPlaying");

	ABP_old_QTEMultiTypeCutscenePlayer_C_IsQTESlowPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.StartQTEInputSafeSlow
// (NetReliable, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          RestLength                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          QTEInAnimLength                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          QTEOutAnimLength               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTEMultiTypeCutscenePlayer_C::StartQTEInputSafeSlow(float RestLength, float QTEInAnimLength, float QTEOutAnimLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.StartQTEInputSafeSlow");

	ABP_old_QTEMultiTypeCutscenePlayer_C_StartQTEInputSafeSlow_Params params;
	params.RestLength = RestLength;
	params.QTEInAnimLength = QTEInAnimLength;
	params.QTEOutAnimLength = QTEOutAnimLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.EndSequence
// (NetReliable, Exec, Event, Static, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTEMultiTypeCutscenePlayer_C::STATIC_EndSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.EndSequence");

	ABP_old_QTEMultiTypeCutscenePlayer_C_EndSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.IsExistQTEInSequence
// (NetReliable, NetResponse, NetMulticast, Public, Private, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FST_old_QTEMultiTypeSequence QTESequence                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_old_QTEMultiTypeCutscenePlayer_C::IsExistQTEInSequence(struct FST_old_QTEMultiTypeSequence* QTESequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.IsExistQTEInSequence");

	ABP_old_QTEMultiTypeCutscenePlayer_C_IsExistQTEInSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QTESequence != nullptr)
		*QTESequence = params.QTESequence;

	return params.ReturnValue;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.DebugIsEnabledToSkip
// (Exec, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_old_QTEMultiTypeCutscenePlayer_C::DebugIsEnabledToSkip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.DebugIsEnabledToSkip");

	ABP_old_QTEMultiTypeCutscenePlayer_C_DebugIsEnabledToSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.CountQTEInputTimer
// (Exec, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AfterTimer                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTEMultiTypeCutscenePlayer_C::STATIC_CountQTEInputTimer(float* AfterTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.CountQTEInputTimer");

	ABP_old_QTEMultiTypeCutscenePlayer_C_CountQTEInputTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AfterTimer != nullptr)
		*AfterTimer = params.AfterTimer;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.FindQTESequenceFromLevelSequence
// (NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence*          LevelSequence                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTEMultiTypeCutscenePlayer_C::STATIC_FindQTESequenceFromLevelSequence(class ULevelSequence* LevelSequence, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.FindQTESequenceFromLevelSequence");

	ABP_old_QTEMultiTypeCutscenePlayer_C_FindQTESequenceFromLevelSequence_Params params;
	params.LevelSequence = LevelSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.NotifyInputKey
// (NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FKey                    InputedKey                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTEMultiTypeCutscenePlayer_C::NotifyInputKey(const struct FKey& InputedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.NotifyInputKey");

	ABP_old_QTEMultiTypeCutscenePlayer_C_NotifyInputKey_Params params;
	params.InputedKey = InputedKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.GetLastQTEResult
// (NetRequest, Exec, Native, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_old_QTEMultiTypeCutscenePlayer_C::STATIC_GetLastQTEResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.GetLastQTEResult");

	ABP_old_QTEMultiTypeCutscenePlayer_C_GetLastQTEResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.GetLastQTEFreeCommandResult
// (Net, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsSuccess                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FST_old_BattleQTEExperimentFreeCommand FreeCommand                    (Parm, OutParm)

void ABP_old_QTEMultiTypeCutscenePlayer_C::STATIC_GetLastQTEFreeCommandResult(bool* IsSuccess, struct FST_old_BattleQTEExperimentFreeCommand* FreeCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.GetLastQTEFreeCommandResult");

	ABP_old_QTEMultiTypeCutscenePlayer_C_GetLastQTEFreeCommandResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
	if (FreeCommand != nullptr)
		*FreeCommand = params.FreeCommand;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.UpdateLastQTEFreeCommand
// (Native, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, Const)

void ABP_old_QTEMultiTypeCutscenePlayer_C::UpdateLastQTEFreeCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.UpdateLastQTEFreeCommand");

	ABP_old_QTEMultiTypeCutscenePlayer_C_UpdateLastQTEFreeCommand_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.IsInQTE
// (Net, NetReliable, NetRequest, Native, Event, Public, Protected, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_old_QTEMultiTypeCutscenePlayer_C::IsInQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.IsInQTE");

	ABP_old_QTEMultiTypeCutscenePlayer_C_IsInQTE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.ResetLastQTEFailed
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTEMultiTypeCutscenePlayer_C::ResetLastQTEFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.ResetLastQTEFailed");

	ABP_old_QTEMultiTypeCutscenePlayer_C_ResetLastQTEFailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.UpdateQTEInputTimer
// (NetRequest, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_old_QTEMultiTypeCutscenePlayer_C::UpdateQTEInputTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.UpdateQTEInputTimer");

	ABP_old_QTEMultiTypeCutscenePlayer_C_UpdateQTEInputTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.IsQTEEnabledInput
// (NetReliable, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_old_QTEMultiTypeCutscenePlayer_C::IsQTEEnabledInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.IsQTEEnabledInput");

	ABP_old_QTEMultiTypeCutscenePlayer_C_IsQTEEnabledInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.UpdateQTERestInputTimeRate
// (NetRequest, NetMulticast, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTEMultiTypeCutscenePlayer_C::UpdateQTERestInputTimeRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.UpdateQTERestInputTimeRate");

	ABP_old_QTEMultiTypeCutscenePlayer_C_UpdateQTERestInputTimeRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.EndFunctionQTE
// (NetReliable, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, Const)

void ABP_old_QTEMultiTypeCutscenePlayer_C::EndFunctionQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.EndFunctionQTE");

	ABP_old_QTEMultiTypeCutscenePlayer_C_EndFunctionQTE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.GetResultQTE
// (Exec, NetResponse, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTEMultiTypeCutscenePlayer_C::GetResultQTE(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.GetResultQTE");

	ABP_old_QTEMultiTypeCutscenePlayer_C_GetResultQTE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.ClearResultQTE
// (Net, NetRequest, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, Const)

void ABP_old_QTEMultiTypeCutscenePlayer_C::ClearResultQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.ClearResultQTE");

	ABP_old_QTEMultiTypeCutscenePlayer_C_ClearResultQTE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.PrepareQTE
// (Net, NetReliable, Exec, Native, Event, Static, MulticastDelegate, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_old_QTEMultiTypeCutscenePlayer_C::STATIC_PrepareQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.PrepareQTE");

	ABP_old_QTEMultiTypeCutscenePlayer_C_PrepareQTE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InputQTE
// (Net, NetRequest, Exec, NetResponse, Static, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    InputedKey                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTEMultiTypeCutscenePlayer_C::STATIC_InputQTE(const struct FKey& InputedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InputQTE");

	ABP_old_QTEMultiTypeCutscenePlayer_C_InputQTE_Params params;
	params.InputedKey = InputedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InputEndQTE
// (NetResponse, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTEMultiTypeCutscenePlayer_C::InputEndQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InputEndQTE");

	ABP_old_QTEMultiTypeCutscenePlayer_C_InputEndQTE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InputStartQTE
// (NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void ABP_old_QTEMultiTypeCutscenePlayer_C::InputStartQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InputStartQTE");

	ABP_old_QTEMultiTypeCutscenePlayer_C_InputStartQTE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.SetupNextLevelSequecne
// (NetReliable, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           QTEResult                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTEMultiTypeCutscenePlayer_C::SetupNextLevelSequecne(bool QTEResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.SetupNextLevelSequecne");

	ABP_old_QTEMultiTypeCutscenePlayer_C_SetupNextLevelSequecne_Params params;
	params.QTEResult = QTEResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.DebugSkipToEnd
// (NetReliable, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTEMultiTypeCutscenePlayer_C::DebugSkipToEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.DebugSkipToEnd");

	ABP_old_QTEMultiTypeCutscenePlayer_C_DebugSkipToEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.ExitCutscene
// (Net, Exec, Native, Event, NetResponse, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTEMultiTypeCutscenePlayer_C::ExitCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.ExitCutscene");

	ABP_old_QTEMultiTypeCutscenePlayer_C_ExitCutscene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.SetupSequence
// (Net, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, HasOutParms, HasDefaults, NetClient, Const)
// Parameters:
// int                            QTESequenceIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTEMultiTypeCutscenePlayer_C::SetupSequence(int QTESequenceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.SetupSequence");

	ABP_old_QTEMultiTypeCutscenePlayer_C_SetupSequence_Params params;
	params.QTESequenceIndex = QTESequenceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.Retry
// (Native, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void ABP_old_QTEMultiTypeCutscenePlayer_C::Retry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.Retry");

	ABP_old_QTEMultiTypeCutscenePlayer_C_Retry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.UpdatePlayingSequenceToRetry
// (Exec, Native, NetResponse, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTEMultiTypeCutscenePlayer_C::UpdatePlayingSequenceToRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.UpdatePlayingSequenceToRetry");

	ABP_old_QTEMultiTypeCutscenePlayer_C_UpdatePlayingSequenceToRetry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.IsExistQTEInCurrent
// (Net, NetRequest, Exec, Native, Event, Static, Public, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_old_QTEMultiTypeCutscenePlayer_C::STATIC_IsExistQTEInCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.IsExistQTEInCurrent");

	ABP_old_QTEMultiTypeCutscenePlayer_C_IsExistQTEInCurrent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.UpdatePlayingIntervalSequence
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_old_QTEMultiTypeCutscenePlayer_C::UpdatePlayingIntervalSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.UpdatePlayingIntervalSequence");

	ABP_old_QTEMultiTypeCutscenePlayer_C_UpdatePlayingIntervalSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.IsExistNextLevelSequence
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_old_QTEMultiTypeCutscenePlayer_C::IsExistNextLevelSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.IsExistNextLevelSequence");

	ABP_old_QTEMultiTypeCutscenePlayer_C_IsExistNextLevelSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.EndIntervalSequence
// (Native, NetResponse, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTEMultiTypeCutscenePlayer_C::EndIntervalSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.EndIntervalSequence");

	ABP_old_QTEMultiTypeCutscenePlayer_C_EndIntervalSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InitQTESequence
// (Net, Exec, Native, NetResponse, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTEMultiTypeCutscenePlayer_C::InitQTESequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InitQTESequence");

	ABP_old_QTEMultiTypeCutscenePlayer_C_InitQTESequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.PlaySequence
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Private, Delegate, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTEMultiTypeCutscenePlayer_C::PlaySequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.PlaySequence");

	ABP_old_QTEMultiTypeCutscenePlayer_C_PlaySequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InitCutscene
// (Net, NetRequest, Native, Event, NetResponse, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTEMultiTypeCutscenePlayer_C::InitCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InitCutscene");

	ABP_old_QTEMultiTypeCutscenePlayer_C_InitCutscene_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.UserConstructionScript
// (NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_old_QTEMultiTypeCutscenePlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.UserConstructionScript");

	ABP_old_QTEMultiTypeCutscenePlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16
// (NetReliable, NetRequest, Exec, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTEMultiTypeCutscenePlayer_C::InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16");

	ABP_old_QTEMultiTypeCutscenePlayer_C_InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15
// (Net, NetRequest, Exec, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTEMultiTypeCutscenePlayer_C::InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15");

	ABP_old_QTEMultiTypeCutscenePlayer_C_InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14
// (NetRequest, Exec, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTEMultiTypeCutscenePlayer_C::InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14");

	ABP_old_QTEMultiTypeCutscenePlayer_C_InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13
// (Net, NetReliable, Exec, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTEMultiTypeCutscenePlayer_C::InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13");

	ABP_old_QTEMultiTypeCutscenePlayer_C_InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_Top_K2Node_InputActionEvent_12
// (Net, NetReliable, Exec, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTEMultiTypeCutscenePlayer_C::InpActEvt_QTE_Top_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_Top_K2Node_InputActionEvent_12");

	ABP_old_QTEMultiTypeCutscenePlayer_C_InpActEvt_QTE_Top_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11
// (NetReliable, Exec, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTEMultiTypeCutscenePlayer_C::InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11");

	ABP_old_QTEMultiTypeCutscenePlayer_C_InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_Left_K2Node_InputActionEvent_10
// (Net, Exec, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTEMultiTypeCutscenePlayer_C::InpActEvt_QTE_Left_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_Left_K2Node_InputActionEvent_10");

	ABP_old_QTEMultiTypeCutscenePlayer_C_InpActEvt_QTE_Left_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_Right_K2Node_InputActionEvent_9
// (Exec, Event, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_old_QTEMultiTypeCutscenePlayer_C::InpActEvt_QTE_Right_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.InpActEvt_QTE_Right_K2Node_InputActionEvent_9");

	ABP_old_QTEMultiTypeCutscenePlayer_C_InpActEvt_QTE_Right_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.Event_InputStart
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTEMultiTypeCutscenePlayer_C::STATIC_Event_InputStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.Event_InputStart");

	ABP_old_QTEMultiTypeCutscenePlayer_C_Event_InputStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.Event_InputEnd
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Public, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure, Const)

void ABP_old_QTEMultiTypeCutscenePlayer_C::STATIC_Event_InputEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.Event_InputEnd");

	ABP_old_QTEMultiTypeCutscenePlayer_C_Event_InputEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.ReceiveTick
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTEMultiTypeCutscenePlayer_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.ReceiveTick");

	ABP_old_QTEMultiTypeCutscenePlayer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.OnFinishedLevelSequencePlayer
// (NetRequest, Exec, Event, Static, NetMulticast, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequencePlayer*    LevelSequencePlayer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTEMultiTypeCutscenePlayer_C::STATIC_OnFinishedLevelSequencePlayer(class ULevelSequencePlayer* LevelSequencePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.OnFinishedLevelSequencePlayer");

	ABP_old_QTEMultiTypeCutscenePlayer_C_OnFinishedLevelSequencePlayer_Params params;
	params.LevelSequencePlayer = LevelSequencePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.ExecuteUbergraph_BP_old_QTEMultiTypeCutscenePlayer
// (NetRequest, Exec, Native, NetMulticast, Public, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_old_QTEMultiTypeCutscenePlayer_C::ExecuteUbergraph_BP_old_QTEMultiTypeCutscenePlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C.ExecuteUbergraph_BP_old_QTEMultiTypeCutscenePlayer");

	ABP_old_QTEMultiTypeCutscenePlayer_C_ExecuteUbergraph_BP_old_QTEMultiTypeCutscenePlayer_Params params;
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
