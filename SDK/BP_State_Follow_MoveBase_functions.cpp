
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

// Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.CheckDoorOnPath
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_State_Follow_MoveBase_C::CheckDoorOnPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.CheckDoorOnPath");

	UBP_State_Follow_MoveBase_C_CheckDoorOnPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.CalculateFollowSpeed
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DistanceToLeader               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LeaderSpeed                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FollowDistanceEnd              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutSpeed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_MoveBase_C::CalculateFollowSpeed(float DistanceToLeader, float LeaderSpeed, float FollowDistanceEnd, float* OutSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.CalculateFollowSpeed");

	UBP_State_Follow_MoveBase_C_CalculateFollowSpeed_Params params;
	params.DistanceToLeader = DistanceToLeader;
	params.LeaderSpeed = LeaderSpeed;
	params.FollowDistanceEnd = FollowDistanceEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSpeed != nullptr)
		*OutSpeed = params.OutSpeed;
}


// Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.TryLogPathFailure
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_State_Follow_MoveBase_C::TryLogPathFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.TryLogPathFailure");

	UBP_State_Follow_MoveBase_C_TryLogPathFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.MoveStateEnter
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDummy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_MoveBase_C::MoveStateEnter(bool* bDummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.MoveStateEnter");

	UBP_State_Follow_MoveBase_C_MoveStateEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDummy != nullptr)
		*bDummy = params.bDummy;
}


// Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.StateEnter
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_MoveBase_C::StateEnter(float Delta, bool* bProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.StateEnter");

	UBP_State_Follow_MoveBase_C_StateEnter_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessing != nullptr)
		*bProcessing = params.bProcessing;
}


// Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.GetPathfindTarget
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)
// class AActor*                  OutActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_MoveBase_C::GetPathfindTarget(struct FVector* OutLocation, class AActor** OutActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.GetPathfindTarget");

	UBP_State_Follow_MoveBase_C_GetPathfindTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutActor != nullptr)
		*OutActor = params.OutActor;
}


// Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.OnFail_27825A3A4DCF934B8E42E09B783488FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_MoveBase_C::OnFail_27825A3A4DCF934B8E42E09B783488FD(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.OnFail_27825A3A4DCF934B8E42E09B783488FD");

	UBP_State_Follow_MoveBase_C_OnFail_27825A3A4DCF934B8E42E09B783488FD_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.OnSuccess_27825A3A4DCF934B8E42E09B783488FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_MoveBase_C::OnSuccess_27825A3A4DCF934B8E42E09B783488FD(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.OnSuccess_27825A3A4DCF934B8E42E09B783488FD");

	UBP_State_Follow_MoveBase_C_OnSuccess_27825A3A4DCF934B8E42E09B783488FD_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.Pathfind
// (BlueprintCallable, BlueprintEvent)

void UBP_State_Follow_MoveBase_C::Pathfind()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.Pathfind");

	UBP_State_Follow_MoveBase_C_Pathfind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.ExecuteUbergraph_BP_State_Follow_MoveBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_State_Follow_MoveBase_C::ExecuteUbergraph_BP_State_Follow_MoveBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C.ExecuteUbergraph_BP_State_Follow_MoveBase");

	UBP_State_Follow_MoveBase_C_ExecuteUbergraph_BP_State_Follow_MoveBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
