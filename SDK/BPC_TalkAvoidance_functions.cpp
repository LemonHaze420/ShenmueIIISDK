
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
// (Net, Event, NetResponse, NetMulticast, MulticastDelegate, NetClient, BlueprintEvent, BlueprintPure)
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
// (Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void UBPC_TalkAvoidance_C::STATIC_LazySetupIgnoreActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.LazySetupIgnoreActors");

	UBPC_TalkAvoidance_C_LazySetupIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.MakeCenterLookRotation
// (Net, NetRequest, Native, Static, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UBPC_TalkAvoidance_C::STATIC_MakeCenterLookRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.MakeCenterLookRotation");

	UBPC_TalkAvoidance_C_MakeCenterLookRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetTargetActorEyeLocationForTraceCheck
// (NetRequest, NetResponse, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
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
// (Net, Private, Protected, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (NetReliable, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Net, NetRequest, NetResponse, Static, Public, Private, NetClient, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_TalkAvoidance_C::STATIC_GetDistanceToLeaveForCheck(class AActor* TargetActor)
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
// (Net, NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UBPC_TalkAvoidance_C::STATIC_CheckInBuildingOwnerActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.CheckInBuildingOwnerActor");

	UBPC_TalkAvoidance_C_CheckInBuildingOwnerActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.ConvertAvoidableLocation
// (Net, NetReliable, Event, NetResponse, NetMulticast, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (Exec, NetResponse, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
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
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   CollisionProfileName           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnore                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidance_C::IsIgnoreCollisionProfile(const struct FName& CollisionProfileName, bool* bIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.IsIgnoreCollisionProfile");

	UBPC_TalkAvoidance_C_IsIgnoreCollisionProfile_Params params;
	params.CollisionProfileName = CollisionProfileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIgnore != nullptr)
		*bIgnore = params.bIgnore;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.SetupIgnoreActors
// (Exec, Native, Public, Private, Delegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)

void UBPC_TalkAvoidance_C::SetupIgnoreActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.SetupIgnoreActors");

	UBPC_TalkAvoidance_C_SetupIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.CanAvoidance
// (Net, Native, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bCan                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidance_C::CanAvoidance(bool* bCan)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.CanAvoidance");

	UBPC_TalkAvoidance_C_CanAvoidance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCan != nullptr)
		*bCan = params.bCan;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.DebugPrintString
// (Net, NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Chara                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_TalkAvoidance_C::STATIC_DebugPrintString(const struct FString& Chara, const struct FString& Result, const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.DebugPrintString");

	UBPC_TalkAvoidance_C_DebugPrintString_Params params;
	params.Chara = Chara;
	params.Result = Result;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.ProcessAvoidable
// (Exec, Native, Event, NetResponse, Static, Public, Private, Delegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bProcessed                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidance_C::STATIC_ProcessAvoidable(bool* bProcessed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.ProcessAvoidable");

	UBPC_TalkAvoidance_C_ProcessAvoidable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessed != nullptr)
		*bProcessed = params.bProcessed;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.IsAvoiddableDecide
// (Net, NetReliable, Event, Static, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bExecution                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidance_C::STATIC_IsAvoiddableDecide(bool* bExecution)
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
// (Net, NetReliable, Exec, Event, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          Actors                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPC_TalkAvoidance_C::STATIC_SetActors(TArray<class AActor*>* Actors)
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
// (NetReliable, NetRequest, Exec, Native, Event, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 TestActorLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidance_C::DistanceCheckTargetActors(const struct FVector& TestActorLocation, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.DistanceCheckTargetActors");

	UBPC_TalkAvoidance_C_DistanceCheckTargetActors_Params params;
	params.TestActorLocation = TestActorLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetForwardVector
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ForwardVector                  (Parm, OutParm, IsPlainOldData)

void UBPC_TalkAvoidance_C::STATIC_GetForwardVector(struct FVector* ForwardVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetForwardVector");

	UBPC_TalkAvoidance_C_GetForwardVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForwardVector != nullptr)
		*ForwardVector = params.ForwardVector;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetAvoidableLocation
// (NetReliable, NetRequest, Event, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
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
// (NetResponse, NetMulticast, Public, Protected, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, Const)
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
// (Net, NetRequest, Exec, Native, MulticastDelegate, Public, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TestActorLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TalkAvoidance_C::EyeLineTraceCheckTargetActors(const struct FVector& TestActorLocation, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.EyeLineTraceCheckTargetActors");

	UBPC_TalkAvoidance_C_EyeLineTraceCheckTargetActors_Params params;
	params.TestActorLocation = TestActorLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetActorPositionAfterRotationByAngle
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorLocation                  (Parm, OutParm, IsPlainOldData)

void UBPC_TalkAvoidance_C::STATIC_GetActorPositionAfterRotationByAngle(float Angle, float Distance, struct FVector* ActorLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetActorPositionAfterRotationByAngle");

	UBPC_TalkAvoidance_C_GetActorPositionAfterRotationByAngle_Params params;
	params.Angle = Angle;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorLocation != nullptr)
		*ActorLocation = params.ActorLocation;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.ActorCollisionTestHeight
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHitGround != nullptr)
		*bHitGround = params.bHitGround;
	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.OutputDebugCollision
// (NetReliable, Exec, Event, Static, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ActorLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            LineColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_TalkAvoidance_C::STATIC_OutputDebugCollision(const struct FVector& ActorLocation, const struct FLinearColor& LineColor)
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
// (Net, Exec, Event, NetResponse, NetMulticast, Private, BlueprintEvent, BlueprintPure)

void UBPC_TalkAvoidance_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.ReceiveBeginPlay");

	UBPC_TalkAvoidance_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.ExecuteUbergraph_BPC_TalkAvoidance
// (NetReliable, Event, NetResponse, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
