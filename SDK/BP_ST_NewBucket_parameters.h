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

// Function BP_ST_NewBucket.BP_ST_NewBucket_C.GetGiftName
struct ABP_ST_NewBucket_C_GetGiftName_Params
{
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ST_NewBucket.BP_ST_NewBucket_C.ClearStones
struct ABP_ST_NewBucket_C_ClearStones_Params
{
};

// Function BP_ST_NewBucket.BP_ST_NewBucket_C.IsInStone
struct ABP_ST_NewBucket_C_IsInStone_Params
{
	class ABP_MiniGame_ThrowObjectBase_C*              Stone;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ST_NewBucket.BP_ST_NewBucket_C.FindStone
struct ABP_ST_NewBucket_C_FindStone_Params
{
	class ABP_MiniGame_ThrowObjectBase_C*              Stone;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ST_NewBucket.BP_ST_NewBucket_C.UserConstructionScript
struct ABP_ST_NewBucket_C_UserConstructionScript_Params
{
};

// Function BP_ST_NewBucket.BP_ST_NewBucket_C.RestartMiniGame
struct ABP_ST_NewBucket_C_RestartMiniGame_Params
{
};

// Function BP_ST_NewBucket.BP_ST_NewBucket_C.BndEvt__Mesh_Target_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_ST_NewBucket_C_BndEvt__Mesh_Target_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_ST_NewBucket.BP_ST_NewBucket_C.ResetImpactPoint
struct ABP_ST_NewBucket_C_ResetImpactPoint_Params
{
};

// Function BP_ST_NewBucket.BP_ST_NewBucket_C.BndEvt__Capsule_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_ST_NewBucket_C_BndEvt__Capsule_Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_ST_NewBucket.BP_ST_NewBucket_C.BndEvt__Capsule_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_ST_NewBucket_C_BndEvt__Capsule_Collision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ST_NewBucket.BP_ST_NewBucket_C.ReceiveBeginPlay
struct ABP_ST_NewBucket_C_ReceiveBeginPlay_Params
{
};

// Function BP_ST_NewBucket.BP_ST_NewBucket_C.DrawMiniGame
struct ABP_ST_NewBucket_C_DrawMiniGame_Params
{
};

// Function BP_ST_NewBucket.BP_ST_NewBucket_C.LoseMiniGame
struct ABP_ST_NewBucket_C_LoseMiniGame_Params
{
};

// Function BP_ST_NewBucket.BP_ST_NewBucket_C.ReceiveTick
struct ABP_ST_NewBucket_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ST_NewBucket.BP_ST_NewBucket_C.WinMiniGame
struct ABP_ST_NewBucket_C_WinMiniGame_Params
{
};

// Function BP_ST_NewBucket.BP_ST_NewBucket_C.FallBottom
struct ABP_ST_NewBucket_C_FallBottom_Params
{
};

// Function BP_ST_NewBucket.BP_ST_NewBucket_C.EndMiniGame
struct ABP_ST_NewBucket_C_EndMiniGame_Params
{
};

// Function BP_ST_NewBucket.BP_ST_NewBucket_C.StartMiniGame
struct ABP_ST_NewBucket_C_StartMiniGame_Params
{
};

// Function BP_ST_NewBucket.BP_ST_NewBucket_C.ExecuteUbergraph_BP_ST_NewBucket
struct ABP_ST_NewBucket_C_ExecuteUbergraph_BP_ST_NewBucket_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
