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

// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.GetMiniGameValueType
struct ABP_SB_TestNewNail_C_GetMiniGameValueType_Params
{
	TEnumAsByte<EN_ValueType>                          Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.GetImpulseDirection
struct ABP_SB_TestNewNail_C_GetImpulseDirection_Params
{
	struct FVector                                     BallActorLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.UserConstructionScript
struct ABP_SB_TestNewNail_C_UserConstructionScript_Params
{
};

// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.EndMiniGame
struct ABP_SB_TestNewNail_C_EndMiniGame_Params
{
};

// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.WinMiniGame
struct ABP_SB_TestNewNail_C_WinMiniGame_Params
{
};

// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.BndEvt__Capsule_SoundCheckCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_SB_TestNewNail_C_BndEvt__Capsule_SoundCheckCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.BndEvt__Capsule_SoundCheckCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_SB_TestNewNail_C_BndEvt__Capsule_SoundCheckCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.EnterMiniGame
struct ABP_SB_TestNewNail_C_EnterMiniGame_Params
{
	float                                              EnterTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.RestartMiniGame
struct ABP_SB_TestNewNail_C_RestartMiniGame_Params
{
};

// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.StartMiniGame
struct ABP_SB_TestNewNail_C_StartMiniGame_Params
{
};

// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_SB_TestNewNail_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.FinalizeTalk
struct ABP_SB_TestNewNail_C_FinalizeTalk_Params
{
};

// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.ReceiveTick
struct ABP_SB_TestNewNail_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.DrawMiniGame
struct ABP_SB_TestNewNail_C_DrawMiniGame_Params
{
};

// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.LoseMiniGame
struct ABP_SB_TestNewNail_C_LoseMiniGame_Params
{
};

// Function BP_SB_TestNewNail.BP_SB_TestNewNail_C.ExecuteUbergraph_BP_SB_TestNewNail
struct ABP_SB_TestNewNail_C_ExecuteUbergraph_BP_SB_TestNewNail_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
