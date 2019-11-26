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

// Function BPC_TurnAround.BPC_TurnAround_C.CheckMinigameRotation
struct UBPC_TurnAround_C_CheckMinigameRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_TurnAround.BPC_TurnAround_C.GetTalkingMinigame
struct UBPC_TurnAround_C_GetTalkingMinigame_Params
{
	class US3TalkComponent*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BPC_TurnAround.BPC_TurnAround_C.TryPreTalkJump
struct UBPC_TurnAround_C_TryPreTalkJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_TurnAround.BPC_TurnAround_C.ShouldLookAtTalkCenter
struct UBPC_TurnAround_C_ShouldLookAtTalkCenter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_TurnAround.BPC_TurnAround_C.CalcLookAtRotation
struct UBPC_TurnAround_C_CalcLookAtRotation_Params
{
	struct FVector                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPC_TurnAround.BPC_TurnAround_C.TryPostTeleportTurnaround
struct UBPC_TurnAround_C_TryPostTeleportTurnaround_Params
{
	bool                                               bTeleported;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TurnAround.BPC_TurnAround_C.CalcTurnAroundWithin
struct UBPC_TurnAround_C_CalcTurnAroundWithin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_TurnAround.BPC_TurnAround_C.SetTurnAroundTarget
struct UBPC_TurnAround_C_SetTurnAroundTarget_Params
{
	struct FRotator                                    Rotator;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPC_TurnAround.BPC_TurnAround_C.TurnAroundTickFinish
struct UBPC_TurnAround_C_TurnAroundTickFinish_Params
{
};

// Function BPC_TurnAround.BPC_TurnAround_C.GetLookAtCenterRotation
struct UBPC_TurnAround_C_GetLookAtCenterRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BPC_TurnAround.BPC_TurnAround_C.ForceFinishTurnAroundAuto
struct UBPC_TurnAround_C_ForceFinishTurnAroundAuto_Params
{
};

// Function BPC_TurnAround.BPC_TurnAround_C.RemoveTurnAroundComponent
struct UBPC_TurnAround_C_RemoveTurnAroundComponent_Params
{
};

// Function BPC_TurnAround.BPC_TurnAround_C.SetAdjustTurnAroundAngle
struct UBPC_TurnAround_C_SetAdjustTurnAroundAngle_Params
{
};

// Function BPC_TurnAround.BPC_TurnAround_C.ForceFinishTurnAround
struct UBPC_TurnAround_C_ForceFinishTurnAround_Params
{
	bool                                               bUpdateRotation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPC_TurnAround.BPC_TurnAround_C.IsMultipleTalking
struct UBPC_TurnAround_C_IsMultipleTalking_Params
{
	bool                                               IsTalking;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TurnAround.BPC_TurnAround_C.ReturnPreTalkRotationActor
struct UBPC_TurnAround_C_ReturnPreTalkRotationActor_Params
{
};

// Function BPC_TurnAround.BPC_TurnAround_C.CachedPreTalkRotationActor
struct UBPC_TurnAround_C_CachedPreTalkRotationActor_Params
{
};

// Function BPC_TurnAround.BPC_TurnAround_C.UpdateTurnAround
struct UBPC_TurnAround_C_UpdateTurnAround_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFinish;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TurnAround.BPC_TurnAround_C.IsTurnedAroundState
struct UBPC_TurnAround_C_IsTurnedAroundState_Params
{
	bool                                               bTurned;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TurnAround.BPC_TurnAround_C.CanTurnAround
struct UBPC_TurnAround_C_CanTurnAround_Params
{
	bool                                               bCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TurnAround.BPC_TurnAround_C.ResetTurnAroundParamater
struct UBPC_TurnAround_C_ResetTurnAroundParamater_Params
{
};

// Function BPC_TurnAround.BPC_TurnAround_C.ReceiveTick
struct UBPC_TurnAround_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TurnAround.BPC_TurnAround_C.StartTurnAroundByRotation
struct UBPC_TurnAround_C_StartTurnAroundByRotation_Params
{
	float                                              MotionDelayTime;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bAdjustTurnAroundAngle;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TurnAround.BPC_TurnAround_C.StartTurnAroundByActor
struct UBPC_TurnAround_C_StartTurnAroundByActor_Params
{
	float                                              MotionDelayTime;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAdjustTurnAroundAngle;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TurnAround.BPC_TurnAround_C.InternalStartRotation
struct UBPC_TurnAround_C_InternalStartRotation_Params
{
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bAdjust;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TurnAround.BPC_TurnAround_C.ExecuteUbergraph_BPC_TurnAround
struct UBPC_TurnAround_C_ExecuteUbergraph_BPC_TurnAround_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_TurnAround.BPC_TurnAround_C.OnFinishTurnAroundDispatcher__DelegateSignature
struct UBPC_TurnAround_C_OnFinishTurnAroundDispatcher__DelegateSignature_Params
{
	class UBPC_TurnAround_C*                           SelfTurnAroundComponent;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
