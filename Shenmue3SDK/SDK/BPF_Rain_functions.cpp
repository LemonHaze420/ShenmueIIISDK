
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

// Function BPF_Rain.BPF_Rain_C.IsApplyWetness
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Apply                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Rain_C::STATIC_IsApplyWetness(class AActor* Actor, class UObject* __WorldContext, bool* Apply)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Rain.BPF_Rain_C.IsApplyWetness");

	UBPF_Rain_C_IsApplyWetness_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Apply != nullptr)
		*Apply = params.Apply;
}


// Function BPF_Rain.BPF_Rain_C.ApplyMeshWetness
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Wetness                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Rain_C::STATIC_ApplyMeshWetness(class USkeletalMeshComponent* Component, float Wetness, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Rain.BPF_Rain_C.ApplyMeshWetness");

	UBPF_Rain_C_ApplyMeshWetness_Params params;
	params.Component = Component;
	params.Wetness = Wetness;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_Rain.BPF_Rain_C.GetPlayerWetness
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Wetness                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Rain_C::STATIC_GetPlayerWetness(class UObject* __WorldContext, float* Wetness)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Rain.BPF_Rain_C.GetPlayerWetness");

	UBPF_Rain_C_GetPlayerWetness_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Wetness != nullptr)
		*Wetness = params.Wetness;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
