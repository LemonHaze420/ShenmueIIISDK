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

// Function Player_SplineMoveActor.Player_SplineMoveActor_C.RegisterSteering
struct APlayer_SplineMoveActor_C_RegisterSteering_Params
{
	class AActor*                                      RegisterActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Player_SplineMoveActor.Player_SplineMoveActor_C.RegisterWithPlayer
struct APlayer_SplineMoveActor_C_RegisterWithPlayer_Params
{
	bool                                               Register;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Player_SplineMoveActor.Player_SplineMoveActor_C.SnapPointsToGround
struct APlayer_SplineMoveActor_C_SnapPointsToGround_Params
{
};

// Function Player_SplineMoveActor.Player_SplineMoveActor_C.EvaluateStrengthCurve
struct APlayer_SplineMoveActor_C_EvaluateStrengthCurve_Params
{
	class UCurveFloat*                                 Curve;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Player_SplineMoveActor.Player_SplineMoveActor_C.InitSpline
struct APlayer_SplineMoveActor_C_InitSpline_Params
{
};

// Function Player_SplineMoveActor.Player_SplineMoveActor_C.UserConstructionScript
struct APlayer_SplineMoveActor_C_UserConstructionScript_Params
{
};

// Function Player_SplineMoveActor.Player_SplineMoveActor_C.ReceiveBeginPlay
struct APlayer_SplineMoveActor_C_ReceiveBeginPlay_Params
{
};

// Function Player_SplineMoveActor.Player_SplineMoveActor_C.BndEvt__DefaultTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct APlayer_SplineMoveActor_C_BndEvt__DefaultTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Player_SplineMoveActor.Player_SplineMoveActor_C.BndEvt__DefaultTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct APlayer_SplineMoveActor_C_BndEvt__DefaultTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Player_SplineMoveActor.Player_SplineMoveActor_C.ReceiveEndPlay
struct APlayer_SplineMoveActor_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Player_SplineMoveActor.Player_SplineMoveActor_C.ExecuteUbergraph_Player_SplineMoveActor
struct APlayer_SplineMoveActor_C_ExecuteUbergraph_Player_SplineMoveActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
