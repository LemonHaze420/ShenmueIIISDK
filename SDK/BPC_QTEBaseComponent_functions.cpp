
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

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.UpdateAnimationState
// (Native, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_QTEBaseComponent_C::UpdateAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.UpdateAnimationState");

	UBPC_QTEBaseComponent_C_UpdateAnimationState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.DebugQTEForceSetResultSuccess
// (Net, NetReliable, Exec, NetResponse, Static, Delegate, NetServer)

void UBPC_QTEBaseComponent_C::STATIC_DebugQTEForceSetResultSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.DebugQTEForceSetResultSuccess");

	UBPC_QTEBaseComponent_C_DebugQTEForceSetResultSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayStartForceFeedback
// (NetReliable, NetRequest, Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UBPC_QTEBaseComponent_C::PlayStartForceFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayStartForceFeedback");

	UBPC_QTEBaseComponent_C_PlayStartForceFeedback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetQTEForceFeedbackTag
// (Net, NetRequest, Native, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBPC_QTEBaseComponent_C::STATIC_GetQTEForceFeedbackTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetQTEForceFeedbackTag");

	UBPC_QTEBaseComponent_C_GetQTEForceFeedbackTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetQTEForceFeedbackTag
// (NetReliable, NetRequest, Exec, Native, NetMulticast, Public, Protected, NetServer)
// Parameters:
// struct FName                   InTag                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTEBaseComponent_C::SetQTEForceFeedbackTag(const struct FName& InTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetQTEForceFeedbackTag");

	UBPC_QTEBaseComponent_C_SetQTEForceFeedbackTag_Params params;
	params.InTag = InTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInputFailedForceFeedback
// (NetRequest, Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UBPC_QTEBaseComponent_C::PlayInputFailedForceFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInputFailedForceFeedback");

	UBPC_QTEBaseComponent_C_PlayInputFailedForceFeedback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInputSuccessForceFeedback
// (Net, NetReliable, Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UBPC_QTEBaseComponent_C::PlayInputSuccessForceFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInputSuccessForceFeedback");

	UBPC_QTEBaseComponent_C_PlayInputSuccessForceFeedback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetCurrentInputTime
// (NetReliable, Native, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_QTEBaseComponent_C::STATIC_GetCurrentInputTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetCurrentInputTime");

	UBPC_QTEBaseComponent_C_GetCurrentInputTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.DebugQTEForceSuccessUpdateInternal
// (Net, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_QTEBaseComponent_C::DebugQTEForceSuccessUpdateInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.DebugQTEForceSuccessUpdateInternal");

	UBPC_QTEBaseComponent_C_DebugQTEForceSuccessUpdateInternal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.DebugQTEForceSuccessUpdate
// (Net, NetReliable, Native, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_QTEBaseComponent_C::STATIC_DebugQTEForceSuccessUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.DebugQTEForceSuccessUpdate");

	UBPC_QTEBaseComponent_C_DebugQTEForceSuccessUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.StartCountInputLimitTime
// (NetRequest, Exec, Native, NetMulticast, Public, Protected, NetServer)

void UBPC_QTEBaseComponent_C::StartCountInputLimitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.StartCountInputLimitTime");

	UBPC_QTEBaseComponent_C_StartCountInputLimitTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.CanStartCountInputLimitTime
// (NetReliable, Event, NetMulticast, Public, Protected, NetServer)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_QTEBaseComponent_C::CanStartCountInputLimitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.CanStartCountInputLimitTime");

	UBPC_QTEBaseComponent_C_CanStartCountInputLimitTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetLengthBeforeCountInputLimitTime
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_QTEBaseComponent_C::STATIC_GetLengthBeforeCountInputLimitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetLengthBeforeCountInputLimitTime");

	UBPC_QTEBaseComponent_C_GetLengthBeforeCountInputLimitTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.IsPlayingInAnimation
// (Net, NetRequest, Event, NetMulticast, Public, Protected, NetServer)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_QTEBaseComponent_C::IsPlayingInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.IsPlayingInAnimation");

	UBPC_QTEBaseComponent_C_IsPlayingInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayTimeUpFailedAnimation
// (Native, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_QTEBaseComponent_C::PlayTimeUpFailedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayTimeUpFailedAnimation");

	UBPC_QTEBaseComponent_C_PlayTimeUpFailedAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInAnimation
// (NetReliable, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_QTEBaseComponent_C::PlayInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInAnimation");

	UBPC_QTEBaseComponent_C_PlayInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.StopTimeCountSE
// (NetRequest, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBPC_QTEBaseComponent_C::STATIC_StopTimeCountSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.StopTimeCountSE");

	UBPC_QTEBaseComponent_C_StopTimeCountSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayTimeCountSE
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_QTEBaseComponent_C::STATIC_PlayTimeCountSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayTimeCountSE");

	UBPC_QTEBaseComponent_C_PlayTimeCountSE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInputFailedSE
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_QTEBaseComponent_C::STATIC_PlayInputFailedSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInputFailedSE");

	UBPC_QTEBaseComponent_C_PlayInputFailedSE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInputSuccessSE
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_QTEBaseComponent_C::STATIC_PlayInputSuccessSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInputSuccessSE");

	UBPC_QTEBaseComponent_C_PlayInputSuccessSE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayStartSE
