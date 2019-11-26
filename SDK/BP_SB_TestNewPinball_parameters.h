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

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.GetTargetCount
struct ABP_SB_TestNewPinball_C_GetTargetCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.ResetTargetCount
struct ABP_SB_TestNewPinball_C_ResetTargetCount_Params
{
};

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.AddTargetCount
struct ABP_SB_TestNewPinball_C_AddTargetCount_Params
{
};

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.GetIsCountTarget
struct ABP_SB_TestNewPinball_C_GetIsCountTarget_Params
{
	bool                                               IsTarget;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.SetStopJudgeSpeed
struct ABP_SB_TestNewPinball_C_SetStopJudgeSpeed_Params
{
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.ResetPosition
struct ABP_SB_TestNewPinball_C_ResetPosition_Params
{
};

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.PlayHitWallSound
struct ABP_SB_TestNewPinball_C_PlayHitWallSound_Params
{
};

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.FinalizeSE
struct ABP_SB_TestNewPinball_C_FinalizeSE_Params
{
};

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.Initialize
struct ABP_SB_TestNewPinball_C_Initialize_Params
{
};

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.SetWaitingStop
struct ABP_SB_TestNewPinball_C_SetWaitingStop_Params
{
	bool                                               bWaitingStop;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.DisableBall
struct ABP_SB_TestNewPinball_C_DisableBall_Params
{
};

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.EnableBall
struct ABP_SB_TestNewPinball_C_EnableBall_Params
{
};

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.IsStopped
struct ABP_SB_TestNewPinball_C_IsStopped_Params
{
	bool                                               bStop;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.UserConstructionScript
struct ABP_SB_TestNewPinball_C_UserConstructionScript_Params
{
};

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_SB_TestNewPinball_C_BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.BndEvt__Sphere_SoundCheck_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_SB_TestNewPinball_C_BndEvt__Sphere_SoundCheck_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.BndEvt__Sphere_SoundCheck_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct ABP_SB_TestNewPinball_C_BndEvt__Sphere_SoundCheck_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.ReceiveTick
struct ABP_SB_TestNewPinball_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.StopSERolling
struct ABP_SB_TestNewPinball_C_StopSERolling_Params
{
};

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.ReceiveEndPlay
struct ABP_SB_TestNewPinball_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.ReceiveBeginPlay
struct ABP_SB_TestNewPinball_C_ReceiveBeginPlay_Params
{
};

// Function BP_SB_TestNewPinball.BP_SB_TestNewPinball_C.ExecuteUbergraph_BP_SB_TestNewPinball
struct ABP_SB_TestNewPinball_C_ExecuteUbergraph_BP_SB_TestNewPinball_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
