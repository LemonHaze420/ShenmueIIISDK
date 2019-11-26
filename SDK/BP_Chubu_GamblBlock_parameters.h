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

// Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.CulcDoorRot
struct ABP_Chubu_GamblBlock_C_CulcDoorRot_Params
{
	float                                              axell;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              result_rot;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               end_rot;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.UserConstructionScript
struct ABP_Chubu_GamblBlock_C_UserConstructionScript_Params
{
};

// Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.Get StepChange
struct ABP_Chubu_GamblBlock_C_Get_StepChange_Params
{
	int                                                SetSteps;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_Chubu_GamblBlock_C_BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.BndEvt__Cube_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Chubu_GamblBlock_C_BndEvt__Cube_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.BndEvt__Cube_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Chubu_GamblBlock_C_BndEvt__Cube_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.ReceiveTick
struct ABP_Chubu_GamblBlock_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.ReceiveBeginPlay
struct ABP_Chubu_GamblBlock_C_ReceiveBeginPlay_Params
{
};

// Function BP_Chubu_GamblBlock.BP_Chubu_GamblBlock_C.ExecuteUbergraph_BP_Chubu_GamblBlock
struct ABP_Chubu_GamblBlock_C_ExecuteUbergraph_BP_Chubu_GamblBlock_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
