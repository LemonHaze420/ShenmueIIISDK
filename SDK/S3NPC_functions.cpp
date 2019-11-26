
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

// Function S3NPC.S3KismetNPCLibrary.VectorGetDistance
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Vector1                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Vector2                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bIsDistance2D                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float US3KismetNPCLibrary::STATIC_VectorGetDistance(const struct FVector& Vector1, const struct FVector& Vector2, bool bIsDistance2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.VectorGetDistance");

	US3KismetNPCLibrary_VectorGetDistance_Params params;
	params.Vector1 = Vector1;
	params.Vector2 = Vector2;
	params.bIsDistance2D = bIsDistance2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.TryProjectPointToNavigation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class ANavigationData*         NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 QueryExtent                    (ConstParm, Parm, IsPlainOldData)
// struct FVector                 Projected                      (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool US3KismetNPCLibrary::STATIC_TryProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent, struct FVector* Projected)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.TryProjectPointToNavigation");

	US3KismetNPCLibrary_TryProjectPointToNavigation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Point = Point;
	params.NavData = NavData;
	params.FilterClass = FilterClass;
	params.QueryExtent = QueryExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Projected != nullptr)
		*Projected = params.Projected;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.SetRootMotionMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimInstance*           TargetAnimInstance             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERootMotionMode>   RootMotionMode                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERootMotionMode>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ERootMotionMode> US3KismetNPCLibrary::STATIC_SetRootMotionMode(class UAnimInstance* TargetAnimInstance, TEnumAsByte<ERootMotionMode> RootMotionMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.SetRootMotionMode");

	US3KismetNPCLibrary_SetRootMotionMode_Params params;
	params.TargetAnimInstance = TargetAnimInstance;
	params.RootMotionMode = RootMotionMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.SetGlobalAvoidanceProperties
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LockTimeAfterAvoid             (Parm, ZeroConstructor, IsPlainOldData)
// float                          LockTimeAfterClean             (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTimeToPredict             (Parm, ZeroConstructor, IsPlainOldData)

void US3KismetNPCLibrary::STATIC_SetGlobalAvoidanceProperties(class UObject* WorldContextObject, float LockTimeAfterAvoid, float LockTimeAfterClean, float DeltaTimeToPredict)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.SetGlobalAvoidanceProperties");

	US3KismetNPCLibrary_SetGlobalAvoidanceProperties_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LockTimeAfterAvoid = LockTimeAfterAvoid;
	params.LockTimeAfterClean = LockTimeAfterClean;
	params.DeltaTimeToPredict = DeltaTimeToPredict;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function S3NPC.S3KismetNPCLibrary.RotatingAnimParameter
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  NPC                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, IsPlainOldData)
// ERotationAnimSelector          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ERotationAnimSelector US3KismetNPCLibrary::STATIC_RotatingAnimParameter(class AActor* NPC, class AActor* Target, const struct FVector& TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.RotatingAnimParameter");

	US3KismetNPCLibrary_RotatingAnimParameter_Params params;
	params.NPC = NPC;
	params.Target = Target;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.RotateAnimationSelector
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          fAngle                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOntheLeft                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// ERotationAnimSelector          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ERotationAnimSelector US3KismetNPCLibrary::STATIC_RotateAnimationSelector(float fAngle, bool bOntheLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.RotateAnimationSelector");

	US3KismetNPCLibrary_RotateAnimationSelector_Params params;
	params.fAngle = fAngle;
	params.bOntheLeft = bOntheLeft;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.RandomGetAndRemove
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          InputArray                     (Parm, ZeroConstructor)
// TArray<class AActor*>          OutInputArray                  (Parm, OutParm, ZeroConstructor)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* US3KismetNPCLibrary::STATIC_RandomGetAndRemove(TArray<class AActor*> InputArray, TArray<class AActor*>* OutInputArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.RandomGetAndRemove");

	US3KismetNPCLibrary_RandomGetAndRemove_Params params;
	params.InputArray = InputArray;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInputArray != nullptr)
		*OutInputArray = params.OutInputArray;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.MakeAnyMatchQueryByContainer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   InputContainer                 (Parm)
// struct FGameplayTagQuery       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagQuery US3KismetNPCLibrary::STATIC_MakeAnyMatchQueryByContainer(const struct FGameplayTagContainer& InputContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.MakeAnyMatchQueryByContainer");

	US3KismetNPCLibrary_MakeAnyMatchQueryByContainer_Params params;
	params.InputContainer = InputContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.InteractionRotatingSelector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  NPC                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, IsPlainOldData)
