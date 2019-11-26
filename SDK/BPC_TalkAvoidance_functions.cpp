
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

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.CheckAboveGround
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_TalkAvoidance_C::CheckAboveGround(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.CheckAboveGround");

	UBPC_TalkAvoidance_C_CheckAboveGround_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.LazySetupIgnoreActors
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_TalkAvoidance_C::LazySetupIgnoreActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.LazySetupIgnoreActors");

	UBPC_TalkAvoidance_C_LazySetupIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.MakeCenterLookRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UBPC_TalkAvoidance_C::MakeCenterLookRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.MakeCenterLookRotation");

	UBPC_TalkAvoidance_C_MakeCenterLookRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetTargetActorEyeLocationForTraceCheck
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InActor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InOwnerLocation                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBPC_TalkAvoidance_C::GetTargetActorEyeLocationForTraceCheck(class AActor* InActor, const struct FVector& InOwnerLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetTargetActorEyeLocationForTraceCheck");

	UBPC_TalkAvoidance_C_GetTargetActorEyeLocationForTraceCheck_Params params;
	params.InActor = InActor;
	params.InOwnerLocation = InOwnerLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.CalcCurrentBaseDistanceAndCount
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BaseDistance                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidance_C::CalcCurrentBaseDistanceAndCount(float* BaseDistance, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.CalcCurrentBaseDistanceAndCount");

	UBPC_TalkAvoidance_C_CalcCurrentBaseDistanceAndCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BaseDistance != nullptr)
		*BaseDistance = params.BaseDistance;
	if (Count != nullptr)
		*Count = params.Count;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetTargetActorLocationForCheck
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  InActor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBPC_TalkAvoidance_C::GetTargetActorLocationForCheck(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetTargetActorLocationForCheck");

	UBPC_TalkAvoidance_C_GetTargetActorLocationForCheck_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetDistanceToLeaveForCheck
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_TalkAvoidance_C::GetDistanceToLeaveForCheck(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetDistanceToLeaveForCheck");

	UBPC_TalkAvoidance_C_GetDistanceToLeaveForCheck_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.CheckInBuildingOwnerActor
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_TalkAvoidance_C::CheckInBuildingOwnerActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.CheckInBuildingOwnerActor");

	UBPC_TalkAvoidance_C_CheckInBuildingOwnerActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.ConvertAvoidableLocation
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 AvoidableLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ActorLocation                  (Parm, OutParm, IsPlainOldData)

void UBPC_TalkAvoidance_C::ConvertAvoidableLocation(const struct FVector& AvoidableLocation, struct FVector* ActorLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.ConvertAvoidableLocation");

	UBPC_TalkAvoidance_C_ConvertAvoidableLocation_Params params;
	params.AvoidableLocation = AvoidableLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorLocation != nullptr)
		*ActorLocation = params.ActorLocation;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.TestCapsuleOverlap
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CapsulePos                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_TalkAvoidance_C::TestCapsuleOverlap(const struct FVector& CapsulePos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.TestCapsuleOverlap");

	UBPC_TalkAvoidance_C_TestCapsuleOverlap_Params params;
	params.CapsulePos = CapsulePos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.IsIgnoreCollisionProfile
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   CollisionProfileName           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnore                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidance_C::IsIgnoreCollisionProfile(const struct FName& CollisionProfileName, bool* bIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.IsIgnoreCollisionProfile");

	UBPC_TalkAvoidance_C_IsIgnoreCollisionProfile_Params params;
	params.CollisionProfileName = CollisionProfileName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIgnore != nullptr)
		*bIgnore = params.bIgnore;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.SetupIgnoreActors
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_TalkAvoidance_C::SetupIgnoreActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.SetupIgnoreActors");

	UBPC_TalkAvoidance_C_SetupIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.CanAvoidance
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCan                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidance_C::CanAvoidance(bool* bCan)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.CanAvoidance");

	UBPC_TalkAvoidance_C_CanAvoidance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCan != nullptr)
		*bCan = params.bCan;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.DebugPrintString
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Chara                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_TalkAvoidance_C::DebugPrintString(const struct FString& Chara, const struct FString& Result, const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.DebugPrintString");

	UBPC_TalkAvoidance_C_DebugPrintString_Params params;
	params.Chara = Chara;
	params.Result = Result;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.ProcessAvoidable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bProcessed                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidance_C::ProcessAvoidable(bool* bProcessed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.ProcessAvoidable");

	UBPC_TalkAvoidance_C_ProcessAvoidable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessed != nullptr)
		*bProcessed = params.bProcessed;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.IsAvoiddableDecide
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bExecution                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidance_C::IsAvoiddableDecide(bool* bExecution)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.IsAvoiddableDecide");

	UBPC_TalkAvoidance_C_IsAvoiddableDecide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bExecution != nullptr)
		*bExecution = params.bExecution;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.SetActors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Actors                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPC_TalkAvoidance_C::SetActors(TArray<class AActor*>* Actors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.SetActors");

	UBPC_TalkAvoidance_C_SetActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.DistanceCheckTargetActors
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TestActorLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidance_C::DistanceCheckTargetActors(const struct FVector& TestActorLocation, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.DistanceCheckTargetActors");

	UBPC_TalkAvoidance_C_DistanceCheckTargetActors_Params params;
	params.TestActorLocation = TestActorLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetForwardVector
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ForwardVector                  (Parm, OutParm, IsPlainOldData)

void UBPC_TalkAvoidance_C::GetForwardVector(struct FVector* ForwardVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetForwardVector");

	UBPC_TalkAvoidance_C_GetForwardVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForwardVector != nullptr)
		*ForwardVector = params.ForwardVector;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetAvoidableLocation
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AvoidableLocation              (Parm, OutParm, IsPlainOldData)
// struct FString                 LogString                      (Parm, OutParm, ZeroConstructor)

void UBPC_TalkAvoidance_C::GetAvoidableLocation(bool* bSuccess, struct FVector* AvoidableLocation, struct FString* LogString)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetAvoidableLocation");

	UBPC_TalkAvoidance_C_GetAvoidableLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (AvoidableLocation != nullptr)
		*AvoidableLocation = params.AvoidableLocation;
	if (LogString != nullptr)
		*LogString = params.LogString;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.AvoidableTest
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ActorLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bDesperate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccessAvoidable              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidance_C::AvoidableTest(const struct FVector& ActorLocation, bool bDesperate, bool* bSuccessAvoidable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.AvoidableTest");

	UBPC_TalkAvoidance_C_AvoidableTest_Params params;
	params.ActorLocation = ActorLocation;
	params.bDesperate = bDesperate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessAvoidable != nullptr)
		*bSuccessAvoidable = params.bSuccessAvoidable;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.EyeLineTraceCheckTargetActors
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TestActorLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidance_C::EyeLineTraceCheckTargetActors(const struct FVector& TestActorLocation, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.EyeLineTraceCheckTargetActors");

	UBPC_TalkAvoidance_C_EyeLineTraceCheckTargetActors_Params params;
	params.TestActorLocation = TestActorLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetActorPositionAfterRotationByAngle
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorLocation                  (Parm, OutParm, IsPlainOldData)

void UBPC_TalkAvoidance_C::GetActorPositionAfterRotationByAngle(float Angle, float Distance, struct FVector* ActorLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetActorPositionAfterRotationByAngle");

	UBPC_TalkAvoidance_C_GetActorPositionAfterRotationByAngle_Params params;
	params.Angle = Angle;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorLocation != nullptr)
		*ActorLocation = params.ActorLocation;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.ActorCollisionTestHeight
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ActorLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bHitGround                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, OutParm, IsPlainOldData)

void UBPC_TalkAvoidance_C::ActorCollisionTestHeight(const struct FVector& ActorLocation, bool* bHitGround, struct FVector* HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.ActorCollisionTestHeight");

	UBPC_TalkAvoidance_C_ActorCollisionTestHeight_Params params;
	params.ActorLocation = ActorLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHitGround != nullptr)
		*bHitGround = params.bHitGround;
	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.OutputDebugCollision
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ActorLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            LineColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_TalkAvoidance_C::OutputDebugCollision(const struct FVector& ActorLocation, const struct FLinearColor& LineColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.OutputDebugCollision");

	UBPC_TalkAvoidance_C_OutputDebugCollision_Params params;
	params.ActorLocation = ActorLocation;
	params.LineColor = LineColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_TalkAvoidance_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.ReceiveBeginPlay");

	UBPC_TalkAvoidance_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.ExecuteUbergraph_BPC_TalkAvoidance
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidance_C::ExecuteUbergraph_BPC_TalkAvoidance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.ExecuteUbergraph_BPC_TalkAvoidance");

	UBPC_TalkAvoidance_C_ExecuteUbergraph_BPC_TalkAvoidance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
