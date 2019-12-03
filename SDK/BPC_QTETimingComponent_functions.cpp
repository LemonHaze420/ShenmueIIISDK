
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

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.UpdateAnimationState
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBPC_QTETimingComponent_C::STATIC_UpdateAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.UpdateAnimationState");

	UBPC_QTETimingComponent_C_UpdateAnimationState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.FinishQTE
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_QTETimingComponent_C::STATIC_FinishQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.FinishQTE");

	UBPC_QTETimingComponent_C_FinishQTE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.AdjustActionAnimationTime
// (NetResponse, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UBPC_QTETimingComponent_C::AdjustActionAnimationTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.AdjustActionAnimationTime");

	UBPC_QTETimingComponent_C_AdjustActionAnimationTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.PlayActionAnimation
// (NetReliable, Exec, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UBPC_QTETimingComponent_C::PlayActionAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.PlayActionAnimation");

	UBPC_QTETimingComponent_C_PlayActionAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.StartCountInputLimitTime
// (NetRequest, Exec, Native, NetMulticast, Public, Protected, NetServer)

void UBPC_QTETimingComponent_C::StartCountInputLimitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.StartCountInputLimitTime");

	UBPC_QTETimingComponent_C_StartCountInputLimitTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.Update
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, Delegate, NetServer)

void UBPC_QTETimingComponent_C::STATIC_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.Update");

	UBPC_QTETimingComponent_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.GetActionAnimationLength
// (Exec, MulticastDelegate, Public, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_QTETimingComponent_C::GetActionAnimationLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.GetActionAnimationLength");

	UBPC_QTETimingComponent_C_GetActionAnimationLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.SetSuccessInputLimitTimeLength
// (NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          InLength                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTETimingComponent_C::STATIC_SetSuccessInputLimitTimeLength(float InLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.SetSuccessInputLimitTimeLength");

	UBPC_QTETimingComponent_C_SetSuccessInputLimitTimeLength_Params params;
	params.InLength = InLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.DebugQTEForceSuccessUpdateInternal
// (NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_QTETimingComponent_C::STATIC_DebugQTEForceSuccessUpdateInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.DebugQTEForceSuccessUpdateInternal");

	UBPC_QTETimingComponent_C_DebugQTEForceSuccessUpdateInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.GetLengthBeforeCountInputLimitTime
// (NetReliable, NetRequest, Native, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_QTETimingComponent_C::GetLengthBeforeCountInputLimitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.GetLengthBeforeCountInputLimitTime");

	UBPC_QTETimingComponent_C_GetLengthBeforeCountInputLimitTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.IsEarlyFailed
// (Net, NetRequest, Native, NetMulticast, Public, Protected, NetServer)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_QTETimingComponent_C::IsEarlyFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.IsEarlyFailed");

	UBPC_QTETimingComponent_C_IsEarlyFailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.SetupQTE
// (Net, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InSuccessAction                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InJustTimingStartRate          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InJustTimingEndRate            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTETimingComponent_C::STATIC_SetupQTE(const struct FName& InSuccessAction, float InJustTimingStartRate, float InJustTimingEndRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.SetupQTE");

	UBPC_QTETimingComponent_C_SetupQTE_Params params;
	params.InSuccessAction = InSuccessAction;
	params.InJustTimingStartRate = InJustTimingStartRate;
	params.InJustTimingEndRate = InJustTimingEndRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.PlayInputFailedAnimation
// (Net, NetReliable, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBPC_QTETimingComponent_C::STATIC_PlayInputFailedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.PlayInputFailedAnimation");

	UBPC_QTETimingComponent_C_PlayInputFailedAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.PlayInputSuccessAnimation
// (Net, NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_QTETimingComponent_C::PlayInputSuccessAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.PlayInputSuccessAnimation");

	UBPC_QTETimingComponent_C_PlayInputSuccessAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.IsPlayingInAnimation
// (Net, NetReliable, NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_QTETimingComponent_C::IsPlayingInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.IsPlayingInAnimation");

	UBPC_QTETimingComponent_C_IsPlayingInAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.PlayTimeUpFailedAnimation
// (Net, NetReliable, Exec, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBPC_QTETimingComponent_C::PlayTimeUpFailedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.PlayTimeUpFailedAnimation");

	UBPC_QTETimingComponent_C_PlayTimeUpFailedAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.PlayInAnimation
// (Exec, Event, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UBPC_QTETimingComponent_C::STATIC_PlayInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.PlayInAnimation");

	UBPC_QTETimingComponent_C_PlayInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.SetTimeGaugeRate
// (Net, Exec, Static, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          InGaugeRate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTETimingComponent_C::STATIC_SetTimeGaugeRate(float InGaugeRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.SetTimeGaugeRate");

	UBPC_QTETimingComponent_C_SetTimeGaugeRate_Params params;
	params.InGaugeRate = InGaugeRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.ExecuteInputAction
// (NetReliable, NetRequest, Exec, Native, Event, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   InInputAction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTETimingComponent_C::ExecuteInputAction(const struct FName& InInputAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.ExecuteInputAction");

	UBPC_QTETimingComponent_C_ExecuteInputAction_Params params;
	params.InInputAction = InInputAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.Reset
// (NetRequest, Exec, Native, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_QTETimingComponent_C::STATIC_Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.Reset");

	UBPC_QTETimingComponent_C_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.Finalize
// (Native, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_QTETimingComponent_C::STATIC_Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.Finalize");

	UBPC_QTETimingComponent_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.Initialize
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UBPC_QTETimingComponent_C::STATIC_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.Initialize");

	UBPC_QTETimingComponent_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
