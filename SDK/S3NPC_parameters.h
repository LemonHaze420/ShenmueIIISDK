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

// Function S3NPC.S3KismetNPCLibrary.VectorGetDistance
struct US3KismetNPCLibrary_VectorGetDistance_Params
{
	struct FVector                                     Vector1;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Vector2;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsDistance2D;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.TryProjectPointToNavigation
struct US3KismetNPCLibrary_TryProjectPointToNavigation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class ANavigationData*                             NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     QueryExtent;                                              // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     Projected;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.SetRootMotionMode
struct US3KismetNPCLibrary_SetRootMotionMode_Params
{
	class UAnimInstance*                               TargetAnimInstance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERootMotionMode>                       RootMotionMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERootMotionMode>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.SetGlobalAvoidanceProperties
struct US3KismetNPCLibrary_SetGlobalAvoidanceProperties_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LockTimeAfterAvoid;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LockTimeAfterClean;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTimeToPredict;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.RotatingAnimParameter
struct US3KismetNPCLibrary_RotatingAnimParameter_Params
{
	class AActor*                                      NPC;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, IsPlainOldData)
	ERotationAnimSelector                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.RotateAnimationSelector
struct US3KismetNPCLibrary_RotateAnimationSelector_Params
{
	float                                              fAngle;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOntheLeft;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ERotationAnimSelector                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.RandomGetAndRemove
struct US3KismetNPCLibrary_RandomGetAndRemove_Params
{
	TArray<class AActor*>                              InputArray;                                               // (Parm, ZeroConstructor)
	TArray<class AActor*>                              OutInputArray;                                            // (Parm, OutParm, ZeroConstructor)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.MakeAnyMatchQueryByContainer
struct US3KismetNPCLibrary_MakeAnyMatchQueryByContainer_Params
{
	struct FGameplayTagContainer                       InputContainer;                                           // (Parm)
	struct FGameplayTagQuery                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function S3NPC.S3KismetNPCLibrary.InteractionRotatingSelector
struct US3KismetNPCLibrary_InteractionRotatingSelector_Params
{
	class AActor*                                      NPC;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, IsPlainOldData)
	ERotationAnimSelector                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.IKFootTrace
struct US3KismetNPCLibrary_IKFootTrace_Params
{
	float                                              fTraceDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FootSocketName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  IKCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.GetRowByNameScheduleTable
struct US3KismetNPCLibrary_GetRowByNameScheduleTable_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       pName;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FScheduleTableRowBase                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function S3NPC.S3KismetNPCLibrary.GetRowByNameNPCRelationshipTable
struct US3KismetNPCLibrary_GetRowByNameNPCRelationshipTable_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       pName;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FNPCRelationshipTableRowBase                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function S3NPC.S3KismetNPCLibrary.GetRandomProjectedLocation
struct US3KismetNPCLibrary_GetRandomProjectedLocation_Params
{
	struct FVector                                     QueryExtend;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutValidLocation;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.GetRandomPointTracedSphere
struct US3KismetNPCLibrary_GetRandomPointTracedSphere_Params
{
	class AActor*                                      Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RandomCenter;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ForwardVector;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              RadiusMin;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              RadiusMax;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              VerticleAngleMin;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              VerticleAngleMax;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ClampedAngle;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.GetRandomPointTracedCylinder
struct US3KismetNPCLibrary_GetRandomPointTracedCylinder_Params
{
	class AActor*                                      Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RandomCenter;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ForwardVector;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              RadiusMin;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              RadiusMax;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              VerticleOffsetMax;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ClampedAngle;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.GetRandomPointBetweenSpheresClampedForward
struct US3KismetNPCLibrary_GetRandomPointBetweenSpheresClampedForward_Params
{
	struct FVector                                     RandomCenter;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ForwardVector;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              RadiusMin;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              RadiusMax;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              VerticleAngleMin;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              VerticleAngleMax;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ClampedAngle;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.GetRandomPointBetweenSpheres
struct US3KismetNPCLibrary_GetRandomPointBetweenSpheres_Params
{
	struct FVector                                     RandomCenter;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              RadiusMin;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              RadiusMax;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              VerticleAngleMin;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              VerticleAngleMax;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.GetRandomPointBetweenCylindersClampedForward
struct US3KismetNPCLibrary_GetRandomPointBetweenCylindersClampedForward_Params
{
	struct FVector                                     RandomCenter;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ForwardVector;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              RadiusMin;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              RadiusMax;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              VerticleOffsetMax;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ClampedAngle;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.GetRandomLocationZTop
struct US3KismetNPCLibrary_GetRandomLocationZTop_Params
{
	struct FVector                                     Extend;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      ActorTrans;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.GetMapName
struct US3KismetNPCLibrary_GetMapName_Params
{
	class AActor*                                      LevelContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function S3NPC.S3KismetNPCLibrary.GetLocationNextSplinePoint
struct US3KismetNPCLibrary_GetLocationNextSplinePoint_Params
{
	class USplineComponent*                            InputSpline;                                              // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Distance;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.GetForwardClampedAngle
struct US3KismetNPCLibrary_GetForwardClampedAngle_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, IsPlainOldData)
	bool                                               bOutIsOntheLeft;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.GetCurrentMontageSectionLengthPercentage
struct US3KismetNPCLibrary_GetCurrentMontageSectionLengthPercentage_Params
{
	class UAnimInstance*                               TargetAnimInstance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CurrentMontage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MontageSection;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.GetCurrentMontageLengthPercentage
struct US3KismetNPCLibrary_GetCurrentMontageLengthPercentage_Params
{
	class UAnimInstance*                               TargetAnimInstance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CurrentMontage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.GetClampedAngleInTwoForwards
struct US3KismetNPCLibrary_GetClampedAngleInTwoForwards_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetForwardVector;                                      // (ConstParm, Parm, IsPlainOldData)
	bool                                               bOutLeftTurn;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.GetAvoidanceManager
struct US3KismetNPCLibrary_GetAvoidanceManager_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAvoidanceManager*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.DisableSplitScreen
struct US3KismetNPCLibrary_DisableSplitScreen_Params
{
	class AActor*                                      Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.ComponentGetDistance
struct US3KismetNPCLibrary_ComponentGetDistance_Params
{
	class USceneComponent*                             Component1;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Component2;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsDistance2D;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.AlignRotationLookat
struct US3KismetNPCLibrary_AlignRotationLookat_Params
{
	class AActor*                                      Actor1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotInterpSpeed;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OutActor1;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OutActor2;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.AlignLocationRotation
struct US3KismetNPCLibrary_AlignLocationRotation_Params
{
	class AActor*                                      NPC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocInterpSpeed;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RotInterpSpeed;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OutNPC;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OutTarget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3KismetNPCLibrary.ActorGetDistance
struct US3KismetNPCLibrary_ActorGetDistance_Params
{
	class AActor*                                      Actor1;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor2;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDistance2D;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3NPCPOITargetListManagerBase.PickUpTargetListByTime
struct AS3NPCPOITargetListManagerBase_PickUpTargetListByTime_Params
{
	float                                              GameTime;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundList;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ListIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class AS3NPCPOIPointBase*>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function S3NPC.S3NPCPOITargetListManagerBase.GetRowByNameTargetListDataTable
struct AS3NPCPOITargetListManagerBase_GetRowByNameTargetListDataTable_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       pName;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTargetListTableRowBase                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function S3NPC.S3NPCRegionBase.PointInsideVolume
struct AS3NPCRegionBase_PointInsideVolume_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3NPCRegionBase.GetRandomReachablePoint
struct AS3NPCRegionBase_GetRandomReachablePoint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3NPCRegionBase.GetBoxExtend
struct AS3NPCRegionBase_GetBoxExtend_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3NPCSpawnerBase.SpawnNPC
struct AS3NPCSpawnerBase_SpawnNPC_Params
{
	float                                              GameTime;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GroupMemberSpawnRadius;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3NPCSpawnerBase.SpawnActorByBP
struct AS3NPCSpawnerBase_SpawnActorByBP_Params
{
	int                                                StructIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3NPCSpawnerBase.DestroyNPC
struct AS3NPCSpawnerBase_DestroyNPC_Params
{
};

// Function S3NPC.S3NPCSpawnerBase.AddPOITargetList
struct AS3NPCSpawnerBase_AddPOITargetList_Params
{
	int                                                StructIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  NPCToAdd;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3NPC.S3NPCSpawnerBase.AddGroupTags
struct AS3NPCSpawnerBase_AddGroupTags_Params
{
	class ACharacter*                                  NPCToSet;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NPCIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function S3NPC.S3NPCPOIListBase.GetPOIListbyTags
struct AS3NPCPOIListBase_GetPOIListbyTags_Params
{
	struct FGameplayTagQuery                           InputTagQuery;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class AS3NPCPOIBase*>                       POIs;                                                     // (Parm, OutParm, ZeroConstructor)
	float                                              GameTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
