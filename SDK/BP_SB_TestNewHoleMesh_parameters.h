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

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.AddStockColor
struct ABP_SB_TestNewHoleMesh_C_AddStockColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.SetHoleColor
struct ABP_SB_TestNewHoleMesh_C_SetHoleColor_Params
{
	struct FLinearColor                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.UserConstructionScript
struct ABP_SB_TestNewHoleMesh_C_UserConstructionScript_Params
{
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.Timeline_0__FinishedFunc
struct ABP_SB_TestNewHoleMesh_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.Timeline_0__UpdateFunc
struct ABP_SB_TestNewHoleMesh_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.PlayFlash__FinishedFunc
struct ABP_SB_TestNewHoleMesh_C_PlayFlash__FinishedFunc_Params
{
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.PlayFlash__UpdateFunc
struct ABP_SB_TestNewHoleMesh_C_PlayFlash__UpdateFunc_Params
{
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.EnterMiniGame
struct ABP_SB_TestNewHoleMesh_C_EnterMiniGame_Params
{
	float                                              EnterTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Box_holeInCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_SB_TestNewHoleMesh_C_BndEvt__Box_holeInCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Sphere_MissCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_SB_TestNewHoleMesh_C_BndEvt__Sphere_MissCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Box_holeInCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct ABP_SB_TestNewHoleMesh_C_BndEvt__Box_holeInCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.ReceiveTick
struct ABP_SB_TestNewHoleMesh_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.DeleteHoleInBall
struct ABP_SB_TestNewHoleMesh_C_DeleteHoleInBall_Params
{
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Box_Sound_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_SB_TestNewHoleMesh_C_BndEvt__Box_Sound_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Sphere_PlaySoundArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_SB_TestNewHoleMesh_C_BndEvt__Sphere_PlaySoundArea_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Box_SoundCheckArea_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
struct ABP_SB_TestNewHoleMesh_C_BndEvt__Box_SoundCheckArea_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Sphere_PowerArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_SB_TestNewHoleMesh_C_BndEvt__Sphere_PowerArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.BndEvt__Sphere_PowerArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_SB_TestNewHoleMesh_C_BndEvt__Sphere_PowerArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.ForceGravity
struct ABP_SB_TestNewHoleMesh_C_ForceGravity_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.ReceiveBeginPlay
struct ABP_SB_TestNewHoleMesh_C_ReceiveBeginPlay_Params
{
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.FlashColor
struct ABP_SB_TestNewHoleMesh_C_FlashColor_Params
{
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.InitializeValue
struct ABP_SB_TestNewHoleMesh_C_InitializeValue_Params
{
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.DrawMiniGame
struct ABP_SB_TestNewHoleMesh_C_DrawMiniGame_Params
{
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.RestartMiniGame
struct ABP_SB_TestNewHoleMesh_C_RestartMiniGame_Params
{
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.LoseMiniGame
struct ABP_SB_TestNewHoleMesh_C_LoseMiniGame_Params
{
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.WinMiniGame
struct ABP_SB_TestNewHoleMesh_C_WinMiniGame_Params
{
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.EndMiniGame
struct ABP_SB_TestNewHoleMesh_C_EndMiniGame_Params
{
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.StartMiniGame
struct ABP_SB_TestNewHoleMesh_C_StartMiniGame_Params
{
};

// Function BP_SB_TestNewHoleMesh.BP_SB_TestNewHoleMesh_C.ExecuteUbergraph_BP_SB_TestNewHoleMesh
struct ABP_SB_TestNewHoleMesh_C_ExecuteUbergraph_BP_SB_TestNewHoleMesh_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
