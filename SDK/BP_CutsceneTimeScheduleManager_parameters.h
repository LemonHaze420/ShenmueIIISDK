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

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.GetCurrentStockEvent
struct ABP_CutsceneTimeScheduleManager_C_GetCurrentStockEvent_Params
{
	struct FName                                       newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.GetTime_ForceEventStop
struct ABP_CutsceneTimeScheduleManager_C_GetTime_ForceEventStop_Params
{
	float                                              AdjustTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               reserve_enable;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              reserve_time;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ChangeGimmickLock
struct ABP_CutsceneTimeScheduleManager_C_ChangeGimmickLock_Params
{
	bool                                               ExecLock;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.isForceEventStop_TimeEnable
struct ABP_CutsceneTimeScheduleManager_C_isForceEventStop_TimeEnable_Params
{
	bool                                               ForcedEventStop_TimeON;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ResetForceEventStop
struct ABP_CutsceneTimeScheduleManager_C_ResetForceEventStop_Params
{
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.isForceEventStop_Reserved
struct ABP_CutsceneTimeScheduleManager_C_isForceEventStop_Reserved_Params
{
	bool                                               ForcedEventStop_Reserved;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ReserveForcedEventStop
struct ABP_CutsceneTimeScheduleManager_C_ReserveForcedEventStop_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ChangeWorldTelecomLock
struct ABP_CutsceneTimeScheduleManager_C_ChangeWorldTelecomLock_Params
{
	bool                                               ExecLock;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.GetLockParent
struct ABP_CutsceneTimeScheduleManager_C_GetLockParent_Params
{
	struct FName                                       exec_lock;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckRewardLock
struct ABP_CutsceneTimeScheduleManager_C_CheckRewardLock_Params
{
	bool                                               exec_lock;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ReleaseRewardLock
struct ABP_CutsceneTimeScheduleManager_C_ReleaseRewardLock_Params
{
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartRewardLock
struct ABP_CutsceneTimeScheduleManager_C_StartRewardLock_Params
{
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ForcedReleaseStepLock
struct ABP_CutsceneTimeScheduleManager_C_ForcedReleaseStepLock_Params
{
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckStepLock
struct ABP_CutsceneTimeScheduleManager_C_CheckStepLock_Params
{
	bool                                               exec_lock;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartStepLock
struct ABP_CutsceneTimeScheduleManager_C_StartStepLock_Params
{
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.SetActive
struct ABP_CutsceneTimeScheduleManager_C_SetActive_Params
{
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckLock
struct ABP_CutsceneTimeScheduleManager_C_CheckLock_Params
{
	bool                                               exec_lock;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ResetTimeLinkTable
struct ABP_CutsceneTimeScheduleManager_C_ResetTimeLinkTable_Params
{
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.GetTimeLinkTableNextFoward
struct ABP_CutsceneTimeScheduleManager_C_GetTimeLinkTableNextFoward_Params
{
	TEnumAsByte<EN_CutSceneTimeSchduleMarkID>          TimeMarkID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.GetTimeLinkTableNext
struct ABP_CutsceneTimeScheduleManager_C_GetTimeLinkTableNext_Params
{
	TEnumAsByte<EN_CutSceneTimeSchduleMarkID>          TimeMarkID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.GetTimeLinkTable
struct ABP_CutsceneTimeScheduleManager_C_GetTimeLinkTable_Params
{
	TEnumAsByte<EN_CutSceneTimeSchduleMarkID>          TimeMarkID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.SetTimeLinkTable
struct ABP_CutsceneTimeScheduleManager_C_SetTimeLinkTable_Params
{
	TEnumAsByte<EN_CutSceneTimeSchduleMarkID>          TimeMarkID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SetValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.FindSchedulIndex
struct ABP_CutsceneTimeScheduleManager_C_FindSchedulIndex_Params
{
	struct FName                                       CutsceneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartExecFlagChange
struct ABP_CutsceneTimeScheduleManager_C_StartExecFlagChange_Params
{
	struct FName                                       InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Change;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckStockSchedule
struct ABP_CutsceneTimeScheduleManager_C_CheckStockSchedule_Params
{
	bool                                               stock_on;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.AddElapsedTime
struct ABP_CutsceneTimeScheduleManager_C_AddElapsedTime_Params
{
	struct FName                                       CutsceneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HourLater;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ExecStockEvent
struct ABP_CutsceneTimeScheduleManager_C_ExecStockEvent_Params
{
	bool                                               Event_Exec;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckStock
struct ABP_CutsceneTimeScheduleManager_C_CheckStock_Params
{
	bool                                               Stock_available;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartLock
struct ABP_CutsceneTimeScheduleManager_C_StartLock_Params
{
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ReleaseLock
struct ABP_CutsceneTimeScheduleManager_C_ReleaseLock_Params
{
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StockPushEvent
struct ABP_CutsceneTimeScheduleManager_C_StockPushEvent_Params
{
	struct FName                                       Event_Name;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Add;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CanEventStart
struct ABP_CutsceneTimeScheduleManager_C_CanEventStart_Params
{
	bool                                               Start_Enable;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckSchedule
struct ABP_CutsceneTimeScheduleManager_C_CheckSchedule_Params
{
	bool                                               ExecEvent;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.AddTimeSchedule
struct ABP_CutsceneTimeScheduleManager_C_AddTimeSchedule_Params
{
	struct FName                                       CutsceneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScheduleHour;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.IsTimeScheduleEnabled
struct ABP_CutsceneTimeScheduleManager_C_IsTimeScheduleEnabled_Params
{
	struct FName                                       CutsceneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnabled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StopTimeSchedule
struct ABP_CutsceneTimeScheduleManager_C_StopTimeSchedule_Params
{
	struct FName                                       CutscneName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartTimeSchedule
struct ABP_CutsceneTimeScheduleManager_C_StartTimeSchedule_Params
{
	struct FName                                       CutsceneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.IsCutsceneStartable
struct ABP_CutsceneTimeScheduleManager_C_IsCutsceneStartable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.UserConstructionScript
struct ABP_CutsceneTimeScheduleManager_C_UserConstructionScript_Params
{
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ReceiveTick
struct ABP_CutsceneTimeScheduleManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ExecuteUbergraph_BP_CutsceneTimeScheduleManager
struct ABP_CutsceneTimeScheduleManager_C_ExecuteUbergraph_BP_CutsceneTimeScheduleManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartElapsedTime__DelegateSignature
struct ABP_CutsceneTimeScheduleManager_C_StartElapsedTime__DelegateSignature_Params
{
	struct FName                                       CutsceneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartTimerCutscene__DelegateSignature
struct ABP_CutsceneTimeScheduleManager_C_StartTimerCutscene__DelegateSignature_Params
{
	struct FName                                       CutsceneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
