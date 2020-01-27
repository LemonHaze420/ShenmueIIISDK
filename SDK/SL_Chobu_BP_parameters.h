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

// Function SL_Chobu_BP.SL_Chobu_BP_C.DLC_FlagSet_714
struct ASL_Chobu_BP_C_DLC_FlagSet_714_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.DLC_CJ_SaveDataReset_CallReflesh
struct ASL_Chobu_BP_C_DLC_CJ_SaveDataReset_CallReflesh_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.DLC_FlagSet_697
struct ASL_Chobu_BP_C_DLC_FlagSet_697_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.DLC_FlagSet_607
struct ASL_Chobu_BP_C_DLC_FlagSet_607_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.DLC_FlagSet
struct ASL_Chobu_BP_C_DLC_FlagSet_Params
{
	bool                                               SleepOnly;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.DLC_CJ_SaveDataReset
struct ASL_Chobu_BP_C_DLC_CJ_SaveDataReset_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.UnVisibleClock
struct ASL_Chobu_BP_C_UnVisibleClock_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.FindMemoPage
struct ASL_Chobu_BP_C_FindMemoPage_Params
{
	int                                                MemoId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PageIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CheckRyosyaPayMoney
struct ASL_Chobu_BP_C_CheckRyosyaPayMoney_Params
{
	int                                                Accommodation_Cost;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Have_Money;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Pay_Money;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CheckDelegateAffectsAPS
struct ASL_Chobu_BP_C_CheckDelegateAffectsAPS_Params
{
	bool                                               Affects_APS;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.KillTimeCheckCallEvent
struct ASL_Chobu_BP_C_KillTimeCheckCallEvent_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.MakeTimeCheckCallEvent
struct ASL_Chobu_BP_C_MakeTimeCheckCallEvent_Params
{
	float                                              EventStartTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EventEndTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Call_EventName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.MakeMaxTimerControlPulsStepCheck_Chobu
struct ASL_Chobu_BP_C_MakeMaxTimerControlPulsStepCheck_Chobu_Params
{
	float                                              limit_time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StepMin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StepMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CheckStepOverDelegate
struct ASL_Chobu_BP_C_CheckStepOverDelegate_Params
{
	bool                                               on_stepover_delegate;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ShowEyeCatch_New
struct ASL_Chobu_BP_C_ShowEyeCatch_New_Params
{
	struct FName                                       EyeCatchID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Fade;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutputPin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Recover_ResidentEvent
struct ASL_Chobu_BP_C_Recover_ResidentEvent_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Recover_RewardSaveData
struct ASL_Chobu_BP_C_Recover_RewardSaveData_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.isGameTime_Chobu
struct ASL_Chobu_BP_C_isGameTime_Chobu_Params
{
	float                                              MinTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               onTime;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CheckNextStepUp_Chobu
struct ASL_Chobu_BP_C_CheckNextStepUp_Chobu_Params
{
	bool                                               Exsp;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ExspPay;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.MakeMaxTimerControl_Chobu
struct ASL_Chobu_BP_C_MakeMaxTimerControl_Chobu_Params
{
	float                                              limit_time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Branch_StepAPS_Chobu
struct ASL_Chobu_BP_C_Branch_StepAPS_Chobu_Params
{
	struct FName                                       save_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     step_aps_id;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.TimeMarkAPS
struct ASL_Chobu_BP_C_TimeMarkAPS_Params
{
	int                                                ApsHour;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ryosya_Aps;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.SetReturnRyosyaAPS
struct ASL_Chobu_BP_C_SetReturnRyosyaAPS_Params
{
	int                                                Typeid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.TimeDebugDisp
struct ASL_Chobu_BP_C_TimeDebugDisp_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.TimeScheduleCtrl
struct ASL_Chobu_BP_C_TimeScheduleCtrl_Params
{
	bool                                               onSchedule;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.GroupSetMemoFlag
struct ASL_Chobu_BP_C_GroupSetMemoFlag_Params
{
	struct FString                                     SetMemoID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               SetFlag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.RemovetAPS
struct ASL_Chobu_BP_C_RemovetAPS_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Setting_Arrival_S
struct ASL_Chobu_BP_C_Setting_Arrival_S_Params
{
	struct FVector                                     Setting;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.KariMemoRedLineSet
struct ASL_Chobu_BP_C_KariMemoRedLineSet_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CheckSHEdistance
struct ASL_Chobu_BP_C_CheckSHEdistance_Params
{
	class ATriggerBox*                                 check_trigger_box;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              limit_distance;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               result_distance;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.GetSHESocketVec
struct ASL_Chobu_BP_C_GetSHESocketVec_Params
{
	struct FVector                                     pos;                                                      // (Parm, OutParm, IsPlainOldData)
	bool                                               RetFlag;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CheckDistances
struct ASL_Chobu_BP_C_CheckDistances_Params
{
	struct FVector                                     Vector1;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Vector2;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               check_2d;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ClearAllNPC
struct ASL_Chobu_BP_C_ClearAllNPC_Params
{
	bool                                               result_clear;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CheckReward
struct ASL_Chobu_BP_C_CheckReward_Params
{
	struct FName                                       CheckItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               reward_result;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.StepToScript
struct ASL_Chobu_BP_C_StepToScript_Params
{
	class UTalkScript*                                 Script;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               FindResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.HiddenActor
struct ASL_Chobu_BP_C_HiddenActor_Params
{
	struct FName                                       FindLevelName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FindActorName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.StepCheckMinMax
struct ASL_Chobu_BP_C_StepCheckMinMax_Params
{
	int                                                step_min;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                step_max;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CheckHaveMoney
struct ASL_Chobu_BP_C_CheckHaveMoney_Params
{
	int                                                NewPacheck_moneyram;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               have_result;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.KillFollowSHE
struct ASL_Chobu_BP_C_KillFollowSHE_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.SpawnFollowSHE
struct ASL_Chobu_BP_C_SpawnFollowSHE_Params
{
	float                                              Back_Offset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Side_Offset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.RequestCutScene
struct ASL_Chobu_BP_C_RequestCutScene_Params
{
	struct FName                                       CutsceneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CheckGlobalFlag
struct ASL_Chobu_BP_C_CheckGlobalFlag_Params
{
	struct FName                                       FlagID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CheckValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.FindSetGlobalFlag
struct ASL_Chobu_BP_C_FindSetGlobalFlag_Params
{
	struct FName                                       FlagID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FindResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.FindSetMemoFlag
struct ASL_Chobu_BP_C_FindSetMemoFlag_Params
{
	struct FName                                       MemoId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SetFlag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FindResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.DebugMark_X
struct ASL_Chobu_BP_C_DebugMark_X_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.DebugMark
struct ASL_Chobu_BP_C_DebugMark_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ExecTrgUnbindEvent
struct ASL_Chobu_BP_C_ExecTrgUnbindEvent_Params
{
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Carrige_Unbind;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExecUnbind;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.MakeTrgSphereEvent
struct ASL_Chobu_BP_C_MakeTrgSphereEvent_Params
{
	class ATriggerSphere*                              TrgSphName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.MakeTrgBoxEvent_Save
struct ASL_Chobu_BP_C_MakeTrgBoxEvent_Save_Params
{
	class ATriggerBox*                                 TrgBoxName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.MakeTrgEvent
struct ASL_Chobu_BP_C_MakeTrgEvent_Params
{
	class UPrimitiveComponent*                         TrgBoxName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.MakeCutSceneEvent
struct ASL_Chobu_BP_C_MakeCutSceneEvent_Params
{
	struct FName                                       CutsceneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseFade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartEventName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       EndEventName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SaveID;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ResetChobu_Work
struct ASL_Chobu_BP_C_ResetChobu_Work_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.MakeTrgBoxEvent
struct ASL_Chobu_BP_C_MakeTrgBoxEvent_Params
{
	class ATriggerBox*                                 TrgBoxName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.SetPlayableControl
struct ASL_Chobu_BP_C_SetPlayableControl_Params
{
	bool                                               Playable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Stock_Save;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ShowEyecatch
struct ASL_Chobu_BP_C_ShowEyecatch_Params
{
	struct FText                                       PlaceNameJPN;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       PlaceNameENG;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Fade;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutputPin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.EnableDetection
struct ASL_Chobu_BP_C_EnableDetection_Params
{
	bool                                               isTalk;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isMemo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isMenu;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.IsFreeOperationState
struct ASL_Chobu_BP_C_IsFreeOperationState_Params
{
	bool                                               DuringEvent;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.IsDuringFreeConversation
struct ASL_Chobu_BP_C_IsDuringFreeConversation_Params
{
	bool                                               Talking;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.InpActEvt_Ctrl+Shift_@_K2Node_InputKeyEvent_2
struct ASL_Chobu_BP_C_InpActEvt_Ctrl_Shift_At_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ReceiveBeginPlay
struct ASL_Chobu_BP_C_ReceiveBeginPlay_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.BindEvent_StartTimerCutscene
struct ASL_Chobu_BP_C_BindEvent_StartTimerCutscene_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.StartTimerCutscene
struct ASL_Chobu_BP_C_StartTimerCutscene_Params
{
	struct FName                                       CutsceneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ReceiveTick
struct ASL_Chobu_BP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.RegisterTimerCutscene
struct ASL_Chobu_BP_C_RegisterTimerCutscene_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.TrgEventIn_00
struct ASL_Chobu_BP_C_TrgEventIn_00_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.TrgEventIn_01
struct ASL_Chobu_BP_C_TrgEventIn_01_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.TrgEventIn_02
struct ASL_Chobu_BP_C_TrgEventIn_02_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.StartCutSceneIn
struct ASL_Chobu_BP_C_StartCutSceneIn_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.EndCutSceneIn
struct ASL_Chobu_BP_C_EndCutSceneIn_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.MfEvt_AppointStart
struct ASL_Chobu_BP_C_MfEvt_AppointStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.MfEvt_AppointEnd
struct ASL_Chobu_BP_C_MfEvt_AppointEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.NewMainFlow_StepControl
struct ASL_Chobu_BP_C_NewMainFlow_StepControl_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.NewStepControl_AllBranch
struct ASL_Chobu_BP_C_NewStepControl_AllBranch_Params
{
	int                                                ExecStep;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      step_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CustomEvent
struct ASL_Chobu_BP_C_CustomEvent_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbEvt_StepBranch
struct ASL_Chobu_BP_C_CbEvt_StepBranch_Params
{
	int                                                SetSteps;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.SleepActionStart
struct ASL_Chobu_BP_C_SleepActionStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Make_Reward
struct ASL_Chobu_BP_C_Make_Reward_Params
{
	struct FName                                       Reward_ID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.HkEvt_ChangeReward
struct ASL_Chobu_BP_C_HkEvt_ChangeReward_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.MakeLevelLoadEyeCatch
struct ASL_Chobu_BP_C_MakeLevelLoadEyeCatch_Params
{
	struct FName                                       EyeCatchID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Player_Pos;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Player_Rot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NotUseEyecatch;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.EndJump
struct ASL_Chobu_BP_C_EndJump_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Step500_LastPayMoney
struct ASL_Chobu_BP_C_Step500_LastPayMoney_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbEvt_DlcStepUp
struct ASL_Chobu_BP_C_CbEvt_DlcStepUp_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.RewardStart_In
struct ASL_Chobu_BP_C_RewardStart_In_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.EvtTest_Return
struct ASL_Chobu_BP_C_EvtTest_Return_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ForcedReturn_Timer_FirstDay
struct ASL_Chobu_BP_C_ForcedReturn_Timer_FirstDay_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Forcedreturn Timer
struct ASL_Chobu_BP_C_Forcedreturn_Timer_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbSlpEvt_S0057_OnStart
struct ASL_Chobu_BP_C_CbSlpEvt_S0057_OnStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ExecSleepEvt_Test
struct ASL_Chobu_BP_C_ExecSleepEvt_Test_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbSlpEvt_WakeUp_OnEnd
struct ASL_Chobu_BP_C_CbSlpEvt_WakeUp_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbSlpEvt_S0057_OnEnd
struct ASL_Chobu_BP_C_CbSlpEvt_S0057_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.SleepEvt_Test
struct ASL_Chobu_BP_C_SleepEvt_Test_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ForcedSleep_FirstDay
struct ASL_Chobu_BP_C_ForcedSleep_FirstDay_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.SL_Chobu_BP_ForcedsleepStart
struct ASL_Chobu_BP_C_SL_Chobu_BP_ForcedsleepStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Forcedsleep Timer
struct ASL_Chobu_BP_C_Forcedsleep_Timer_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Forcedsleep_Exsption_Timer
struct ASL_Chobu_BP_C_Forcedsleep_Exsption_Timer_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.StepChangeDebug
struct ASL_Chobu_BP_C_StepChangeDebug_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0006_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0006_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.FinishLoadShip
struct ASL_Chobu_BP_C_FinishLoadShip_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.FinishUnloadCutscene
struct ASL_Chobu_BP_C_FinishUnloadCutscene_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0007_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0007_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverC_LoadShip
struct ASL_Chobu_BP_C_CbStepCtl_RecoverC_LoadShip_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverB3_Step210-000
struct ASL_Chobu_BP_C_CbStepCtl_RecoverB3_Step210_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_MokujinTrigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_MokujinTrigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverResident_210-000-00
struct ASL_Chobu_BP_C_CbStepCtl_RecoverResident_210_000_00_Params
{
	int                                                ThisID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0010_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0010_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_S0010Trigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_S0010Trigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0009_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0009_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_S0009Trigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_S0009Trigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverB2_Step210-000
struct ASL_Chobu_BP_C_CbStepCtl_RecoverB2_Step210_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverB1_Step210-000
struct ASL_Chobu_BP_C_CbStepCtl_RecoverB1_Step210_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0012_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0012_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0012_OnStart
struct ASL_Chobu_BP_C_CbCsEvt_S0012_OnStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0011_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0011_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Delegate_Step210-000
struct ASL_Chobu_BP_C_Delegate_Step210_000_Params
{
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_S0011Trigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_S0011Trigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverA1_Step210-000
struct ASL_Chobu_BP_C_CbStepCtl_RecoverA1_Step210_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Setp220_FlagChange
struct ASL_Chobu_BP_C_CbStepCtlEvt_Setp220_FlagChange_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverA3_Step220-000
struct ASL_Chobu_BP_C_CbStepCtl_RecoverA3_Step220_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0003_OnEnd_Exsp
struct ASL_Chobu_BP_C_CbCsEvt_S0003_OnEnd_Exsp_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_ExspAt11_Step220
struct ASL_Chobu_BP_C_CbStepCtlEvt_ExspAt11_Step220_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0166_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0166_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0003_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0003_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_AMinfo-220-00
struct ASL_Chobu_BP_C_CbStepCtlEvt_AMinfo_220_00_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_S0014Trigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_S0014Trigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverA2_Step220-000
struct ASL_Chobu_BP_C_CbStepCtl_RecoverA2_Step220_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverA1_Step220-000
struct ASL_Chobu_BP_C_CbStepCtl_RecoverA1_Step220_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverA3_Step220-005
struct ASL_Chobu_BP_C_CbStepCtl_RecoverA3_Step220_005_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverA2_Step220-005
struct ASL_Chobu_BP_C_CbStepCtl_RecoverA2_Step220_005_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0034_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0034_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_S0034Trigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_S0034Trigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverB1_Step220-005
struct ASL_Chobu_BP_C_CbStepCtl_RecoverB1_Step220_005_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_220photoTrigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_220photoTrigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_S0089AreaOutTrigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_S0089AreaOutTrigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverA1_Step220-005
struct ASL_Chobu_BP_C_CbStepCtl_RecoverA1_Step220_005_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0089_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0089_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_S0089Trigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_S0089Trigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverA2_Step220-010
struct ASL_Chobu_BP_C_CbStepCtl_RecoverA2_Step220_010_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_220-010photoTrigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_220_010photoTrigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Delegate_Step230-030
struct ASL_Chobu_BP_C_Delegate_Step230_030_Params
{
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_S0011Trigger_Step230-030
struct ASL_Chobu_BP_C_CbStepCtlEvt_S0011Trigger_Step230_030_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_FlagChange_Step260-020
struct ASL_Chobu_BP_C_CbStepCtlEvt_FlagChange_Step260_020_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S1014_OnEnd_Step260-020
struct ASL_Chobu_BP_C_CbCsEvt_S1014_OnEnd_Step260_020_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Delegate_Step260-020
struct ASL_Chobu_BP_C_Delegate_Step260_020_Params
{
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_S0011Trigger_Step260-020
struct ASL_Chobu_BP_C_CbStepCtlEvt_S0011Trigger_Step260_020_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0124_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0124_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Delegate_Step320-000
struct ASL_Chobu_BP_C_Delegate_Step320_000_Params
{
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_S0011Trigger_Step320-000
struct ASL_Chobu_BP_C_CbStepCtlEvt_S0011Trigger_Step320_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ChbEvt_RewardDct_StartTrigger
struct ASL_Chobu_BP_C_ChbEvt_RewardDct_StartTrigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ChbEvt_RewardDct_ChildA
struct ASL_Chobu_BP_C_ChbEvt_RewardDct_ChildA_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ChbEvt_RewardDct_ChildB
struct ASL_Chobu_BP_C_ChbEvt_RewardDct_ChildB_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ChbEvt_RewardDct_ChildC
struct ASL_Chobu_BP_C_ChbEvt_RewardDct_ChildC_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ChbEvt_RewardSenjafuda_Look
struct ASL_Chobu_BP_C_ChbEvt_RewardSenjafuda_Look_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.RewardHanaMoji_Recover
struct ASL_Chobu_BP_C_RewardHanaMoji_Recover_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ChbEvt_RewardHahaMoji_S0040_Out
struct ASL_Chobu_BP_C_ChbEvt_RewardHahaMoji_S0040_Out_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ChbEvt_RewardHahaMoji_WazaGet
struct ASL_Chobu_BP_C_ChbEvt_RewardHahaMoji_WazaGet_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ChbEvt_RewardHahaMoji_S0040_End
struct ASL_Chobu_BP_C_ChbEvt_RewardHahaMoji_S0040_End_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ChbEvt_RewardHahaMoji_Out
struct ASL_Chobu_BP_C_ChbEvt_RewardHahaMoji_Out_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ChbEvt_RewardHanaMoji_Look
struct ASL_Chobu_BP_C_ChbEvt_RewardHanaMoji_Look_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Recover_ChobuStepTalk
struct ASL_Chobu_BP_C_Recover_ChobuStepTalk_Params
{
	int                                                StartMode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CkEvt_S0061_OnEnd
struct ASL_Chobu_BP_C_CkEvt_S0061_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CkEvt_S0061_SceneStart
struct ASL_Chobu_BP_C_CkEvt_S0061_SceneStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Forcedevening Timer
struct ASL_Chobu_BP_C_Forcedevening_Timer_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Delegate_Step370-000
struct ASL_Chobu_BP_C_Delegate_Step370_000_Params
{
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.NPCSpawn
struct ASL_Chobu_BP_C_NPCSpawn_Params
{
	struct FGameplayTag                                NPCID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0036_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0036_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_S0036Trigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_S0036Trigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverB1_Step230-020
struct ASL_Chobu_BP_C_CbStepCtl_RecoverB1_Step230_020_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Step230-050_NPCset_grpB
struct ASL_Chobu_BP_C_CbStepCtlEvt_Step230_050_NPCset_grpB_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverA3-Step230-050
struct ASL_Chobu_BP_C_CbStepCtl_RecoverA3_Step230_050_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Step230-050_NPCset
struct ASL_Chobu_BP_C_CbStepCtlEvt_Step230_050_NPCset_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverA2-Step230-050
struct ASL_Chobu_BP_C_CbStepCtl_RecoverA2_Step230_050_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverA1-Step230-050
struct ASL_Chobu_BP_C_CbStepCtl_RecoverA1_Step230_050_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0063_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0063_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverB2-Step230-050
struct ASL_Chobu_BP_C_CbStepCtl_RecoverB2_Step230_050_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverB1-Step230-050
struct ASL_Chobu_BP_C_CbStepCtl_RecoverB1_Step230_050_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_ResidentTrg-Step230-050
struct ASL_Chobu_BP_C_CbStepCtlEvt_ResidentTrg_Step230_050_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_ResidentFlag-Step230-050
struct ASL_Chobu_BP_C_CbStepCtlEvt_ResidentFlag_Step230_050_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverResident_230-050-00
struct ASL_Chobu_BP_C_CbStepCtl_RecoverResident_230_050_00_Params
{
	int                                                ThisID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0030_OnEnd_Step230-050
struct ASL_Chobu_BP_C_CbCsEvt_S0030_OnEnd_Step230_050_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Arrivalh_Trigger_Step230-050
struct ASL_Chobu_BP_C_CbStepCtlEvt_Arrivalh_Trigger_Step230_050_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0030_OnEnd_Step230-052
struct ASL_Chobu_BP_C_CbCsEvt_S0030_OnEnd_Step230_052_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Arrivalh_Trigger_Step230-052
struct ASL_Chobu_BP_C_CbStepCtlEvt_Arrivalh_Trigger_Step230_052_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0031_OnStart_Step230-052
struct ASL_Chobu_BP_C_CbCsEvt_S0031_OnStart_Step230_052_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0031_OnEnd_Step230-052
struct ASL_Chobu_BP_C_CbCsEvt_S0031_OnEnd_Step230_052_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Arrivali_Trigger_Step230-060
struct ASL_Chobu_BP_C_CbStepCtlEvt_Arrivali_Trigger_Step230_060_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_azito_001_BattleWin
struct ASL_Chobu_BP_C_M06_azito_001_BattleWin_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_azito_001_BattleLose
struct ASL_Chobu_BP_C_M06_azito_001_BattleLose_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0031Latterhalf_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0031Latterhalf_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Arrivalk_AcTrigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_Arrivalk_AcTrigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0090_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0090_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Arrivalb_Trigger_Step230-082
struct ASL_Chobu_BP_C_CbStepCtlEvt_Arrivalb_Trigger_Step230_082_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0037_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0037_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Arrivalb_Trigger_Step230-080
struct ASL_Chobu_BP_C_CbStepCtlEvt_Arrivalb_Trigger_Step230_080_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverB1_Step250-030
struct ASL_Chobu_BP_C_CbStepCtl_RecoverB1_Step250_030_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ChbEvt_S0040_OnEnd
struct ASL_Chobu_BP_C_ChbEvt_S0040_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ChbEvt_StepHasakiTeraEvent_Out
struct ASL_Chobu_BP_C_ChbEvt_StepHasakiTeraEvent_Out_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverB2-Step230-095
struct ASL_Chobu_BP_C_CbStepCtl_RecoverB2_Step230_095_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ChbEvt_StepHanasakiTeraOku
struct ASL_Chobu_BP_C_ChbEvt_StepHanasakiTeraOku_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverB1-Step230-095
struct ASL_Chobu_BP_C_CbStepCtl_RecoverB1_Step230_095_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverResident_230-095-00
struct ASL_Chobu_BP_C_CbStepCtl_RecoverResident_230_095_00_Params
{
	int                                                ThisID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverA1_Step230-095
struct ASL_Chobu_BP_C_CbStepCtl_RecoverA1_Step230_095_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0038_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0038_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Arrivalhana1_Trigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_Arrivalhana1_Trigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0100_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0100_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_S0100_Trigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_S0100_Trigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0043_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0043_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ChbEvt_StepMikoEvent_Out
struct ASL_Chobu_BP_C_ChbEvt_StepMikoEvent_Out_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Delegate_Step240-012
struct ASL_Chobu_BP_C_Delegate_Step240_012_Params
{
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0043_OnEnd_Old
struct ASL_Chobu_BP_C_CbCsEvt_S0043_OnEnd_Old_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_S0043_Trigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_S0043_Trigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverA2_Step240-012
struct ASL_Chobu_BP_C_CbStepCtl_RecoverA2_Step240_012_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0041_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0041_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_S0041_Trigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_S0041_Trigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverA1_Step240-012
struct ASL_Chobu_BP_C_CbStepCtl_RecoverA1_Step240_012_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0014_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0014_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_S0014Trigger_Step250-000
struct ASL_Chobu_BP_C_CbStepCtlEvt_S0014Trigger_Step250_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0016_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0016_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Arrivala_Trigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_Arrivala_Trigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0018_OnStart
struct ASL_Chobu_BP_C_CbCsEvt_S0018_OnStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0017_OnStart
struct ASL_Chobu_BP_C_CbCsEvt_S0017_OnStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0023_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0023_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0019_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0019_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0018_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0018_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0017_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0017_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0022_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0022_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Arrivalt_Trigger-Step250-030
struct ASL_Chobu_BP_C_CbStepCtlEvt_Arrivalt_Trigger_Step250_030_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0134_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0134_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbBtlEvt_Step250-030_End
struct ASL_Chobu_BP_C_CbBtlEvt_Step250_030_End_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0109_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0109_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Arrivalo_Trigger-Step250-030
struct ASL_Chobu_BP_C_CbStepCtlEvt_Arrivalo_Trigger_Step250_030_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverResident_250-030-00
struct ASL_Chobu_BP_C_CbStepCtl_RecoverResident_250_030_00_Params
{
	int                                                ThisID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverA1_Step250-030
struct ASL_Chobu_BP_C_CbStepCtl_RecoverA1_Step250_030_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0118_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0118_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Arrivalf_Trigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_Arrivalf_Trigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0119_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0119_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_S0118_Battle_Win
struct ASL_Chobu_BP_C_M06_S0118_Battle_Win_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_S0118_Battle_Lose
struct ASL_Chobu_BP_C_M06_S0118_Battle_Lose_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlRetry_Step280-010
struct ASL_Chobu_BP_C_CbStepCtlRetry_Step280_010_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Retry_Step280-010
struct ASL_Chobu_BP_C_CbStepCtlEvt_Retry_Step280_010_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Arrivalm_gate_Trigger_Step290-000
struct ASL_Chobu_BP_C_CbStepCtlEvt_Arrivalm_gate_Trigger_Step290_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0120_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0120_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Arrivalm_Trigger_Step290-000
struct ASL_Chobu_BP_C_CbStepCtlEvt_Arrivalm_Trigger_Step290_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0121_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0121_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_Ajiti1_1st_Battle_Win
struct ASL_Chobu_BP_C_M06_Ajiti1_1st_Battle_Win_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Retry_Step300-000
struct ASL_Chobu_BP_C_CbStepCtlEvt_Retry_Step300_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_Ajiti1_1st_Battle_Lose
struct ASL_Chobu_BP_C_M06_Ajiti1_1st_Battle_Lose_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlRetry_Step300-000
struct ASL_Chobu_BP_C_CbStepCtlRetry_Step300_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_Ajiti1_2nd_Battle_Lose
struct ASL_Chobu_BP_C_M06_Ajiti1_2nd_Battle_Lose_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0123_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0123_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0122_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0122_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_Ajiti1_2nd_Battle_End
struct ASL_Chobu_BP_C_M06_Ajiti1_2nd_Battle_End_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlRetry_Step310-000
struct ASL_Chobu_BP_C_CbStepCtlRetry_Step310_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0101_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0101_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0101_OnStart
struct ASL_Chobu_BP_C_CbCsEvt_S0101_OnStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_RenFlagOn_Step350-000
struct ASL_Chobu_BP_C_CbStepCtlEvt_RenFlagOn_Step350_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0125_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0125_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Arrivalm_Trigger_Step350-000
struct ASL_Chobu_BP_C_CbStepCtlEvt_Arrivalm_Trigger_Step350_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Retry_Step360-000
struct ASL_Chobu_BP_C_CbStepCtlEvt_Retry_Step360_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_Ajitio2_1st_Battle_Lose
struct ASL_Chobu_BP_C_M06_Ajitio2_1st_Battle_Lose_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0126_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0126_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_Ajitio2_1st_Battle_Win
struct ASL_Chobu_BP_C_M06_Ajitio2_1st_Battle_Win_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlRetry_Step360-000
struct ASL_Chobu_BP_C_CbStepCtlRetry_Step360_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_Ajitio2_2nd_Battle_Lose
struct ASL_Chobu_BP_C_M06_Ajitio2_2nd_Battle_Lose_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0127_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0127_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_Ajitio2_2nd_Battle_End
struct ASL_Chobu_BP_C_M06_Ajitio2_2nd_Battle_End_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0102_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0102_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0102_OnStart
struct ASL_Chobu_BP_C_CbCsEvt_S0102_OnStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0136_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0136_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbBtlEvt_Step390-000_End
struct ASL_Chobu_BP_C_CbBtlEvt_Step390_000_End_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0135_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0135_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Arrivalo_Trigger-Step390-000
struct ASL_Chobu_BP_C_CbStepCtlEvt_Arrivalo_Trigger_Step390_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0020_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0020_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbBtlEvt_Step400-000_End
struct ASL_Chobu_BP_C_CbBtlEvt_Step400_000_End_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0111_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0111_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Arrivalsanbasi_Trigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_Arrivalsanbasi_Trigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0103_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0103_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0103_OnStart
struct ASL_Chobu_BP_C_CbCsEvt_S0103_OnStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_AreaIn_Step430-070
struct ASL_Chobu_BP_C_CbStepCtlEvt_AreaIn_Step430_070_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_RetryFlag_Step430-070
struct ASL_Chobu_BP_C_CbStepCtlEvt_RetryFlag_Step430_070_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Delegate_Step460-000
struct ASL_Chobu_BP_C_Delegate_Step460_000_Params
{
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_S0015Trigger_Step460-000
struct ASL_Chobu_BP_C_CbStepCtlEvt_S0015Trigger_Step460_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0155_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0155_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverA1_Step470-000
struct ASL_Chobu_BP_C_CbStepCtl_RecoverA1_Step470_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Arrivalsanbasi_a_Trigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_Arrivalsanbasi_a_Trigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbBtlEvt_Step470-000_End
struct ASL_Chobu_BP_C_CbBtlEvt_Step470_000_End_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0112_OnEnd_old
struct ASL_Chobu_BP_C_CbCsEvt_S0112_OnEnd_old_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0104_OnEnd_old
struct ASL_Chobu_BP_C_CbCsEvt_S0104_OnEnd_old_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0104_OnStart_old
struct ASL_Chobu_BP_C_CbCsEvt_S0104_OnStart_old_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Delegate_Step480-000_Part21
struct ASL_Chobu_BP_C_Delegate_Step480_000_Part21_Params
{
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverA1_Step480-000
struct ASL_Chobu_BP_C_CbStepCtl_RecoverA1_Step480_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Delegate_Step480-000
struct ASL_Chobu_BP_C_Delegate_Step480_000_Params
{
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0137_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0137_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Arrivalm_Trigger_Step480-000
struct ASL_Chobu_BP_C_CbStepCtlEvt_Arrivalm_Trigger_Step480_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0157_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0157_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_Step490_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_Step490_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_Step490_OnStart
struct ASL_Chobu_BP_C_CbCsEvt_Step490_OnStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbEvt_SelectCancel
struct ASL_Chobu_BP_C_CbEvt_SelectCancel_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbEvt_SelectNext
struct ASL_Chobu_BP_C_CbEvt_SelectNext_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbEvtOnDialogCancel
struct ASL_Chobu_BP_C_CbEvtOnDialogCancel_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbEvtOnDialogDecide
struct ASL_Chobu_BP_C_CbEvtOnDialogDecide_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_LastDialog_Trigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_LastDialog_Trigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0128_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0128_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Arrivalsanbasi_Step500-00
struct ASL_Chobu_BP_C_CbStepCtlEvt_Arrivalsanbasi_Step500_00_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0162_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0162_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0129_OnStart
struct ASL_Chobu_BP_C_CbCsEvt_S0129_OnStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_ArrivalAjitoA2_FlagChange
struct ASL_Chobu_BP_C_CbStepCtlEvt_ArrivalAjitoA2_FlagChange_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverA2_Step510-000
struct ASL_Chobu_BP_C_CbStepCtl_RecoverA2_Step510_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0128_OnStart-510
struct ASL_Chobu_BP_C_CbCsEvt_S0128_OnStart_510_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0128_OnEnd-510
struct ASL_Chobu_BP_C_CbCsEvt_S0128_OnEnd_510_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0140_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0140_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_ArrivalAjitoA2_Trigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_ArrivalAjitoA2_Trigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverA1_Step510-000
struct ASL_Chobu_BP_C_CbStepCtl_RecoverA1_Step510_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0129_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0129_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0097_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0097_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtl_RecoverA1_Step530-000
struct ASL_Chobu_BP_C_CbStepCtl_RecoverA1_Step530_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_Step530LoadOnly
struct ASL_Chobu_BP_C_CbStepCtlEvt_Step530LoadOnly_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0141_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0141_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_ArrivalAjitoA4_Trigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_ArrivalAjitoA4_Trigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioBridgeBattle_NewWin
struct ASL_Chobu_BP_C_M06_AjitioBridgeBattle_NewWin_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioBridgeBattle_XX
struct ASL_Chobu_BP_C_M06_AjitioBridgeBattle_XX_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioBridgeBattle_Continue3
struct ASL_Chobu_BP_C_M06_AjitioBridgeBattle_Continue3_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_ArrivalLanding2_Trigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_ArrivalLanding2_Trigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioBridgeBattle_Continue2
struct ASL_Chobu_BP_C_M06_AjitioBridgeBattle_Continue2_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioBridgeBattle_Continue1
struct ASL_Chobu_BP_C_M06_AjitioBridgeBattle_Continue1_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0130_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0130_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioBridgeBattle_Win
struct ASL_Chobu_BP_C_M06_AjitioBridgeBattle_Win_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioBridgeBattle_Lose
struct ASL_Chobu_BP_C_M06_AjitioBridgeBattle_Lose_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S4150_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S4150_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S3150_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S3150_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S5150_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S5150_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_KowCs_OnStart
struct ASL_Chobu_BP_C_CbCsEvt_KowCs_OnStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioKojouKouBattle_QteLose
struct ASL_Chobu_BP_C_M06_AjitioKojouKouBattle_QteLose_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_KowCs_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_KowCs_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioKojouKouBattle_Continue2
struct ASL_Chobu_BP_C_M06_AjitioKojouKouBattle_Continue2_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioKojouKouBattle_Continue1
struct ASL_Chobu_BP_C_M06_AjitioKojouKouBattle_Continue1_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioKojou2fBattle_Win
struct ASL_Chobu_BP_C_M06_AjitioKojou2fBattle_Win_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_ArrivalKojou2_Trigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_ArrivalKojou2_Trigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0131_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0131_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioKojouKouBattle_Win
struct ASL_Chobu_BP_C_M06_AjitioKojouKouBattle_Win_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioKojouKouBattle_Lose
struct ASL_Chobu_BP_C_M06_AjitioKojouKouBattle_Lose_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_ArrivalA8_RecoverIn
struct ASL_Chobu_BP_C_CbStepCtlEvt_ArrivalA8_RecoverIn_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0142_OnStart
struct ASL_Chobu_BP_C_CbCsEvt_S0142_OnStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0142_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0142_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_ArrivalA8_Trigger
struct ASL_Chobu_BP_C_CbStepCtlEvt_ArrivalA8_Trigger_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0151_OnStart
struct ASL_Chobu_BP_C_CbCsEvt_S0151_OnStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0143_OnStart
struct ASL_Chobu_BP_C_CbCsEvt_S0143_OnStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioKojouTopZakoBattle_QteLose
struct ASL_Chobu_BP_C_M06_AjitioKojouTopZakoBattle_QteLose_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0151_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0151_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0143_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0143_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioKojouTopZakoBattle_Win
struct ASL_Chobu_BP_C_M06_AjitioKojouTopZakoBattle_Win_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioKojouTopZakoBattle_Lose
struct ASL_Chobu_BP_C_M06_AjitioKojouTopZakoBattle_Lose_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0149_OnStart
struct ASL_Chobu_BP_C_CbCsEvt_S0149_OnStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0144_OnStart
struct ASL_Chobu_BP_C_CbCsEvt_S0144_OnStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0149_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0149_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioKojouTopRanteiBattle_Win
struct ASL_Chobu_BP_C_M06_AjitioKojouTopRanteiBattle_Win_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioKojouTopRanteiBattle_Lose
struct ASL_Chobu_BP_C_M06_AjitioKojouTopRanteiBattle_Lose_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0144_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0144_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0145_OnStart
struct ASL_Chobu_BP_C_CbCsEvt_S0145_OnStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0145_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0145_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0146_OnStart
struct ASL_Chobu_BP_C_CbCsEvt_S0146_OnStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0146_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0146_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0147_OnStart
struct ASL_Chobu_BP_C_CbCsEvt_S0147_OnStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0147_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0147_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0148_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0148_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_AreaIn_Step430-050
struct ASL_Chobu_BP_C_CbStepCtlEvt_AreaIn_Step430_050_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_RetryFlag_Step430-050
struct ASL_Chobu_BP_C_CbStepCtlEvt_RetryFlag_Step430_050_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_KouBattle_LoadStart
struct ASL_Chobu_BP_C_CbStepCtlEvt_KouBattle_LoadStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioKouBattle_Start
struct ASL_Chobu_BP_C_M06_AjitioKouBattle_Start_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_ScriptEnd_500-000
struct ASL_Chobu_BP_C_CbStepCtlEvt_ScriptEnd_500_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Forcedevening_Exsption_At17
struct ASL_Chobu_BP_C_Forcedevening_Exsption_At17_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_GetTrophy_Step470-070
struct ASL_Chobu_BP_C_CbStepCtlEvt_GetTrophy_Step470_070_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S2112_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S2112_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_CsFlag_Step470-070
struct ASL_Chobu_BP_C_CbStepCtlEvt_CsFlag_Step470_070_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_GetTrophy_Step470-000
struct ASL_Chobu_BP_C_CbStepCtlEvt_GetTrophy_Step470_000_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S1112_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S1112_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0112_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0112_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0104_OnEnd
struct ASL_Chobu_BP_C_CbCsEvt_S0104_OnEnd_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S0104_OnStart
struct ASL_Chobu_BP_C_CbCsEvt_S0104_OnStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_LandingBattle_LoadStart
struct ASL_Chobu_BP_C_CbStepCtlEvt_LandingBattle_LoadStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_LandingBattle_Start
struct ASL_Chobu_BP_C_CbStepCtlEvt_LandingBattle_Start_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioLandingABattle_Win
struct ASL_Chobu_BP_C_M06_AjitioLandingABattle_Win_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioLandingABattle_Lose
struct ASL_Chobu_BP_C_M06_AjitioLandingABattle_Lose_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_FellowB_02End
struct ASL_Chobu_BP_C_CbCsEvt_FellowB_02End_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_FellowB_01End
struct ASL_Chobu_BP_C_CbCsEvt_FellowB_01End_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_BackerBattle_LoadStart
struct ASL_Chobu_BP_C_CbStepCtlEvt_BackerBattle_LoadStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_BackerBattle_Start
struct ASL_Chobu_BP_C_CbStepCtlEvt_BackerBattle_Start_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioBackerBattle_Win
struct ASL_Chobu_BP_C_M06_AjitioBackerBattle_Win_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.M06_AjitioBackerBattle_Lose
struct ASL_Chobu_BP_C_M06_AjitioBackerBattle_Lose_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_FellowC_01End
struct ASL_Chobu_BP_C_CbCsEvt_FellowC_01End_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_BattleFellowA_Trg
struct ASL_Chobu_BP_C_CbStepCtlEvt_BattleFellowA_Trg_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S5150_OnStart
struct ASL_Chobu_BP_C_CbCsEvt_S5150_OnStart_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S4150_OnEnd_5-3
struct ASL_Chobu_BP_C_CbCsEvt_S4150_OnEnd_5_3_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S3150_OnEnd_5-3
struct ASL_Chobu_BP_C_CbCsEvt_S3150_OnEnd_5_3_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_S5150_OnEnd_5-3
struct ASL_Chobu_BP_C_CbCsEvt_S5150_OnEnd_5_3_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbStepCtlEvt_BattleFellowB_Trg
struct ASL_Chobu_BP_C_CbStepCtlEvt_BattleFellowB_Trg_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_FellowB_02End_56
struct ASL_Chobu_BP_C_CbCsEvt_FellowB_02End_56_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.CbCsEvt_FellowB_01End_56
struct ASL_Chobu_BP_C_CbCsEvt_FellowB_01End_56_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.Forcedevening_Exsption_At11
struct ASL_Chobu_BP_C_Forcedevening_Exsption_At11_Params
{
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ExecuteUbergraph_SL_Chobu_BP
struct ASL_Chobu_BP_C_ExecuteUbergraph_SL_Chobu_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Chobu_BP.SL_Chobu_BP_C.ScopeTest__DelegateSignature
struct ASL_Chobu_BP_C_ScopeTest__DelegateSignature_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
