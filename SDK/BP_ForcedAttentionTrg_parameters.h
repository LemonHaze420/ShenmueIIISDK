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

// Function BP_ForcedAttentionTrg.BP_ForcedAttentionTrg_C.CheckFlag
struct ABP_ForcedAttentionTrg_C_CheckFlag_Params
{
	int                                                FlagID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EnavleMin;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EnableMax;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ForcedAttentionTrg.BP_ForcedAttentionTrg_C.CheckStep
struct ABP_ForcedAttentionTrg_C_CheckStep_Params
{
	int                                                MinStep;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxStep;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ForcedAttentionTrg.BP_ForcedAttentionTrg_C.GetDirection
struct ABP_ForcedAttentionTrg_C_GetDirection_Params
{
	bool                                               Positive_direction;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Impact_dot_Arrow;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ForcedAttentionTrg.BP_ForcedAttentionTrg_C.UserConstructionScript
struct ABP_ForcedAttentionTrg_C_UserConstructionScript_Params
{
};

// Function BP_ForcedAttentionTrg.BP_ForcedAttentionTrg_C.ReceiveBeginPlay
struct ABP_ForcedAttentionTrg_C_ReceiveBeginPlay_Params
{
};

// Function BP_ForcedAttentionTrg.BP_ForcedAttentionTrg_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_ForcedAttentionTrg_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_ForcedAttentionTrg.BP_ForcedAttentionTrg_C.ExecuteUbergraph_BP_ForcedAttentionTrg
struct ABP_ForcedAttentionTrg_C_ExecuteUbergraph_BP_ForcedAttentionTrg_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
