
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

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.StopTimeCountSE
// (NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_old_QTEFreeCommandComponent_C::StopTimeCountSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.StopTimeCountSE");

	UBPC_old_QTEFreeCommandComponent_C_StopTimeCountSE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.PlayTimeCountSE
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_old_QTEFreeCommandComponent_C::PlayTimeCountSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.PlayTimeCountSE");

	UBPC_old_QTEFreeCommandComponent_C_PlayTimeCountSE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetMaxOutAnimationLength
// (NetReliable, NetRequest, Native, NetResponse, Static, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_old_QTEFreeCommandComponent_C::STATIC_GetMaxOutAnimationLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetMaxOutAnimationLength");

	UBPC_old_QTEFreeCommandComponent_C_GetMaxOutAnimationLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetInAnimationLength
// (NetReliable, Exec, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_old_QTEFreeCommandComponent_C::GetInAnimationLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetInAnimationLength");

	UBPC_old_QTEFreeCommandComponent_C_GetInAnimationLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.InputEndSuccess
// (Native, MulticastDelegate, Public, Delegate, BlueprintEvent, BlueprintPure)

void UBPC_old_QTEFreeCommandComponent_C::InputEndSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.InputEndSuccess");

	UBPC_old_QTEFreeCommandComponent_C_InputEndSuccess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.SetInputInterval
// (Net, NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Public, Protected, NetServer)
// Parameters:
// float                          Interval                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTEFreeCommandComponent_C::SetInputInterval(float Interval)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.SetInputInterval");

	UBPC_old_QTEFreeCommandComponent_C_SetInputInterval_Params params;
	params.Interval = Interval;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.PlayOutOk
// (NetReliable, NetRequest, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_old_QTEFreeCommandComponent_C::PlayOutOk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.PlayOutOk");

	UBPC_old_QTEFreeCommandComponent_C_PlayOutOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetActionNameFromKey
// (NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FKey                    InKey                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   ActionName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTEFreeCommandComponent_C::STATIC_GetActionNameFromKey(const struct FKey& InKey, struct FName* ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetActionNameFromKey");

	UBPC_old_QTEFreeCommandComponent_C_GetActionNameFromKey_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionName != nullptr)
		*ActionName = params.ActionName;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.UpdateInputTimer
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTEFreeCommandComponent_C::STATIC_UpdateInputTimer(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.UpdateInputTimer");

	UBPC_old_QTEFreeCommandComponent_C_UpdateInputTimer_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.SetUseRealTime
// (Native, NetResponse, NetMulticast, Public, Protected, NetServer)
// Parameters:
// bool                           UseRealTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTEFreeCommandComponent_C::SetUseRealTime(bool UseRealTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.SetUseRealTime");

	UBPC_old_QTEFreeCommandComponent_C_SetUseRealTime_Params params;
	params.UseRealTime = UseRealTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.CheckCommandSucceable
// (Net, Static, NetMulticast, Public, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_old_BattleQTEExperimentFreeCommand FreeCommand                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Successable                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTEFreeCommandComponent_C::STATIC_CheckCommandSucceable(const struct FST_old_BattleQTEExperimentFreeCommand& FreeCommand, bool* Successable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.CheckCommandSucceable");

	UBPC_old_QTEFreeCommandComponent_C_CheckCommandSucceable_Params params;
	params.FreeCommand = FreeCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Successable != nullptr)
		*Successable = params.Successable;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.CheckCurrentInput
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Public, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTEFreeCommandComponent_C::CheckCurrentInput(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.CheckCurrentInput");

	UBPC_old_QTEFreeCommandComponent_C_CheckCurrentInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetResultCommand
// (NetRequest, Exec, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_old_BattleQTEExperimentFreeCommand ReturnValue                    (Parm, OutParm, ReturnParm)

struct FST_old_BattleQTEExperimentFreeCommand UBPC_old_QTEFreeCommandComponent_C::GetResultCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetResultCommand");

	UBPC_old_QTEFreeCommandComponent_C_GetResultCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.IsInQTE
// (Net, NetRequest, Native, NetMulticast, Private, Delegate, NetServer)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_old_QTEFreeCommandComponent_C::IsInQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.IsInQTE");

	UBPC_old_QTEFreeCommandComponent_C_IsInQTE_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetInputSuccessKey
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKey>            SuccessKey                     (Parm, OutParm, ZeroConstructor)

void UBPC_old_QTEFreeCommandComponent_C::GetInputSuccessKey(const struct FName& Action, TArray<struct FKey>* SuccessKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetInputSuccessKey");

	UBPC_old_QTEFreeCommandComponent_C_GetInputSuccessKey_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SuccessKey != nullptr)
		*SuccessKey = params.SuccessKey;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.ClearResult
// (Net, NetReliable, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_old_QTEFreeCommandComponent_C::ClearResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.ClearResult");

	UBPC_old_QTEFreeCommandComponent_C_ClearResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.InputFunction
// (NetReliable, NetRequest, Exec, Native, Event, Static, Public, Private, Protected, NetServer, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FKey                    InKey                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPC_old_QTEFreeCommandComponent_C::STATIC_InputFunction(const struct FKey& InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.InputFunction");

	UBPC_old_QTEFreeCommandComponent_C_InputFunction_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.InputEndFunction
// (Net, Exec, Native, Static, NetMulticast, MulticastDelegate, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void UBPC_old_QTEFreeCommandComponent_C::STATIC_InputEndFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.InputEndFunction");

	UBPC_old_QTEFreeCommandComponent_C_InputEndFunction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.InputStartFunction
// (Net, NetRequest, Exec, NetResponse, Static, NetMulticast, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FST_old_BattleQTEExperimentFreeCommand> CommandList                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          InInputLimitTime               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTEFreeCommandComponent_C::STATIC_InputStartFunction(float InInputLimitTime, TArray<struct FST_old_BattleQTEExperimentFreeCommand>* CommandList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.InputStartFunction");

	UBPC_old_QTEFreeCommandComponent_C_InputStartFunction_Params params;
	params.InInputLimitTime = InInputLimitTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CommandList != nullptr)
		*CommandList = params.CommandList;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.EndFunction
