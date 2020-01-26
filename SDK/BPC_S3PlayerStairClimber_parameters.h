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

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.IsInteracting
struct UBPC_S3PlayerStairClimber_C_IsInteracting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.IsAbleToMove
struct UBPC_S3PlayerStairClimber_C_IsAbleToMove_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.IsHeightFixEnabled
struct UBPC_S3PlayerStairClimber_C_IsHeightFixEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.BottomToCenterLocationWithOffset
struct UBPC_S3PlayerStairClimber_C_BottomToCenterLocationWithOffset_Params
{
	struct FVector                                     Bottom;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Center;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ShouldStartInteracting
struct UBPC_S3PlayerStairClimber_C_ShouldStartInteracting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.CheckLeaving
struct UBPC_S3PlayerStairClimber_C_CheckLeaving_Params
{
	float                                              FudgeDist;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FudgeAngle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ShouldKeepInteracting
struct UBPC_S3PlayerStairClimber_C_ShouldKeepInteracting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.AlignToStairInstant
struct UBPC_S3PlayerStairClimber_C_AlignToStairInstant_Params
{
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.CalcStopMontageTime
struct UBPC_S3PlayerStairClimber_C_CalcStopMontageTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.GetStairAlignmentForward
struct UBPC_S3PlayerStairClimber_C_GetStairAlignmentForward_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.PlayMontageFrom
struct UBPC_S3PlayerStairClimber_C_PlayMontageFrom_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.CalcWalkCycleFromMontageRatio
struct UBPC_S3PlayerStairClimber_C_CalcWalkCycleFromMontageRatio_Params
{
	float                                              A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DirUp;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Cycle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.PlayMontage
struct UBPC_S3PlayerStairClimber_C_PlayMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ConsumeOutput
struct UBPC_S3PlayerStairClimber_C_ConsumeOutput_Params
{
	bool                                               Turning;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TurnDirection;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.SetState
struct UBPC_S3PlayerStairClimber_C_SetState_Params
{
	TEnumAsByte<EN_PC_Stair>                           State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.rotate
struct UBPC_S3PlayerStairClimber_C_rotate_Params
{
	struct FVector                                     TargetDirection;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.MoveToLocation
struct UBPC_S3PlayerStairClimber_C_MoveToLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.GetRegularWalkCycle
struct UBPC_S3PlayerStairClimber_C_GetRegularWalkCycle_Params
{
	float                                              Cycle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.EnterFSMState
struct UBPC_S3PlayerStairClimber_C_EnterFSMState_Params
{
	TEnumAsByte<EN_PC_Stair>                           State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.GetABP
struct UBPC_S3PlayerStairClimber_C_GetABP_Params
{
	class UAnimInstance*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.GetStairWalkCycle
struct UBPC_S3PlayerStairClimber_C_GetStairWalkCycle_Params
{
	class UAnimMontage*                                WalkLoopMontage;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Cycle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.TickFSMTransitions
struct UBPC_S3PlayerStairClimber_C_TickFSMTransitions_Params
{
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.TickFSMBehavior
struct UBPC_S3PlayerStairClimber_C_TickFSMBehavior_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.DeactivateFSM
struct UBPC_S3PlayerStairClimber_C_DeactivateFSM_Params
{
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ActivateFSM
struct UBPC_S3PlayerStairClimber_C_ActivateFSM_Params
{
	TEnumAsByte<EN_PC_Stair>                           State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ReceiveBeginPlay
struct UBPC_S3PlayerStairClimber_C_ReceiveBeginPlay_Params
{
};

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ExecuteUbergraph_BPC_S3PlayerStairClimber
struct UBPC_S3PlayerStairClimber_C_ExecuteUbergraph_BPC_S3PlayerStairClimber_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
