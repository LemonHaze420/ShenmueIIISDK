
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

// Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.GetNearSplinePointDistance
// (Net, Exec, Event, NetResponse, NetMulticast, Delegate, NetServer, HasDefaults, BlueprintCallable, NetValidate)
// Parameters:
// class ATargetPoint*            Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TroutMovingAlongSpline_C::GetNearSplinePointDistance(class ATargetPoint* Target, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.GetNearSplinePointDistance");

	ABP_TroutMovingAlongSpline_C_GetNearSplinePointDistance_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.GetMoveDistance
// (Net, NetRequest, Exec, Native, Static, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// float                          Delta_Seconds                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Move_Distance                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TroutMovingAlongSpline_C::STATIC_GetMoveDistance(float Delta_Seconds, float* Move_Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.GetMoveDistance");

	ABP_TroutMovingAlongSpline_C_GetMoveDistance_Params params;
	params.Delta_Seconds = Delta_Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Move_Distance != nullptr)
		*Move_Distance = params.Move_Distance;
}


// Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.GetTransformFromRollAndPitch
// (Exec, Native, Event, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// struct FTransform              InputValue                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FTransform              Value                          (Parm, OutParm, IsPlainOldData)

void ABP_TroutMovingAlongSpline_C::GetTransformFromRollAndPitch(const struct FTransform& InputValue, struct FTransform* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.GetTransformFromRollAndPitch");

	ABP_TroutMovingAlongSpline_C_GetTransformFromRollAndPitch_Params params;
	params.InputValue = InputValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.GetTranformFromSpline
// (Exec, Native, NetResponse, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// struct FTransform              Value                          (Parm, OutParm, IsPlainOldData)

void ABP_TroutMovingAlongSpline_C::GetTranformFromSpline(struct FTransform* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.GetTranformFromSpline");

	ABP_TroutMovingAlongSpline_C_GetTranformFromSpline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.UserConstructionScript
// (Net, NetReliable, NetRequest, Native, NetResponse, Public, Private, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, NetValidate)

void ABP_TroutMovingAlongSpline_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.UserConstructionScript");

	ABP_TroutMovingAlongSpline_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.ReceiveBeginPlay
// (Exec, Native, NetResponse, Static, NetMulticast, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, NetValidate)

void ABP_TroutMovingAlongSpline_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.ReceiveBeginPlay");

	ABP_TroutMovingAlongSpline_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.ReceiveTick
// (NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, NetClient, DLLImport, NetValidate)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TroutMovingAlongSpline_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.ReceiveTick");

	ABP_TroutMovingAlongSpline_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.ExecuteUbergraph_BP_TroutMovingAlongSpline
// (Net, NetReliable, NetRequest, Native, Event, Public, Protected, HasDefaults, NetClient, BlueprintCallable, NetValidate)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TroutMovingAlongSpline_C::ExecuteUbergraph_BP_TroutMovingAlongSpline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TroutMovingAlongSpline.BP_TroutMovingAlongSpline_C.ExecuteUbergraph_BP_TroutMovingAlongSpline");

	ABP_TroutMovingAlongSpline_C_ExecuteUbergraph_BP_TroutMovingAlongSpline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