// (NetRequest, Exec, Event, NetMulticast, Private, NetServer, HasOutParms, HasDefaults, NetClient, Const)

void UBPC_old_QTEFreeCommandComponent_C::EndFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.EndFunction");

	UBPC_old_QTEFreeCommandComponent_C_EndFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.Prepare
// (Exec, Event, NetResponse, Static, MulticastDelegate, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)

void UBPC_old_QTEFreeCommandComponent_C::STATIC_Prepare()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.Prepare");

	UBPC_old_QTEFreeCommandComponent_C_Prepare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetButtonImage
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, Public, Private, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture2D                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTEFreeCommandComponent_C::STATIC_GetButtonImage(const struct FName& InputName, class UTexture2D** Texture2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetButtonImage");

	UBPC_old_QTEFreeCommandComponent_C_GetButtonImage_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture2D != nullptr)
		*Texture2D = params.Texture2D;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.ReceiveTick
// (Exec, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTEFreeCommandComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.ReceiveTick");

	UBPC_old_QTEFreeCommandComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.ReceiveEndPlay
// (Net, NetReliable, NetRequest, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTEFreeCommandComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.ReceiveEndPlay");

	UBPC_old_QTEFreeCommandComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.ExecuteUbergraph_BPC_old_QTEFreeCommandComponent
// (Native, NetResponse, Static, Delegate, NetServer)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTEFreeCommandComponent_C::STATIC_ExecuteUbergraph_BPC_old_QTEFreeCommandComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.ExecuteUbergraph_BPC_old_QTEFreeCommandComponent");

	UBPC_old_QTEFreeCommandComponent_C_ExecuteUbergraph_BPC_old_QTEFreeCommandComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.ButtonDown__DelegateSignature
// (Net, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Succeed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTEFreeCommandComponent_C::ButtonDown__DelegateSignature(bool Succeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.ButtonDown__DelegateSignature");

	UBPC_old_QTEFreeCommandComponent_C_ButtonDown__DelegateSignature_Params params;
	params.Succeed = Succeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.End__DelegateSignature
// (NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_old_QTEFreeCommandComponent_C::End__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.End__DelegateSignature");

	UBPC_old_QTEFreeCommandComponent_C_End__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.Success__DelegateSignature
// (Exec, Event, NetResponse, Static, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_old_QTEFreeCommandComponent_C::STATIC_Success__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.Success__DelegateSignature");

	UBPC_old_QTEFreeCommandComponent_C_Success__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
