
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

// Function BPF_LookAt.BPF_LookAt_C.TryGetLookAtFSMComponent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBPC_LookAtFSM_C*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBPC_LookAtFSM_C* UBPF_LookAt_C::STATIC_TryGetLookAtFSMComponent(class AActor* TargetActor, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LookAt.BPF_LookAt_C.TryGetLookAtFSMComponent");

	UBPF_LookAt_C_TryGetLookAtFSMComponent_Params params;
	params.TargetActor = TargetActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_LookAt.BPF_LookAt_C.IsWithinASpecifiedAngle180
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  SelfActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsWithin                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                LookAtRotation                 (Parm, OutParm, IsPlainOldData)
// float                          TargetAngle                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_LookAt_C::STATIC_IsWithinASpecifiedAngle180(const struct FVector& TargetLocation, class AActor* SelfActor, float Angle, class UObject* __WorldContext, bool* bIsWithin, struct FRotator* LookAtRotation, float* TargetAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LookAt.BPF_LookAt_C.IsWithinASpecifiedAngle180");

	UBPF_LookAt_C_IsWithinASpecifiedAngle180_Params params;
	params.TargetLocation = TargetLocation;
	params.SelfActor = SelfActor;
	params.Angle = Angle;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsWithin != nullptr)
		*bIsWithin = params.bIsWithin;
	if (LookAtRotation != nullptr)
		*LookAtRotation = params.LookAtRotation;
	if (TargetAngle != nullptr)
		*TargetAngle = params.TargetAngle;
}


// Function BPF_LookAt.BPF_LookAt_C.LookAtSetup_Initialize
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPC_LookAt_C*           LookAt                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_LookAt_C::STATIC_LookAtSetup_Initialize(class UBPC_LookAt_C* LookAt, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LookAt.BPF_LookAt_C.LookAtSetup_Initialize");

	UBPF_LookAt_C_LookAtSetup_Initialize_Params params;
	params.LookAt = LookAt;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_LookAt.BPF_LookAt_C.LookAtSetup_ParamaterDefault
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPC_LookAt_C*           LookAt                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_LookAt_C::STATIC_LookAtSetup_ParamaterDefault(class UBPC_LookAt_C* LookAt, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_LookAt.BPF_LookAt_C.LookAtSetup_ParamaterDefault");

	UBPF_LookAt_C_LookAtSetup_ParamaterDefault_Params params;
	params.LookAt = LookAt;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
