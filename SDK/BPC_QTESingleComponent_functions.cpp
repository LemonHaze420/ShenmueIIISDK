
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

// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.UpdateAnimationState
// (NetRequest, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, Delegate, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)

void UBPC_QTESingleComponent_C::STATIC_UpdateAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.UpdateAnimationState");

	UBPC_QTESingleComponent_C_UpdateAnimationState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.DebugQTEForceSuccessUpdateInternal
// (NetRequest, Native, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_QTESingleComponent_C::STATIC_DebugQTEForceSuccessUpdateInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.DebugQTEForceSuccessUpdateInternal");

	UBPC_QTESingleComponent_C_DebugQTEForceSuccessUpdateInternal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.GetLengthBeforeCountInputLimitTime
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_QTESingleComponent_C::STATIC_GetLengthBeforeCountInputLimitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.GetLengthBeforeCountInputLimitTime");

	UBPC_QTESingleComponent_C_GetLengthBeforeCountInputLimitTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.SetupQTE
// (Exec, Native, NetMulticast, Public, Protected, NetServer)
// Parameters:
// struct FName                   InSuccessAction                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTESingleComponent_C::SetupQTE(const struct FName& InSuccessAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.SetupQTE");

	UBPC_QTESingleComponent_C_SetupQTE_Params params;
	params.InSuccessAction = InSuccessAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.PlayInputFailedAnimation
// (NetRequest, Exec, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UBPC_QTESingleComponent_C::PlayInputFailedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.PlayInputFailedAnimation");

	UBPC_QTESingleComponent_C_PlayInputFailedAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.PlayInputSuccessAnimation
// (NetReliable, NetRequest, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_QTESingleComponent_C::STATIC_PlayInputSuccessAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.PlayInputSuccessAnimation");

	UBPC_QTESingleComponent_C_PlayInputSuccessAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.IsPlayingInAnimation
// (Net, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_QTESingleComponent_C::IsPlayingInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.IsPlayingInAnimation");

	UBPC_QTESingleComponent_C_IsPlayingInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.PlayTimeUpFailedAnimation
// (Exec, Native, Event, NetResponse, Static, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_QTESingleComponent_C::STATIC_PlayTimeUpFailedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.PlayTimeUpFailedAnimation");

	UBPC_QTESingleComponent_C_PlayTimeUpFailedAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.PlayInAnimation
// (Net, NetReliable, Event, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UBPC_QTESingleComponent_C::STATIC_PlayInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.PlayInAnimation");

	UBPC_QTESingleComponent_C_PlayInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.SetTimeGaugeRate
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, MulticastDelegate, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          InGaugeRate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTESingleComponent_C::STATIC_SetTimeGaugeRate(float InGaugeRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.SetTimeGaugeRate");

	UBPC_QTESingleComponent_C_SetTimeGaugeRate_Params params;
	params.InGaugeRate = InGaugeRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.ExecuteInputAction
// (NetReliable, Native, Event, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   InInputAction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTESingleComponent_C::STATIC_ExecuteInputAction(const struct FName& InInputAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.ExecuteInputAction");

	UBPC_QTESingleComponent_C_ExecuteInputAction_Params params;
	params.InInputAction = InInputAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.Finalize
// (Net, NetReliable, Native, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_QTESingleComponent_C::STATIC_Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.Finalize");

	UBPC_QTESingleComponent_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.Initialize
// (NetRequest, Native, NetResponse, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UBPC_QTESingleComponent_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.Initialize");

	UBPC_QTESingleComponent_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
