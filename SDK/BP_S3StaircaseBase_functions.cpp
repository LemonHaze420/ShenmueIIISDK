
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
// (Exec, Native, Event, NetResponse, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3StaircaseBase_C::CheckInitialOverlaps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.CheckInitialOverlaps");

	ABP_S3StaircaseBase_C_CheckInitialOverlaps_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetRelativeStairOnX
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          FudgeDistanceIn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EVerticalDirection> Relative                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::STATIC_GetRelativeStairOnX(const struct FVector& Location, float FudgeDistanceIn, TEnumAsByte<EVerticalDirection>* Relative)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetRelativeStairOnX");

	ABP_S3StaircaseBase_C_GetRelativeStairOnX_Params params;
	params.Location = Location;
	params.FudgeDistanceIn = FudgeDistanceIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Relative != nullptr)
		*Relative = params.Relative;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetStepsBaseTransform
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)

void ABP_S3StaircaseBase_C::STATIC_GetStepsBaseTransform(struct FTransform* OutTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetStepsBaseTransform");

	ABP_S3StaircaseBase_C_GetStepsBaseTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetClimbEndPoints_LS
// (NetReliable, Exec, NetResponse, Public, Private, NetServer, NetClient, Const)
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
// (Native, Event, Static, MulticastDelegate, Public, Private, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3StaircaseBase_C::STATIC_Editor_UpdateVisualization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.Editor_UpdateVisualization");

	ABP_S3StaircaseBase_C_Editor_UpdateVisualization_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.SetupDebugStepVisual
// (NetResponse, Public, Private, NetServer, NetClient, Const)
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
// (NetReliable, Event, Delegate, NetServer, NetClient, Const)
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
// (Net, NetReliable, Event, NetResponse, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, Const)
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
// (NetReliable, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3StaircaseBase_C::STATIC_CalculateTriggerBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.CalculateTriggerBounds");

	ABP_S3StaircaseBase_C_CalculateTriggerBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.PairToAndConfigureMesh
// (NetReliable, NetResponse, NetMulticast, Private, NetServer, NetClient, Const)
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
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Net, Native, Event, NetResponse, MulticastDelegate, Private, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepProgress != nullptr)
		*StepProgress = params.StepProgress;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.StepProgressToAnimPosition
// (NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// float                          StepProgress                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DirUp                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RPosition                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LPosition                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::STATIC_StepProgressToAnimPosition(float StepProgress, bool DirUp, float* RPosition, float* LPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.StepProgressToAnimPosition");

	ABP_S3StaircaseBase_C_StepProgressToAnimPosition_Params params;
	params.StepProgress = StepProgress;
	params.DirUp = DirUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RPosition != nullptr)
		*RPosition = params.RPosition;
	if (LPosition != nullptr)
		*LPosition = params.LPosition;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetStepsClimbedForLocation
// (NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Private, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::STATIC_GetStepsClimbedForLocation(const struct FVector& Location, float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetStepsClimbedForLocation");

	ABP_S3StaircaseBase_C_GetStepsClimbedForLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetNextStepStopLocation
// (Net, NetRequest, Exec, Event, Delegate, NetServer, NetClient, Const)
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
// (Net, Exec, Event, Static, MulticastDelegate, Private, NetServer, NetClient, Const)
// Parameters:
// struct FVector                 InDirection                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           isUp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutAngle                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::STATIC_GetAngleInClimbDirection(const struct FVector& InDirection, bool isUp, float* OutAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetAngleInClimbDirection");

	ABP_S3StaircaseBase_C_GetAngleInClimbDirection_Params params;
	params.InDirection = InDirection;
	params.isUp = isUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAngle != nullptr)
		*OutAngle = params.OutAngle;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetClimbCycleRefTransform
// (Net, NetReliable, Exec, Native, Event, Static, MulticastDelegate, Private, Protected, NetServer, NetClient, Const)
// Parameters:
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)

void ABP_S3StaircaseBase_C::STATIC_GetClimbCycleRefTransform(struct FTransform* OutTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetClimbCycleRefTransform");

	ABP_S3StaircaseBase_C_GetClimbCycleRefTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetCollisionActor
// (NetReliable, Exec, Native, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  CollisionActor                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::GetCollisionActor(class AActor** CollisionActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetCollisionActor");

	ABP_S3StaircaseBase_C_GetCollisionActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CollisionActor != nullptr)
		*CollisionActor = params.CollisionActor;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetIdOfClosestStep
