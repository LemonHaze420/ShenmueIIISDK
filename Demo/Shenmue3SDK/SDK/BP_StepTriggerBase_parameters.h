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

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckTime
struct ABP_StepTriggerBase_C_CheckTime_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.HasGameTimeRestriction
struct ABP_StepTriggerBase_C_HasGameTimeRestriction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CacheInStepAndTime
struct ABP_StepTriggerBase_C_CacheInStepAndTime_Params
{
	int                                                Previous;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Next;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.OnExitStepAndTime
struct ABP_StepTriggerBase_C_OnExitStepAndTime_Params
{
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.OnEnterStepAndTime
struct ABP_StepTriggerBase_C_OnEnterStepAndTime_Params
{
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckSavedConditions
struct ABP_StepTriggerBase_C_CheckSavedConditions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CanActionByBehaviorState
struct ABP_StepTriggerBase_C_CanActionByBehaviorState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.EnableByStep
struct ABP_StepTriggerBase_C_EnableByStep_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDummy;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ResetBind
struct ABP_StepTriggerBase_C_ResetBind_Params
{
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ResetParam
struct ABP_StepTriggerBase_C_ResetParam_Params
{
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckOverlapPlayer
struct ABP_StepTriggerBase_C_CheckOverlapPlayer_Params
{
	bool                                               Overlap;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.EndOverlap
struct ABP_StepTriggerBase_C_EndOverlap_Params
{
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CanAction
struct ABP_StepTriggerBase_C_CanAction_Params
{
	bool                                               CheckOnly;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CAN;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckStep
struct ABP_StepTriggerBase_C_CheckStep_Params
{
	bool                                               ReturnFlag;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.PlayAction
struct ABP_StepTriggerBase_C_PlayAction_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckStepAndTime
struct ABP_StepTriggerBase_C_CheckStepAndTime_Params
{
	bool                                               ReturnFlag;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.UserConstructionScript
struct ABP_StepTriggerBase_C_UserConstructionScript_Params
{
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.BindTalkEvent
struct ABP_StepTriggerBase_C_BindTalkEvent_Params
{
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.OnEndTalk
struct ABP_StepTriggerBase_C_OnEndTalk_Params
{
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.UnBindTalkEvent
struct ABP_StepTriggerBase_C_UnBindTalkEvent_Params
{
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.OnFinishedTurn
struct ABP_StepTriggerBase_C_OnFinishedTurn_Params
{
	class UBPC_TurnAround_C*                           SelfTurnAroundComponent;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.BindPlayerBehavior
struct ABP_StepTriggerBase_C_BindPlayerBehavior_Params
{
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ChangePlayerBehavior
struct ABP_StepTriggerBase_C_ChangePlayerBehavior_Params
{
	ES3PlayerBehavior                                  NewId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3PlayerBehavior                                  OldId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.UnbindPlayerBehavior
struct ABP_StepTriggerBase_C_UnbindPlayerBehavior_Params
{
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ChangeTime
struct ABP_StepTriggerBase_C_ChangeTime_Params
{
	int                                                EventIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.BindTimeChange
struct ABP_StepTriggerBase_C_BindTimeChange_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.UnbindTimeChange
struct ABP_StepTriggerBase_C_UnbindTimeChange_Params
{
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ReceiveTick
struct ABP_StepTriggerBase_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ReceiveBeginPlay
struct ABP_StepTriggerBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ReceiveEndPlay
struct ABP_StepTriggerBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ChangeStep
struct ABP_StepTriggerBase_C_ChangeStep_Params
{
	int                                                SetSteps;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ChangeFlag
struct ABP_StepTriggerBase_C_ChangeFlag_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.RepondToStepOrTime
struct ABP_StepTriggerBase_C_RepondToStepOrTime_Params
{
	bool                                               Init;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.TryRegisterNextTimeCheck
struct ABP_StepTriggerBase_C_TryRegisterNextTimeCheck_Params
{
	bool                                               StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ExecuteUbergraph_BP_StepTriggerBase
struct ABP_StepTriggerBase_C_ExecuteUbergraph_BP_StepTriggerBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
