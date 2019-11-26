
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

// Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.GetNearSplinePointDistance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATargetPoint*            Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BullMovingAlongSpline2_C::GetNearSplinePointDistance(class ATargetPoint* Target, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.GetNearSplinePointDistance");

	ABP_BullMovingAlongSpline2_C_GetNearSplinePointDistance_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.GetMoveDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Seconds                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Move_Distance                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BullMovingAlongSpline2_C::GetMoveDistance(float Delta_Seconds, float* Move_Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.GetMoveDistance");

	ABP_BullMovingAlongSpline2_C_GetMoveDistance_Params params;
	params.Delta_Seconds = Delta_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Move_Distance != nullptr)
		*Move_Distance = params.Move_Distance;
}


// Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.GetTransformFromRollAndPitch
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              InputValue                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FTransform              Value                          (Parm, OutParm, IsPlainOldData)

void ABP_BullMovingAlongSpline2_C::GetTransformFromRollAndPitch(const struct FTransform& InputValue, struct FTransform* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.GetTransformFromRollAndPitch");

	ABP_BullMovingAlongSpline2_C_GetTransformFromRollAndPitch_Params params;
	params.InputValue = InputValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.GetTranformFromSpline
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              Value                          (Parm, OutParm, IsPlainOldData)

void ABP_BullMovingAlongSpline2_C::GetTranformFromSpline(struct FTransform* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.GetTranformFromSpline");

	ABP_BullMovingAlongSpline2_C_GetTranformFromSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BullMovingAlongSpline2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.UserConstructionScript");

	ABP_BullMovingAlongSpline2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BullMovingAlongSpline2_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.ReceiveTick");

	ABP_BullMovingAlongSpline2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BullMovingAlongSpline2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.ReceiveBeginPlay");

	ABP_BullMovingAlongSpline2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.ExecuteUbergraph_BP_BullMovingAlongSpline2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BullMovingAlongSpline2_C::ExecuteUbergraph_BP_BullMovingAlongSpline2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BullMovingAlongSpline2.BP_BullMovingAlongSpline2_C.ExecuteUbergraph_BP_BullMovingAlongSpline2");

	ABP_BullMovingAlongSpline2_C_ExecuteUbergraph_BP_BullMovingAlongSpline2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
