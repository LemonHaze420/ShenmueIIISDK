
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

// Function BPF_SplineComponent.BPF_SplineComponent_C.BPF_Spline_FindPredictedWorldLocationWithProjection
// (Exec, Event, MulticastDelegate, Delegate, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class USplineComponent*        spline                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          DistanceForward                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBPF_SplineComponent_C::BPF_Spline_FindPredictedWorldLocationWithProjection(class USplineComponent* spline, const struct FVector& WorldLocation, float DistanceForward, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_SplineComponent.BPF_SplineComponent_C.BPF_Spline_FindPredictedWorldLocationWithProjection");

	UBPF_SplineComponent_C_BPF_Spline_FindPredictedWorldLocationWithProjection_Params params;
	params.spline = spline;
	params.WorldLocation = WorldLocation;
	params.DistanceForward = DistanceForward;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_SplineComponent.BPF_SplineComponent_C.BPF_Spline_FindDistanceClosestToWorldLocation
// (Native, Static, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class USplineComponent*        spline                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPF_SplineComponent_C::STATIC_BPF_Spline_FindDistanceClosestToWorldLocation(class USplineComponent* spline, const struct FVector& WorldLocation, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_SplineComponent.BPF_SplineComponent_C.BPF_Spline_FindDistanceClosestToWorldLocation");

	UBPF_SplineComponent_C_BPF_Spline_FindDistanceClosestToWorldLocation_Params params;
	params.spline = spline;
	params.WorldLocation = WorldLocation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_SplineComponent.BPF_SplineComponent_C.BPF_Spline_FindPredictedWorldLocation
// (NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*        spline                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          DistanceForward                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBPF_SplineComponent_C::BPF_Spline_FindPredictedWorldLocation(class USplineComponent* spline, const struct FVector& WorldLocation, float DistanceForward, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_SplineComponent.BPF_SplineComponent_C.BPF_Spline_FindPredictedWorldLocation");

	UBPF_SplineComponent_C_BPF_Spline_FindPredictedWorldLocation_Params params;
	params.spline = spline;
	params.WorldLocation = WorldLocation;
	params.DistanceForward = DistanceForward;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_SplineComponent.BPF_SplineComponent_C.BPF_Spline_FindTangentClosestToWorldLocation
// (Exec, Static, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class USplineComponent*        spline                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 WorldLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBPF_SplineComponent_C::STATIC_BPF_Spline_FindTangentClosestToWorldLocation(class USplineComponent* spline, class UObject* __WorldContext, struct FVector* WorldLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_SplineComponent.BPF_SplineComponent_C.BPF_Spline_FindTangentClosestToWorldLocation");

	UBPF_SplineComponent_C_BPF_Spline_FindTangentClosestToWorldLocation_Params params;
	params.spline = spline;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
