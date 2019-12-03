
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

// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.StopTimeCountSE
// (NetReliable, Event, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_old_QTETimingComponent_C::StopTimeCountSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.StopTimeCountSE");

	UBPC_old_QTETimingComponent_C_StopTimeCountSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.PlayTimeCountSE
// (NetRequest, Exec, Native, Event, NetMulticast, Private, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_old_QTETimingComponent_C::PlayTimeCountSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.PlayTimeCountSE");

	UBPC_old_QTETimingComponent_C_PlayTimeCountSE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.IsEarlyFailed
// (NetRequest, Exec, Native, Event, NetMulticast, Public, Protected, NetServer)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_old_QTETimingComponent_C::IsEarlyFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.IsEarlyFailed");

	UBPC_old_QTETimingComponent_C_IsEarlyFailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.UpdateAnimationState
// (Exec, Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UBPC_old_QTETimingComponent_C::UpdateAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.UpdateAnimationState");

	UBPC_old_QTETimingComponent_C_UpdateAnimationState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.IsInQTE
// (NetReliable, NetRequest, Exec, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_old_QTETimingComponent_C::STATIC_IsInQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.IsInQTE");

	UBPC_old_QTETimingComponent_C_IsInQTE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.GetInAnimationLength
// (NetRequest, Exec, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_old_QTETimingComponent_C::GetInAnimationLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.GetInAnimationLength");

	UBPC_old_QTETimingComponent_C_GetInAnimationLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.IsPlayingIn
// (NetRequest, Static, MulticastDelegate, Public, Protected, Delegate, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_old_QTETimingComponent_C::STATIC_IsPlayingIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.IsPlayingIn");

	UBPC_old_QTETimingComponent_C_IsPlayingIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.SetTimeGaugeRate
// (Net, Static, MulticastDelegate, Public, Protected, Delegate, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTETimingComponent_C::STATIC_SetTimeGaugeRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.SetTimeGaugeRate");

	UBPC_old_QTETimingComponent_C_SetTimeGaugeRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.UpdateTime
// (NetReliable, Exec, Native, Event, NetResponse, Static, Private, Delegate, NetServer)
// Parameters:
// float                          TickDeltaSeconds               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentDeltaSeconds            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTETimingComponent_C::STATIC_UpdateTime(float TickDeltaSeconds, float* CurrentDeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.UpdateTime");

	UBPC_old_QTETimingComponent_C_UpdateTime_Params params;
	params.TickDeltaSeconds = TickDeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentDeltaSeconds != nullptr)
		*CurrentDeltaSeconds = params.CurrentDeltaSeconds;
}


// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.SetUseRealTime
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Public, Protected, NetServer)
// Parameters:
// bool                           UseRealTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTETimingComponent_C::SetUseRealTime(bool UseRealTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.SetUseRealTime");

	UBPC_old_QTETimingComponent_C_SetUseRealTime_Params params;
	params.UseRealTime = UseRealTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.ClearResult
// (NetReliable, NetRequest, Exec, Native, Event, NetMulticast, Public, Protected, NetServer)

void UBPC_old_QTETimingComponent_C::ClearResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.ClearResult");

	UBPC_old_QTETimingComponent_C_ClearResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.InputFunction
// (NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    InKey                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPC_old_QTETimingComponent_C::InputFunction(const struct FKey& InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.InputFunction");

	UBPC_old_QTETimingComponent_C_InputFunction_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.InputEndFunction
// (NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTETimingComponent_C::InputEndFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.InputEndFunction");

	UBPC_old_QTETimingComponent_C_InputEndFunction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.InputStartFunction
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   SuccessAction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InJustTimingStartRate          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InJustTimingEndRate            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InInputLimitTime               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTETimingComponent_C::InputStartFunction(const struct FName& SuccessAction, float InJustTimingStartRate, float InJustTimingEndRate, float InInputLimitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.InputStartFunction");

	UBPC_old_QTETimingComponent_C_InputStartFunction_Params params;
	params.SuccessAction = SuccessAction;
	params.InJustTimingStartRate = InJustTimingStartRate;
	params.InJustTimingEndRate = InJustTimingEndRate;
	params.InInputLimitTime = InInputLimitTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.EndFunction
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_old_QTETimingComponent_C::STATIC_EndFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.EndFunction");

	UBPC_old_QTETimingComponent_C_EndFunction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.Prepare
// (NetReliable, NetRequest, Static, MulticastDelegate, Public, Protected, Delegate, NetClient, BlueprintEvent, BlueprintPure)

void UBPC_old_QTETimingComponent_C::STATIC_Prepare()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.Prepare");

	UBPC_old_QTETimingComponent_C_Prepare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.ReceiveTick
// (NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTETimingComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.ReceiveTick");

	UBPC_old_QTETimingComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.ReceiveEndPlay
// (NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTETimingComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.ReceiveEndPlay");

	UBPC_old_QTETimingComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.ExecuteUbergraph_BPC_old_QTETimingComponent
// (Net, Native, Static, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTETimingComponent_C::STATIC_ExecuteUbergraph_BPC_old_QTETimingComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.ExecuteUbergraph_BPC_old_QTETimingComponent");

	UBPC_old_QTETimingComponent_C_ExecuteUbergraph_BPC_old_QTETimingComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.ButtonDown__DelegateSignature
// (Net, NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Succeed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTETimingComponent_C::ButtonDown__DelegateSignature(bool Succeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.ButtonDown__DelegateSignature");

	UBPC_old_QTETimingComponent_C_ButtonDown__DelegateSignature_Params params;
	params.Succeed = Succeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.End__DelegateSignature
// (NetRequest, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_old_QTETimingComponent_C::End__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.End__DelegateSignature");

	UBPC_old_QTETimingComponent_C_End__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.Success__DelegateSignature
// (Net, Native, Event, NetResponse, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_old_QTETimingComponent_C::Success__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTETimingComponent.BPC_old_QTETimingComponent_C.Success__DelegateSignature");

	UBPC_old_QTETimingComponent_C_Success__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