// (Native, Event, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, Const)
// Parameters:
// struct FVector                 InLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            OutID                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::GetIdOfClosestStep(const struct FVector& InLocation, int* OutID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetIdOfClosestStep");

	ABP_S3StaircaseBase_C_GetIdOfClosestStep_Params params;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutID != nullptr)
		*OutID = params.OutID;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetStepCycleForLocation
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// struct FVector                 InLocation                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            OutClimbCycle                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::STATIC_GetStepCycleForLocation(const struct FVector& InLocation, int* OutClimbCycle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetStepCycleForLocation");

	ABP_S3StaircaseBase_C_GetStepCycleForLocation_Params params;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutClimbCycle != nullptr)
		*OutClimbCycle = params.OutClimbCycle;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetSlopeAngle
// (Net, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// float                          AngleDegrees                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::STATIC_GetSlopeAngle(float* AngleDegrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetSlopeAngle");

	ABP_S3StaircaseBase_C_GetSlopeAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AngleDegrees != nullptr)
		*AngleDegrees = params.AngleDegrees;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.DistanceToClosestStopLocation
// (Exec, Native, NetResponse, NetMulticast, Private, NetServer, NetClient, Const)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::DistanceToClosestStopLocation(const struct FVector& Location, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.DistanceToClosestStopLocation");

	ABP_S3StaircaseBase_C_DistanceToClosestStopLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.RelXToRelZ
// (NetRequest, Event, Static, MulticastDelegate, Private, NetServer, NetClient, Const)
// Parameters:
// float                          RelX                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RelZ                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::STATIC_RelXToRelZ(float RelX, float* RelZ)
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
// (NetRequest, Exec, Static, Public, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Relative                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 World                          (Parm, OutParm, IsPlainOldData)

void ABP_S3StaircaseBase_C::STATIC_ClimbCycleRefToWorldSpace(const struct FVector& Relative, struct FVector* World)
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
// (Net, NetReliable, NetRequest, Exec, Static, Public, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Relative                       (Parm, OutParm, IsPlainOldData)

void ABP_S3StaircaseBase_C::STATIC_WorldToClimbCycleRefSpace(const struct FVector& Location, struct FVector* Relative)
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
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Delegate, NetClient, Const)
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
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 SizeAdjustment                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           In                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::STATIC_InBounds2D(const struct FVector& Location, const struct FVector& SizeAdjustment, bool* In)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.InBounds2D");

	ABP_S3StaircaseBase_C_InBounds2D_Params params;
	params.Location = Location;
	params.SizeAdjustment = SizeAdjustment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (In != nullptr)
		*In = params.In;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetSlopeDirection
// (NetReliable, NetRequest, Exec, Native, Event, MulticastDelegate, Public, Private, Protected, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 SlopeDIrection                 (Parm, OutParm, IsPlainOldData)

void ABP_S3StaircaseBase_C::GetSlopeDirection(struct FVector* SlopeDIrection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetSlopeDirection");

	ABP_S3StaircaseBase_C_GetSlopeDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlopeDIrection != nullptr)
		*SlopeDIrection = params.SlopeDIrection;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetClimbCycleRefLocation
// (Net, NetRequest, Exec, Event, Static, MulticastDelegate, Private, NetServer, NetClient, Const)
// Parameters:
// struct FVector                 BaseLocation                   (Parm, OutParm, IsPlainOldData)

void ABP_S3StaircaseBase_C::STATIC_GetClimbCycleRefLocation(struct FVector* BaseLocation)
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
// (NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)
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
// (NetReliable, NetRequest, Exec, Static, Public, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::STATIC_GetStepProgressForLocation(const struct FVector& Location, float* Progress)
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
// (Native, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)

void ABP_S3StaircaseBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.UserConstructionScript");

	ABP_S3StaircaseBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (NetReliable, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_S3StaircaseBase_C::STATIC_BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
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
// (Net, NetRequest, Event, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
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
// (NetRequest, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_S3StaircaseBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.ReceiveBeginPlay");

	ABP_S3StaircaseBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.ExecuteUbergraph_BP_S3StaircaseBase
// (NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3StaircaseBase_C::STATIC_ExecuteUbergraph_BP_S3StaircaseBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.ExecuteUbergraph_BP_S3StaircaseBase");

	ABP_S3StaircaseBase_C_ExecuteUbergraph_BP_S3StaircaseBase_Params params;
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
