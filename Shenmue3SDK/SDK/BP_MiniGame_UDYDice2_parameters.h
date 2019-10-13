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

// Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.GetUpFaceNum
struct ABP_MiniGame_UDYDice2_C_GetUpFaceNum_Params
{
	int                                                Num;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.UpdateRollingSE
struct ABP_MiniGame_UDYDice2_C_UpdateRollingSE_Params
{
};

// Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.IsHitSEPlaying
struct ABP_MiniGame_UDYDice2_C_IsHitSEPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.IsStopped
struct ABP_MiniGame_UDYDice2_C_IsStopped_Params
{
	bool                                               bStop;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.UserConstructionScript
struct ABP_MiniGame_UDYDice2_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.ReceiveBeginPlay
struct ABP_MiniGame_UDYDice2_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_MiniGame_UDYDice2_C_BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.ReceiveTick
struct ABP_MiniGame_UDYDice2_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.Throw
struct ABP_MiniGame_UDYDice2_C_Throw_Params
{
	struct FVector                                     dir;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Power;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_UDYDice2.BP_MiniGame_UDYDice2_C.ExecuteUbergraph_BP_MiniGame_UDYDice2
struct ABP_MiniGame_UDYDice2_C_ExecuteUbergraph_BP_MiniGame_UDYDice2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
