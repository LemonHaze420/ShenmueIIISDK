
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

// Function BPF_DetectAction.BPF_DetectAction_C.ForbidAllDetectAction
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_DetectAction_C::STATIC_ForbidAllDetectAction(class AActor* Actor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DetectAction.BPF_DetectAction_C.ForbidAllDetectAction");

	UBPF_DetectAction_C_ForbidAllDetectAction_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_DetectAction.BPF_DetectAction_C.PermitAllDetectAction
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_DetectAction_C::STATIC_PermitAllDetectAction(class AActor* Actor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DetectAction.BPF_DetectAction_C.PermitAllDetectAction");

	UBPF_DetectAction_C_PermitAllDetectAction_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_DetectAction.BPF_DetectAction_C.ForbidWindowUI
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_DetectAction_C::STATIC_ForbidWindowUI(class AActor* Actor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DetectAction.BPF_DetectAction_C.ForbidWindowUI");

	UBPF_DetectAction_C_ForbidWindowUI_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_DetectAction.BPF_DetectAction_C.PermitWindowUI
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_DetectAction_C::STATIC_PermitWindowUI(class AActor* Actor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DetectAction.BPF_DetectAction_C.PermitWindowUI");

	UBPF_DetectAction_C_PermitWindowUI_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_DetectAction.BPF_DetectAction_C.getS3DetectAction
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3DetectAction_C*    BP_S3DetectAction              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_DetectAction_C::STATIC_getS3DetectAction(class UObject* __WorldContext, class ABP_S3DetectAction_C** BP_S3DetectAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DetectAction.BPF_DetectAction_C.getS3DetectAction");

	UBPF_DetectAction_C_getS3DetectAction_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BP_S3DetectAction != nullptr)
		*BP_S3DetectAction = params.BP_S3DetectAction;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