// (NetReliable, NetRequest, Native, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_QTEBaseComponent_C::STATIC_PlayStartSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayStartSE");

	UBPC_QTEBaseComponent_C_PlayStartSE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetTimeGaugeRate
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          InGaugeRate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTEBaseComponent_C::SetTimeGaugeRate(float InGaugeRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetTimeGaugeRate");

	UBPC_QTEBaseComponent_C_SetTimeGaugeRate_Params params;
	params.InGaugeRate = InGaugeRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetCurrentInputTimeRate
// (NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_QTEBaseComponent_C::GetCurrentInputTimeRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetCurrentInputTimeRate");

	UBPC_QTEBaseComponent_C_GetCurrentInputTimeRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetInputLimitTime
// (Net, NetReliable, Event, NetMulticast, Public, Protected, NetServer)
// Parameters:
// float                          InLimitTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTEBaseComponent_C::SetInputLimitTime(float InLimitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetInputLimitTime");

	UBPC_QTEBaseComponent_C_SetInputLimitTime_Params params;
	params.InLimitTime = InLimitTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.ExecuteInputAction
// (Net, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   InInputAction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTEBaseComponent_C::ExecuteInputAction(const struct FName& InInputAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.ExecuteInputAction");

	UBPC_QTEBaseComponent_C_ExecuteInputAction_Params params;
	params.InInputAction = InInputAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.InputQTE
// (NetRequest, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   InInputAction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTEBaseComponent_C::InputQTE(const struct FName& InInputAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.InputQTE");

	UBPC_QTEBaseComponent_C_InputQTE_Params params;
	params.InInputAction = InInputAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetExecuteTargetInputActions
// (Net, Native, Event, NetMulticast, Public, Protected, NetServer)
// Parameters:
// TArray<struct FName>           NewInputActions                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPC_QTEBaseComponent_C::SetExecuteTargetInputActions(TArray<struct FName>* NewInputActions)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetExecuteTargetInputActions");

	UBPC_QTEBaseComponent_C_SetExecuteTargetInputActions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewInputActions != nullptr)
		*NewInputActions = params.NewInputActions;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetResult
// (Native, Event, NetMulticast, Public, Protected, NetServer)
// Parameters:
// bool                           NewResult                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTEBaseComponent_C::SetResult(bool NewResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetResult");

	UBPC_QTEBaseComponent_C_SetResult_Params params;
	params.NewResult = NewResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetResult
// (Net, NetReliable, NetRequest, Exec, Event, NetMulticast, Public, Protected, NetServer)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_QTEBaseComponent_C::GetResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetResult");

	UBPC_QTEBaseComponent_C_GetResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.IsInQTE
// (NetReliable, NetRequest, Exec, Event, NetMulticast, Public, Protected, NetServer)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_QTEBaseComponent_C::IsInQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.IsInQTE");

	UBPC_QTEBaseComponent_C_IsInQTE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.IsQTEStarted
// (Net, NetRequest, Exec, Event, NetMulticast, Public, Protected, NetServer)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_QTEBaseComponent_C::IsQTEStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.IsQTEStarted");

	UBPC_QTEBaseComponent_C_IsQTEStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.Update
// (NetReliable, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_QTEBaseComponent_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.Update");

	UBPC_QTEBaseComponent_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.Reset
// (Net, NetRequest, Exec, NetResponse, Static, Delegate, NetServer)

void UBPC_QTEBaseComponent_C::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.Reset");

	UBPC_QTEBaseComponent_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.FinishQTE
// (NetRequest, Exec, NetResponse, Static, Delegate, NetServer)

void UBPC_QTEBaseComponent_C::STATIC_FinishQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.FinishQTE");

	UBPC_QTEBaseComponent_C_FinishQTE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.StartQTE
// (Net, NetRequest, Native, NetResponse, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)

void UBPC_QTEBaseComponent_C::StartQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.StartQTE");

	UBPC_QTEBaseComponent_C_StartQTE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.Finalize
// (Net, Exec, Event, NetMulticast, Public, Protected, NetServer)

void UBPC_QTEBaseComponent_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.Finalize");

	UBPC_QTEBaseComponent_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.Initialize
// (Net, NetReliable, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_QTEBaseComponent_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.Initialize");

	UBPC_QTEBaseComponent_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.ReceiveEndPlay
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTEBaseComponent_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.ReceiveEndPlay");

	UBPC_QTEBaseComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.ExecuteUbergraph_BPC_QTEBaseComponent
// (NetReliable, Exec, Native, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTEBaseComponent_C::STATIC_ExecuteUbergraph_BPC_QTEBaseComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.ExecuteUbergraph_BPC_QTEBaseComponent");

	UBPC_QTEBaseComponent_C_ExecuteUbergraph_BPC_QTEBaseComponent_Params params;
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
