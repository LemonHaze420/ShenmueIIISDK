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

// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckInitTag
struct ABP_MainFlowManager_C_CheckInitTag_Params
{
	bool                                               Initialized;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.SetInitTag
struct ABP_MainFlowManager_C_SetInitTag_Params
{
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckAutoSave
struct ABP_MainFlowManager_C_CheckAutoSave_Params
{
	int                                                CurFlag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.MFsub_RedLineMemoFlag_Cb
struct ABP_MainFlowManager_C_MFsub_RedLineMemoFlag_Cb_Params
{
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.MFsub_RedLineMemoFlag_Hk
struct ABP_MainFlowManager_C_MFsub_RedLineMemoFlag_Hk_Params
{
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.SetupMainFlow
struct ABP_MainFlowManager_C_SetupMainFlow_Params
{
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckDelegateSafe
struct ABP_MainFlowManager_C_CheckDelegateSafe_Params
{
	int                                                Exec_Step;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FindResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.MakeActorControl_AfterAdd
struct ABP_MainFlowManager_C_MakeActorControl_AfterAdd_Params
{
	TEnumAsByte<EN_MainFlowActorID>                    Actor_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Actor_Class;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MakeResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.OneClearMessageControl
struct ABP_MainFlowManager_C_OneClearMessageControl_Params
{
	TEnumAsByte<EN_MainFlowMsgDestinationID>           Destination_ID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.OneClearActorControl
struct ABP_MainFlowManager_C_OneClearActorControl_Params
{
	TEnumAsByte<EN_MainFlowActorID>                    Actor_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.GameTimerControl
struct ABP_MainFlowManager_C_GameTimerControl_Params
{
	bool                                               Run_GameTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.FindEventMan
struct ABP_MainFlowManager_C_FindEventMan_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckIntervalMessage
struct ABP_MainFlowManager_C_CheckIntervalMessage_Params
{
	float                                              DeltaSEcond;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.ReservationInquiryMessage
struct ABP_MainFlowManager_C_ReservationInquiryMessage_Params
{
	float                                              IntervalTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.MessageControlWorkSub
struct ABP_MainFlowManager_C_MessageControlWorkSub_Params
{
	int                                                Destination_ID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CountUp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FindResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.ReceiveMessageControl
struct ABP_MainFlowManager_C_ReceiveMessageControl_Params
{
	TEnumAsByte<EN_MainFlowMsgDestinationID>           Destination_ID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               On_Massage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, OutParm, ZeroConstructor)
	class AActor*                                      Sender;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.InquiryMessageControl
struct ABP_MainFlowManager_C_InquiryMessageControl_Params
{
	TEnumAsByte<EN_MainFlowMsgDestinationID>           Destination_ID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExecDispatcher;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               On_Message;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.SendMessageControl
struct ABP_MainFlowManager_C_SendMessageControl_Params
{
	TEnumAsByte<EN_MainFlowMsgDestinationID>           Destination_ID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class AActor*                                      Sender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.ResetMessageControl
struct ABP_MainFlowManager_C_ResetMessageControl_Params
{
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckCounterActorControl
struct ABP_MainFlowManager_C_CheckCounterActorControl_Params
{
	TEnumAsByte<EN_MainFlowActorID>                    Actor_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Save_Counter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Kill;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.CallRemote
struct ABP_MainFlowManager_C_CallRemote_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.GetCounterActorControl
struct ABP_MainFlowManager_C_GetCounterActorControl_Params
{
	TEnumAsByte<EN_MainFlowActorID>                    Actor_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      renewal_counter;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      entry_actor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.RenewalActorControl
struct ABP_MainFlowManager_C_RenewalActorControl_Params
{
	TEnumAsByte<EN_MainFlowActorID>                    Actor_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.MakeActorControl
struct ABP_MainFlowManager_C_MakeActorControl_Params
{
	TEnumAsByte<EN_MainFlowActorID>                    Actor_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Actor_Class;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MakeResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.ResetActorControl
struct ABP_MainFlowManager_C_ResetActorControl_Params
{
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.PushIndependenceDestructor
struct ABP_MainFlowManager_C_PushIndependenceDestructor_Params
{
	int                                                MapType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Independence_Step;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Add_Stock;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.PushDestructor_Sub
struct ABP_MainFlowManager_C_PushDestructor_Sub_Params
{
	int                                                MapType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Step_Value;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Add_Stock;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.SetStepControl_CurrentStep
struct ABP_MainFlowManager_C_SetStepControl_CurrentStep_Params
{
	int                                                SetStep;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Change_Current;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.PlayerbleControl
struct ABP_MainFlowManager_C_PlayerbleControl_Params
{
	bool                                               Playable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.CulcStepControl_PlayerableSP
struct ABP_MainFlowManager_C_CulcStepControl_PlayerableSP_Params
{
	int                                                Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.GetDelegateSafe
struct ABP_MainFlowManager_C_GetDelegateSafe_Params
{
	int                                                Exec_Step;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FindResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       EventNameRC;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                GetKey;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckLoadEnd
struct ABP_MainFlowManager_C_CheckLoadEnd_Params
{
	bool                                               LoadEnd;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.ResetNewStepControl
struct ABP_MainFlowManager_C_ResetNewStepControl_Params
{
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.SelectStepID
struct ABP_MainFlowManager_C_SelectStepID_Params
{
	int                                                Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MapType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      StepID;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               FindResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckPlayableSP
struct ABP_MainFlowManager_C_CheckPlayableSP_Params
{
	int                                                Exec_Step;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      SP;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.ChangeStepControl_PlayerableSP
struct ABP_MainFlowManager_C_ChangeStepControl_PlayerableSP_Params
{
	int                                                CheckStep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SP;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.GetStepControl_ExecStep
struct ABP_MainFlowManager_C_GetStepControl_ExecStep_Params
{
	int                                                Now_Exec;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.SetStepControl_ExecStep
struct ABP_MainFlowManager_C_SetStepControl_ExecStep_Params
{
	int                                                Exec_Step;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Now_Exec;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.PopDestructor
struct ABP_MainFlowManager_C_PopDestructor_Params
{
	int                                                Exec_Step;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Remove_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.GetCutScenStockTimes
struct ABP_MainFlowManager_C_GetCutScenStockTimes_Params
{
	int                                                StockTimes;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.KillCutSceneEvent
struct ABP_MainFlowManager_C_KillCutSceneEvent_Params
{
	struct FName                                       CutsceneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               KillResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.GetCutSceneEvent
struct ABP_MainFlowManager_C_GetCutSceneEvent_Params
{
	struct FName                                       CutsceneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Get_EndEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FindResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       EventName;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.CreateCutSceneControl
struct ABP_MainFlowManager_C_CreateCutSceneControl_Params
{
	struct FName                                       CutsceneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseFade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartEventName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       EndEventName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Entry_Result;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.ResetCScontrol
struct ABP_MainFlowManager_C_ResetCScontrol_Params
{
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.GetDestructor_List
struct ABP_MainFlowManager_C_GetDestructor_List_Params
{
	TArray<struct FST_MainFlowStockDestructor>         DestructorList;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.ChangeStepControl_SubStep
struct ABP_MainFlowManager_C_ChangeStepControl_SubStep_Params
{
	int                                                CheckStep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                New_SubStep;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.GetStepControl_CurrentStep
struct ABP_MainFlowManager_C_GetStepControl_CurrentStep_Params
{
	int                                                Current;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.ChangeStepControl_Flag
struct ABP_MainFlowManager_C_ChangeStepControl_Flag_Params
{
	int                                                CheckStep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                New_Flag;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                mask;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                FlagValue;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.GetStepControl_Info
struct ABP_MainFlowManager_C_GetStepControl_Info_Params
{
	int                                                CheckStep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                control_flag;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                sub_step;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      step_id;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Playable_SP;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.PushDestructor
struct ABP_MainFlowManager_C_PushDestructor_Params
{
	int                                                MapType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Add_Stock;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.ChangeStepControl
struct ABP_MainFlowManager_C_ChangeStepControl_Params
{
	int                                                new_stepid;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                map_type;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               New_Step_Control;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.StepControlBitToBranchID
struct ABP_MainFlowManager_C_StepControlBitToBranchID_Params
{
	int                                                CurFlag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_MainFlowStepBranchID>               BranchID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ChangeFlag;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Change;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.AllCollisionChange
struct ABP_MainFlowManager_C_AllCollisionChange_Params
{
	bool                                               On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckEventOccurs
struct ABP_MainFlowManager_C_CheckEventOccurs_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckFollowSHEStep
struct ABP_MainFlowManager_C_CheckFollowSHEStep_Params
{
	bool                                               Need_Follow_SHE;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckLevelSchedule
struct ABP_MainFlowManager_C_CheckLevelSchedule_Params
{
	int                                                Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.LoadedStartLevel_Impl
struct ABP_MainFlowManager_C_LoadedStartLevel_Impl_Params
{
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.MakeAppointControl
struct ABP_MainFlowManager_C_MakeAppointControl_Params
{
	struct FVector                                     JumpPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName                                       EyeCatchID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Add_Day;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Hour;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Minute;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Enable_Time_Min;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Enable_Time_Max;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Change_Step;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LAbelLeft;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartRemotoEvent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartEndEvent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Can_not_kill;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SkipEndFade;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.KillAppointControl
struct ABP_MainFlowManager_C_KillAppointControl_Params
{
	bool                                               forced_Kill;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               kill_exec;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.ExecTickDelegate
struct ABP_MainFlowManager_C_ExecTickDelegate_Params
{
	bool                                               enable_exec;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Event_Name;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.SetTickDelegate
struct ABP_MainFlowManager_C_SetTickDelegate_Params
{
	int                                                set_step;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Add_result;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.ResetDelegate
struct ABP_MainFlowManager_C_ResetDelegate_Params
{
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.GetDelegate
struct ABP_MainFlowManager_C_GetDelegate_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FindResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       EventNameRC;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                GetKey;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.SetDelegate
struct ABP_MainFlowManager_C_SetDelegate_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControlBit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ExecStep;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Add_result;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.MFsub_SetGlobalFlag
struct ABP_MainFlowManager_C_MFsub_SetGlobalFlag_Params
{
	struct FName                                       FlagID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SetResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.MFsub_GetGlobalFlag
struct ABP_MainFlowManager_C_MFsub_GetGlobalFlag_Params
{
	struct FName                                       FlagID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FlagValue;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.StartChildFlow
struct ABP_MainFlowManager_C_StartChildFlow_Params
{
	struct FName                                       ChildFlowName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StartResult;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.GetCurrentChildFlow
struct ABP_MainFlowManager_C_GetCurrentChildFlow_Params
{
	struct FName                                       CurrentFlowName;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.GetChildFlowCurrentID
struct ABP_MainFlowManager_C_GetChildFlowCurrentID_Params
{
	int                                                ChildFlowID;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.ChangeChildFlowCurrentID
struct ABP_MainFlowManager_C_ChangeChildFlowCurrentID_Params
{
	int                                                ChangeAfterID;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.CheckChildFlowCurrentID
struct ABP_MainFlowManager_C_CheckChildFlowCurrentID_Params
{
	int                                                CheckId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Alive_to_survive;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.LiveCheckChildFlow
struct ABP_MainFlowManager_C_LiveCheckChildFlow_Params
{
	struct FName                                       FlowName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LiveResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.ResetChildFlow
struct ABP_MainFlowManager_C_ResetChildFlow_Params
{
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.ResetEventMan
struct ABP_MainFlowManager_C_ResetEventMan_Params
{
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.RemoveEventMan
struct ABP_MainFlowManager_C_RemoveEventMan_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               rc;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.UnBindEventMan
struct ABP_MainFlowManager_C_UnBindEventMan_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CarrigeUnbind;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.ExecEventMan
struct ABP_MainFlowManager_C_ExecEventMan_Params
{
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.CreateEventMan
struct ABP_MainFlowManager_C_CreateEventMan_Params
{
	class UPrimitiveComponent*                         Trg_Compo_Name;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControlStatus;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_MainFlowEventType>                  EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TypeUniqueParameta;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Save;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               createresult;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.AddTag
struct ABP_MainFlowManager_C_AddTag_Params
{
	struct FString                                     TagName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.UserConstructionScript
struct ABP_MainFlowManager_C_UserConstructionScript_Params
{
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.MfEvt_EndAppoint
struct ABP_MainFlowManager_C_MfEvt_EndAppoint_Params
{
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.LoadedStartLevel
struct ABP_MainFlowManager_C_LoadedStartLevel_Params
{
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.MfEvt_StartAppoint
struct ABP_MainFlowManager_C_MfEvt_StartAppoint_Params
{
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.ChangedStep
struct ABP_MainFlowManager_C_ChangedStep_Params
{
	int                                                SetSteps;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.ReceiveTick
struct ABP_MainFlowManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.Reset
struct ABP_MainFlowManager_C_Reset_Params
{
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.ReceiveBeginPlay
struct ABP_MainFlowManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.ExecuteUbergraph_BP_MainFlowManager
struct ABP_MainFlowManager_C_ExecuteUbergraph_BP_MainFlowManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.RemoveEvent__DelegateSignature
struct ABP_MainFlowManager_C_RemoveEvent__DelegateSignature_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.NewSendMessage__DelegateSignature
struct ABP_MainFlowManager_C_NewSendMessage__DelegateSignature_Params
{
	TEnumAsByte<EN_MainFlowMsgDestinationID>           Current_Destination_ID;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.RenewalActorID__DelegateSignature
struct ABP_MainFlowManager_C_RenewalActorID__DelegateSignature_Params
{
	TEnumAsByte<EN_MainFlowActorID>                    ActorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RenewalCounter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.MainFlowDelegate__DelegateSignature
struct ABP_MainFlowManager_C_MainFlowDelegate__DelegateSignature_Params
{
};

// Function BP_MainFlowManager.BP_MainFlowManager_C.RemoteEventCall__DelegateSignature
struct ABP_MainFlowManager_C_RemoteEventCall__DelegateSignature_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
