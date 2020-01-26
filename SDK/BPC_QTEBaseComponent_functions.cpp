
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

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.UpdateAnimationState
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_QTEBaseComponent_C::UpdateAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.UpdateAnimationState");

	UBPC_QTEBaseComponent_C_UpdateAnimationState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.DebugQTEForceSetResultSuccess
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_QTEBaseComponent_C::DebugQTEForceSetResultSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.DebugQTEForceSetResultSuccess");

	UBPC_QTEBaseComponent_C_DebugQTEForceSetResultSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayStartForceFeedback
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_QTEBaseComponent_C::PlayStartForceFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayStartForceFeedback");

	UBPC_QTEBaseComponent_C_PlayStartForceFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetQTEForceFeedbackTag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBPC_QTEBaseComponent_C::GetQTEForceFeedbackTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetQTEForceFeedbackTag");

	UBPC_QTEBaseComponent_C_GetQTEForceFeedbackTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetQTEForceFeedbackTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InTag                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTEBaseComponent_C::SetQTEForceFeedbackTag(const struct FName& InTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetQTEForceFeedbackTag");

	UBPC_QTEBaseComponent_C_SetQTEForceFeedbackTag_Params params;
	params.InTag = InTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInputFailedForceFeedback
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_QTEBaseComponent_C::PlayInputFailedForceFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInputFailedForceFeedback");

	UBPC_QTEBaseComponent_C_PlayInputFailedForceFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInputSuccessForceFeedback
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_QTEBaseComponent_C::PlayInputSuccessForceFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInputSuccessForceFeedback");

	UBPC_QTEBaseComponent_C_PlayInputSuccessForceFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetCurrentInputTime
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_QTEBaseComponent_C::GetCurrentInputTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetCurrentInputTime");

	UBPC_QTEBaseComponent_C_GetCurrentInputTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.DebugQTEForceSuccessUpdateInternal
// (Private, BlueprintCallable, BlueprintEvent)

void UBPC_QTEBaseComponent_C::DebugQTEForceSuccessUpdateInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.DebugQTEForceSuccessUpdateInternal");

	UBPC_QTEBaseComponent_C_DebugQTEForceSuccessUpdateInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.DebugQTEForceSuccessUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_QTEBaseComponent_C::DebugQTEForceSuccessUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.DebugQTEForceSuccessUpdate");

	UBPC_QTEBaseComponent_C_DebugQTEForceSuccessUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.StartCountInputLimitTime
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_QTEBaseComponent_C::StartCountInputLimitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.StartCountInputLimitTime");

	UBPC_QTEBaseComponent_C_StartCountInputLimitTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.CanStartCountInputLimitTime
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_QTEBaseComponent_C::GetLengthBeforeCountInputLimitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetLengthBeforeCountInputLimitTime");

	UBPC_QTEBaseComponent_C_GetLengthBeforeCountInputLimitTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.IsPlayingInAnimation
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_QTEBaseComponent_C::PlayTimeUpFailedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayTimeUpFailedAnimation");

	UBPC_QTEBaseComponent_C_PlayTimeUpFailedAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInAnimation
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_QTEBaseComponent_C::PlayInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInAnimation");

	UBPC_QTEBaseComponent_C_PlayInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.StopTimeCountSE
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_QTEBaseComponent_C::StopTimeCountSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.StopTimeCountSE");

	UBPC_QTEBaseComponent_C_StopTimeCountSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayTimeCountSE
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_QTEBaseComponent_C::PlayTimeCountSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayTimeCountSE");

	UBPC_QTEBaseComponent_C_PlayTimeCountSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInputFailedSE
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_QTEBaseComponent_C::PlayInputFailedSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInputFailedSE");

	UBPC_QTEBaseComponent_C_PlayInputFailedSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInputSuccessSE
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_QTEBaseComponent_C::PlayInputSuccessSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInputSuccessSE");

	UBPC_QTEBaseComponent_C_PlayInputSuccessSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayStartSE
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_QTEBaseComponent_C::PlayStartSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayStartSE");

	UBPC_QTEBaseComponent_C_PlayStartSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetTimeGaugeRate
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InGaugeRate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTEBaseComponent_C::SetTimeGaugeRate(float InGaugeRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetTimeGaugeRate");

	UBPC_QTEBaseComponent_C_SetTimeGaugeRate_Params params;
	params.InGaugeRate = InGaugeRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetCurrentInputTimeRate
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_QTEBaseComponent_C::GetCurrentInputTimeRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetCurrentInputTimeRate");

	UBPC_QTEBaseComponent_C_GetCurrentInputTimeRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetInputLimitTime
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InInputAction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTEBaseComponent_C::ExecuteInputAction(const struct FName& InInputAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.ExecuteInputAction");

	UBPC_QTEBaseComponent_C_ExecuteInputAction_Params params;
	params.InInputAction = InInputAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.InputQTE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InInputAction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTEBaseComponent_C::InputQTE(const struct FName& InInputAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.InputQTE");

	UBPC_QTEBaseComponent_C_InputQTE_Params params;
	params.InInputAction = InInputAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetExecuteTargetInputActions
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           NewInputActions                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPC_QTEBaseComponent_C::SetExecuteTargetInputActions(TArray<struct FName>* NewInputActions)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetExecuteTargetInputActions");

	UBPC_QTEBaseComponent_C_SetExecuteTargetInputActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewInputActions != nullptr)
		*NewInputActions = params.NewInputActions;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetResult
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewResult                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTEBaseComponent_C::SetResult(bool NewResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetResult");

	UBPC_QTEBaseComponent_C_SetResult_Params params;
	params.NewResult = NewResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPC_QTEBaseComponent_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.Update");

	UBPC_QTEBaseComponent_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_QTEBaseComponent_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.Reset");

	UBPC_QTEBaseComponent_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.FinishQTE
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_QTEBaseComponent_C::FinishQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.FinishQTE");

	UBPC_QTEBaseComponent_C_FinishQTE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.StartQTE
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPC_QTEBaseComponent_C::StartQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.StartQTE");

	UBPC_QTEBaseComponent_C_StartQTE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.Finalize
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_QTEBaseComponent_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.Finalize");

	UBPC_QTEBaseComponent_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_QTEBaseComponent_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.Initialize");

	UBPC_QTEBaseComponent_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTEBaseComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.ReceiveEndPlay");

	UBPC_QTEBaseComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.ExecuteUbergraph_BPC_QTEBaseComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTEBaseComponent_C::ExecuteUbergraph_BPC_QTEBaseComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.ExecuteUbergraph_BPC_QTEBaseComponent");

	UBPC_QTEBaseComponent_C_ExecuteUbergraph_BPC_QTEBaseComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
