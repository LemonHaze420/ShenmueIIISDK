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

// Function BP_KF_Ball2.BP_KF_Ball2_C.DisableBall
struct ABP_KF_Ball2_C_DisableBall_Params
{
};

// Function BP_KF_Ball2.BP_KF_Ball2_C.EnableBall
struct ABP_KF_Ball2_C_EnableBall_Params
{
};

// Function BP_KF_Ball2.BP_KF_Ball2_C.SetInsideArea
struct ABP_KF_Ball2_C_SetInsideArea_Params
{
	bool                                               Inside;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KF_Ball2.BP_KF_Ball2_C.IsStopped
struct ABP_KF_Ball2_C_IsStopped_Params
{
	bool                                               bStop;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KF_Ball2.BP_KF_Ball2_C.UserConstructionScript
struct ABP_KF_Ball2_C_UserConstructionScript_Params
{
};

// Function BP_KF_Ball2.BP_KF_Ball2_C.BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_KF_Ball2_C_BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_KF_Ball2.BP_KF_Ball2_C.ReceiveBeginPlay
struct ABP_KF_Ball2_C_ReceiveBeginPlay_Params
{
};

// Function BP_KF_Ball2.BP_KF_Ball2_C.ReceiveTick
struct ABP_KF_Ball2_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KF_Ball2.BP_KF_Ball2_C.ExecuteUbergraph_BP_KF_Ball2
struct ABP_KF_Ball2_C_ExecuteUbergraph_BP_KF_Ball2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KF_Ball2.BP_KF_Ball2_C.EventDispatcher_BallHitXObj__DelegateSignature
struct ABP_KF_Ball2_C_EventDispatcher_BallHitXObj__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
