
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

// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.UpdateAnimationState
// (NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBPC_QTESimonComponent_C::UpdateAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.UpdateAnimationState");

	UBPC_QTESimonComponent_C_UpdateAnimationState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayStartForceFeedback
// (NetReliable, NetRequest, Exec, NetResponse, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)

void UBPC_QTESimonComponent_C::PlayStartForceFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayStartForceFeedback");

	UBPC_QTESimonComponent_C_PlayStartForceFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.DebugQTEForceSuccessUpdateInternal
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBPC_QTESimonComponent_C::STATIC_DebugQTEForceSuccessUpdateInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.DebugQTEForceSuccessUpdateInternal");

	UBPC_QTESimonComponent_C_DebugQTEForceSuccessUpdateInternal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.CanStartCountInputLimitTime
// (Net, NetReliable, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
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
// (NetReliable, NetRequest, Event, Static, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_QTESimonComponent_C::STATIC_GetLengthBeforeCountInputLimitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.GetLengthBeforeCountInputLimitTime");

	UBPC_QTESimonComponent_C_GetLengthBeforeCountInputLimitTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.GetCurrentSuccessAction
// (Net, NetReliable, Event, NetResponse, Static, Private, Delegate, NetServer)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBPC_QTESimonComponent_C::STATIC_GetCurrentSuccessAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.GetCurrentSuccessAction");

	UBPC_QTESimonComponent_C_GetCurrentSuccessAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayInputFailedAnimation
// (Net, NetReliable, NetRequest, Exec, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UBPC_QTESimonComponent_C::PlayInputFailedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayInputFailedAnimation");

	UBPC_QTESimonComponent_C_PlayInputFailedAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayInputSuccessAnimation
// (Net, NetRequest, Exec, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UBPC_QTESimonComponent_C::PlayInputSuccessAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayInputSuccessAnimation");

	UBPC_QTESimonComponent_C_PlayInputSuccessAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.SetupQTE
// (Net, Exec, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           InInputActions                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPC_QTESimonComponent_C::STATIC_SetupQTE(TArray<struct FName>* InInputActions)
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
// (Net, NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_QTESimonComponent_C::IsPlayingInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.IsPlayingInAnimation");

	UBPC_QTESimonComponent_C_IsPlayingInAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayTimeUpFailedAnimation
// (Net, Exec, Native, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_QTESimonComponent_C::STATIC_PlayTimeUpFailedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayTimeUpFailedAnimation");

	UBPC_QTESimonComponent_C_PlayTimeUpFailedAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayInAnimation
// (NetRequest, Exec, MulticastDelegate, Public, Delegate, BlueprintEvent, BlueprintPure)

void UBPC_QTESimonComponent_C::PlayInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayInAnimation");

	UBPC_QTESimonComponent_C_PlayInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.SetTimeGaugeRate
// (Net, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          InGaugeRate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTESimonComponent_C::STATIC_SetTimeGaugeRate(float InGaugeRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.SetTimeGaugeRate");

	UBPC_QTESimonComponent_C_SetTimeGaugeRate_Params params;
	params.InGaugeRate = InGaugeRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.ExecuteInputAction
// (Net, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   InInputAction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTESimonComponent_C::ExecuteInputAction(const struct FName& InInputAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.ExecuteInputAction");

	UBPC_QTESimonComponent_C_ExecuteInputAction_Params params;
	params.InInputAction = InInputAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.Reset
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_QTESimonComponent_C::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.Reset");

	UBPC_QTESimonComponent_C_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.Finalize
// (Net, NetReliable, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_QTESimonComponent_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.Finalize");

	UBPC_QTESimonComponent_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.Initialize
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_QTESimonComponent_C::STATIC_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.Initialize");

	UBPC_QTESimonComponent_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
