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

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.SetRefractionRate
struct ABP_FishingBuoy_test_C_SetRefractionRate_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.InitializeBuoyTransform
struct ABP_FishingBuoy_test_C_InitializeBuoyTransform_Params
{
	struct FVector                                     PreBuoyLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     BaseDirection;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.SetPreBuoyLocation
struct ABP_FishingBuoy_test_C_SetPreBuoyLocation_Params
{
	struct FVector                                     PreBuoyLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.UpdateBuoyTransform
struct ABP_FishingBuoy_test_C_UpdateBuoyTransform_Params
{
	bool                                               ForceUpdate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.GetCableLengthRate
struct ABP_FishingBuoy_test_C_GetCableLengthRate_Params
{
	float                                              CableLengthRate;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ResetIdleMove
struct ABP_FishingBuoy_test_C_ResetIdleMove_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.UpdateIdleMove
struct ABP_FishingBuoy_test_C_UpdateIdleMove_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.UpdatePull
struct ABP_FishingBuoy_test_C_UpdatePull_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.AddPower
struct ABP_FishingBuoy_test_C_AddPower_Params
{
	struct FVector                                     ArgVector;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ArgPow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.GetBPMinigameFishing
struct ABP_FishingBuoy_test_C_GetBPMinigameFishing_Params
{
	class ABP_Minigame_Fishing_Test_C*                 RetBPFishing;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ProjectileStopFunc
struct ABP_FishingBuoy_test_C_ProjectileStopFunc_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.UpdateGuideArrowMove
struct ABP_FishingBuoy_test_C_UpdateGuideArrowMove_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.SetupGuideArrow
struct ABP_FishingBuoy_test_C_SetupGuideArrow_Params
{
	class ABP_Fishing_Arrow_C*                         ArgArrow;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ArgArrowPow;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.UpdateDelayHoming
struct ABP_FishingBuoy_test_C_UpdateDelayHoming_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ResetHoming
struct ABP_FishingBuoy_test_C_ResetHoming_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.StartProjectileAndHoming
struct ABP_FishingBuoy_test_C_StartProjectileAndHoming_Params
{
	class USceneComponent*                             ArgHomingPos;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ArgDelayTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.SetupTargetHoming
struct ABP_FishingBuoy_test_C_SetupTargetHoming_Params
{
	class USceneComponent*                             ArgTargetActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.SetCaptureActive
struct ABP_FishingBuoy_test_C_SetCaptureActive_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.UserConstructionScript
struct ABP_FishingBuoy_test_C_UserConstructionScript_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Small UpDown__FinishedFunc
struct ABP_FishingBuoy_test_C_Small_UpDown__FinishedFunc_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Small UpDown__UpdateFunc
struct ABP_FishingBuoy_test_C_Small_UpDown__UpdateFunc_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Big UpDown__FinishedFunc
struct ABP_FishingBuoy_test_C_Big_UpDown__FinishedFunc_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Big UpDown__UpdateFunc
struct ABP_FishingBuoy_test_C_Big_UpDown__UpdateFunc_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.BouyMoveTimeline__FinishedFunc
struct ABP_FishingBuoy_test_C_BouyMoveTimeline__FinishedFunc_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.BouyMoveTimeline__UpdateFunc
struct ABP_FishingBuoy_test_C_BouyMoveTimeline__UpdateFunc_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature
struct ABP_FishingBuoy_test_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Stop Small UpDown
struct ABP_FishingBuoy_test_C_Stop_Small_UpDown_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Start Big UpDown
struct ABP_FishingBuoy_test_C_Start_Big_UpDown_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Stop Big UpDown
struct ABP_FishingBuoy_test_C_Stop_Big_UpDown_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Set Active
struct ABP_FishingBuoy_test_C_Set_Active_Params
{
	bool                                               is_active;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.SetLureMesh
struct ABP_FishingBuoy_test_C_SetLureMesh_Params
{
	class UStaticMesh*                                 Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ReceiveEndPlay
struct ABP_FishingBuoy_test_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Start Small UpDown
struct ABP_FishingBuoy_test_C_Start_Small_UpDown_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.SetActiveBuoyVelocityDir
struct ABP_FishingBuoy_test_C_SetActiveBuoyVelocityDir_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.StopBuoyVelocityMove
struct ABP_FishingBuoy_test_C_StopBuoyVelocityMove_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.PlayBuoyVelocityMove
struct ABP_FishingBuoy_test_C_PlayBuoyVelocityMove_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ReceiveTick
struct ABP_FishingBuoy_test_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ReceiveActorBeginOverlap
struct ABP_FishingBuoy_test_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ReceiveBeginPlay
struct ABP_FishingBuoy_test_C_ReceiveBeginPlay_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.Update
struct ABP_FishingBuoy_test_C_Update_Params
{
};

// Function BP_FishingBuoy_test.BP_FishingBuoy_test_C.ExecuteUbergraph_BP_FishingBuoy_test
struct ABP_FishingBuoy_test_C_ExecuteUbergraph_BP_FishingBuoy_test_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
