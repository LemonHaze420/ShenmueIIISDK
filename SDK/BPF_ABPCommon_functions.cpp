
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

// Function BPF_ABPCommon.BPF_ABPCommon_C.BPF_CancelACTurn
// (Net, Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            flag                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_ABPCommon_C::BPF_CancelACTurn(class UObject* __WorldContext, int* flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ABPCommon.BPF_ABPCommon_C.BPF_CancelACTurn");

	UBPF_ABPCommon_C_BPF_CancelACTurn_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (flag != nullptr)
		*flag = params.flag;
}


// Function BPF_ABPCommon.BPF_ABPCommon_C.BPF_IsACTurnCanceled
// (Native, Event, NetResponse, Static, MulticastDelegate, Public, Protected, Delegate, Const)
// Parameters:
// class US3AnimInstance*         AnimInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_ABPCommon_C::STATIC_BPF_IsACTurnCanceled(class US3AnimInstance* AnimInstance, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ABPCommon.BPF_ABPCommon_C.BPF_IsACTurnCanceled");

	UBPF_ABPCommon_C_BPF_IsACTurnCanceled_Params params;
	params.AnimInstance = AnimInstance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_ABPCommon.BPF_ABPCommon_C.BPF_ShouldCancelACTurn
// (Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_ABPCommon_C::BPF_ShouldCancelACTurn(int flag, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ABPCommon.BPF_ABPCommon_C.BPF_ShouldCancelACTurn");

	UBPF_ABPCommon_C_BPF_ShouldCancelACTurn_Params params;
	params.flag = flag;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_ABPCommon.BPF_ABPCommon_C.BPF_ShouldStartACTurn
// (NetRequest, Exec, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            flag                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_ABPCommon_C::BPF_ShouldStartACTurn(int flag, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ABPCommon.BPF_ABPCommon_C.BPF_ShouldStartACTurn");

	UBPF_ABPCommon_C_BPF_ShouldStartACTurn_Params params;
	params.flag = flag;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_ABPCommon.BPF_ABPCommon_C.BPF_MarkACTurnStarted
// (NetReliable, Exec, Native, Event, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_ABPCommon_C::BPF_MarkACTurnStarted(class UObject* __WorldContext, int* Step)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ABPCommon.BPF_ABPCommon_C.BPF_MarkACTurnStarted");

	UBPF_ABPCommon_C_BPF_MarkACTurnStarted_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Step != nullptr)
		*Step = params.Step;
}


// Function BPF_ABPCommon.BPF_ABPCommon_C.BPF_TickACTurn
// (NetReliable, NetRequest, Static, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class US3AnimInstance*         AnimInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StepFlag                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          BSAngle                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_ABPCommon_C::STATIC_BPF_TickACTurn(class US3AnimInstance* AnimInstance, class UObject* __WorldContext, int* StepFlag, float* BSAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ABPCommon.BPF_ABPCommon_C.BPF_TickACTurn");

	UBPF_ABPCommon_C_BPF_TickACTurn_Params params;
	params.AnimInstance = AnimInstance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepFlag != nullptr)
		*StepFlag = params.StepFlag;
	if (BSAngle != nullptr)
		*BSAngle = params.BSAngle;
}


// Function BPF_ABPCommon.BPF_ABPCommon_C.BPF_MarkACTurnDone
// (Net, Exec, Native, Event, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_ABPCommon_C::BPF_MarkACTurnDone(class UObject* __WorldContext, int* Step)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ABPCommon.BPF_ABPCommon_C.BPF_MarkACTurnDone");

	UBPF_ABPCommon_C_BPF_MarkACTurnDone_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Step != nullptr)
		*Step = params.Step;
}


// Function BPF_ABPCommon.BPF_ABPCommon_C.BPF_HasACTurnAroundRequest
// (NetReliable, NetRequest, Exec, Native, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class US3AnimInstance*         AnimInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool UBPF_ABPCommon_C::STATIC_BPF_HasACTurnAroundRequest(class US3AnimInstance* AnimInstance, class UObject* __WorldContext, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ABPCommon.BPF_ABPCommon_C.BPF_HasACTurnAroundRequest");

	UBPF_ABPCommon_C_BPF_HasACTurnAroundRequest_Params params;
	params.AnimInstance = AnimInstance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;

	return params.ReturnValue;
}


// Function BPF_ABPCommon.BPF_ABPCommon_C.BPF_UpdateFootIKAlpha
// (Exec, Event, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class US3AnimInstance*         AnimInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AlphaVar                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_ABPCommon_C::STATIC_BPF_UpdateFootIKAlpha(class US3AnimInstance* AnimInstance, float DeltaSeconds, class UObject* __WorldContext, float* AlphaVar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_ABPCommon.BPF_ABPCommon_C.BPF_UpdateFootIKAlpha");

	UBPF_ABPCommon_C_BPF_UpdateFootIKAlpha_Params params;
	params.AnimInstance = AnimInstance;
	params.DeltaSeconds = DeltaSeconds;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AlphaVar != nullptr)
		*AlphaVar = params.AlphaVar;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
