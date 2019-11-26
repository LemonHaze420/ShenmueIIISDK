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

// Function BP_DirectionCheck.BP_DirectionCheck_C.Get_PlayerAngle
struct ABP_DirectionCheck_C_Get_PlayerAngle_Params
{
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DirectionCheck.BP_DirectionCheck_C.Get_HitDirection
struct ABP_DirectionCheck_C_Get_HitDirection_Params
{
	bool                                               Positive_direction;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Impact_dot_Arrow;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DirectionCheck.BP_DirectionCheck_C.UserConstructionScript
struct ABP_DirectionCheck_C_UserConstructionScript_Params
{
};

// Function BP_DirectionCheck.BP_DirectionCheck_C.ReceiveBeginPlay
struct ABP_DirectionCheck_C_ReceiveBeginPlay_Params
{
};

// Function BP_DirectionCheck.BP_DirectionCheck_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_DirectionCheck_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DirectionCheck.BP_DirectionCheck_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_DirectionCheck_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_DirectionCheck.BP_DirectionCheck_C.ExecuteUbergraph_BP_DirectionCheck
struct ABP_DirectionCheck_C_ExecuteUbergraph_BP_DirectionCheck_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DirectionCheck.BP_DirectionCheck_C.ChangeDirection__DelegateSignature
struct ABP_DirectionCheck_C_ChangeDirection__DelegateSignature_Params
{
	bool                                               Positive_direction;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Impact_dot_Arrow;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
