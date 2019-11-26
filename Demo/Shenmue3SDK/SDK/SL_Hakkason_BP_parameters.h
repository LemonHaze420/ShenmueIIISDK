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

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.FindMemoPage
struct ASL_Hakkason_BP_C_FindMemoPage_Params
{
	int                                                MemoId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PageIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.SetForcedJumpIn
struct ASL_Hakkason_BP_C_SetForcedJumpIn_Params
{
	bool                                               Success_HouseIn;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.RecoverRewardSaveData
struct ASL_Hakkason_BP_C_RecoverRewardSaveData_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.isKeyYouHouse
struct ASL_Hakkason_BP_C_isKeyYouHouse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.JumpFollowSHE
struct ASL_Hakkason_BP_C_JumpFollowSHE_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.MakePlayerBehaviorCheck
struct ASL_Hakkason_BP_C_MakePlayerBehaviorCheck_Params
{
	ES3PlayerBehavior                                  Check_Behavior;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Need_Change_Playable;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Need_StepLock;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ShowEyeCatch_New
struct ASL_Hakkason_BP_C_ShowEyeCatch_New_Params
{
	struct FName                                       EyeCatchID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Fade;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutputPin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.MakeMaxTimerControlPulsStepCheck
struct ASL_Hakkason_BP_C_MakeMaxTimerControlPulsStepCheck_Params
{
	float                                              Limit_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StepMin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StepMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.CheckSeparationContition
struct ASL_Hakkason_BP_C_CheckSeparationContition_Params
{
	bool                                               StartSeparation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.TimeMarkAPS
struct ASL_Hakkason_BP_C_TimeMarkAPS_Params
{
	int                                                ApsHour;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SHE_house_Aps;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.InitializeBellTowerHiddenRoomGimmick_New
struct ASL_Hakkason_BP_C_InitializeBellTowerHiddenRoomGimmick_New_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.MakeMaxTimerControl
struct ASL_Hakkason_BP_C_MakeMaxTimerControl_Params
{
	float                                              Limit_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.CheckNextStepUp
struct ASL_Hakkason_BP_C_CheckNextStepUp_Params
{
	bool                                               ExspStepUp;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.Branch_StepAPS_Hakkason
struct ASL_Hakkason_BP_C_Branch_StepAPS_Hakkason_Params
{
	struct FName                                       save_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     step_aps_id;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               SET;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.RemovetAPS
struct ASL_Hakkason_BP_C_RemovetAPS_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.SetReturnHouseAPS
struct ASL_Hakkason_BP_C_SetReturnHouseAPS_Params
{
	int                                                Typeid;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.isHouseArea
struct ASL_Hakkason_BP_C_isHouseArea_Params
{
	bool                                               HouseArea;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ShenfaTalkInitialize_Step
struct ASL_Hakkason_BP_C_ShenfaTalkInitialize_Step_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.FlipChangeSHE
struct ASL_Hakkason_BP_C_FlipChangeSHE_Params
{
	bool                                               NPC_or_Following_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.PosChangeSHE
struct ASL_Hakkason_BP_C_PosChangeSHE_Params
{
	float                                              Back_Offset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Side_Offset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.KillFollowSHE
struct ASL_Hakkason_BP_C_KillFollowSHE_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.SpawnFollowSHE
struct ASL_Hakkason_BP_C_SpawnFollowSHE_Params
{
	float                                              Back_Offset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Side_Offset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.InitializeBellTowerHiddenRoomGimmick
struct ASL_Hakkason_BP_C_InitializeBellTowerHiddenRoomGimmick_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.GroupSetMemoFlag
struct ASL_Hakkason_BP_C_GroupSetMemoFlag_Params
{
	struct FString                                     set_id;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               flag_value;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ExecTrgUnbindEvent
struct ASL_Hakkason_BP_C_ExecTrgUnbindEvent_Params
{
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Carrige_Unbind;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExecUnbind;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.MakeTrgSphereEvent
struct ASL_Hakkason_BP_C_MakeTrgSphereEvent_Params
{
	class ATriggerSphere*                              TrgBoxName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.MakeTrgBoxEvent
struct ASL_Hakkason_BP_C_MakeTrgBoxEvent_Params
{
	class ATriggerBox*                                 TrgBoxName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       JumpEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.FindSetMemoFlag
struct ASL_Hakkason_BP_C_FindSetMemoFlag_Params
{
	struct FName                                       MemoId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SetFlag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FindResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.RequestCutScene
struct ASL_Hakkason_BP_C_RequestCutScene_Params
{
	struct FName                                       CutsceneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.MakeCutSceneEvent
struct ASL_Hakkason_BP_C_MakeCutSceneEvent_Params
{
	struct FName                                       CutsceneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseFade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartEventName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       EndEventName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SaveID;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.SanseisenGateCtrl
struct ASL_Hakkason_BP_C_SanseisenGateCtrl_Params
{
	bool                                               GateOpen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.UseSelectItem
struct ASL_Hakkason_BP_C_UseSelectItem_Params
{
	TArray<int>                                        ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.isSteambun
struct ASL_Hakkason_BP_C_isSteambun_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.isAlcohol
struct ASL_Hakkason_BP_C_isAlcohol_Params
{
	int                                                ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.isAlcoholSteambun
struct ASL_Hakkason_BP_C_isAlcoholSteambun_Params
{
	int                                                RetuenValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.isGameTime
struct ASL_Hakkason_BP_C_isGameTime_Params
{
	float                                              MinTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               onTime;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.IsSheLead
struct ASL_Hakkason_BP_C_IsSheLead_Params
{
	bool                                               onSHE;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.TimeScheduleCtrl
struct ASL_Hakkason_BP_C_TimeScheduleCtrl_Params
{
	bool                                               onSchedule;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.YouHouseShojiCtrl
struct ASL_Hakkason_BP_C_YouHouseShojiCtrl_Params
{
	bool                                               IsOpen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ShenfaHouseShojiCtrl
struct ASL_Hakkason_BP_C_ShenfaHouseShojiCtrl_Params
{
	bool                                               IsOpen;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.isNPCValid
struct ASL_Hakkason_BP_C_isNPCValid_Params
{
	struct FName                                       NPCTag;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.SetPlayableControl
struct ASL_Hakkason_BP_C_SetPlayableControl_Params
{
	bool                                               Playable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Stock_Save;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ShenfaTalkInitialize
struct ASL_Hakkason_BP_C_ShenfaTalkInitialize_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ShowEyecatch
struct ASL_Hakkason_BP_C_ShowEyecatch_Params
{
	struct FText                                       PlaceNameJPN;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       PlaceNameENG;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Fade;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutputPin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.IsFreeOperationState
struct ASL_Hakkason_BP_C_IsFreeOperationState_Params
{
	bool                                               DuringEvent;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.isDuringFreeConversation
struct ASL_Hakkason_BP_C_isDuringFreeConversation_Params
{
	bool                                               Talking;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HideChildren
struct ASL_Hakkason_BP_C_HideChildren_Params
{
	bool                                               bHide;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.CameraChangeCalc
struct ASL_Hakkason_BP_C_CameraChangeCalc_Params
{
	bool                                               OnceFlag;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.IsRYO
struct ASL_Hakkason_BP_C_IsRYO_Params
{
	bool                                               RetFlag;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.GetSHESocketVec
struct ASL_Hakkason_BP_C_GetSHESocketVec_Params
{
	struct FVector                                     pos;                                                      // (Parm, OutParm, IsPlainOldData)
	bool                                               RetFlag;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.InpActEvt_Ctrl+Shift_@_K2Node_InputKeyEvent_2
struct ASL_Hakkason_BP_C_InpActEvt_Ctrl_Shift_At_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ReceiveBeginPlay
struct ASL_Hakkason_BP_C_ReceiveBeginPlay_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ReceiveTick
struct ASL_Hakkason_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.StartTimerCutscene
struct ASL_Hakkason_BP_C_StartTimerCutscene_Params
{
	struct FName                                       CutsceneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.BindEvent_StartTimerCutscene
struct ASL_Hakkason_BP_C_BindEvent_StartTimerCutscene_Params
{
	bool                                               StopStart;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ForceeSleepStart
struct ASL_Hakkason_BP_C_ForceeSleepStart_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.BindEvent_StartCatchEventIcon
struct ASL_Hakkason_BP_C_BindEvent_StartCatchEventIcon_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.EventIconCtrl
struct ASL_Hakkason_BP_C_EventIconCtrl_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.CustomEvent
struct ASL_Hakkason_BP_C_CustomEvent_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkEvt_StepBranch
struct ASL_Hakkason_BP_C_HkEvt_StepBranch_Params
{
	int                                                SetSteps;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkEvt_SHEarea_InOut
struct ASL_Hakkason_BP_C_HkEvt_SHEarea_InOut_Params
{
	bool                                               Positive_direction;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Impact_dot_Arrow;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.MfEvt_AppointStart
struct ASL_Hakkason_BP_C_MfEvt_AppointStart_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.MfEvt_AppointEnd
struct ASL_Hakkason_BP_C_MfEvt_AppointEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.RegisterTimerCutscene
struct ASL_Hakkason_BP_C_RegisterTimerCutscene_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.NewMainFlow_StepControl
struct ASL_Hakkason_BP_C_NewMainFlow_StepControl_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.NewStepControl_AllBranch
struct ASL_Hakkason_BP_C_NewStepControl_AllBranch_Params
{
	int                                                ExecStep;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      step_id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.EvtTestMsg
struct ASL_Hakkason_BP_C_EvtTestMsg_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.MakeLevelLoadEyeCatch
struct ASL_Hakkason_BP_C_MakeLevelLoadEyeCatch_Params
{
	struct FName                                       EyeCatchID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Player_Pos;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Player_Rot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.EndJump
struct ASL_Hakkason_BP_C_EndJump_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkEvt_ChangeReward
struct ASL_Hakkason_BP_C_HkEvt_ChangeReward_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.Make_Reward
struct ASL_Hakkason_BP_C_Make_Reward_Params
{
	struct FName                                       Reward_ID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkEvt_SubQuestFlag
struct ASL_Hakkason_BP_C_HkEvt_SubQuestFlag_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkEvt_ClothChange
struct ASL_Hakkason_BP_C_HkEvt_ClothChange_Params
{
	TScriptInterface<class US3ClothInterface>          Interface;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkExspEvt_ExecHelpEffect
struct ASL_Hakkason_BP_C_HkExspEvt_ExecHelpEffect_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.RewardStartIn
struct ASL_Hakkason_BP_C_RewardStartIn_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverB_Step010-030
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverB_Step010_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverC_Step010-030
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverC_Step010_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkExspEvt_Morning
struct ASL_Hakkason_BP_C_HkExspEvt_Morning_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkSlpEvt_WakeUp_OnEnd
struct ASL_Hakkason_BP_C_HkSlpEvt_WakeUp_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkSlpEvt_S0044_OnEnd
struct ASL_Hakkason_BP_C_HkSlpEvt_S0044_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkSlpEvt_S0044_SceneStart
struct ASL_Hakkason_BP_C_HkSlpEvt_S0044_SceneStart_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.SL_Hakkason_BP_ForcedsleepStart
struct ASL_Hakkason_BP_C_SL_Hakkason_BP_ForcedsleepStart_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ForcedsleepTimer_M03_S0044
struct ASL_Hakkason_BP_C_ForcedsleepTimer_M03_S0044_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.LoadRecover_SHEcontrolC
struct ASL_Hakkason_BP_C_LoadRecover_SHEcontrolC_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.RecoveryGetUpCount
struct ASL_Hakkason_BP_C_RecoveryGetUpCount_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.LoadRecover_SHEcontrolB
struct ASL_Hakkason_BP_C_LoadRecover_SHEcontrolB_Params
{
	bool                                               ExspPostSet;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExspPostSetStep30;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.LoadRecover_SHEcontrolA
struct ASL_Hakkason_BP_C_LoadRecover_SHEcontrolA_Params
{
	int                                                Forced;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.RecoveryWarpSet
struct ASL_Hakkason_BP_C_RecoveryWarpSet_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkEvt_WarpStartDirChg2
struct ASL_Hakkason_BP_C_HkEvt_WarpStartDirChg2_Params
{
	bool                                               Positive_direction;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Impact_dot_Arrow;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkEvt_FirstDayDirChg2
struct ASL_Hakkason_BP_C_HkEvt_FirstDayDirChg2_Params
{
	bool                                               Positive_direction;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Impact_dot_Arrow;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkEvt_FirstDayDirChg
struct ASL_Hakkason_BP_C_HkEvt_FirstDayDirChg_Params
{
	bool                                               Positive_direction;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Impact_dot_Arrow;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkEvt_H19_OffAreaJump
struct ASL_Hakkason_BP_C_HkEvt_H19_OffAreaJump_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.Recover_StepTalk
struct ASL_Hakkason_BP_C_Recover_StepTalk_Params
{
	bool                                               ForcedSet;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ForcedReturn_StockStart
struct ASL_Hakkason_BP_C_ForcedReturn_StockStart_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkEvt_S0040_OnEnd
struct ASL_Hakkason_BP_C_HkEvt_S0040_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkEvt_S0040_SceneStart
struct ASL_Hakkason_BP_C_HkEvt_S0040_SceneStart_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.Forcedreturn_M03_S0040
struct ASL_Hakkason_BP_C_Forcedreturn_M03_S0040_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.OnEndCommon_M03_S0040
struct ASL_Hakkason_BP_C_OnEndCommon_M03_S0040_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.OnStartCommonPlayer_M03_S0040
struct ASL_Hakkason_BP_C_OnStartCommonPlayer_M03_S0040_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.SHECheckTrigger
struct ASL_Hakkason_BP_C_SHECheckTrigger_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.OnCutsceneEnd_M03_S0090
struct ASL_Hakkason_BP_C_OnCutsceneEnd_M03_S0090_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.OnStartCutscenePlayer_M03_S0090
struct ASL_Hakkason_BP_C_OnStartCutscenePlayer_M03_S0090_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.OnCutsceneEnd_M03_S0089
struct ASL_Hakkason_BP_C_OnCutsceneEnd_M03_S0089_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.OnStartCutscenePlayer_M03_S0089
struct ASL_Hakkason_BP_C_OnStartCutscenePlayer_M03_S0089_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.TickCheckTakeOffShoes
struct ASL_Hakkason_BP_C_TickCheckTakeOffShoes_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.CatchTaleOffShoesBack
struct ASL_Hakkason_BP_C_CatchTaleOffShoesBack_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_OnShoes_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_OnShoes_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_OnShoes_OnStart
struct ASL_Hakkason_BP_C_HkCsEvt_OnShoes_OnStart_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_OffShoes_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_OffShoes_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_OffShoes_OnStart
struct ASL_Hakkason_BP_C_HkCsEvt_OffShoes_OnStart_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.Hakkason_ShoesOn
struct ASL_Hakkason_BP_C_Hakkason_ShoesOn_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.CatchTaleOffOnEnd
struct ASL_Hakkason_BP_C_CatchTaleOffOnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.CatchPutOnShoes
struct ASL_Hakkason_BP_C_CatchPutOnShoes_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.CatchTaleOffShoes
struct ASL_Hakkason_BP_C_CatchTaleOffShoes_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.OnCutsceneEnd_M03_S0087
struct ASL_Hakkason_BP_C_OnCutsceneEnd_M03_S0087_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.OnStartCutscenePlayer_M03_S0087
struct ASL_Hakkason_BP_C_OnStartCutscenePlayer_M03_S0087_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.OnCutsceneEnd_M03_S0088
struct ASL_Hakkason_BP_C_OnCutsceneEnd_M03_S0088_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.OnStartCutscenePlayer_M03_S0088
struct ASL_Hakkason_BP_C_OnStartCutscenePlayer_M03_S0088_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.TimeUp_BackHouseOnly
struct ASL_Hakkason_BP_C_TimeUp_BackHouseOnly_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.Forcedtimeup_StockStart
struct ASL_Hakkason_BP_C_Forcedtimeup_StockStart_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.Forcedtimeup_Start
struct ASL_Hakkason_BP_C_Forcedtimeup_Start_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.EndofAreaJump
struct ASL_Hakkason_BP_C_EndofAreaJump_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.AreaJumpCheckBegin
struct ASL_Hakkason_BP_C_AreaJumpCheckBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.AreaJumpCtrl
struct ASL_Hakkason_BP_C_AreaJumpCtrl_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.TestAcEvent
struct ASL_Hakkason_BP_C_TestAcEvent_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ForcedStep01001000
struct ASL_Hakkason_BP_C_ForcedStep01001000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ForcedStep01002000
struct ASL_Hakkason_BP_C_ForcedStep01002000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ForcedStep02000000_StickStart
struct ASL_Hakkason_BP_C_ForcedStep02000000_StickStart_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ForcedStep02000000
struct ASL_Hakkason_BP_C_ForcedStep02000000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ForcedStep01003000
struct ASL_Hakkason_BP_C_ForcedStep01003000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.EVT_TestTrigger
struct ASL_Hakkason_BP_C_EVT_TestTrigger_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.DoorTest_OFF
struct ASL_Hakkason_BP_C_DoorTest_OFF_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.DoorTest_ON
struct ASL_Hakkason_BP_C_DoorTest_ON_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0052_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0052_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0052_OnStart
struct ASL_Hakkason_BP_C_HkCsEvt_S0052_OnStart_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0052_Step050-000
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0052_Step050_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA1_Step050-000
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA1_Step050_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_YurakuAreaIn
struct ASL_Hakkason_BP_C_HkStepCtlEvt_YurakuAreaIn_Params
{
	bool                                               Positive_direction;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Impact_dot_Arrow;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverExsp1_Step050-010
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverExsp1_Step050_010_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.Delegate_Step050-010
struct ASL_Hakkason_BP_C_Delegate_Step050_010_Params
{
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA2_Step050-010
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA2_Step050_010_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_FlagOnWait_Step050-010
struct ASL_Hakkason_BP_C_HkStepCtlEvt_FlagOnWait_Step050_010_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA1_Step050-010
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA1_Step050_010_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0046_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0046_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0046_Step050-020
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0046_Step050_020_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA1_Step050-020
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA1_Step050_020_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ForcedStep10000000
struct ASL_Hakkason_BP_C_ForcedStep10000000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkEvt_RewardDCT_Look
struct ASL_Hakkason_BP_C_HkEvt_RewardDCT_Look_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkEvt_RewardDct_StartTriggerB
struct ASL_Hakkason_BP_C_HkEvt_RewardDct_StartTriggerB_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkEvt_RewardDct_StartTriggerA
struct ASL_Hakkason_BP_C_HkEvt_RewardDct_StartTriggerA_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ForcedStep03000000
struct ASL_Hakkason_BP_C_ForcedStep03000000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ForcedStep16000000_Out_TimeLapse
struct ASL_Hakkason_BP_C_ForcedStep16000000_Out_TimeLapse_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ForcedStep16000000_Warp_TimeLapse
struct ASL_Hakkason_BP_C_ForcedStep16000000_Warp_TimeLapse_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ExecuteUbergraph_SL_Hakkason_BP
struct ASL_Hakkason_BP_C_ExecuteUbergraph_SL_Hakkason_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
