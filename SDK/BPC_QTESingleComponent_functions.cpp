
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

// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.UpdateAnimationState
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_QTESingleComponent_C::UpdateAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.UpdateAnimationState");

	UBPC_QTESingleComponent_C_UpdateAnimationState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.DebugQTEForceSuccessUpdateInternal
// (Private, BlueprintCallable, BlueprintEvent)

void UBPC_QTESingleComponent_C::DebugQTEForceSuccessUpdateInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.DebugQTEForceSuccessUpdateInternal");

	UBPC_QTESingleComponent_C_DebugQTEForceSuccessUpdateInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.GetLengthBeforeCountInputLimitTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_QTESingleComponent_C::GetLengthBeforeCountInputLimitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.GetLengthBeforeCountInputLimitTime");

	UBPC_QTESingleComponent_C_GetLengthBeforeCountInputLimitTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.SetupQTE
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InSuccessAction                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTESingleComponent_C::SetupQTE(const struct FName& InSuccessAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.SetupQTE");

	UBPC_QTESingleComponent_C_SetupQTE_Params params;
	params.InSuccessAction = InSuccessAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.PlayInputFailedAnimation
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_QTESingleComponent_C::PlayInputFailedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.PlayInputFailedAnimation");

	UBPC_QTESingleComponent_C_PlayInputFailedAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.PlayInputSuccessAnimation
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_QTESingleComponent_C::PlayInputSuccessAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.PlayInputSuccessAnimation");

	UBPC_QTESingleComponent_C_PlayInputSuccessAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.IsPlayingInAnimation
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_QTESingleComponent_C::PlayTimeUpFailedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.PlayTimeUpFailedAnimation");

	UBPC_QTESingleComponent_C_PlayTimeUpFailedAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.PlayInAnimation
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_QTESingleComponent_C::PlayInAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.PlayInAnimation");

	UBPC_QTESingleComponent_C_PlayInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.SetTimeGaugeRate
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InGaugeRate                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTESingleComponent_C::SetTimeGaugeRate(float InGaugeRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.SetTimeGaugeRate");

	UBPC_QTESingleComponent_C_SetTimeGaugeRate_Params params;
	params.InGaugeRate = InGaugeRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.ExecuteInputAction
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InInputAction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_QTESingleComponent_C::ExecuteInputAction(const struct FName& InInputAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.ExecuteInputAction");

	UBPC_QTESingleComponent_C_ExecuteInputAction_Params params;
	params.InInputAction = InInputAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.Finalize
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_QTESingleComponent_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.Finalize");

	UBPC_QTESingleComponent_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_QTESingleComponent_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.Initialize");

	UBPC_QTESingleComponent_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
