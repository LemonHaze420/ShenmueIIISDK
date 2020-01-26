
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

// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.UpdateAnimationState
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_QTESimonComponent_C::UpdateAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.UpdateAnimationState");

	UBPC_QTESimonComponent_C_UpdateAnimationState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayStartForceFeedback
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_QTESimonComponent_C::PlayStartForceFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayStartForceFeedback");

	UBPC_QTESimonComponent_C_PlayStartForceFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.DebugQTEForceSuccessUpdateInternal
// (Private, BlueprintCallable, BlueprintEvent)

void UBPC_QTESimonComponent_C::DebugQTEForceSuccessUpdateInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.DebugQTEForceSuccessUpdateInternal");

	UBPC_QTESimonComponent_C_DebugQTEForceSuccessUpdateInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.CanStartCountInputLimitTime
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_QTESimonComponent_C::CanStartCountInputLimitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.CanStartCountInputLimitTime");

	UBPC_QTESimonComponent_C_CanStartCountInputLimitTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.GetLengthBeforeCountInputLimitTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_QTESimonComponent_C::GetLengthBeforeCountInputLimitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.GetLengthBeforeCountInputLimitTime");

	UBPC_QTESimonComponent_C_GetLengthBeforeCountInputLimitTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.GetCurrentSuccessAction
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBPC_QTESimonComponent_C::GetCurrentSuccessAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.GetCurrentSuccessAction");

	UBPC_QTESimonComponent_C_GetCurrentSuccessAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayInputFailedAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_QTESimonComponent_C::PlayInputFailedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayInputFailedAnimation");

	UBPC_QTESimonComponent_C_PlayInputFailedAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayInputSuccessAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_QTESimonComponent_C::PlayInputSuccessAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayInputSuccessAnimation");

	UBPC_QTESimonComponent_C_PlayInputSuccessAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.SetupQTE
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           InInputActions                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPC_QTESimonComponent_C::SetupQTE(TArray<struct FName>* InInputActions)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.SetupQTE");

	UBPC_QTESimonComponent_C_SetupQTE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InInputActions != nullptr)
		*InInputActions = params.InInputActions;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.IsPlayingInAnimation
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_QTESimonComponent_C::IsPlayingInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.IsPlayingInAnimation");

	UBPC_QTESimonComponent_C_IsPlayingInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayTimeUpFailedAnimation
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_QTESimonComponent_C::PlayTimeUpFailedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayTimeUpFailedAnimation");

	UBPC_QTESimonComponent_C_PlayTimeUpFailedAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayInAnimation
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_QTESimonComponent_C::PlayInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayInAnimation");

	UBPC_QTESimonComponent_C_PlayInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.SetTimeGaugeRate
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InGaugeRate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTESimonComponent_C::SetTimeGaugeRate(float InGaugeRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.SetTimeGaugeRate");

	UBPC_QTESimonComponent_C_SetTimeGaugeRate_Params params;
	params.InGaugeRate = InGaugeRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.ExecuteInputAction
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InInputAction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTESimonComponent_C::ExecuteInputAction(const struct FName& InInputAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.ExecuteInputAction");

	UBPC_QTESimonComponent_C_ExecuteInputAction_Params params;
	params.InInputAction = InInputAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_QTESimonComponent_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.Reset");

	UBPC_QTESimonComponent_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.Finalize
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_QTESimonComponent_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.Finalize");

	UBPC_QTESimonComponent_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_QTESimonComponent_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.Initialize");

	UBPC_QTESimonComponent_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
