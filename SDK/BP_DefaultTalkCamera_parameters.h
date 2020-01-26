#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.CalcAndMoveCameraToSafeLocation
struct ABP_DefaultTalkCamera_C_CalcAndMoveCameraToSafeLocation_Params
{
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.CutOffNearBlur
struct ABP_DefaultTalkCamera_C_CutOffNearBlur_Params
{
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.GetLookTargetSocketLocation
struct ABP_DefaultTalkCamera_C_GetLookTargetSocketLocation_Params
{
	struct FName                                       InSocketName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.CalcFinalDistance
struct ABP_DefaultTalkCamera_C_CalcFinalDistance_Params
{
	float                                              FinishCameraDistance;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.CalcFinalSpin
struct ABP_DefaultTalkCamera_C_CalcFinalSpin_Params
{
	struct FRotator                                    FinalSpin;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.UpdateComponent
struct ABP_DefaultTalkCamera_C_UpdateComponent_Params
{
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.GetCamera
struct ABP_DefaultTalkCamera_C_GetCamera_Params
{
	class UCameraComponent*                            Camera;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.GetForwardVector
struct ABP_DefaultTalkCamera_C_GetForwardVector_Params
{
	class USkeletalMeshComponent*                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Forward;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.AdjustRotationFromDistance
struct ABP_DefaultTalkCamera_C_AdjustRotationFromDistance_Params
{
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              DistanceRatio;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    AdjustmentRotation;                                       // (Parm, OutParm, IsPlainOldData)
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.AdjustCameraDistance
struct ABP_DefaultTalkCamera_C_AdjustCameraDistance_Params
{
	float                                              CharacterHalfDistance;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraDistance;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AdjustmentCameraDistance;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.GetLockPointDepthOffset
struct ABP_DefaultTalkCamera_C_GetLockPointDepthOffset_Params
{
	struct FVector                                     DepthOffset;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.GetLockPointOffset
struct ABP_DefaultTalkCamera_C_GetLockPointOffset_Params
{
	struct FVector                                     LockPointOffset;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.SetSkeletalMeshFromTalkActor
struct ABP_DefaultTalkCamera_C_SetSkeletalMeshFromTalkActor_Params
{
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.Movement_DollyZoom
struct ABP_DefaultTalkCamera_C_Movement_DollyZoom_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.Movement_FovZoom
struct ABP_DefaultTalkCamera_C_Movement_FovZoom_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.Movement_Spin
struct ABP_DefaultTalkCamera_C_Movement_Spin_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.Rotater + Rotater
struct ABP_DefaultTalkCamera_C_Rotater___Rotater_Params
{
	struct FRotator                                    Rotator_A;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotator_B;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotator;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.StartupSettingsCaseLookPair
struct ABP_DefaultTalkCamera_C_StartupSettingsCaseLookPair_Params
{
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.StartupSettingsCaseLookAlone
struct ABP_DefaultTalkCamera_C_StartupSettingsCaseLookAlone_Params
{
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.UserConstructionScript
struct ABP_DefaultTalkCamera_C_UserConstructionScript_Params
{
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.ReceiveBeginPlay
struct ABP_DefaultTalkCamera_C_ReceiveBeginPlay_Params
{
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.ChangeTarget
struct ABP_DefaultTalkCamera_C_ChangeTarget_Params
{
	TArray<class AActor*>                              NewTarget;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              lerpTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.ReceiveTick
struct ABP_DefaultTalkCamera_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DefaultTalkCamera.BP_DefaultTalkCamera_C.ExecuteUbergraph_BP_DefaultTalkCamera
struct ABP_DefaultTalkCamera_C_ExecuteUbergraph_BP_DefaultTalkCamera_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
