#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.TryGetSpecifiedCalcRotationSpeaker
struct UBPFL_S3CameraUtil_C_TryGetSpecifiedCalcRotationSpeaker_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.ToCameraAngleMaskFromClass
struct UBPFL_S3CameraUtil_C_ToCameraAngleMaskFromClass_Params
{
	class UClass*                                      In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                mask;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.ToCameraFramingMaskFromClass
struct UBPFL_S3CameraUtil_C_ToCameraFramingMaskFromClass_Params
{
	class UClass*                                      In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                mask;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.ToCameraPairOrSingleMaskFromClass
struct UBPFL_S3CameraUtil_C_ToCameraPairOrSingleMaskFromClass_Params
{
	class UClass*                                      In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                mask;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.SphereTraceForObjectsByTwoSide
struct UBPFL_S3CameraUtil_C_SphereTraceForObjectsByTwoSide_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.IsSeeableFromCamera
struct UBPFL_S3CameraUtil_C_IsSeeableFromCamera_Params
{
	TArray<struct FVector>                             CameraLocus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetSocketName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              _IgnoreActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               isDebug;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SphereTraceRadius;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              InObjectType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CheckSeeableForManyTargets
struct UBPFL_S3CameraUtil_C_CheckSeeableForManyTargets_Params
{
	TArray<struct FVector>                             InLocus;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              InBottomSeeableRate;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABP_S3CharacterBase_C*>               TargetActors;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<TEnumAsByte<EObjectTypeQuery>>              InObjectType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               isDebug;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EM_LeftOrRight>                        CameraPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraInitialProperty                   InitalCameraProperty;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class AActor*>                              IgnoreActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.isSameDirection
struct UBPFL_S3CameraUtil_C_isSameDirection_Params
{
	struct FVector                                     From;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Target1;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Target2;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ToleranceAngle;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.IsStraight
struct UBPFL_S3CameraUtil_C_IsStraight_Params
{
	class AActor*                                      Actor1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor3;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsStraight;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.ToCameraPairOrSingleMaskFromName
struct UBPFL_S3CameraUtil_C_ToCameraPairOrSingleMaskFromName_Params
{
	struct FString                                     In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                mask;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.ToCameraAngleMaskFromName
struct UBPFL_S3CameraUtil_C_ToCameraAngleMaskFromName_Params
{
	struct FString                                     In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                mask;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.ToCameraFramingMaskFromName
struct UBPFL_S3CameraUtil_C_ToCameraFramingMaskFromName_Params
{
	struct FString                                     In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                mask;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.ParseCameraClassToIntensionMask
struct UBPFL_S3CameraUtil_C_ParseCameraClassToIntensionMask_Params
{
	class UClass*                                      cameraClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                retMask;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    retRotate;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               bError;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CameraClassNameToBitMask
struct UBPFL_S3CameraUtil_C_CameraClassNameToBitMask_Params
{
	class UClass*                                      Camera;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.DistanceToBitmask
struct UBPFL_S3CameraUtil_C_DistanceToBitmask_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                mask;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcInfoFromMultiplePersonCamera
struct UBPFL_S3CameraUtil_C_CalcInfoFromMultiplePersonCamera_Params
{
	class UClass*                                      MultiplePersonCameraClass;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcInfoFromLookAtCameraClass
struct UBPFL_S3CameraUtil_C_CalcInfoFromLookAtCameraClass_Params
{
	class UClass*                                      LookAtCamera;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                retMask;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcInfoFromDefaltTalkCameraClass
struct UBPFL_S3CameraUtil_C_CalcInfoFromDefaltTalkCameraClass_Params
{
	class UClass*                                      DefaultTalkCamera;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotator;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcCameraInfo
struct UBPFL_S3CameraUtil_C_CalcCameraInfo_Params
{
	class UClass*                                      BaseTalkCameraClass;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_AutoTalkCameraInfo>                 CameraInfo;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.TryGetRightVector
struct UBPFL_S3CameraUtil_C_TryGetRightVector_Params
{
	class USkeletalMeshComponent*                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Right;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.TryGetForwardVector
struct UBPFL_S3CameraUtil_C_TryGetForwardVector_Params
{
	class USkeletalMeshComponent*                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Forward;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcLookAtCameraLocus
struct UBPFL_S3CameraUtil_C_CalcLookAtCameraLocus_Params
{
	class UClass*                                      LookAtCameraClass;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EM_LeftOrRight>                        _CameraPosition1;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SpeakingSkeletalMesh1;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      ListeningSkeletalMesh1;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               debug1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Locus;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcMultiplePersonCameraLocus
struct UBPFL_S3CameraUtil_C_CalcMultiplePersonCameraLocus_Params
{
	class UClass*                                      MultiplePersonCamera;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AS3Character*>                        Targets;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Locus;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.isAvailavleFromParam
struct UBPFL_S3CameraUtil_C_isAvailavleFromParam_Params
{
	struct FST_CameraInitialProperty                   InitialCameraProperty;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               EnableSpin;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraSpinProperty                      SpinProperty;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               EnableDollyZoom;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraDollyZoomProperty                 DollyZoomProperty;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                DivNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SpeakingSkeletalMesh;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      ListeningSkeletalMesh;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EM_LeftOrRight>                        CameraPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               isDebugDraw;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              resultSeeableRate;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          HitResult;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.GetRandomCameraInRange
struct UBPFL_S3CameraUtil_C_GetRandomCameraInRange_Params
{
	class UClass*                                      CameraClass1;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CameraClass2;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraInitialProperty                   CameraInitialProperty;                                    // (Parm, OutParm)
	struct FST_CameraSpinProperty                      CameraSpin;                                               // (Parm, OutParm)
	struct FST_CameraDollyZoomProperty                 CameraDolly;                                              // (Parm, OutParm)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.RandomDollyInRange
struct UBPFL_S3CameraUtil_C_RandomDollyInRange_Params
{
	struct FST_CameraDollyZoomProperty                 Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FST_CameraDollyZoomProperty                 Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraDollyZoomProperty                 Result;                                                   // (Parm, OutParm)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CheckBreadthOfRightAndLeftSpaceInDome
struct UBPFL_S3CameraUtil_C_CheckBreadthOfRightAndLeftSpaceInDome_Params
{
	struct FVector                                     Center;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     XVector;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaAngle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              HitCheckObjectType;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               isDrawDebug;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EM_LeftOrRight>                        SpaciousArea;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              LeftHitRate;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RightHitRate;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.RandomSpinInRange
struct UBPFL_S3CameraUtil_C_RandomSpinInRange_Params
{
	struct FST_CameraSpinProperty                      Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FST_CameraSpinProperty                      Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraSpinProperty                      Result;                                                   // (Parm, OutParm)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.RandomInitialcameraPropertyInRange
struct UBPFL_S3CameraUtil_C_RandomInitialcameraPropertyInRange_Params
{
	struct FST_CameraInitialProperty                   Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FST_CameraInitialProperty                   Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               useForcePair_Flag;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               forcePair;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraInitialProperty                   Result;                                                   // (Parm, OutParm)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CreatePairTalkCamera
struct UBPFL_S3CameraUtil_C_CreatePairTalkCamera_Params
{
	struct FST_CameraInitialProperty                   MinInitialProperty;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FST_CameraInitialProperty                   MaxInitialProperty;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FST_CameraSpinProperty                      MinSpin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FST_CameraSpinProperty                      MaxSpin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FST_CameraDollyZoomProperty                 MinDolly;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FST_CameraDollyZoomProperty                 MaxDolly;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.GetCameraPropertiesFromClass
struct UBPFL_S3CameraUtil_C_GetCameraPropertiesFromClass_Params
{
	class UClass*                                      DefaultTalkCameraClass;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraInitialProperty                   InitialCameraProperty;                                    // (Parm, OutParm)
	bool                                               Enable_Spin;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraSpinProperty                      Spin_Property;                                            // (Parm, OutParm)
	bool                                               Enable_Dolly_Zoom;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraDollyZoomProperty                 Dolly_Zoom_Property;                                      // (Parm, OutParm)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.DrawDebugLocus
struct UBPFL_S3CameraUtil_C_DrawDebugLocus_Params
{
	TArray<struct FVector>                             Locus;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FLinearColor                                LineColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CheckSeeableFromLocusWithRate
struct UBPFL_S3CameraUtil_C_CheckSeeableFromLocusWithRate_Params
{
	TArray<struct FVector>                             Locus;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              BottomSeeableRate;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SpeakerMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ListenerMesh;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               isDebugDraw;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isPair;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EM_LeftOrRight>                        CameraPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraInitialProperty                   InitialCameraProperty;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bTargetReverse;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isSeeable;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              resultSeeableRate;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          HitResults;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CheckHitFromLocus
struct UBPFL_S3CameraUtil_C_CheckHitFromLocus_Params
{
	TArray<struct FVector>                             Locus;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               isDebugDraw;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowOverlap;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bCheckTwoSide;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               printCollisionMessage;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHit;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          HitResults;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.isAvailableFromClass
struct UBPFL_S3CameraUtil_C_isAvailableFromClass_Params
{
	class UClass*                                      TalkCamera;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DivNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SpeakingSkeletalMesh;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ListeningSkeletalMesh;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EM_LeftOrRight>                        CameraPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              CheckHitObjectTypes;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               isDebugDraw;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CheckTwoSide;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               printCollisionMessage;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               _isAcEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isAvailable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          HitResult;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcDefaultTalkCameraLocus
struct UBPFL_S3CameraUtil_C_CalcDefaultTalkCameraLocus_Params
{
	int                                                DivNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SpeakingSkeletalMesh;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ListeningSkeletalMesh;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EM_LeftOrRight>                        CameraPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraInitialProperty                   InitialCameraProperty;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               EnableSpin;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraSpinProperty                      SpinProperty;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               EnableDollyZoom;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraDollyZoomProperty                 DollyZoomProperty;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               isDrawDebug;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             newParam;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcImaginaryPositionValue
struct UBPFL_S3CameraUtil_C_CalcImaginaryPositionValue_Params
{
	TEnumAsByte<EM_LeftOrRight>                        CameraPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ImaginaryPositionValue;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcFinishDollyCameraDistance
struct UBPFL_S3CameraUtil_C_CalcFinishDollyCameraDistance_Params
{
	float                                              StartCameraDistance;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StandardCameraDistance;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CharacterHalfDistance;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraDollyZoomProperty                 ST_CameraDollyZoomProperty;                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FST_CameraInitialProperty                   ST_CameraInitialProperty;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FinishCameraDistance;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcCameraSpin
struct UBPFL_S3CameraUtil_C_CalcCameraSpin_Params
{
	struct FST_CameraSpinProperty                      ST_CameraSpinProperty;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    StartRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    FinishRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ResultRotation;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcFinishSpin
struct UBPFL_S3CameraUtil_C_CalcFinishSpin_Params
{
	float                                              ImaginaryPositionValue;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StandardhalfDistance;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentCameraDistance;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraInitialProperty                   ST_CameraInitialProperty;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FST_CameraSpinProperty                      ST_CameraSpinProperty;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FRotator                                    StartRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    StandardRotation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    FinishRotation;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcSpinElapsedTime
struct UBPFL_S3CameraUtil_C_CalcSpinElapsedTime_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentElapsedTime;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraSpinProperty                      ST_CameraSpinProperty;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              resultElapsedTime;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcCameraDistance
struct UBPFL_S3CameraUtil_C_CalcCameraDistance_Params
{
	class USceneComponent*                             SpeakingSkeletalMesh;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ListeningSkeletalMesh;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FST_CameraInitialProperty                   InitialCameraProperty;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraDistance;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CharacterHalfDistance;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              StandardCameraDistance;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcCameraRotation
struct UBPFL_S3CameraUtil_C_CalcCameraRotation_Params
{
	class USceneComponent*                             SpeakingSkeletalMesh;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ListeningSkeletalMesh;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ImaginaryPositionValue;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraInitialProperty                   InitialCameraProperty;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EM_LeftOrRight>                        CameraPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StandardhalfDistance;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ResultRotation;                                           // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    StandardRotation;                                         // (Parm, OutParm, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcLockPointDepthOffset
struct UBPFL_S3CameraUtil_C_CalcLockPointDepthOffset_Params
{
	class USceneComponent*                             ListeningSkeletalMesh;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SpeakingSkeletalMesh;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              StandardhalfDistance;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraInitialProperty                   InitialCameraProperty;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DepthOffset;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcCameraDollyZoom
struct UBPFL_S3CameraUtil_C_CalcCameraDollyZoom_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartCameraDistance;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FinishCameraDistance;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraDollyZoomProperty                 ST_CameraDollyZoomProperty;                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcCameraFovZoom
struct UBPFL_S3CameraUtil_C_CalcCameraFovZoom_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartFOV;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraFovZoomProperty                   ST_CameraFovZoomProperty;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcLookPos
struct UBPFL_S3CameraUtil_C_CalcLookPos_Params
{
	class USceneComponent*                             SpeakingSkeletalMesh;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ListeningSkeletalMesh;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ImaginaryPositionValue;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraInitialProperty                   InitialCameraProperty;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookPos;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.AdjustRotationFromDistance
struct UBPFL_S3CameraUtil_C_AdjustRotationFromDistance_Params
{
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              DistanceRatio;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AdjustmentRotation;                                       // (Parm, OutParm, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.AdjustCameraDistance
struct UBPFL_S3CameraUtil_C_AdjustCameraDistance_Params
{
	float                                              CharacterHalfDistance;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraDistance;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraInitialProperty                   InitialCameraProperty;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AdjustmentCameraDistance;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPFL_S3CameraUtil.BPFL_S3CameraUtil_C.CalcLookPointOffset
struct UBPFL_S3CameraUtil_C_CalcLookPointOffset_Params
{
	class USceneComponent*                             ListeningSkeletalMesh;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SpeakingSkeletalMesh;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              StandardhalfDistance;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ImaginaryPositionValue;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CameraInitialProperty                   InitialCameraProperty;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookPointOffset;                                          // (Parm, OutParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