// ERotationAnimSelector          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ERotationAnimSelector US3KismetNPCLibrary::STATIC_InteractionRotatingSelector(class AActor* NPC, class AActor* Target, const struct FVector& TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.InteractionRotatingSelector");

	US3KismetNPCLibrary_InteractionRotatingSelector_Params params;
	params.NPC = NPC;
	params.Target = Target;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.IKFootTrace
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          fTraceDistance                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FootSocketName                 (Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              IKCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float US3KismetNPCLibrary::STATIC_IKFootTrace(float fTraceDistance, const struct FName& FootSocketName, class ACharacter* IKCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.IKFootTrace");

	US3KismetNPCLibrary_IKFootTrace_Params params;
	params.fTraceDistance = fTraceDistance;
	params.FootSocketName = FootSocketName;
	params.IKCharacter = IKCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.GetRowByNameScheduleTable
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   pName                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FScheduleTableRowBase   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FScheduleTableRowBase US3KismetNPCLibrary::STATIC_GetRowByNameScheduleTable(class UDataTable* DataTable, const struct FName& pName, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.GetRowByNameScheduleTable");

	US3KismetNPCLibrary_GetRowByNameScheduleTable_Params params;
	params.DataTable = DataTable;
	params.pName = pName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.GetRowByNameNPCRelationshipTable
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   pName                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FNPCRelationshipTableRowBase ReturnValue                    (Parm, OutParm, ReturnParm)

struct FNPCRelationshipTableRowBase US3KismetNPCLibrary::STATIC_GetRowByNameNPCRelationshipTable(class UDataTable* DataTable, const struct FName& pName, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.GetRowByNameNPCRelationshipTable");

	US3KismetNPCLibrary_GetRowByNameNPCRelationshipTable_Params params;
	params.DataTable = DataTable;
	params.pName = pName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.GetRandomProjectedLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 QueryExtend                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor*                  Context                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           OutValidLocation               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector US3KismetNPCLibrary::STATIC_GetRandomProjectedLocation(const struct FVector& QueryExtend, class AActor* Context, class AActor** HitActor, bool* OutValidLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.GetRandomProjectedLocation");

	US3KismetNPCLibrary_GetRandomProjectedLocation_Params params;
	params.QueryExtend = QueryExtend;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitActor != nullptr)
		*HitActor = params.HitActor;
	if (OutValidLocation != nullptr)
		*OutValidLocation = params.OutValidLocation;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.GetRandomPointTracedSphere
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Context                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RandomCenter                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ForwardVector                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          RadiusMin                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          RadiusMax                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          VerticleAngleMin               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          VerticleAngleMax               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ClampedAngle                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector US3KismetNPCLibrary::STATIC_GetRandomPointTracedSphere(class AActor* Context, const struct FVector& RandomCenter, const struct FVector& ForwardVector, float RadiusMin, float RadiusMax, float VerticleAngleMin, float VerticleAngleMax, float ClampedAngle, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.GetRandomPointTracedSphere");

	US3KismetNPCLibrary_GetRandomPointTracedSphere_Params params;
	params.Context = Context;
	params.RandomCenter = RandomCenter;
	params.ForwardVector = ForwardVector;
	params.RadiusMin = RadiusMin;
	params.RadiusMax = RadiusMax;
	params.VerticleAngleMin = VerticleAngleMin;
	params.VerticleAngleMax = VerticleAngleMax;
	params.ClampedAngle = ClampedAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.GetRandomPointTracedCylinder
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Context                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RandomCenter                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ForwardVector                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          RadiusMin                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          RadiusMax                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          VerticleOffsetMax              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ClampedAngle                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector US3KismetNPCLibrary::STATIC_GetRandomPointTracedCylinder(class AActor* Context, const struct FVector& RandomCenter, const struct FVector& ForwardVector, float RadiusMin, float RadiusMax, float VerticleOffsetMax, float ClampedAngle, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.GetRandomPointTracedCylinder");

	US3KismetNPCLibrary_GetRandomPointTracedCylinder_Params params;
	params.Context = Context;
	params.RandomCenter = RandomCenter;
	params.ForwardVector = ForwardVector;
	params.RadiusMin = RadiusMin;
	params.RadiusMax = RadiusMax;
	params.VerticleOffsetMax = VerticleOffsetMax;
	params.ClampedAngle = ClampedAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.GetRandomPointBetweenSpheresClampedForward
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 RandomCenter                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ForwardVector                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          RadiusMin                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          RadiusMax                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          VerticleAngleMin               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          VerticleAngleMax               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ClampedAngle                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector US3KismetNPCLibrary::STATIC_GetRandomPointBetweenSpheresClampedForward(const struct FVector& RandomCenter, const struct FVector& ForwardVector, float RadiusMin, float RadiusMax, float VerticleAngleMin, float VerticleAngleMax, float ClampedAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.GetRandomPointBetweenSpheresClampedForward");

	US3KismetNPCLibrary_GetRandomPointBetweenSpheresClampedForward_Params params;
	params.RandomCenter = RandomCenter;
	params.ForwardVector = ForwardVector;
	params.RadiusMin = RadiusMin;
	params.RadiusMax = RadiusMax;
	params.VerticleAngleMin = VerticleAngleMin;
	params.VerticleAngleMax = VerticleAngleMax;
	params.ClampedAngle = ClampedAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.GetRandomPointBetweenSpheres
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 RandomCenter                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          RadiusMin                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          RadiusMax                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          VerticleAngleMin               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          VerticleAngleMax               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector US3KismetNPCLibrary::STATIC_GetRandomPointBetweenSpheres(const struct FVector& RandomCenter, float RadiusMin, float RadiusMax, float VerticleAngleMin, float VerticleAngleMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.GetRandomPointBetweenSpheres");

	US3KismetNPCLibrary_GetRandomPointBetweenSpheres_Params params;
	params.RandomCenter = RandomCenter;
	params.RadiusMin = RadiusMin;
	params.RadiusMax = RadiusMax;
	params.VerticleAngleMin = VerticleAngleMin;
	params.VerticleAngleMax = VerticleAngleMax;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.GetRandomPointBetweenCylindersClampedForward
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 RandomCenter                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ForwardVector                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          RadiusMin                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          RadiusMax                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          VerticleOffsetMax              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ClampedAngle                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector US3KismetNPCLibrary::STATIC_GetRandomPointBetweenCylindersClampedForward(const struct FVector& RandomCenter, const struct FVector& ForwardVector, float RadiusMin, float RadiusMax, float VerticleOffsetMax, float ClampedAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.GetRandomPointBetweenCylindersClampedForward");

	US3KismetNPCLibrary_GetRandomPointBetweenCylindersClampedForward_Params params;
	params.RandomCenter = RandomCenter;
	params.ForwardVector = ForwardVector;
	params.RadiusMin = RadiusMin;
	params.RadiusMax = RadiusMax;
	params.VerticleOffsetMax = VerticleOffsetMax;
	params.ClampedAngle = ClampedAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.GetRandomLocationZTop
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Extend                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor*                  ActorTrans                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector US3KismetNPCLibrary::STATIC_GetRandomLocationZTop(const struct FVector& Extend, class AActor* ActorTrans)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.GetRandomLocationZTop");

	US3KismetNPCLibrary_GetRandomLocationZTop_Params params;
	params.Extend = Extend;
	params.ActorTrans = ActorTrans;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.GetMapName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  LevelContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString US3KismetNPCLibrary::STATIC_GetMapName(class AActor* LevelContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.GetMapName");

	US3KismetNPCLibrary_GetMapName_Params params;
	params.LevelContext = LevelContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.GetLocationNextSplinePoint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USplineComponent*        InputSpline                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Distance                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector US3KismetNPCLibrary::STATIC_GetLocationNextSplinePoint(class USplineComponent* InputSpline, float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.GetLocationNextSplinePoint");

	US3KismetNPCLibrary_GetLocationNextSplinePoint_Params params;
	params.InputSpline = InputSpline;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.GetForwardClampedAngle
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, IsPlainOldData)
// bool                           bOutIsOntheLeft                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float US3KismetNPCLibrary::STATIC_GetForwardClampedAngle(class AActor* Actor, class AActor* Target, const struct FVector& TargetLocation, bool* bOutIsOntheLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.GetForwardClampedAngle");

	US3KismetNPCLibrary_GetForwardClampedAngle_Params params;
	params.Actor = Actor;
	params.Target = Target;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOutIsOntheLeft != nullptr)
		*bOutIsOntheLeft = params.bOutIsOntheLeft;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.GetCurrentMontageSectionLengthPercentage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimInstance*           TargetAnimInstance             (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            CurrentMontage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MontageSection                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float US3KismetNPCLibrary::STATIC_GetCurrentMontageSectionLengthPercentage(class UAnimInstance* TargetAnimInstance, class UAnimMontage* CurrentMontage, const struct FName& MontageSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.GetCurrentMontageSectionLengthPercentage");

	US3KismetNPCLibrary_GetCurrentMontageSectionLengthPercentage_Params params;
	params.TargetAnimInstance = TargetAnimInstance;
	params.CurrentMontage = CurrentMontage;
	params.MontageSection = MontageSection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.GetCurrentMontageLengthPercentage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimInstance*           TargetAnimInstance             (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            CurrentMontage                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float US3KismetNPCLibrary::STATIC_GetCurrentMontageLengthPercentage(class UAnimInstance* TargetAnimInstance, class UAnimMontage* CurrentMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.GetCurrentMontageLengthPercentage");

	US3KismetNPCLibrary_GetCurrentMontageLengthPercentage_Params params;
	params.TargetAnimInstance = TargetAnimInstance;
	params.CurrentMontage = CurrentMontage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.GetClampedAngleInTwoForwards
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetForwardVector            (ConstParm, Parm, IsPlainOldData)
// bool                           bOutLeftTurn                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float US3KismetNPCLibrary::STATIC_GetClampedAngleInTwoForwards(class AActor* Actor, class AActor* Target, const struct FVector& TargetForwardVector, bool* bOutLeftTurn)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.GetClampedAngleInTwoForwards");

	US3KismetNPCLibrary_GetClampedAngleInTwoForwards_Params params;
	params.Actor = Actor;
	params.Target = Target;
	params.TargetForwardVector = TargetForwardVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOutLeftTurn != nullptr)
		*bOutLeftTurn = params.bOutLeftTurn;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.GetAvoidanceManager
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UAvoidanceManager*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAvoidanceManager* US3KismetNPCLibrary::STATIC_GetAvoidanceManager(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.GetAvoidanceManager");

	US3KismetNPCLibrary_GetAvoidanceManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.DisableSplitScreen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Context                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisable                       (Parm, ZeroConstructor, IsPlainOldData)

void US3KismetNPCLibrary::STATIC_DisableSplitScreen(class AActor* Context, bool bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.DisableSplitScreen");

	US3KismetNPCLibrary_DisableSplitScreen_Params params;
	params.Context = Context;
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function S3NPC.S3KismetNPCLibrary.ComponentGetDistance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USceneComponent*         Component1                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         Component2                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsDistance2D                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float US3KismetNPCLibrary::STATIC_ComponentGetDistance(class USceneComponent* Component1, class USceneComponent* Component2, bool bIsDistance2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.ComponentGetDistance");

	US3KismetNPCLibrary_ComponentGetDistance_Params params;
	params.Component1 = Component1;
	params.Component2 = Component2;
	params.bIsDistance2D = bIsDistance2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.AlignRotationLookat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor1                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor2                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          RotInterpSpeed                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OutActor1                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OutActor2                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool US3KismetNPCLibrary::STATIC_AlignRotationLookat(class AActor* Actor1, class AActor* Actor2, float DeltaTime, float RotInterpSpeed, class AActor** OutActor1, class AActor** OutActor2)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.AlignRotationLookat");

	US3KismetNPCLibrary_AlignRotationLookat_Params params;
	params.Actor1 = Actor1;
	params.Actor2 = Actor2;
	params.DeltaTime = DeltaTime;
	params.RotInterpSpeed = RotInterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActor1 != nullptr)
		*OutActor1 = params.OutActor1;
	if (OutActor2 != nullptr)
		*OutActor2 = params.OutActor2;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.AlignLocationRotation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  NPC                            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          LocInterpSpeed                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          RotInterpSpeed                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OutNPC                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OutTarget                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool US3KismetNPCLibrary::STATIC_AlignLocationRotation(class AActor* NPC, class AActor* Target, float DeltaTime, float LocInterpSpeed, float RotInterpSpeed, class AActor** OutNPC, class AActor** OutTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.AlignLocationRotation");

	US3KismetNPCLibrary_AlignLocationRotation_Params params;
	params.NPC = NPC;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.LocInterpSpeed = LocInterpSpeed;
	params.RotInterpSpeed = RotInterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNPC != nullptr)
		*OutNPC = params.OutNPC;
	if (OutTarget != nullptr)
		*OutTarget = params.OutTarget;

	return params.ReturnValue;
}


// Function S3NPC.S3KismetNPCLibrary.ActorGetDistance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor1                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor2                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsDistance2D                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float US3KismetNPCLibrary::STATIC_ActorGetDistance(class AActor* Actor1, class AActor* Actor2, bool bIsDistance2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3KismetNPCLibrary.ActorGetDistance");

	US3KismetNPCLibrary_ActorGetDistance_Params params;
	params.Actor1 = Actor1;
	params.Actor2 = Actor2;
	params.bIsDistance2D = bIsDistance2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3NPCPOITargetListManagerBase.PickUpTargetListByTime
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          GameTime                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundList                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ListIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class AS3NPCPOIPointBase*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AS3NPCPOIPointBase*> AS3NPCPOITargetListManagerBase::PickUpTargetListByTime(float GameTime, bool* bFoundList, int* ListIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3NPCPOITargetListManagerBase.PickUpTargetListByTime");

	AS3NPCPOITargetListManagerBase_PickUpTargetListByTime_Params params;
	params.GameTime = GameTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFoundList != nullptr)
		*bFoundList = params.bFoundList;
	if (ListIndex != nullptr)
		*ListIndex = params.ListIndex;

	return params.ReturnValue;
}


// Function S3NPC.S3NPCPOITargetListManagerBase.GetRowByNameTargetListDataTable
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   pName                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTargetListTableRowBase ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTargetListTableRowBase AS3NPCPOITargetListManagerBase::GetRowByNameTargetListDataTable(class UDataTable* DataTable, const struct FName& pName, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3NPCPOITargetListManagerBase.GetRowByNameTargetListDataTable");

	AS3NPCPOITargetListManagerBase_GetRowByNameTargetListDataTable_Params params;
	params.DataTable = DataTable;
	params.pName = pName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function S3NPC.S3NPCRegionBase.PointInsideVolume
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, IsPlainOldData)
// float                          SphereRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AS3NPCRegionBase::PointInsideVolume(const struct FVector& WorldLocation, float SphereRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3NPCRegionBase.PointInsideVolume");

	AS3NPCRegionBase_PointInsideVolume_Params params;
	params.WorldLocation = WorldLocation;
	params.SphereRadius = SphereRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3NPCRegionBase.GetRandomReachablePoint
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AS3NPCRegionBase::GetRandomReachablePoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3NPCRegionBase.GetRandomReachablePoint");

	AS3NPCRegionBase_GetRandomReachablePoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3NPCRegionBase.GetBoxExtend
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AS3NPCRegionBase::GetBoxExtend()
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3NPCRegionBase.GetBoxExtend");

	AS3NPCRegionBase_GetBoxExtend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3NPCSpawnerBase.SpawnNPC
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          GameTime                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          GroupMemberSpawnRadius         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AS3NPCSpawnerBase::SpawnNPC(float GameTime, float GroupMemberSpawnRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3NPCSpawnerBase.SpawnNPC");

	AS3NPCSpawnerBase_SpawnNPC_Params params;
	params.GameTime = GameTime;
	params.GroupMemberSpawnRadius = GroupMemberSpawnRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3NPCSpawnerBase.SpawnActorByBP
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            StructIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACharacter* AS3NPCSpawnerBase::SpawnActorByBP(int StructIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3NPCSpawnerBase.SpawnActorByBP");

	AS3NPCSpawnerBase_SpawnActorByBP_Params params;
	params.StructIndex = StructIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3NPCSpawnerBase.DestroyNPC
// (Final, Native, Public, BlueprintCallable)

void AS3NPCSpawnerBase::DestroyNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3NPCSpawnerBase.DestroyNPC");

	AS3NPCSpawnerBase_DestroyNPC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function S3NPC.S3NPCSpawnerBase.AddPOITargetList
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            StructIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              NPCToAdd                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AS3NPCSpawnerBase::AddPOITargetList(int StructIndex, class ACharacter* NPCToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3NPCSpawnerBase.AddPOITargetList");

	AS3NPCSpawnerBase_AddPOITargetList_Params params;
	params.StructIndex = StructIndex;
	params.NPCToAdd = NPCToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3NPC.S3NPCSpawnerBase.AddGroupTags
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACharacter*              NPCToSet                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NPCIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void AS3NPCSpawnerBase::AddGroupTags(class ACharacter* NPCToSet, int NPCIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3NPCSpawnerBase.AddGroupTags");

	AS3NPCSpawnerBase_AddGroupTags_Params params;
	params.NPCToSet = NPCToSet;
	params.NPCIndex = NPCIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function S3NPC.S3NPCPOIListBase.GetPOIListbyTags
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagQuery       InputTagQuery                  (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class AS3NPCPOIBase*>   POIs                           (Parm, OutParm, ZeroConstructor)
// float                          GameTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AS3NPCPOIListBase::GetPOIListbyTags(const struct FGameplayTagQuery& InputTagQuery, float GameTime, TArray<class AS3NPCPOIBase*>* POIs)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3NPC.S3NPCPOIListBase.GetPOIListbyTags");

	AS3NPCPOIListBase_GetPOIListbyTags_Params params;
	params.InputTagQuery = InputTagQuery;
	params.GameTime = GameTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (POIs != nullptr)
		*POIs = params.POIs;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
