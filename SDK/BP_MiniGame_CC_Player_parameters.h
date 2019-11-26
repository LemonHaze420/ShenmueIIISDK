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

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.IsPlayerCollision
struct ABP_MiniGame_CC_Player_C_IsPlayerCollision_Params
{
	class UActorComponent*                             ActorComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.SetReturnLocation
struct ABP_MiniGame_CC_Player_C_SetReturnLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.AddReturnCount
struct ABP_MiniGame_CC_Player_C_AddReturnCount_Params
{
	int                                                AddCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.SetEnabledPlayer
struct ABP_MiniGame_CC_Player_C_SetEnabledPlayer_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.UpdateCamera
struct ABP_MiniGame_CC_Player_C_UpdateCamera_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.AnimRateUpdate
struct ABP_MiniGame_CC_Player_C_AnimRateUpdate_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.StopMove
struct ABP_MiniGame_CC_Player_C_StopMove_Params
{
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.MoveUpdate
struct ABP_MiniGame_CC_Player_C_MoveUpdate_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.SetAnimMoveRate
struct ABP_MiniGame_CC_Player_C_SetAnimMoveRate_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.PlayCatchAnim
struct ABP_MiniGame_CC_Player_C_PlayCatchAnim_Params
{
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.InputAxisLook
struct ABP_MiniGame_CC_Player_C_InputAxisLook_Params
{
	float                                              LRAxis;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UDAxis;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.PreUpdate
struct ABP_MiniGame_CC_Player_C_PreUpdate_Params
{
	float                                              DeltaSec;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.UserConstructionScript
struct ABP_MiniGame_CC_Player_C_UserConstructionScript_Params
{
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.UnRagdollBlend__FinishedFunc
struct ABP_MiniGame_CC_Player_C_UnRagdollBlend__FinishedFunc_Params
{
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.UnRagdollBlend__UpdateFunc
struct ABP_MiniGame_CC_Player_C_UnRagdollBlend__UpdateFunc_Params
{
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.RagdollBlend__FinishedFunc
struct ABP_MiniGame_CC_Player_C_RagdollBlend__FinishedFunc_Params
{
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.RagdollBlend__UpdateFunc
struct ABP_MiniGame_CC_Player_C_RagdollBlend__UpdateFunc_Params
{
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.Timeline_0__FinishedFunc
struct ABP_MiniGame_CC_Player_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.Timeline_0__UpdateFunc
struct ABP_MiniGame_CC_Player_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.InpActEvt_Y_K2Node_InputKeyEvent_4
struct ABP_MiniGame_CC_Player_C_InpActEvt_Y_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.InpActEvt_Y_K2Node_InputKeyEvent_3
struct ABP_MiniGame_CC_Player_C_InpActEvt_Y_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.ReceiveBeginPlay
struct ABP_MiniGame_CC_Player_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.ReceiveTick
struct ABP_MiniGame_CC_Player_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.ChangeLocoState
struct ABP_MiniGame_CC_Player_C_ChangeLocoState_Params
{
	TEnumAsByte<ELocomotionState>                      State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.ToRagdoll
struct ABP_MiniGame_CC_Player_C_ToRagdoll_Params
{
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.UnRagdoll
struct ABP_MiniGame_CC_Player_C_UnRagdoll_Params
{
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.StopTurningInPlace
struct ABP_MiniGame_CC_Player_C_StopTurningInPlace_Params
{
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.TurnInPlace
struct ABP_MiniGame_CC_Player_C_TurnInPlace_Params
{
	struct FRotator                                    TurnInPlaceStart;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    TurnInPlaceTarget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UCurveFloat*                                 Curve;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                TurnAnimation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.InputReleasedRun
struct ABP_MiniGame_CC_Player_C_InputReleasedRun_Params
{
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.InputPressedRun
struct ABP_MiniGame_CC_Player_C_InputPressedRun_Params
{
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.InputMoveForward
struct ABP_MiniGame_CC_Player_C_InputMoveForward_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.InputMoveRight
struct ABP_MiniGame_CC_Player_C_InputMoveRight_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C.ExecuteUbergraph_BP_MiniGame_CC_Player
struct ABP_MiniGame_CC_Player_C_ExecuteUbergraph_BP_MiniGame_CC_Player_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
