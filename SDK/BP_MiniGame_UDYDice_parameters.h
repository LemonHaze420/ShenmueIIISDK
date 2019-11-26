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

// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.StopRollingSE
struct ABP_MiniGame_UDYDice_C_StopRollingSE_Params
{
};

// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.InitializeSE
struct ABP_MiniGame_UDYDice_C_InitializeSE_Params
{
};

// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.IsPerfectStop
struct ABP_MiniGame_UDYDice_C_IsPerfectStop_Params
{
	bool                                               Stop;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.UpdateRollingSE
struct ABP_MiniGame_UDYDice_C_UpdateRollingSE_Params
{
};

// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.IsHitSEPlaying
struct ABP_MiniGame_UDYDice_C_IsHitSEPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.IsStopped
struct ABP_MiniGame_UDYDice_C_IsStopped_Params
{
	bool                                               bStop;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.UserConstructionScript
struct ABP_MiniGame_UDYDice_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.ReceiveTick
struct ABP_MiniGame_UDYDice_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_MiniGame_UDYDice_C_BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.ReceiveBeginPlay
struct ABP_MiniGame_UDYDice_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.ReceiveEndPlay
struct ABP_MiniGame_UDYDice_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.PlayHitSE
struct ABP_MiniGame_UDYDice_C_PlayHitSE_Params
{
};

// Function BP_MiniGame_UDYDice.BP_MiniGame_UDYDice_C.ExecuteUbergraph_BP_MiniGame_UDYDice
struct ABP_MiniGame_UDYDice_C_ExecuteUbergraph_BP_MiniGame_UDYDice_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
