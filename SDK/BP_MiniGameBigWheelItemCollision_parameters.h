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

// Function BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C.SetCollisionEnabled
struct ABP_MiniGameBigWheelItemCollision_C_SetCollisionEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C.SetItemData
struct ABP_MiniGameBigWheelItemCollision_C_SetItemData_Params
{
	struct FST_MiniGameBigWheelItemData                ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C.UserConstructionScript
struct ABP_MiniGameBigWheelItemCollision_C_UserConstructionScript_Params
{
};

// Function BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C.ReceiveBeginPlay
struct ABP_MiniGameBigWheelItemCollision_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C.BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MiniGameBigWheelItemCollision_C_BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C.ExecuteUbergraph_BP_MiniGameBigWheelItemCollision
struct ABP_MiniGameBigWheelItemCollision_C_ExecuteUbergraph_BP_MiniGameBigWheelItemCollision_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameBigWheelItemCollision.BP_MiniGameBigWheelItemCollision_C.OnCollisionOverlap__DelegateSignature
struct ABP_MiniGameBigWheelItemCollision_C_OnCollisionOverlap__DelegateSignature_Params
{
	struct FST_MiniGameBigWheelItemData                ItemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
