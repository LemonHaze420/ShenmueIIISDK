#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.CheckInitialOverlaps
struct ABP_S3StaircaseBase_C_CheckInitialOverlaps_Params
{
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetRelativeStairOnX
struct ABP_S3StaircaseBase_C_GetRelativeStairOnX_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              FudgeDistanceIn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalDirection>                    Relative;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetStepsBaseTransform
struct ABP_S3StaircaseBase_C_GetStepsBaseTransform_Params
{
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetClimbEndPoints_LS
struct ABP_S3StaircaseBase_C_GetClimbEndPoints_LS_Params
{
	struct FVector                                     Bottom;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     top;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.Editor_UpdateVisualization
struct ABP_S3StaircaseBase_C_Editor_UpdateVisualization_Params
{
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.SetupDebugStepVisual
struct ABP_S3StaircaseBase_C_SetupDebugStepVisual_Params
{
	class UStaticMeshComponent*                        Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     StepEnd;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.PairToMultiMeshActor
struct ABP_S3StaircaseBase_C_PairToMultiMeshActor_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StepDimension;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                NumberOfSteps;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetBestSnapCandidate
struct ABP_S3StaircaseBase_C_GetBestSnapCandidate_Params
{
	float                                              CloseTo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Candidate1;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Candidate2;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Candidate3;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreferredSign;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Selection;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.CalculateTriggerBounds
struct ABP_S3StaircaseBase_C_CalculateTriggerBounds_Params
{
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.PairToAndConfigureMesh
struct ABP_S3StaircaseBase_C_PairToAndConfigureMesh_Params
{
	class UStaticMeshComponent*                        MeshComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetClosestStopLocation
struct ABP_S3StaircaseBase_C_GetClosestStopLocation_Params
{
	struct FVector                                     InLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.AnimPositionToStepProgress
struct ABP_S3StaircaseBase_C_AnimPositionToStepProgress_Params
{
	float                                              AnimPosition;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DirUp;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StepProgress;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.StepProgressToAnimPosition
struct ABP_S3StaircaseBase_C_StepProgressToAnimPosition_Params
{
	float                                              StepProgress;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DirUp;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RPosition;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LPosition;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetStepsClimbedForLocation
struct ABP_S3StaircaseBase_C_GetStepsClimbedForLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetNextStepStopLocation
struct ABP_S3StaircaseBase_C_GetNextStepStopLocation_Params
{
	struct FVector                                     InLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               InDirUp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetAngleInClimbDirection
struct ABP_S3StaircaseBase_C_GetAngleInClimbDirection_Params
{
	struct FVector                                     InDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               isUp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutAngle;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetClimbCycleRefTransform
struct ABP_S3StaircaseBase_C_GetClimbCycleRefTransform_Params
{
	struct FTransform                                  OutTransform;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetCollisionActor
struct ABP_S3StaircaseBase_C_GetCollisionActor_Params
{
	class AActor*                                      CollisionActor;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetIdOfClosestStep
struct ABP_S3StaircaseBase_C_GetIdOfClosestStep_Params
{
	struct FVector                                     InLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                OutID;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetStepCycleForLocation
struct ABP_S3StaircaseBase_C_GetStepCycleForLocation_Params
{
	struct FVector                                     InLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                OutClimbCycle;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetSlopeAngle
struct ABP_S3StaircaseBase_C_GetSlopeAngle_Params
{
	float                                              AngleDegrees;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.DistanceToClosestStopLocation
struct ABP_S3StaircaseBase_C_DistanceToClosestStopLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.RelXToRelZ
struct ABP_S3StaircaseBase_C_RelXToRelZ_Params
{
	float                                              RelX;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RelZ;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.ClimbCycleRefToWorldSpace
struct ABP_S3StaircaseBase_C_ClimbCycleRefToWorldSpace_Params
{
	struct FVector                                     Relative;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     World;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.WorldToClimbCycleRefSpace
struct ABP_S3StaircaseBase_C_WorldToClimbCycleRefSpace_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Relative;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.CorrectLocationForStepProgress
struct ABP_S3StaircaseBase_C_CorrectLocationForStepProgress_Params
{
	struct FVector                                     Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              StepProgress;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DirUp;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Correction;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.InBounds2D
struct ABP_S3StaircaseBase_C_InBounds2D_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     SizeAdjustment;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               In;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetSlopeDirection
struct ABP_S3StaircaseBase_C_GetSlopeDirection_Params
{
	struct FVector                                     SlopeDIrection;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetClimbCycleRefLocation
struct ABP_S3StaircaseBase_C_GetClimbCycleRefLocation_Params
{
	struct FVector                                     BaseLocation;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.CorrectLocationHeight
struct ABP_S3StaircaseBase_C_CorrectLocationHeight_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.GetStepProgressForLocation
struct ABP_S3StaircaseBase_C_GetStepProgressForLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.UserConstructionScript
struct ABP_S3StaircaseBase_C_UserConstructionScript_Params
{
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_S3StaircaseBase_C_BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_S3StaircaseBase_C_BndEvt__TriggerBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.ReceiveBeginPlay
struct ABP_S3StaircaseBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3StaircaseBase.BP_S3StaircaseBase_C.ExecuteUbergraph_BP_S3StaircaseBase
struct ABP_S3StaircaseBase_C_ExecuteUbergraph_BP_S3StaircaseBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
