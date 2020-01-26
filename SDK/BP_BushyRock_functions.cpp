
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

// Function BP_BushyRock.BP_BushyRock_C.MakeBushScale
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRandomStream           Stream                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class USceneComponent*         self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_BushyRock_C::MakeBushScale(class USceneComponent* self2, struct FRandomStream* Stream)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BushyRock.BP_BushyRock_C.MakeBushScale");

	ABP_BushyRock_C_MakeBushScale_Params params;
	params.self2 = self2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stream != nullptr)
		*Stream = params.Stream;

	return params.ReturnValue;
}


// Function BP_BushyRock.BP_BushyRock_C.MakeBushRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRandomStream           Stream                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ABP_BushyRock_C::MakeBushRotation(struct FRandomStream* Stream)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BushyRock.BP_BushyRock_C.MakeBushRotation");

	ABP_BushyRock_C_MakeBushRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stream != nullptr)
		*Stream = params.Stream;

	return params.ReturnValue;
}


// Function BP_BushyRock.BP_BushyRock_C.SetTextComponentValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BushyRock_C::SetTextComponentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BushyRock.BP_BushyRock_C.SetTextComponentValue");

	ABP_BushyRock_C_SetTextComponentValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BushyRock.BP_BushyRock_C.CalculateTraceStartAndEnd
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Start                          (Parm, OutParm, IsPlainOldData)
// struct FVector                 End                            (Parm, OutParm, IsPlainOldData)
// float                          AdjustedRadius                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BushyRock_C::CalculateTraceStartAndEnd(struct FVector* Start, struct FVector* End, float* AdjustedRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BushyRock.BP_BushyRock_C.CalculateTraceStartAndEnd");

	ABP_BushyRock_C_CalculateTraceStartAndEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
	if (End != nullptr)
		*End = params.End;
	if (AdjustedRadius != nullptr)
		*AdjustedRadius = params.AdjustedRadius;
}


// Function BP_BushyRock.BP_BushyRock_C.SetBushlineStartTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BushyRock_C::SetBushlineStartTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BushyRock.BP_BushyRock_C.SetBushlineStartTransform");

	ABP_BushyRock_C_SetBushlineStartTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BushyRock.BP_BushyRock_C.SetArrowComponentTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BushyRock_C::SetArrowComponentTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BushyRock.BP_BushyRock_C.SetArrowComponentTransform");

	ABP_BushyRock_C_SetArrowComponentTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BushyRock.BP_BushyRock_C.SetTextComponentTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BushyRock_C::SetTextComponentTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BushyRock.BP_BushyRock_C.SetTextComponentTransform");

	ABP_BushyRock_C_SetTextComponentTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BushyRock.BP_BushyRock_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BushyRock_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BushyRock.BP_BushyRock_C.UserConstructionScript");

	ABP_BushyRock_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
