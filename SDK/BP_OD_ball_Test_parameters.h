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

// Function BP_OD_ball_Test.BP_OD_ball_Test_C.EnabledBall
struct ABP_OD_ball_Test_C_EnabledBall_Params
{
};

// Function BP_OD_ball_Test.BP_OD_ball_Test_C.IsErrorStopping
struct ABP_OD_ball_Test_C_IsErrorStopping_Params
{
	bool                                               IsStopping;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OD_ball_Test.BP_OD_ball_Test_C.PlayHitFallSE
struct ABP_OD_ball_Test_C_PlayHitFallSE_Params
{
};

// Function BP_OD_ball_Test.BP_OD_ball_Test_C.PlayHitWallSE
struct ABP_OD_ball_Test_C_PlayHitWallSE_Params
{
};

// Function BP_OD_ball_Test.BP_OD_ball_Test_C.CheckAllVelocity
struct ABP_OD_ball_Test_C_CheckAllVelocity_Params
{
	bool                                               result1;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OD_ball_Test.BP_OD_ball_Test_C.SaveVelocity
struct ABP_OD_ball_Test_C_SaveVelocity_Params
{
};

// Function BP_OD_ball_Test.BP_OD_ball_Test_C.SetFallArea
struct ABP_OD_ball_Test_C_SetFallArea_Params
{
	bool                                               bInFallArea;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OD_ball_Test.BP_OD_ball_Test_C.IsFinished
struct ABP_OD_ball_Test_C_IsFinished_Params
{
	bool                                               bStop;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OD_ball_Test.BP_OD_ball_Test_C.UserConstructionScript
struct ABP_OD_ball_Test_C_UserConstructionScript_Params
{
};

// Function BP_OD_ball_Test.BP_OD_ball_Test_C.ReceiveTick
struct ABP_OD_ball_Test_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OD_ball_Test.BP_OD_ball_Test_C.BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_OD_ball_Test_C_BndEvt__Mesh_Ball_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_OD_ball_Test.BP_OD_ball_Test_C.DelayedStopCheckLocation
struct ABP_OD_ball_Test_C_DelayedStopCheckLocation_Params
{
};

// Function BP_OD_ball_Test.BP_OD_ball_Test_C.ExecuteUbergraph_BP_OD_ball_Test
struct ABP_OD_ball_Test_C_ExecuteUbergraph_BP_OD_ball_Test_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
