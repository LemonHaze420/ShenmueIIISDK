
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

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.StopTimeCountSE
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTECommandComponent_C::StopTimeCountSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.StopTimeCountSE");

	UBPC_old_QTECommandComponent_C_StopTimeCountSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.PlayTimeCountSE
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTECommandComponent_C::PlayTimeCountSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.PlayTimeCountSE");

	UBPC_old_QTECommandComponent_C_PlayTimeCountSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.GetInAnimationLength
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_old_QTECommandComponent_C::GetInAnimationLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.GetInAnimationLength");

	UBPC_old_QTECommandComponent_C_GetInAnimationLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.Update
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTECommandComponent_C::Update(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.Update");

	UBPC_old_QTECommandComponent_C_Update_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.SetUseRealTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseRealTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTECommandComponent_C::SetUseRealTime(bool UseRealTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.SetUseRealTime");

	UBPC_old_QTECommandComponent_C_SetUseRealTime_Params params;
	params.UseRealTime = UseRealTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.IsInQTE
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_old_QTECommandComponent_C::IsInQTE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.IsInQTE");

	UBPC_old_QTECommandComponent_C_IsInQTE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.GetInputSuccessKey
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKey>            SuccessKey                     (Parm, OutParm, ZeroConstructor)

void UBPC_old_QTECommandComponent_C::GetInputSuccessKey(int Index, TArray<struct FKey>* SuccessKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.GetInputSuccessKey");

	UBPC_old_QTECommandComponent_C_GetInputSuccessKey_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SuccessKey != nullptr)
		*SuccessKey = params.SuccessKey;
}


// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.InstructionStartFunction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           SuccessAction                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          InInputLimitTime               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTECommandComponent_C::InstructionStartFunction(float InInputLimitTime, TArray<struct FName>* SuccessAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.InstructionStartFunction");

	UBPC_old_QTECommandComponent_C_InstructionStartFunction_Params params;
	params.InInputLimitTime = InInputLimitTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SuccessAction != nullptr)
		*SuccessAction = params.SuccessAction;
}


// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.ClearResult
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTECommandComponent_C::ClearResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.ClearResult");

	UBPC_old_QTECommandComponent_C_ClearResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.InputFunction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    InKey                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPC_old_QTECommandComponent_C::InputFunction(const struct FKey& InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.InputFunction");

	UBPC_old_QTECommandComponent_C_InputFunction_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.InputEndFunction
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTECommandComponent_C::InputEndFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.InputEndFunction");

	UBPC_old_QTECommandComponent_C_InputEndFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.InputStartFunction
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTECommandComponent_C::InputStartFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.InputStartFunction");

	UBPC_old_QTECommandComponent_C_InputStartFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.EndFunction
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTECommandComponent_C::EndFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.EndFunction");

	UBPC_old_QTECommandComponent_C_EndFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.Prepare
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTECommandComponent_C::Prepare()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.Prepare");

	UBPC_old_QTECommandComponent_C_Prepare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.GetButtonImage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InputName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture2D                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTECommandComponent_C::GetButtonImage(const struct FName& InputName, class UTexture2D** Texture2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.GetButtonImage");

	UBPC_old_QTECommandComponent_C_GetButtonImage_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture2D != nullptr)
		*Texture2D = params.Texture2D;
}


// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTECommandComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.ReceiveTick");

	UBPC_old_QTECommandComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTECommandComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.ReceiveEndPlay");

	UBPC_old_QTECommandComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.ExecuteUbergraph_BPC_old_QTECommandComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTECommandComponent_C::ExecuteUbergraph_BPC_old_QTECommandComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.ExecuteUbergraph_BPC_old_QTECommandComponent");

	UBPC_old_QTECommandComponent_C_ExecuteUbergraph_BPC_old_QTECommandComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.ButtonDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Succeed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_old_QTECommandComponent_C::ButtonDown__DelegateSignature(bool Succeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.ButtonDown__DelegateSignature");

	UBPC_old_QTECommandComponent_C_ButtonDown__DelegateSignature_Params params;
	params.Succeed = Succeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.End__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTECommandComponent_C::End__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.End__DelegateSignature");

	UBPC_old_QTECommandComponent_C_End__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.Success__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPC_old_QTECommandComponent_C::Success__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.Success__DelegateSignature");

	UBPC_old_QTECommandComponent_C_Success__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
