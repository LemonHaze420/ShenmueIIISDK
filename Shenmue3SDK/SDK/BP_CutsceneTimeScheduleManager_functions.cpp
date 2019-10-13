
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ChangeGimmickLock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ExecLock                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::ChangeGimmickLock(bool ExecLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ChangeGimmickLock");

	ABP_CutsceneTimeScheduleManager_C_ChangeGimmickLock_Params params;
	params.ExecLock = ExecLock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.isForceEventStop_TimeEnable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ForcedEventStop_TimeON         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::isForceEventStop_TimeEnable(bool* ForcedEventStop_TimeON)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.isForceEventStop_TimeEnable");

	ABP_CutsceneTimeScheduleManager_C_isForceEventStop_TimeEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForcedEventStop_TimeON != nullptr)
		*ForcedEventStop_TimeON = params.ForcedEventStop_TimeON;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ResetForceEventStop
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneTimeScheduleManager_C::ResetForceEventStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ResetForceEventStop");

	ABP_CutsceneTimeScheduleManager_C_ResetForceEventStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.isForceEventStop_Reserved
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ForcedEventStop_Reserved       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::isForceEventStop_Reserved(bool* ForcedEventStop_Reserved)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.isForceEventStop_Reserved");

	ABP_CutsceneTimeScheduleManager_C_isForceEventStop_Reserved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForcedEventStop_Reserved != nullptr)
		*ForcedEventStop_Reserved = params.ForcedEventStop_Reserved;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ReserveForcedEventStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::ReserveForcedEventStop(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ReserveForcedEventStop");

	ABP_CutsceneTimeScheduleManager_C_ReserveForcedEventStop_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ChangeWorldTelecomLock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ExecLock                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::ChangeWorldTelecomLock(bool ExecLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ChangeWorldTelecomLock");

	ABP_CutsceneTimeScheduleManager_C_ChangeWorldTelecomLock_Params params;
	params.ExecLock = ExecLock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.GetLockParent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   exec_lock                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::GetLockParent(struct FName* exec_lock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.GetLockParent");

	ABP_CutsceneTimeScheduleManager_C_GetLockParent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (exec_lock != nullptr)
		*exec_lock = params.exec_lock;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckRewardLock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           exec_lock                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::CheckRewardLock(bool* exec_lock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckRewardLock");

	ABP_CutsceneTimeScheduleManager_C_CheckRewardLock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (exec_lock != nullptr)
		*exec_lock = params.exec_lock;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ReleaseRewardLock
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneTimeScheduleManager_C::ReleaseRewardLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ReleaseRewardLock");

	ABP_CutsceneTimeScheduleManager_C_ReleaseRewardLock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartRewardLock
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneTimeScheduleManager_C::StartRewardLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartRewardLock");

	ABP_CutsceneTimeScheduleManager_C_StartRewardLock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ForcedReleaseStepLock
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneTimeScheduleManager_C::ForcedReleaseStepLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ForcedReleaseStepLock");

	ABP_CutsceneTimeScheduleManager_C_ForcedReleaseStepLock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckStepLock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           exec_lock                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::CheckStepLock(bool* exec_lock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckStepLock");

	ABP_CutsceneTimeScheduleManager_C_CheckStepLock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (exec_lock != nullptr)
		*exec_lock = params.exec_lock;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartStepLock
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneTimeScheduleManager_C::StartStepLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartStepLock");

	ABP_CutsceneTimeScheduleManager_C_StartStepLock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneTimeScheduleManager_C::SetActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.SetActive");

	ABP_CutsceneTimeScheduleManager_C_SetActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckLock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           exec_lock                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::CheckLock(bool* exec_lock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckLock");

	ABP_CutsceneTimeScheduleManager_C_CheckLock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (exec_lock != nullptr)
		*exec_lock = params.exec_lock;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ResetTimeLinkTable
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneTimeScheduleManager_C::ResetTimeLinkTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ResetTimeLinkTable");

	ABP_CutsceneTimeScheduleManager_C_ResetTimeLinkTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.GetTimeLinkTableNextFoward
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_CutSceneTimeSchduleMarkID> TimeMarkID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::GetTimeLinkTableNextFoward(TEnumAsByte<EN_CutSceneTimeSchduleMarkID> TimeMarkID, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.GetTimeLinkTableNextFoward");

	ABP_CutsceneTimeScheduleManager_C_GetTimeLinkTableNextFoward_Params params;
	params.TimeMarkID = TimeMarkID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.GetTimeLinkTableNext
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_CutSceneTimeSchduleMarkID> TimeMarkID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::GetTimeLinkTableNext(TEnumAsByte<EN_CutSceneTimeSchduleMarkID> TimeMarkID, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.GetTimeLinkTableNext");

	ABP_CutsceneTimeScheduleManager_C_GetTimeLinkTableNext_Params params;
	params.TimeMarkID = TimeMarkID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.GetTimeLinkTable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_CutSceneTimeSchduleMarkID> TimeMarkID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::GetTimeLinkTable(TEnumAsByte<EN_CutSceneTimeSchduleMarkID> TimeMarkID, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.GetTimeLinkTable");

	ABP_CutsceneTimeScheduleManager_C_GetTimeLinkTable_Params params;
	params.TimeMarkID = TimeMarkID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.SetTimeLinkTable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_CutSceneTimeSchduleMarkID> TimeMarkID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SetValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::SetTimeLinkTable(TEnumAsByte<EN_CutSceneTimeSchduleMarkID> TimeMarkID, bool SetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.SetTimeLinkTable");

	ABP_CutsceneTimeScheduleManager_C_SetTimeLinkTable_Params params;
	params.TimeMarkID = TimeMarkID;
	params.SetValue = SetValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.FindSchedulIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   CutsceneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::FindSchedulIndex(const struct FName& CutsceneName, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.FindSchedulIndex");

	ABP_CutsceneTimeScheduleManager_C_FindSchedulIndex_Params params;
	params.CutsceneName = CutsceneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartExecFlagChange
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Change                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::StartExecFlagChange(const struct FName& InputPin, bool* Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartExecFlagChange");

	ABP_CutsceneTimeScheduleManager_C_StartExecFlagChange_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Change != nullptr)
		*Change = params.Change;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckStockSchedule
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           stock_on                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::CheckStockSchedule(bool* stock_on)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckStockSchedule");

	ABP_CutsceneTimeScheduleManager_C_CheckStockSchedule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (stock_on != nullptr)
		*stock_on = params.stock_on;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.AddElapsedTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutsceneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HourLater                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::AddElapsedTime(const struct FName& CutsceneName, float HourLater)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.AddElapsedTime");

	ABP_CutsceneTimeScheduleManager_C_AddElapsedTime_Params params;
	params.CutsceneName = CutsceneName;
	params.HourLater = HourLater;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ExecStockEvent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Event_Exec                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::ExecStockEvent(bool* Event_Exec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ExecStockEvent");

	ABP_CutsceneTimeScheduleManager_C_ExecStockEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event_Exec != nullptr)
		*Event_Exec = params.Event_Exec;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckStock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Stock_available                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::CheckStock(bool* Stock_available)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckStock");

	ABP_CutsceneTimeScheduleManager_C_CheckStock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stock_available != nullptr)
		*Stock_available = params.Stock_available;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartLock
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneTimeScheduleManager_C::StartLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartLock");

	ABP_CutsceneTimeScheduleManager_C_StartLock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ReleaseLock
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneTimeScheduleManager_C::ReleaseLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ReleaseLock");

	ABP_CutsceneTimeScheduleManager_C_ReleaseLock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StockPushEvent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Event_Name                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Add                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::StockPushEvent(const struct FName& Event_Name, bool* Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StockPushEvent");

	ABP_CutsceneTimeScheduleManager_C_StockPushEvent_Params params;
	params.Event_Name = Event_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Add != nullptr)
		*Add = params.Add;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CanEventStart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Start_Enable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::CanEventStart(bool* Start_Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CanEventStart");

	ABP_CutsceneTimeScheduleManager_C_CanEventStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start_Enable != nullptr)
		*Start_Enable = params.Start_Enable;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckSchedule
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ExecEvent                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::CheckSchedule(bool* ExecEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckSchedule");

	ABP_CutsceneTimeScheduleManager_C_CheckSchedule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecEvent != nullptr)
		*ExecEvent = params.ExecEvent;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.AddTimeSchedule
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutsceneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ScheduleHour                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::AddTimeSchedule(const struct FName& CutsceneName, float ScheduleHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.AddTimeSchedule");

	ABP_CutsceneTimeScheduleManager_C_AddTimeSchedule_Params params;
	params.CutsceneName = CutsceneName;
	params.ScheduleHour = ScheduleHour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.IsTimeScheduleEnabled
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   CutsceneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnabled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::IsTimeScheduleEnabled(const struct FName& CutsceneName, bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.IsTimeScheduleEnabled");

	ABP_CutsceneTimeScheduleManager_C_IsTimeScheduleEnabled_Params params;
	params.CutsceneName = CutsceneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StopTimeSchedule
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutscneName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::StopTimeSchedule(const struct FName& CutscneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StopTimeSchedule");

	ABP_CutsceneTimeScheduleManager_C_StopTimeSchedule_Params params;
	params.CutscneName = CutscneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartTimeSchedule
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutsceneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::StartTimeSchedule(const struct FName& CutsceneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartTimeSchedule");

	ABP_CutsceneTimeScheduleManager_C_StartTimeSchedule_Params params;
	params.CutsceneName = CutsceneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.IsCutsceneStartable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneTimeScheduleManager_C::IsCutsceneStartable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.IsCutsceneStartable");

	ABP_CutsceneTimeScheduleManager_C_IsCutsceneStartable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CutsceneTimeScheduleManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.UserConstructionScript");

	ABP_CutsceneTimeScheduleManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ReceiveTick");

	ABP_CutsceneTimeScheduleManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ExecuteUbergraph_BP_CutsceneTimeScheduleManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::ExecuteUbergraph_BP_CutsceneTimeScheduleManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ExecuteUbergraph_BP_CutsceneTimeScheduleManager");

	ABP_CutsceneTimeScheduleManager_C_ExecuteUbergraph_BP_CutsceneTimeScheduleManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartElapsedTime__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutsceneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::StartElapsedTime__DelegateSignature(const struct FName& CutsceneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartElapsedTime__DelegateSignature");

	ABP_CutsceneTimeScheduleManager_C_StartElapsedTime__DelegateSignature_Params params;
	params.CutsceneName = CutsceneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartTimerCutscene__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CutsceneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::StartTimerCutscene__DelegateSignature(const struct FName& CutsceneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartTimerCutscene__DelegateSignature");

	ABP_CutsceneTimeScheduleManager_C_StartTimerCutscene__DelegateSignature_Params params;
	params.CutsceneName = CutsceneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
