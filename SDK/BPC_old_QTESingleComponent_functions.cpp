
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

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.StopTimeCountSE
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTESingleComponent_C::StopTimeCountSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.StopTimeCountSE");

	UBPC_old_QTESingleComponent_C_StopTimeCountSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.PlayTimeCountSE
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTESingleComponent_C::PlayTimeCountSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.PlayTimeCountSE");

	UBPC_old_QTESingleComponent_C_PlayTimeCountSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.UpdateAnimationState
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTESingleComponent_C::UpdateAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.UpdateAnimationState");

	UBPC_old_QTESingleComponent_C_UpdateAnimationState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.IsInQTE
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_old_QTESingleComponent_C::IsInQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.IsInQTE");

	UBPC_old_QTESingleComponent_C_IsInQTE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.GetInAnimationLength
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_old_QTESingleComponent_C::GetInAnimationLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.GetInAnimationLength");

	UBPC_old_QTESingleComponent_C_GetInAnimationLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.IsPlayingIn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_old_QTESingleComponent_C::IsPlayingIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.IsPlayingIn");

	UBPC_old_QTESingleComponent_C_IsPlayingIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.SetTimeGaugeRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTESingleComponent_C::SetTimeGaugeRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.SetTimeGaugeRate");

	UBPC_old_QTESingleComponent_C_SetTimeGaugeRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.UpdateTime
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TickDeltaSeconds               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentDeltaSeconds            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTESingleComponent_C::UpdateTime(float TickDeltaSeconds, float* CurrentDeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.UpdateTime");

	UBPC_old_QTESingleComponent_C_UpdateTime_Params params;
	params.TickDeltaSeconds = TickDeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentDeltaSeconds != nullptr)
		*CurrentDeltaSeconds = params.CurrentDeltaSeconds;
}


// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.SetUseRealTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseRealTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTESingleComponent_C::SetUseRealTime(bool UseRealTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.SetUseRealTime");

	UBPC_old_QTESingleComponent_C_SetUseRealTime_Params params;
	params.UseRealTime = UseRealTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.ClearResult
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTESingleComponent_C::ClearResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.ClearResult");

	UBPC_old_QTESingleComponent_C_ClearResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.InputFunction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    InKey                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPC_old_QTESingleComponent_C::InputFunction(const struct FKey& InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.InputFunction");

	UBPC_old_QTESingleComponent_C_InputFunction_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.InputEndFunction
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTESingleComponent_C::InputEndFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.InputEndFunction");

	UBPC_old_QTESingleComponent_C_InputEndFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.InputStartFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SuccessAction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTESingleComponent_C::InputStartFunction(const struct FName& SuccessAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.InputStartFunction");

	UBPC_old_QTESingleComponent_C_InputStartFunction_Params params;
	params.SuccessAction = SuccessAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.EndFunction
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTESingleComponent_C::EndFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.EndFunction");

	UBPC_old_QTESingleComponent_C_EndFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.Prepare
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTESingleComponent_C::Prepare()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.Prepare");

	UBPC_old_QTESingleComponent_C_Prepare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.GetButtonImage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture2D                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTESingleComponent_C::GetButtonImage(const struct FName& InputName, class UTexture2D** Texture2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.GetButtonImage");

	UBPC_old_QTESingleComponent_C_GetButtonImage_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture2D != nullptr)
		*Texture2D = params.Texture2D;
}


// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTESingleComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.ReceiveTick");

	UBPC_old_QTESingleComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTESingleComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.ReceiveEndPlay");

	UBPC_old_QTESingleComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.ExecuteUbergraph_BPC_old_QTESingleComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTESingleComponent_C::ExecuteUbergraph_BPC_old_QTESingleComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.ExecuteUbergraph_BPC_old_QTESingleComponent");

	UBPC_old_QTESingleComponent_C_ExecuteUbergraph_BPC_old_QTESingleComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.ButtonDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Succeed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTESingleComponent_C::ButtonDown__DelegateSignature(bool Succeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.ButtonDown__DelegateSignature");

	UBPC_old_QTESingleComponent_C_ButtonDown__DelegateSignature_Params params;
	params.Succeed = Succeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.End__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTESingleComponent_C::End__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.End__DelegateSignature");

	UBPC_old_QTESingleComponent_C_End__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.Success__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTESingleComponent_C::Success__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.Success__DelegateSignature");

	UBPC_old_QTESingleComponent_C_Success__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
