
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

// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.StopTimeCountSE
// (Native, NetResponse, Static, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_old_QTESelectComponent_C::STATIC_StopTimeCountSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.StopTimeCountSE");

	UBPC_old_QTESelectComponent_C_StopTimeCountSE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.PlayTimeCountSE
// (NetReliable, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_old_QTESelectComponent_C::PlayTimeCountSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.PlayTimeCountSE");

	UBPC_old_QTESelectComponent_C_PlayTimeCountSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.UpdateAnimationState
// (Net, NetReliable, Exec, Native, NetMulticast, MulticastDelegate, Public, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure)

void UBPC_old_QTESelectComponent_C::UpdateAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.UpdateAnimationState");

	UBPC_old_QTESelectComponent_C_UpdateAnimationState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.IsInQTE
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_old_QTESelectComponent_C::STATIC_IsInQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.IsInQTE");

	UBPC_old_QTESelectComponent_C_IsInQTE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.GetInAnimationLength
// (Net, NetRequest, Event, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_old_QTESelectComponent_C::GetInAnimationLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.GetInAnimationLength");

	UBPC_old_QTESelectComponent_C_GetInAnimationLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.IsPlayingIn
// (Exec, Event, NetResponse, Static, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_old_QTESelectComponent_C::STATIC_IsPlayingIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.IsPlayingIn");

	UBPC_old_QTESelectComponent_C_IsPlayingIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.SetTimeGaugeRate
// (Static, MulticastDelegate, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Rate                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTESelectComponent_C::STATIC_SetTimeGaugeRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.SetTimeGaugeRate");

	UBPC_old_QTESelectComponent_C_SetTimeGaugeRate_Params params;
	params.Rate = Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.UpdateTime
// (NetRequest, Exec, NetMulticast, Private, Delegate, NetServer)
// Parameters:
// float                          TickDeltaSeconds               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentDeltaSeconds            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTESelectComponent_C::UpdateTime(float TickDeltaSeconds, float* CurrentDeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.UpdateTime");

	UBPC_old_QTESelectComponent_C_UpdateTime_Params params;
	params.TickDeltaSeconds = TickDeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentDeltaSeconds != nullptr)
		*CurrentDeltaSeconds = params.CurrentDeltaSeconds;
}


// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.SetUseRealTime
// (NetReliable, Exec, NetResponse, NetMulticast, Public, Protected, NetServer)
// Parameters:
// bool                           UseRealTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTESelectComponent_C::SetUseRealTime(bool UseRealTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.SetUseRealTime");

	UBPC_old_QTESelectComponent_C_SetUseRealTime_Params params;
	params.UseRealTime = UseRealTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.ClearResult
// (Net, Exec, NetResponse, NetMulticast, Public, Protected, NetServer)

void UBPC_old_QTESelectComponent_C::ClearResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.ClearResult");

	UBPC_old_QTESelectComponent_C_ClearResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.InputFunction
// (NetReliable, NetRequest, Exec, Static, MulticastDelegate, Public, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    InKey                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPC_old_QTESelectComponent_C::STATIC_InputFunction(const struct FKey& InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.InputFunction");

	UBPC_old_QTESelectComponent_C_InputFunction_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.InputEndFunction
// (NetReliable, NetRequest, Exec, Native, NetResponse, Static, MulticastDelegate, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void UBPC_old_QTESelectComponent_C::STATIC_InputEndFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.InputEndFunction");

	UBPC_old_QTESelectComponent_C_InputEndFunction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.InputStartFunction
// (NetReliable, NetRequest, Exec, Native, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   LeftAction                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RightAction                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SuccessAction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTESelectComponent_C::InputStartFunction(const struct FName& LeftAction, const struct FName& RightAction, const struct FName& SuccessAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.InputStartFunction");

	UBPC_old_QTESelectComponent_C_InputStartFunction_Params params;
	params.LeftAction = LeftAction;
	params.RightAction = RightAction;
	params.SuccessAction = SuccessAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.EndFunction
// (Net, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_old_QTESelectComponent_C::STATIC_EndFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.EndFunction");

	UBPC_old_QTESelectComponent_C_EndFunction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.Prepare
// (Net, NetReliable, Event, NetResponse, Static, MulticastDelegate, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void UBPC_old_QTESelectComponent_C::STATIC_Prepare()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.Prepare");

	UBPC_old_QTESelectComponent_C_Prepare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.GetButtonImage
// (NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture2D                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTESelectComponent_C::STATIC_GetButtonImage(const struct FName& InputName, class UTexture2D** Texture2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.GetButtonImage");

	UBPC_old_QTESelectComponent_C_GetButtonImage_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture2D != nullptr)
		*Texture2D = params.Texture2D;
}


// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.ReceiveTick
// (Net, NetRequest, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTESelectComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.ReceiveTick");

	UBPC_old_QTESelectComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.ReceiveEndPlay
// (NetRequest, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTESelectComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.ReceiveEndPlay");

	UBPC_old_QTESelectComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.ExecuteUbergraph_BPC_old_QTESelectComponent
// (Net, NetReliable, Static, NetMulticast, Private, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTESelectComponent_C::STATIC_ExecuteUbergraph_BPC_old_QTESelectComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.ExecuteUbergraph_BPC_old_QTESelectComponent");

	UBPC_old_QTESelectComponent_C_ExecuteUbergraph_BPC_old_QTESelectComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.ButtonDown__DelegateSignature
// (NetReliable, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Succeed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTESelectComponent_C::ButtonDown__DelegateSignature(bool Succeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.ButtonDown__DelegateSignature");

	UBPC_old_QTESelectComponent_C_ButtonDown__DelegateSignature_Params params;
	params.Succeed = Succeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.End__DelegateSignature
// (NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_old_QTESelectComponent_C::End__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.End__DelegateSignature");

	UBPC_old_QTESelectComponent_C_End__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.Success__DelegateSignature
// (Net, NetReliable, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_old_QTESelectComponent_C::Success__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTESelectComponent.BPC_old_QTESelectComponent_C.Success__DelegateSignature");

	UBPC_old_QTESelectComponent_C_Success__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
