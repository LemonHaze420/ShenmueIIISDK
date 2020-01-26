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

// Function BP_NPC_Lead.BP_NPC_Lead_C.GetPriority
struct ABP_NPC_Lead_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.GetDetectAction
struct ABP_NPC_Lead_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.GetCurrentTargetSpeed
struct ABP_NPC_Lead_C_GetCurrentTargetSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.IsSitting
struct ABP_NPC_Lead_C_IsSitting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.SetLookAheadSpline
struct ABP_NPC_Lead_C_SetLookAheadSpline_Params
{
	class USplineComponent*                            spline;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.CanEnterBuilding
struct ABP_NPC_Lead_C_CanEnterBuilding_Params
{
	class ABP_S3BuildingStaticMeshActor_C*             Building;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.TeleportToLeavePoint
struct ABP_NPC_Lead_C_TeleportToLeavePoint_Params
{
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.StopMovement
struct ABP_NPC_Lead_C_StopMovement_Params
{
	bool                                               bInstant;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.IsIdle
struct ABP_NPC_Lead_C_IsIdle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.GetEnableIK
struct ABP_NPC_Lead_C_GetEnableIK_Params
{
	bool                                               bIKEnabled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.SetEnableIK
struct ABP_NPC_Lead_C_SetEnableIK_Params
{
	bool                                               bInIKEnabled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.GetAnimVelocity
struct ABP_NPC_Lead_C_GetAnimVelocity_Params
{
	float                                              Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.GetStairClimber
struct ABP_NPC_Lead_C_GetStairClimber_Params
{
	class UBPC_S3PlayerStairClimber_C*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.GetSpeed
struct ABP_NPC_Lead_C_GetSpeed_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.SetTargetSpeed
struct ABP_NPC_Lead_C_SetTargetSpeed_Params
{
	float                                              TargetSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.IsTalking
struct ABP_NPC_Lead_C_IsTalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.GetTalkRotation
struct ABP_NPC_Lead_C_GetTalkRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.AddTurnAroundComponent
struct ABP_NPC_Lead_C_AddTurnAroundComponent_Params
{
	class UBPC_TurnAround_C*                           Component;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.UserConstructionScript
struct ABP_NPC_Lead_C_UserConstructionScript_Params
{
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.OnTalkFinished
struct ABP_NPC_Lead_C_OnTalkFinished_Params
{
	class US3TalkComponent*                            TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               interrupted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.OnTalkStart
struct ABP_NPC_Lead_C_OnTalkStart_Params
{
	class US3TalkComponent*                            TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.Screen_Player
struct ABP_NPC_Lead_C_Screen_Player_Params
{
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.Screen_NPC
struct ABP_NPC_Lead_C_Screen_NPC_Params
{
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.OnFinishedTurnRotate
struct ABP_NPC_Lead_C_OnFinishedTurnRotate_Params
{
	class UBPC_TurnAround_C*                           SelfTurnAroundComponent;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.ReceiveBeginPlay
struct ABP_NPC_Lead_C_ReceiveBeginPlay_Params
{
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.ReceiveEndPlay
struct ABP_NPC_Lead_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.DecideDetectAction
struct ABP_NPC_Lead_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.ReceiveTick
struct ABP_NPC_Lead_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_0_OnStartStairUse__DelegateSignature
struct ABP_NPC_Lead_C_BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_0_OnStartStairUse__DelegateSignature_Params
{
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_1_OnEndStairUse__DelegateSignature
struct ABP_NPC_Lead_C_BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_1_OnEndStairUse__DelegateSignature_Params
{
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.HandleTeleportSucceeded
struct ABP_NPC_Lead_C_HandleTeleportSucceeded_Params
{
	bool                                               bIsATest;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPC_Lead.BP_NPC_Lead_C.ExecuteUbergraph_BP_NPC_Lead
struct ABP_NPC_Lead_C_ExecuteUbergraph_BP_NPC_Lead_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
