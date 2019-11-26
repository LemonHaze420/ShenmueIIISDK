
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
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTEFreeCommandComponent_C::StopTimeCountSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.StopTimeCountSE");

	UBPC_old_QTEFreeCommandComponent_C_StopTimeCountSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.PlayTimeCountSE
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTEFreeCommandComponent_C::PlayTimeCountSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.PlayTimeCountSE");

	UBPC_old_QTEFreeCommandComponent_C_PlayTimeCountSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetMaxOutAnimationLength
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_old_QTEFreeCommandComponent_C::GetMaxOutAnimationLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetMaxOutAnimationLength");

	UBPC_old_QTEFreeCommandComponent_C_GetMaxOutAnimationLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetInAnimationLength
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTEFreeCommandComponent_C::InputEndSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.InputEndSuccess");

	UBPC_old_QTEFreeCommandComponent_C_InputEndSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.SetInputInterval
// (Public, BlueprintCallable, BlueprintEvent)
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
// (Private, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTEFreeCommandComponent_C::PlayOutOk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.PlayOutOk");

	UBPC_old_QTEFreeCommandComponent_C_PlayOutOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetActionNameFromKey
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    InKey                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   ActionName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTEFreeCommandComponent_C::GetActionNameFromKey(const struct FKey& InKey, struct FName* ActionName)
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
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTEFreeCommandComponent_C::UpdateInputTimer(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.UpdateInputTimer");

	UBPC_old_QTEFreeCommandComponent_C_UpdateInputTimer_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.SetUseRealTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseRealTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTEFreeCommandComponent_C::SetUseRealTime(bool UseRealTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.SetUseRealTime");

	UBPC_old_QTEFreeCommandComponent_C_SetUseRealTime_Params params;
	params.UseRealTime = UseRealTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.CheckCommandSucceable
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_old_BattleQTEExperimentFreeCommand FreeCommand                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Successable                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTEFreeCommandComponent_C::CheckCommandSucceable(const struct FST_old_BattleQTEExperimentFreeCommand& FreeCommand, bool* Successable)
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
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_old_QTEFreeCommandComponent_C::IsInQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.IsInQTE");

	UBPC_old_QTEFreeCommandComponent_C_IsInQTE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetInputSuccessKey
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKey>            SuccessKey                     (Parm, OutParm, ZeroConstructor)

void UBPC_old_QTEFreeCommandComponent_C::GetInputSuccessKey(const struct FName& Action, TArray<struct FKey>* SuccessKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetInputSuccessKey");

	UBPC_old_QTEFreeCommandComponent_C_GetInputSuccessKey_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SuccessKey != nullptr)
		*SuccessKey = params.SuccessKey;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.ClearResult
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTEFreeCommandComponent_C::ClearResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.ClearResult");

	UBPC_old_QTEFreeCommandComponent_C_ClearResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.InputFunction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    InKey                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPC_old_QTEFreeCommandComponent_C::InputFunction(const struct FKey& InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.InputFunction");

	UBPC_old_QTEFreeCommandComponent_C_InputFunction_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.InputEndFunction
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTEFreeCommandComponent_C::InputEndFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.InputEndFunction");

	UBPC_old_QTEFreeCommandComponent_C_InputEndFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.InputStartFunction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_old_BattleQTEExperimentFreeCommand> CommandList                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          InInputLimitTime               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTEFreeCommandComponent_C::InputStartFunction(float InInputLimitTime, TArray<struct FST_old_BattleQTEExperimentFreeCommand>* CommandList)
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
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTEFreeCommandComponent_C::EndFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.EndFunction");

	UBPC_old_QTEFreeCommandComponent_C_EndFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.Prepare
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTEFreeCommandComponent_C::Prepare()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.Prepare");

	UBPC_old_QTEFreeCommandComponent_C_Prepare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetButtonImage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture2D                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTEFreeCommandComponent_C::GetButtonImage(const struct FName& InputName, class UTexture2D** Texture2D)
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
// (Event, Public, BlueprintEvent)
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
// (Event, Public, BlueprintEvent)
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
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTEFreeCommandComponent_C::ExecuteUbergraph_BPC_old_QTEFreeCommandComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.ExecuteUbergraph_BPC_old_QTEFreeCommandComponent");

	UBPC_old_QTEFreeCommandComponent_C_ExecuteUbergraph_BPC_old_QTEFreeCommandComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.ButtonDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
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
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTEFreeCommandComponent_C::End__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.End__DelegateSignature");

	UBPC_old_QTEFreeCommandComponent_C_End__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.Success__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTEFreeCommandComponent_C::Success__DelegateSignature()
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
