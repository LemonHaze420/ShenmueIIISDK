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

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.GetCamera
struct ABP_MultiplePersonCamera_C_GetCamera_Params
{
	class UCameraComponent*                            Camera;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.SortFloat
struct ABP_MultiplePersonCamera_C_SortFloat_Params
{
	TArray<float>                                      inArray;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        SortedIndex;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.SetTargetByActorIds
struct ABP_MultiplePersonCamera_C_SetTargetByActorIds_Params
{
};

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.SortByAngle
struct ABP_MultiplePersonCamera_C_SortByAngle_Params
{
	TArray<class AActor*>                              TargetArray;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              SortedArray;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.UpdateDistance
struct ABP_MultiplePersonCamera_C_UpdateDistance_Params
{
};

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.UpdateFOV
struct ABP_MultiplePersonCamera_C_UpdateFOV_Params
{
};

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.UpdateAlpha
struct ABP_MultiplePersonCamera_C_UpdateAlpha_Params
{
};

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.CalcYawAndPitch
struct ABP_MultiplePersonCamera_C_CalcYawAndPitch_Params
{
};

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.SortTargetsClockwise
struct ABP_MultiplePersonCamera_C_SortTargetsClockwise_Params
{
};

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.CreateSprine
struct ABP_MultiplePersonCamera_C_CreateSprine_Params
{
};

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.DrawDebugNorm
struct ABP_MultiplePersonCamera_C_DrawDebugNorm_Params
{
};

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.UpdateCameraTransform
struct ABP_MultiplePersonCamera_C_UpdateCameraTransform_Params
{
};

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.FindTargetfromID
struct ABP_MultiplePersonCamera_C_FindTargetfromID_Params
{
};

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.CulcTargetPos
struct ABP_MultiplePersonCamera_C_CulcTargetPos_Params
{
	TArray<class AS3Character*>                        TargetActors;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     AverageVector;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.UserConstructionScript
struct ABP_MultiplePersonCamera_C_UserConstructionScript_Params
{
};

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.ReceiveTick
struct ABP_MultiplePersonCamera_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.Update
struct ABP_MultiplePersonCamera_C_Update_Params
{
};

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.Init
struct ABP_MultiplePersonCamera_C_Init_Params
{
};

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.ReceiveBeginPlay
struct ABP_MultiplePersonCamera_C_ReceiveBeginPlay_Params
{
};

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.ChangeTarget
struct ABP_MultiplePersonCamera_C_ChangeTarget_Params
{
	TArray<class AActor*>                              NewTarget;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              lerpTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MultiplePersonCamera.BP_MultiplePersonCamera_C.ExecuteUbergraph_BP_MultiplePersonCamera
struct ABP_MultiplePersonCamera_C_ExecuteUbergraph_BP_MultiplePersonCamera_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
