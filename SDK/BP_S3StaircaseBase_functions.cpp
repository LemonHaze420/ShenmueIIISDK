
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

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.CheckInitialOverlaps
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_S3StaircaseBase_C::CheckInitialOverlaps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.CheckInitialOverlaps");

	ABP_S3StaircaseBase_C_CheckInitialOverlaps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetRelativeStairOnX
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          FudgeDistanceIn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EVerticalDirection> Relative                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::GetRelativeStairOnX(const struct FVector& Location, float FudgeDistanceIn, TEnumAsByte<EVerticalDirection>* Relative)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetRelativeStairOnX");

	ABP_S3StaircaseBase_C_GetRelativeStairOnX_Params params;
	params.Location = Location;
	params.FudgeDistanceIn = FudgeDistanceIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Relative != nullptr)
		*Relative = params.Relative;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetStepsBaseTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)

void ABP_S3StaircaseBase_C::GetStepsBaseTransform(struct FTransform* OutTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetStepsBaseTransform");

	ABP_S3StaircaseBase_C_GetStepsBaseTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetClimbEndPoints_LS
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Bottom                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 top                            (Parm, OutParm, IsPlainOldData)

void ABP_S3StaircaseBase_C::GetClimbEndPoints_LS(struct FVector* Bottom, struct FVector* top)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetClimbEndPoints_LS");

	ABP_S3StaircaseBase_C_GetClimbEndPoints_LS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bottom != nullptr)
		*Bottom = params.Bottom;
	if (top != nullptr)
		*top = params.top;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.Editor_UpdateVisualization
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3StaircaseBase_C::Editor_UpdateVisualization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.Editor_UpdateVisualization");

	ABP_S3StaircaseBase_C_Editor_UpdateVisualization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.SetupDebugStepVisual
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 StepEnd                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_S3StaircaseBase_C::SetupDebugStepVisual(class UStaticMeshComponent* Mesh, const struct FVector& StepEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.SetupDebugStepVisual");

	ABP_S3StaircaseBase_C_SetupDebugStepVisual_Params params;
	params.Mesh = Mesh;
	params.StepEnd = StepEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.PairToMultiMeshActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StepDimension                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            NumberOfSteps                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::PairToMultiMeshActor(class AActor* Actor, const struct FVector& StepDimension, int NumberOfSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.PairToMultiMeshActor");

	ABP_S3StaircaseBase_C_PairToMultiMeshActor_Params params;
	params.Actor = Actor;
	params.StepDimension = StepDimension;
	params.NumberOfSteps = NumberOfSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetBestSnapCandidate
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          CloseTo                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Candidate1                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Candidate2                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Candidate3                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PreferredSign                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Selection                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::GetBestSnapCandidate(float CloseTo, float Candidate1, float Candidate2, float Candidate3, float PreferredSign, float* Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetBestSnapCandidate");

	ABP_S3StaircaseBase_C_GetBestSnapCandidate_Params params;
	params.CloseTo = CloseTo;
	params.Candidate1 = Candidate1;
	params.Candidate2 = Candidate2;
	params.Candidate3 = Candidate3;
	params.PreferredSign = PreferredSign;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selection != nullptr)
		*Selection = params.Selection;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.CalculateTriggerBounds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3StaircaseBase_C::CalculateTriggerBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.CalculateTriggerBounds");

	ABP_S3StaircaseBase_C_CalculateTriggerBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.PairToAndConfigureMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_S3StaircaseBase_C::PairToAndConfigureMesh(class UStaticMeshComponent* MeshComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.PairToAndConfigureMesh");

	ABP_S3StaircaseBase_C_PairToAndConfigureMesh_Params params;
	params.MeshComp = MeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetClosestStopLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 InLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)

void ABP_S3StaircaseBase_C::GetClosestStopLocation(const struct FVector& InLocation, struct FVector* OutLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetClosestStopLocation");

	ABP_S3StaircaseBase_C_GetClosestStopLocation_Params params;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.AnimPositionToStepProgress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          AnimPosition                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DirUp                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StepProgress                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::AnimPositionToStepProgress(float AnimPosition, bool DirUp, float* StepProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.AnimPositionToStepProgress");

	ABP_S3StaircaseBase_C_AnimPositionToStepProgress_Params params;
	params.AnimPosition = AnimPosition;
	params.DirUp = DirUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepProgress != nullptr)
		*StepProgress = params.StepProgress;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.StepProgressToAnimPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          StepProgress                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DirUp                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RPosition                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LPosition                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::StepProgressToAnimPosition(float StepProgress, bool DirUp, float* RPosition, float* LPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.StepProgressToAnimPosition");

	ABP_S3StaircaseBase_C_StepProgressToAnimPosition_Params params;
	params.StepProgress = StepProgress;
	params.DirUp = DirUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RPosition != nullptr)
		*RPosition = params.RPosition;
	if (LPosition != nullptr)
		*LPosition = params.LPosition;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetStepsClimbedForLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::GetStepsClimbedForLocation(const struct FVector& Location, float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetStepsClimbedForLocation");

	ABP_S3StaircaseBase_C_GetStepsClimbedForLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetNextStepStopLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 InLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           InDirUp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutLocation                    (Parm, OutParm, IsPlainOldData)

void ABP_S3StaircaseBase_C::GetNextStepStopLocation(const struct FVector& InLocation, bool InDirUp, struct FVector* OutLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetNextStepStopLocation");

	ABP_S3StaircaseBase_C_GetNextStepStopLocation_Params params;
	params.InLocation = InLocation;
	params.InDirUp = InDirUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetAngleInClimbDirection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 InDirection                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           IsUp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutAngle                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::GetAngleInClimbDirection(const struct FVector& InDirection, bool IsUp, float* OutAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetAngleInClimbDirection");

	ABP_S3StaircaseBase_C_GetAngleInClimbDirection_Params params;
	params.InDirection = InDirection;
	params.IsUp = IsUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAngle != nullptr)
		*OutAngle = params.OutAngle;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetClimbCycleRefTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)

void ABP_S3StaircaseBase_C::GetClimbCycleRefTransform(struct FTransform* OutTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetClimbCycleRefTransform");

	ABP_S3StaircaseBase_C_GetClimbCycleRefTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetCollisionActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  CollisionActor                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::GetCollisionActor(class AActor** CollisionActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetCollisionActor");

	ABP_S3StaircaseBase_C_GetCollisionActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CollisionActor != nullptr)
		*CollisionActor = params.CollisionActor;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetIdOfClosestStep
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 InLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            OutID                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::GetIdOfClosestStep(const struct FVector& InLocation, int* OutID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetIdOfClosestStep");

	ABP_S3StaircaseBase_C_GetIdOfClosestStep_Params params;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutID != nullptr)
		*OutID = params.OutID;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetStepCycleForLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 InLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            OutClimbCycle                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::GetStepCycleForLocation(const struct FVector& InLocation, int* OutClimbCycle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetStepCycleForLocation");

	ABP_S3StaircaseBase_C_GetStepCycleForLocation_Params params;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutClimbCycle != nullptr)
		*OutClimbCycle = params.OutClimbCycle;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetSlopeAngle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          AngleDegrees                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::GetSlopeAngle(float* AngleDegrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetSlopeAngle");

	ABP_S3StaircaseBase_C_GetSlopeAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AngleDegrees != nullptr)
		*AngleDegrees = params.AngleDegrees;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.DistanceToClosestStopLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::DistanceToClosestStopLocation(const struct FVector& Location, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.DistanceToClosestStopLocation");

	ABP_S3StaircaseBase_C_DistanceToClosestStopLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.RelXToRelZ
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          RelX                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RelZ                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::RelXToRelZ(float RelX, float* RelZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.RelXToRelZ");

	ABP_S3StaircaseBase_C_RelXToRelZ_Params params;
	params.RelX = RelX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelZ != nullptr)
		*RelZ = params.RelZ;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.ClimbCycleRefToWorldSpace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Relative                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 World                          (Parm, OutParm, IsPlainOldData)

void ABP_S3StaircaseBase_C::ClimbCycleRefToWorldSpace(const struct FVector& Relative, struct FVector* World)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.ClimbCycleRefToWorldSpace");

	ABP_S3StaircaseBase_C_ClimbCycleRefToWorldSpace_Params params;
	params.Relative = Relative;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (World != nullptr)
		*World = params.World;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.WorldToClimbCycleRefSpace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Relative                       (Parm, OutParm, IsPlainOldData)

void ABP_S3StaircaseBase_C::WorldToClimbCycleRefSpace(const struct FVector& Location, struct FVector* Relative)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.WorldToClimbCycleRefSpace");

	ABP_S3StaircaseBase_C_WorldToClimbCycleRefSpace_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Relative != nullptr)
		*Relative = params.Relative;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.CorrectLocationForStepProgress
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          StepProgress                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DirUp                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Correction                     (Parm, OutParm, IsPlainOldData)

void ABP_S3StaircaseBase_C::CorrectLocationForStepProgress(const struct FVector& Position, float StepProgress, bool DirUp, struct FVector* Correction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.CorrectLocationForStepProgress");

	ABP_S3StaircaseBase_C_CorrectLocationForStepProgress_Params params;
	params.Position = Position;
	params.StepProgress = StepProgress;
	params.DirUp = DirUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Correction != nullptr)
		*Correction = params.Correction;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.InBounds2D
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 SizeAdjustment                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           In                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::InBounds2D(const struct FVector& Location, const struct FVector& SizeAdjustment, bool* In)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.InBounds2D");

	ABP_S3StaircaseBase_C_InBounds2D_Params params;
	params.Location = Location;
	params.SizeAdjustment = SizeAdjustment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (In != nullptr)
		*In = params.In;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetSlopeDirection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 SlopeDIrection                 (Parm, OutParm, IsPlainOldData)

void ABP_S3StaircaseBase_C::GetSlopeDirection(struct FVector* SlopeDIrection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetSlopeDirection");

	ABP_S3StaircaseBase_C_GetSlopeDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlopeDIrection != nullptr)
		*SlopeDIrection = params.SlopeDIrection;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetClimbCycleRefLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 BaseLocation                   (Parm, OutParm, IsPlainOldData)

void ABP_S3StaircaseBase_C::GetClimbCycleRefLocation(struct FVector* BaseLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetClimbCycleRefLocation");

	ABP_S3StaircaseBase_C_GetClimbCycleRefLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BaseLocation != nullptr)
		*BaseLocation = params.BaseLocation;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.CorrectLocationHeight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::CorrectLocationHeight(const struct FVector& Location, float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.CorrectLocationHeight");

	ABP_S3StaircaseBase_C_CorrectLocationHeight_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetStepProgressForLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::GetStepProgressForLocation(const struct FVector& Location, float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetStepProgressForLocation");

	ABP_S3StaircaseBase_C_GetStepProgressForLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3StaircaseBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.UserConstructionScript");

	ABP_S3StaircaseBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_S3StaircaseBase_C::BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_S3StaircaseBase_C_BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::BndEvt__TriggerBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_S3StaircaseBase_C_BndEvt__TriggerBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3StaircaseBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.ReceiveBeginPlay");

	ABP_S3StaircaseBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.ExecuteUbergraph_BP_S3StaircaseBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::ExecuteUbergraph_BP_S3StaircaseBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.ExecuteUbergraph_BP_S3StaircaseBase");

	ABP_S3StaircaseBase_C_ExecuteUbergraph_BP_S3StaircaseBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
