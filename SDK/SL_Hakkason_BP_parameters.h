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

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.CheckAreaJump
struct ASL_Hakkason_BP_C_CheckAreaJump_Params
{
	bool                                               EnableAreaJump;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

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
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
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

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0001_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0001_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0001_StartThen
struct ASL_Hakkason_BP_C_HkCsEvt_S0001_StartThen_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.Delegate_Step010-010
struct ASL_Hakkason_BP_C_Delegate_Step010_010_Params
{
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0002_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0002_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0002_StartThen
struct ASL_Hakkason_BP_C_HkCsEvt_S0002_StartThen_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_EyeCatch0001
struct ASL_Hakkason_BP_C_HkStepCtlEvt_EyeCatch0001_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.Delegate_Step010-020
struct ASL_Hakkason_BP_C_Delegate_Step010_020_Params
{
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0003_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0003_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0003_StartThen
struct ASL_Hakkason_BP_C_HkCsEvt_S0003_StartThen_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0003Trg
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0003Trg_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_FlagChange37_Step010-030
struct ASL_Hakkason_BP_C_HkStepCtlEvt_FlagChange37_Step010_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0004_OnStart
struct ASL_Hakkason_BP_C_HkCsEvt_S0004_OnStart_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0004Out_Step010-030
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0004Out_Step010_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkEvt_Step010-030_Add
struct ASL_Hakkason_BP_C_HkEvt_Step010_030_Add_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA2_Step010-030
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA2_Step010_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0012_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0012_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0019_Step010-030
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0019_Step010_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0118_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0118_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0012_Step010-030
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0012_Step010_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverC_Step010-030
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverC_Step010_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverB_Step010-030
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverB_Step010_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0004_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0004_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.Delegate_Step010-030
struct ASL_Hakkason_BP_C_Delegate_Step010_030_Params
{
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0004_Step010-030
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0004_Step010_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA1_Step010-030
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA1_Step010_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_TimeElasped_Step010-030
struct ASL_Hakkason_BP_C_HkStepCtlEvt_TimeElasped_Step010_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA0_Step020-000
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA0_Step020_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0005_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0005_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.Delegate_Step020-000
struct ASL_Hakkason_BP_C_Delegate_Step020_000_Params
{
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_Door_Step020-000
struct ASL_Hakkason_BP_C_HkStepCtlEvt_Door_Step020_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA_Step020-000
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA_Step020_000_Params
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

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0039_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0039_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.Delegate_Step020-010_N
struct ASL_Hakkason_BP_C_Delegate_Step020_010_N_Params
{
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0039_Step020-010
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0039_Step020_010_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA1_Step020-010
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA1_Step020_010_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA_AllAcEnd
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA_AllAcEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_AllAcEnd
struct ASL_Hakkason_BP_C_HkStepCtlEvt_AllAcEnd_Params
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

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_Retry_Step060-000
struct ASL_Hakkason_BP_C_HkStepCtlEvt_Retry_Step060_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_Retry_Step060-010
struct ASL_Hakkason_BP_C_HkStepCtlEvt_Retry_Step060_010_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0041_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0041_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0041_Step060-010
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0041_Step060_010_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA1_Step060-010
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA1_Step060_010_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_ItemGetB_Step070-000
struct ASL_Hakkason_BP_C_HkStepCtlEvt_ItemGetB_Step070_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_ItemGetA_Step070-000
struct ASL_Hakkason_BP_C_HkStepCtlEvt_ItemGetA_Step070_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_NextStep_Step070-000
struct ASL_Hakkason_BP_C_HkStepCtlEvt_NextStep_Step070_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0119_OnStart
struct ASL_Hakkason_BP_C_HkCsEvt_S0119_OnStart_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0119_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0119_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S1119_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S1119_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0119shedoor_Step080-000
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0119shedoor_Step080_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0119outdoor_Step080-000
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0119outdoor_Step080_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.Delegate_Step080-000
struct ASL_Hakkason_BP_C_Delegate_Step080_000_Params
{
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA1_Step080-000
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA1_Step080_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_DoorSyu_Step080-010
struct ASL_Hakkason_BP_C_HkStepCtlEvt_DoorSyu_Step080_010_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0006_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0006_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_DoorKKK_Step080-020
struct ASL_Hakkason_BP_C_HkStepCtlEvt_DoorKKK_Step080_020_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_JumpA1_Step080-030
struct ASL_Hakkason_BP_C_HkStepCtl_JumpA1_Step080_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0006_OnEnd_080-030
struct ASL_Hakkason_BP_C_HkCsEvt_S0006_OnEnd_080_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_DoorKKK_Step080-030
struct ASL_Hakkason_BP_C_HkStepCtlEvt_DoorKKK_Step080_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0054_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0054_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0054Trg
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0054Trg_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_Retry_Step090-010
struct ASL_Hakkason_BP_C_HkStepCtlEvt_Retry_Step090_010_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.M03_S0054_BattleEnd_Lose
struct ASL_Hakkason_BP_C_M03_S0054_BattleEnd_Lose_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.M03_S0054_BattleEnd_Win
struct ASL_Hakkason_BP_C_M03_S0054_BattleEnd_Win_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA1_Step090-010
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA1_Step090_010_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.M03_S0093_BattleLose
struct ASL_Hakkason_BP_C_M03_S0093_BattleLose_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0094_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0094_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.M03_S0093_BattleEnd
struct ASL_Hakkason_BP_C_M03_S0093_BattleEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0093_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0093_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0055_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0055_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.Delegate_Step100-000
struct ASL_Hakkason_BP_C_Delegate_Step100_000_Params
{
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0008_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0008_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0008Trg
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0008Trg_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0095_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0095_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA1_Step100-000
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA1_Step100_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0068_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0068_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0068Trg
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0068Trg_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0070_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0070_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0069_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0069_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0069_OnStart
struct ASL_Hakkason_BP_C_HkCsEvt_S0069_OnStart_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0069Trg
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0069Trg_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0053_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0053_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.Delegate_Step110-020
struct ASL_Hakkason_BP_C_Delegate_Step110_020_Params
{
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0039_Step110-020
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0039_Step110_020_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_DoorHou_Step140-000
struct ASL_Hakkason_BP_C_HkStepCtlEvt_DoorHou_Step140_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_FirstBourakudai
struct ASL_Hakkason_BP_C_HkStepCtlEvt_FirstBourakudai_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0015_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0015_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_DoorSBK_Step130-010
struct ASL_Hakkason_BP_C_HkStepCtlEvt_DoorSBK_Step130_010_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0071_OnEnd_150001
struct ASL_Hakkason_BP_C_HkCsEvt_S0071_OnEnd_150001_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0071
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0071_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_FlagOn150-020-00
struct ASL_Hakkason_BP_C_HkStepCtlEvt_FlagOn150_020_00_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_AC150-020-00
struct ASL_Hakkason_BP_C_HkStepCtlEvt_AC150_020_00_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0092_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0092_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_ResultWait_Step150-010
struct ASL_Hakkason_BP_C_HkStepCtlEvt_ResultWait_Step150_010_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_Offetorybox_Step150-010
struct ASL_Hakkason_BP_C_HkStepCtlEvt_Offetorybox_Step150_010_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.Delegate_Step150-030
struct ASL_Hakkason_BP_C_Delegate_Step150_030_Params
{
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkEvt_S0039_Trigger_Step150-030
struct ASL_Hakkason_BP_C_HkEvt_S0039_Trigger_Step150_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverC1_Step160-000
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverC1_Step160_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverB1_Step160-000
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverB1_Step160_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA3_Step160-000
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA3_Step160_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA2_Step160-000
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA2_Step160_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA1_Step160-000
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA1_Step160_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_Flag152_On
struct ASL_Hakkason_BP_C_HkStepCtlEvt_Flag152_On_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0097_OnStart
struct ASL_Hakkason_BP_C_HkCsEvt_S0097_OnStart_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0097_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0097_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0097
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0097_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0101_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0101_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0121_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0121_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.M03_S0097_BattleEnd_Lose
struct ASL_Hakkason_BP_C_M03_S0097_BattleEnd_Lose_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.M03_S0097_BattleEnd_Win
struct ASL_Hakkason_BP_C_M03_S0097_BattleEnd_Win_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA1_Step160-020
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA1_Step160_020_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0102_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0102_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0112_OnEnd_Next
struct ASL_Hakkason_BP_C_HkCsEvt_S0112_OnEnd_Next_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0112_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0112_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_Door_Step160-050
struct ASL_Hakkason_BP_C_HkStepCtlEvt_Door_Step160_050_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0112_OnEnd_Step160-040
struct ASL_Hakkason_BP_C_HkCsEvt_S0112_OnEnd_Step160_040_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_Door_Step160-040
struct ASL_Hakkason_BP_C_HkStepCtlEvt_Door_Step160_040_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkScEvt_OnEnd_16061
struct ASL_Hakkason_BP_C_HkScEvt_OnEnd_16061_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA1_Step160-060
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA1_Step160_060_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_Offetorybox_Step160-060
struct ASL_Hakkason_BP_C_HkStepCtlEvt_Offetorybox_Step160_060_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0071_OnEnd_160001
struct ASL_Hakkason_BP_C_HkCsEvt_S0071_OnEnd_160001_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_ResultWait_Step160-000
struct ASL_Hakkason_BP_C_HkStepCtlEvt_ResultWait_Step160_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_Inventory_Step160-000
struct ASL_Hakkason_BP_C_HkStepCtlEvt_Inventory_Step160_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_SearchEnd_Step160-070
struct ASL_Hakkason_BP_C_HkStepCtlEvt_SearchEnd_Step160_070_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkScEvt_S0104_OnEnd_16072
struct ASL_Hakkason_BP_C_HkScEvt_S0104_OnEnd_16072_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_ResultWait_Step160-071
struct ASL_Hakkason_BP_C_HkStepCtlEvt_ResultWait_Step160_071_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_Offetorybox_Step160-071
struct ASL_Hakkason_BP_C_HkStepCtlEvt_Offetorybox_Step160_071_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA1_Step160-071
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA1_Step160_071_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.NPCSpawn
struct ASL_Hakkason_BP_C_NPCSpawn_Params
{
	struct FGameplayTag                                NPCID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_TrophySet_Step160-084
struct ASL_Hakkason_BP_C_HkStepCtlEvt_TrophySet_Step160_084_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA2_Step160-080
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA2_Step160_080_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_FlagOn_Step160-084
struct ASL_Hakkason_BP_C_HkStepCtlEvt_FlagOn_Step160_084_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_OffetoryboxAreaOut_Step160-084
struct ASL_Hakkason_BP_C_HkStepCtlEvt_OffetoryboxAreaOut_Step160_084_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_OffetoryboxArea_Step160-084
struct ASL_Hakkason_BP_C_HkStepCtlEvt_OffetoryboxArea_Step160_084_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA1_Step160-084
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA1_Step160_084_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_BranchA_Step160-090
struct ASL_Hakkason_BP_C_HkStepCtl_BranchA_Step160_090_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_TalkEnd_Step170-000
struct ASL_Hakkason_BP_C_HkStepCtlEvt_TalkEnd_Step170_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_SHEhouseB_Step170-000
struct ASL_Hakkason_BP_C_HkStepCtlEvt_SHEhouseB_Step170_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_SHEhouseA_Step170-000
struct ASL_Hakkason_BP_C_HkStepCtlEvt_SHEhouseA_Step170_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA1_Step170-003
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA1_Step170_003_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverB1_Step170-006
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverB1_Step170_006_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_Hirobain_Step170-006
struct ASL_Hakkason_BP_C_HkStepCtlEvt_Hirobain_Step170_006_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA1_Step170-006
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA1_Step170_006_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0107_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0107_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0107_OnStart
struct ASL_Hakkason_BP_C_HkCsEvt_S0107_OnStart_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0107
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0107_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.M03_S0107first_BattleEnd_Lose
struct ASL_Hakkason_BP_C_M03_S0107first_BattleEnd_Lose_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.M03_S0107first_BattleEnd_Win
struct ASL_Hakkason_BP_C_M03_S0107first_BattleEnd_Win_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA1_Step170-010
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA1_Step170_010_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0108_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0108_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.M03_S0107_BattleEnd_Lose
struct ASL_Hakkason_BP_C_M03_S0107_BattleEnd_Lose_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.M03_S0107_BattleEnd_Win
struct ASL_Hakkason_BP_C_M03_S0107_BattleEnd_Win_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_Retry_Step170-010
struct ASL_Hakkason_BP_C_HkStepCtlEvt_Retry_Step170_010_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0019_OnEnd_Step180-010
struct ASL_Hakkason_BP_C_HkCsEvt_S0019_OnEnd_Step180_010_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0019_OnStart_Step180-010
struct ASL_Hakkason_BP_C_HkCsEvt_S0019_OnStart_Step180_010_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0019_Step180-010
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0019_Step180_010_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkExspUnbind_Step180-020
struct ASL_Hakkason_BP_C_HkExspUnbind_Step180_020_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkExspEvent_ItemChange
struct ASL_Hakkason_BP_C_HkExspEvent_ItemChange_Params
{
	struct FName                                       ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0110
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0110_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0110_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0110_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_SearchYo
struct ASL_Hakkason_BP_C_HkStepCtlEvt_SearchYo_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0034End
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0034End_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.EvtOnDialogCancel
struct ASL_Hakkason_BP_C_EvtOnDialogCancel_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkEvt_CsStep180030
struct ASL_Hakkason_BP_C_HkEvt_CsStep180030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.EvtOnDialogDecide
struct ASL_Hakkason_BP_C_EvtOnDialogDecide_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.EndTestEvt
struct ASL_Hakkason_BP_C_EndTestEvt_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.TestEvt
struct ASL_Hakkason_BP_C_TestEvt_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0114_OnStart
struct ASL_Hakkason_BP_C_HkCsEvt_S0114_OnStart_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ExspLevelLoad_End
struct ASL_Hakkason_BP_C_ExspLevelLoad_End_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ExspLevelLoad_Wait
struct ASL_Hakkason_BP_C_ExspLevelLoad_Wait_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.ExspLevelLoad_180-030
struct ASL_Hakkason_BP_C_ExspLevelLoad_180_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.OnFinishLevelLoaded_BellTower
struct ASL_Hakkason_BP_C_OnFinishLevelLoaded_BellTower_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_BtKame
struct ASL_Hakkason_BP_C_HkStepCtlEvt_BtKame_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverB1_Step180-030
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverB1_Step180_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA3_Step180-030
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA3_Step180_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0075_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0075_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_BellTower
struct ASL_Hakkason_BP_C_HkStepCtlEvt_BellTower_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0111_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0111_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_ResultWait_Step180-030
struct ASL_Hakkason_BP_C_HkStepCtlEvt_ResultWait_Step180_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0113
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0113_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0114_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0114_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0113_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0113_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0113_OnStart
struct ASL_Hakkason_BP_C_HkCsEvt_S0113_OnStart_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA2_Step180-030
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA2_Step180_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0034_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0034_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0034
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0034_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA1_Step180-030
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA1_Step180_030_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.BellTower_HouohuSerachOn
struct ASL_Hakkason_BP_C_BellTower_HouohuSerachOn_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.BellTower_RootCheck_P6
struct ASL_Hakkason_BP_C_BellTower_RootCheck_P6_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA2_Step180-040
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA2_Step180_040_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_S0084_Step180-040
struct ASL_Hakkason_BP_C_HkStepCtlEvt_S0084_Step180_040_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA1_Step180-040
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA1_Step180_040_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0084_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0084_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0129_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0129_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0125_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0125_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.StartBellTowerHiddenRoomGimmickEvent
struct ASL_Hakkason_BP_C_StartBellTowerHiddenRoomGimmickEvent_Params
{
	bool                                               HintOn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.OnEndBellTowerHiddenRoomGimmickEvent
struct ASL_Hakkason_BP_C_OnEndBellTowerHiddenRoomGimmickEvent_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.BellTower_RootCheck_P5
struct ASL_Hakkason_BP_C_BellTower_RootCheck_P5_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.BellTower_RootCheck_P4
struct ASL_Hakkason_BP_C_BellTower_RootCheck_P4_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.BellTower_RootCheck_P3
struct ASL_Hakkason_BP_C_BellTower_RootCheck_P3_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.BellTower_RootCheck_P2
struct ASL_Hakkason_BP_C_BellTower_RootCheck_P2_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.BellTower_RootCheck_P1
struct ASL_Hakkason_BP_C_BellTower_RootCheck_P1_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0035_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0035_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0076_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0076_OnEnd_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0076_OnStart
struct ASL_Hakkason_BP_C_HkCsEvt_S0076_OnStart_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_DoorYou_Step190-000
struct ASL_Hakkason_BP_C_HkStepCtlEvt_DoorYou_Step190_000_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkCsEvt_S0077_OnEnd
struct ASL_Hakkason_BP_C_HkCsEvt_S0077_OnEnd_Params
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

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtlEvt_LeadFollowChange
struct ASL_Hakkason_BP_C_HkStepCtlEvt_LeadFollowChange_Params
{
};

// Function SL_Hakkason_BP.SL_Hakkason_BP_C.HkStepCtl_RecoverA_LeadFollow_Change
struct ASL_Hakkason_BP_C_HkStepCtl_RecoverA_LeadFollow_Change_Params
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
