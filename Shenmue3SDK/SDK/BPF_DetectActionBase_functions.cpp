
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPF_DetectActionBase.BPF_DetectActionBase_C.ForbidAllDetectAction
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_DetectActionBase_C::STATIC_ForbidAllDetectAction(class AActor* Actor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DetectActionBase.BPF_DetectActionBase_C.ForbidAllDetectAction");

	UBPF_DetectActionBase_C_ForbidAllDetectAction_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_DetectActionBase.BPF_DetectActionBase_C.PermitAllDetectAction
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_DetectActionBase_C::STATIC_PermitAllDetectAction(class AActor* Actor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DetectActionBase.BPF_DetectActionBase_C.PermitAllDetectAction");

	UBPF_DetectActionBase_C_PermitAllDetectAction_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_DetectActionBase.BPF_DetectActionBase_C.ForbidWindowUI
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_DetectActionBase_C::STATIC_ForbidWindowUI(class AActor* Actor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DetectActionBase.BPF_DetectActionBase_C.ForbidWindowUI");

	UBPF_DetectActionBase_C_ForbidWindowUI_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_DetectActionBase.BPF_DetectActionBase_C.PermitWindowUI
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_DetectActionBase_C::STATIC_PermitWindowUI(class AActor* Actor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_DetectActionBase.BPF_DetectActionBase_C.PermitWindowUI");

	UBPF_DetectActionBase_C_PermitWindowUI_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
