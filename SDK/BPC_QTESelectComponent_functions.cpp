
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

// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.UpdateAnimationState
// (NetRequest, Event, MulticastDelegate, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBPC_QTESelectComponent_C::UpdateAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.UpdateAnimationState");

	UBPC_QTESelectComponent_C_UpdateAnimationState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.DebugQTEForceSuccessUpdateInternal
// (NetRequest, Native, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_QTESelectComponent_C::STATIC_DebugQTEForceSuccessUpdateInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.DebugQTEForceSuccessUpdateInternal");

	UBPC_QTESelectComponent_C_DebugQTEForceSuccessUpdateInternal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.GetLengthBeforeCountInputLimitTime
// (NetReliable, Exec, Static, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_QTESelectComponent_C::STATIC_GetLengthBeforeCountInputLimitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.GetLengthBeforeCountInputLimitTime");

	UBPC_QTESelectComponent_C_GetLengthBeforeCountInputLimitTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.IsInputedOther
// (NetReliable, Exec, Native, NetMulticast, Public, Protected, NetServer)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_QTESelectComponent_C::IsInputedOther()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.IsInputedOther");

	UBPC_QTESelectComponent_C_IsInputedOther_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.SetupQTE
// (Net, Exec, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   InLeftAction                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InRightAction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InSuccessAction                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTESelectComponent_C::STATIC_SetupQTE(const struct FName& InLeftAction, const struct FName& InRightAction, const struct FName& InSuccessAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.SetupQTE");

	UBPC_QTESelectComponent_C_SetupQTE_Params params;
	params.InLeftAction = InLeftAction;
	params.InRightAction = InRightAction;
	params.InSuccessAction = InSuccessAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.PlayInputFailedAnimation
// (Net, Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UBPC_QTESelectComponent_C::PlayInputFailedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.PlayInputFailedAnimation");

	UBPC_QTESelectComponent_C_PlayInputFailedAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.PlayInputSuccessAnimation
// (Net, NetReliable, Exec, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           InRight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTESelectComponent_C::STATIC_PlayInputSuccessAnimation(bool InRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.PlayInputSuccessAnimation");

	UBPC_QTESelectComponent_C_PlayInputSuccessAnimation_Params params;
	params.InRight = InRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.IsPlayingInAnimation
// (Exec, NetResponse, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_QTESelectComponent_C::IsPlayingInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.IsPlayingInAnimation");

	UBPC_QTESelectComponent_C_IsPlayingInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.PlayTimeUpFailedAnimation
// (NetReliable, Exec, Native, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_QTESelectComponent_C::STATIC_PlayTimeUpFailedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.PlayTimeUpFailedAnimation");

	UBPC_QTESelectComponent_C_PlayTimeUpFailedAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.PlayInAnimation
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_QTESelectComponent_C::STATIC_PlayInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.PlayInAnimation");

	UBPC_QTESelectComponent_C_PlayInAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.SetTimeGaugeRate
// (Exec, Event, Static, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          InGaugeRate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTESelectComponent_C::STATIC_SetTimeGaugeRate(float InGaugeRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.SetTimeGaugeRate");

	UBPC_QTESelectComponent_C_SetTimeGaugeRate_Params params;
	params.InGaugeRate = InGaugeRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.ExecuteInputAction
// (Native, NetResponse, Private, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   InInputAction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTESelectComponent_C::ExecuteInputAction(const struct FName& InInputAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.ExecuteInputAction");

	UBPC_QTESelectComponent_C_ExecuteInputAction_Params params;
	params.InInputAction = InInputAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.Reset
// (NetRequest, Exec, Event, NetMulticast, Public, Protected, NetServer)

void UBPC_QTESelectComponent_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.Reset");

	UBPC_QTESelectComponent_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.Finalize
// (Net, NetRequest, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, NetClient, BlueprintEvent, BlueprintPure)

void UBPC_QTESelectComponent_C::STATIC_Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.Finalize");

	UBPC_QTESelectComponent_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.Initialize
// (Net, Exec, Native, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UBPC_QTESelectComponent_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.Initialize");

	UBPC_QTESelectComponent_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
