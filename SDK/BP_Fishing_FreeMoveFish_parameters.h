#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.SetTargetLocation
struct ABP_Fishing_FreeMoveFish_C_SetTargetLocation_Params
{
	struct FVector                                     TargetLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Output_Get;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.MoveToTaget
struct ABP_Fishing_FreeMoveFish_C_MoveToTaget_Params
{
	bool                                               InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.IsNeedTargetUpdate
struct ABP_Fishing_FreeMoveFish_C_IsNeedTargetUpdate_Params
{
	bool                                               Need;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.UpdateTargetLocation
struct ABP_Fishing_FreeMoveFish_C_UpdateTargetLocation_Params
{
	float                                              AdditiveAngle;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.SetBaseLocation
struct ABP_Fishing_FreeMoveFish_C_SetBaseLocation_Params
{
	struct FVector                                     BaseLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.Initialize
struct ABP_Fishing_FreeMoveFish_C_Initialize_Params
{
};

// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.UpdateMove
struct ABP_Fishing_FreeMoveFish_C_UpdateMove_Params
{
	bool                                               ForceReplace;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.UserConstructionScript
struct ABP_Fishing_FreeMoveFish_C_UserConstructionScript_Params
{
};

// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.UpdateFadeTimeLine__FinishedFunc
struct ABP_Fishing_FreeMoveFish_C_UpdateFadeTimeLine__FinishedFunc_Params
{
};

// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.UpdateFadeTimeLine__UpdateFunc
struct ABP_Fishing_FreeMoveFish_C_UpdateFadeTimeLine__UpdateFunc_Params
{
};

// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.ReceiveTick
struct ABP_Fishing_FreeMoveFish_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.ReceiveBeginPlay
struct ABP_Fishing_FreeMoveFish_C_ReceiveBeginPlay_Params
{
};

// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_Fishing_FreeMoveFish_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.DestroyReady
struct ABP_Fishing_FreeMoveFish_C_DestroyReady_Params
{
};

// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.InitializeFadeMaterial
struct ABP_Fishing_FreeMoveFish_C_InitializeFadeMaterial_Params
{
};

// Function BP_Fishing_FreeMoveFish.BP_Fishing_FreeMoveFish_C.ExecuteUbergraph_BP_Fishing_FreeMoveFish
struct ABP_Fishing_FreeMoveFish_C_ExecuteUbergraph_BP_Fishing_FreeMoveFish_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
