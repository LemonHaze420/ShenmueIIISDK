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

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.CheckAboveGround
struct UBPC_TalkAvoidance_C_CheckAboveGround_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.LazySetupIgnoreActors
struct UBPC_TalkAvoidance_C_LazySetupIgnoreActors_Params
{
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.MakeCenterLookRotation
struct UBPC_TalkAvoidance_C_MakeCenterLookRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetTargetActorEyeLocationForTraceCheck
struct UBPC_TalkAvoidance_C_GetTargetActorEyeLocationForTraceCheck_Params
{
	class AActor*                                      InActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InOwnerLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.CalcCurrentBaseDistanceAndCount
struct UBPC_TalkAvoidance_C_CalcCurrentBaseDistanceAndCount_Params
{
	float                                              BaseDistance;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetTargetActorLocationForCheck
struct UBPC_TalkAvoidance_C_GetTargetActorLocationForCheck_Params
{
	class AActor*                                      InActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetDistanceToLeaveForCheck
struct UBPC_TalkAvoidance_C_GetDistanceToLeaveForCheck_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.CheckInBuildingOwnerActor
struct UBPC_TalkAvoidance_C_CheckInBuildingOwnerActor_Params
{
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.ConvertAvoidableLocation
struct UBPC_TalkAvoidance_C_ConvertAvoidableLocation_Params
{
	struct FVector                                     AvoidableLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ActorLocation;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.TestCapsuleOverlap
struct UBPC_TalkAvoidance_C_TestCapsuleOverlap_Params
{
	struct FVector                                     CapsulePos;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.IsIgnoreCollisionProfile
struct UBPC_TalkAvoidance_C_IsIgnoreCollisionProfile_Params
{
	struct FName                                       CollisionProfileName;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnore;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.SetupIgnoreActors
struct UBPC_TalkAvoidance_C_SetupIgnoreActors_Params
{
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.CanAvoidance
struct UBPC_TalkAvoidance_C_CanAvoidance_Params
{
	bool                                               bCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.DebugPrintString
struct UBPC_TalkAvoidance_C_DebugPrintString_Params
{
	struct FString                                     Chara;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.ProcessAvoidable
struct UBPC_TalkAvoidance_C_ProcessAvoidable_Params
{
	bool                                               bProcessed;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.IsAvoiddableDecide
struct UBPC_TalkAvoidance_C_IsAvoiddableDecide_Params
{
	bool                                               bExecution;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.SetActors
struct UBPC_TalkAvoidance_C_SetActors_Params
{
	TArray<class AActor*>                              Actors;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.DistanceCheckTargetActors
struct UBPC_TalkAvoidance_C_DistanceCheckTargetActors_Params
{
	struct FVector                                     TestActorLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetForwardVector
struct UBPC_TalkAvoidance_C_GetForwardVector_Params
{
	struct FVector                                     ForwardVector;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetAvoidableLocation
struct UBPC_TalkAvoidance_C_GetAvoidableLocation_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AvoidableLocation;                                        // (Parm, OutParm, IsPlainOldData)
	struct FString                                     LogString;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.AvoidableTest
struct UBPC_TalkAvoidance_C_AvoidableTest_Params
{
	struct FVector                                     ActorLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bDesperate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccessAvoidable;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.EyeLineTraceCheckTargetActors
struct UBPC_TalkAvoidance_C_EyeLineTraceCheckTargetActors_Params
{
	struct FVector                                     TestActorLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.GetActorPositionAfterRotationByAngle
struct UBPC_TalkAvoidance_C_GetActorPositionAfterRotationByAngle_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActorLocation;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.ActorCollisionTestHeight
struct UBPC_TalkAvoidance_C_ActorCollisionTestHeight_Params
{
	struct FVector                                     ActorLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bHitGround;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.OutputDebugCollision
struct UBPC_TalkAvoidance_C_OutputDebugCollision_Params
{
	struct FVector                                     ActorLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.ReceiveBeginPlay
struct UBPC_TalkAvoidance_C_ReceiveBeginPlay_Params
{
};

// Function BPC_TalkAvoidance.BPC_TalkAvoidance_C.ExecuteUbergraph_BPC_TalkAvoidance
struct UBPC_TalkAvoidance_C_ExecuteUbergraph_BPC_TalkAvoidance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
