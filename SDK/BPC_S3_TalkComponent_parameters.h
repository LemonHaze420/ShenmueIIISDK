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

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CommandStartShowHP
struct UBPC_S3_TalkComponent_C_CommandStartShowHP_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CommandCancelKS
struct UBPC_S3_TalkComponent_C_CommandCancelKS_Params
{
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CommandStartKS
struct UBPC_S3_TalkComponent_C_CommandStartKS_Params
{
	bool                                               bNoCancel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CommandCancelMessagewaiting
struct UBPC_S3_TalkComponent_C_CommandCancelMessagewaiting_Params
{
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CommandStartMessagewaiting
struct UBPC_S3_TalkComponent_C_CommandStartMessagewaiting_Params
{
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.ShouldDelayAction
struct UBPC_S3_TalkComponent_C_ShouldDelayAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CheckItem
struct UBPC_S3_TalkComponent_C_CheckItem_Params
{
	TMap<struct FName, int>                            ItemMap;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Possess;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.GetEventIconType
struct UBPC_S3_TalkComponent_C_GetEventIconType_Params
{
	ES3ActionIconType                                  Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AnimIcon;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.IsShowDLCIcon
struct UBPC_S3_TalkComponent_C_IsShowDLCIcon_Params
{
	bool                                               Show;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AnimIcon;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.DoCancelButton_Impl
struct UBPC_S3_TalkComponent_C_DoCancelButton_Impl_Params
{
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CheckSubQuest
struct UBPC_S3_TalkComponent_C_CheckSubQuest_Params
{
	class UDataTable*                                  DataTable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NeedCheck;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               InProgress;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AnimIcon;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.DoStepButton_Impl
struct UBPC_S3_TalkComponent_C_DoStepButton_Impl_Params
{
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.IsShowSubQuestIcon
struct UBPC_S3_TalkComponent_C_IsShowSubQuestIcon_Params
{
	bool                                               Show;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               AnimIcon;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.IntToGameTime
struct UBPC_S3_TalkComponent_C_IntToGameTime_Params
{
	int                                                InVal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.ParseCurrentStepSchedule
struct UBPC_S3_TalkComponent_C_ParseCurrentStepSchedule_Params
{
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.GetIsActionButtonExec
struct UBPC_S3_TalkComponent_C_GetIsActionButtonExec_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.GetStartTalkActionType
struct UBPC_S3_TalkComponent_C_GetStartTalkActionType_Params
{
	bool                                               bCanTalk;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FS3DetectActionParam                        Params;                                                   // (Parm, OutParm)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.CanSit
struct UBPC_S3_TalkComponent_C_CanSit_Params
{
	class AActor*                                      SitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutputLog;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.DebugPrintCurrentDetecttingActor
struct UBPC_S3_TalkComponent_C_DebugPrintCurrentDetecttingActor_Params
{
	class ABP_S3DetectAction_C*                        DetectActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.SetActionButtonExec
struct UBPC_S3_TalkComponent_C_SetActionButtonExec_Params
{
	bool                                               flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.GetJawPointingParameter
struct UBPC_S3_TalkComponent_C_GetJawPointingParameter_Params
{
	bool                                               bFingerPointing;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AnimBlendTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.SetJawPointingParamater
struct UBPC_S3_TalkComponent_C_SetJawPointingParamater_Params
{
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AnimBlendTime;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.JawPointingMotionFlagOFF
struct UBPC_S3_TalkComponent_C_JawPointingMotionFlagOFF_Params
{
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.JawPointingMotionFlagON
struct UBPC_S3_TalkComponent_C_JawPointingMotionFlagON_Params
{
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.GetFingerPointingMode
struct UBPC_S3_TalkComponent_C_GetFingerPointingMode_Params
{
	ES3FingerPointingMode                              CurrentMode;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.SetFingerPointingMode
struct UBPC_S3_TalkComponent_C_SetFingerPointingMode_Params
{
	ES3FingerPointingMode                              NewMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.SetFingerPointingParamater
struct UBPC_S3_TalkComponent_C_SetFingerPointingParamater_Params
{
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AnimBlendTime;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.FingerPointingMotionFlagOFF
struct UBPC_S3_TalkComponent_C_FingerPointingMotionFlagOFF_Params
{
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.FingerPointingMotionFlagON
struct UBPC_S3_TalkComponent_C_FingerPointingMotionFlagON_Params
{
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.GetFingerPointingParameter
struct UBPC_S3_TalkComponent_C_GetFingerPointingParameter_Params
{
	bool                                               bFingerPointing;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AnimBlendTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.GetActionType
struct UBPC_S3_TalkComponent_C_GetActionType_Params
{
	bool                                               Sight;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS3DetectActionParam>                Params;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.SetEventIdName
struct UBPC_S3_TalkComponent_C_SetEventIdName_Params
{
	struct FName                                       newParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.ReceiveBeginPlay
struct UBPC_S3_TalkComponent_C_ReceiveBeginPlay_Params
{
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.doActionButton
struct UBPC_S3_TalkComponent_C_doActionButton_Params
{
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.doStepButton
struct UBPC_S3_TalkComponent_C_doStepButton_Params
{
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.doSkipButton
struct UBPC_S3_TalkComponent_C_doSkipButton_Params
{
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.doCancelButton
struct UBPC_S3_TalkComponent_C_doCancelButton_Params
{
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.OnBSEventStart
struct UBPC_S3_TalkComponent_C_OnBSEventStart_Params
{
	class AActor*                                      NpcActors;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTalkScript*                                 TalkScript;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.BindsTalkComponent
struct UBPC_S3_TalkComponent_C_BindsTalkComponent_Params
{
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.InitializeTalk
struct UBPC_S3_TalkComponent_C_InitializeTalk_Params
{
	class US3TalkDataListBase*                         TalkDataList;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FNPCTalkEventInfo                           TalkEventInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.DecideDetectAction
struct UBPC_S3_TalkComponent_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  ActionType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.OnStepChanged
struct UBPC_S3_TalkComponent_C_OnStepChanged_Params
{
	int                                                SetSteps;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.OnPcEnableScheduleEvent
struct UBPC_S3_TalkComponent_C_OnPcEnableScheduleEvent_Params
{
	float                                              receiveTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.OnReceiveTimeEvent
struct UBPC_S3_TalkComponent_C_OnReceiveTimeEvent_Params
{
	int                                                EventIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.ReceiveEndPlay
struct UBPC_S3_TalkComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.ChangeStep
struct UBPC_S3_TalkComponent_C_ChangeStep_Params
{
	int                                                SetSteps;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.ChangeFlag
struct UBPC_S3_TalkComponent_C_ChangeFlag_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3_TalkComponent.BPC_S3_TalkComponent_C.ExecuteUbergraph_BPC_S3_TalkComponent
struct UBPC_S3_TalkComponent_C_ExecuteUbergraph_BPC_S3_TalkComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
