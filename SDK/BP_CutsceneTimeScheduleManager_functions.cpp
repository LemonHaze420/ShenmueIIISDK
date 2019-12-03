
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.GetTime_ForceEventStop
// (Exec, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AdjustTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           reserve_enable                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          reserve_time                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::STATIC_GetTime_ForceEventStop(float AdjustTime, bool* reserve_enable, float* reserve_time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.GetTime_ForceEventStop");

	ABP_CutsceneTimeScheduleManager_C_GetTime_ForceEventStop_Params params;
	params.AdjustTime = AdjustTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (reserve_enable != nullptr)
		*reserve_enable = params.reserve_enable;
	if (reserve_time != nullptr)
		*reserve_time = params.reserve_time;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ChangeGimmickLock
// (Net, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ExecLock                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::ChangeGimmickLock(bool ExecLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ChangeGimmickLock");

	ABP_CutsceneTimeScheduleManager_C_ChangeGimmickLock_Params params;
	params.ExecLock = ExecLock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.isForceEventStop_TimeEnable
// (NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ForcedEventStop_TimeON         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::isForceEventStop_TimeEnable(bool* ForcedEventStop_TimeON)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.isForceEventStop_TimeEnable");

	ABP_CutsceneTimeScheduleManager_C_isForceEventStop_TimeEnable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForcedEventStop_TimeON != nullptr)
		*ForcedEventStop_TimeON = params.ForcedEventStop_TimeON;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ResetForceEventStop
// (Net, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutsceneTimeScheduleManager_C::ResetForceEventStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ResetForceEventStop");

	ABP_CutsceneTimeScheduleManager_C_ResetForceEventStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.isForceEventStop_Reserved
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ForcedEventStop_Reserved       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::isForceEventStop_Reserved(bool* ForcedEventStop_Reserved)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.isForceEventStop_Reserved");

	ABP_CutsceneTimeScheduleManager_C_isForceEventStop_Reserved_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForcedEventStop_Reserved != nullptr)
		*ForcedEventStop_Reserved = params.ForcedEventStop_Reserved;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ReserveForcedEventStop
// (Net, NetReliable, NetRequest, Native, NetResponse, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::ReserveForcedEventStop(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ReserveForcedEventStop");

	ABP_CutsceneTimeScheduleManager_C_ReserveForcedEventStop_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ChangeWorldTelecomLock
// (Net, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ExecLock                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::ChangeWorldTelecomLock(bool ExecLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ChangeWorldTelecomLock");

	ABP_CutsceneTimeScheduleManager_C_ChangeWorldTelecomLock_Params params;
	params.ExecLock = ExecLock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.GetLockParent
// (Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   exec_lock                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::GetLockParent(struct FName* exec_lock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.GetLockParent");

	ABP_CutsceneTimeScheduleManager_C_GetLockParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (exec_lock != nullptr)
		*exec_lock = params.exec_lock;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckRewardLock
// (Net, NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           exec_lock                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::CheckRewardLock(bool* exec_lock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckRewardLock");

	ABP_CutsceneTimeScheduleManager_C_CheckRewardLock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (exec_lock != nullptr)
		*exec_lock = params.exec_lock;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ReleaseRewardLock
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutsceneTimeScheduleManager_C::STATIC_ReleaseRewardLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ReleaseRewardLock");

	ABP_CutsceneTimeScheduleManager_C_ReleaseRewardLock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartRewardLock
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutsceneTimeScheduleManager_C::STATIC_StartRewardLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartRewardLock");

	ABP_CutsceneTimeScheduleManager_C_StartRewardLock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ForcedReleaseStepLock
// (NetRequest, Exec, Native, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutsceneTimeScheduleManager_C::ForcedReleaseStepLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ForcedReleaseStepLock");

	ABP_CutsceneTimeScheduleManager_C_ForcedReleaseStepLock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckStepLock
// (NetResponse, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
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
// (Net, NetReliable, Native, NetResponse, NetMulticast, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutsceneTimeScheduleManager_C::StartStepLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartStepLock");

	ABP_CutsceneTimeScheduleManager_C_StartStepLock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.SetActive
// (Exec, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutsceneTimeScheduleManager_C::SetActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.SetActive");

	ABP_CutsceneTimeScheduleManager_C_SetActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckLock
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           exec_lock                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::CheckLock(bool* exec_lock)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckLock");

	ABP_CutsceneTimeScheduleManager_C_CheckLock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (exec_lock != nullptr)
		*exec_lock = params.exec_lock;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ResetTimeLinkTable
// (NetRequest, Native, Event, NetResponse, MulticastDelegate, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutsceneTimeScheduleManager_C::ResetTimeLinkTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ResetTimeLinkTable");

	ABP_CutsceneTimeScheduleManager_C_ResetTimeLinkTable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.GetTimeLinkTableNextFoward
// (NetRequest, Event, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_CutSceneTimeSchduleMarkID> TimeMarkID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::STATIC_GetTimeLinkTableNextFoward(TEnumAsByte<EN_CutSceneTimeSchduleMarkID> TimeMarkID, bool* Result)
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
// (NetRequest, Static, MulticastDelegate, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_CutSceneTimeSchduleMarkID> TimeMarkID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::STATIC_GetTimeLinkTableNext(TEnumAsByte<EN_CutSceneTimeSchduleMarkID> TimeMarkID, bool* Result)
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
// (NetRequest, Native, NetResponse, NetMulticast, Public, Private, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EN_CutSceneTimeSchduleMarkID> TimeMarkID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::GetTimeLinkTable(TEnumAsByte<EN_CutSceneTimeSchduleMarkID> TimeMarkID, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.GetTimeLinkTable");

	ABP_CutsceneTimeScheduleManager_C_GetTimeLinkTable_Params params;
	params.TimeMarkID = TimeMarkID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.SetTimeLinkTable
// (Net, NetReliable, NetRequest, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (Net, NetReliable, NetResponse, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (NetRequest, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (Exec, Native, Event, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           stock_on                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::CheckStockSchedule(bool* stock_on)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.CheckStockSchedule");

	ABP_CutsceneTimeScheduleManager_C_CheckStockSchedule_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (stock_on != nullptr)
		*stock_on = params.stock_on;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.AddElapsedTime
// (NetReliable, NetRequest, Static, MulticastDelegate, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   CutsceneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HourLater                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::STATIC_AddElapsedTime(const struct FName& CutsceneName, float HourLater)
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
// (Private, Delegate, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
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
// (Exec, Event, Static, MulticastDelegate, Protected, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Stock_available                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::STATIC_CheckStock(bool* Stock_available)
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
// (Net, NetReliable, Exec, Native, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutsceneTimeScheduleManager_C::StartLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartLock");

	ABP_CutsceneTimeScheduleManager_C_StartLock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ReleaseLock
// (Net, NetRequest, Native, NetResponse, NetMulticast, Public, Private, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutsceneTimeScheduleManager_C::ReleaseLock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ReleaseLock");

	ABP_CutsceneTimeScheduleManager_C_ReleaseLock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StockPushEvent
// (Exec, Event, NetResponse, Static, NetMulticast, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Event_Name                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Add                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::STATIC_StockPushEvent(const struct FName& Event_Name, bool* Add)
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
// (Net, Event, Static, Private, Protected, Delegate, NetClient, Const)
// Parameters:
// bool                           Start_Enable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::STATIC_CanEventStart(bool* Start_Enable)
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
// (Net, NetRequest, Event, Protected, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   CutsceneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ScheduleHour                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::STATIC_AddTimeSchedule(const struct FName& CutsceneName, float ScheduleHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.AddTimeSchedule");

	ABP_CutsceneTimeScheduleManager_C_AddTimeSchedule_Params params;
	params.CutsceneName = CutsceneName;
	params.ScheduleHour = ScheduleHour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.IsTimeScheduleEnabled
// (Event, NetResponse, Static, NetMulticast, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   CutsceneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnabled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::STATIC_IsTimeScheduleEnabled(const struct FName& CutsceneName, bool* IsEnabled)
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
// (NetReliable, Event, NetResponse, Static, MulticastDelegate, Public, NetServer, HasOutParms, NetClient, DLLImport)
// Parameters:
// struct FName                   CutscneName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::STATIC_StopTimeSchedule(const struct FName& CutscneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StopTimeSchedule");

	ABP_CutsceneTimeScheduleManager_C_StopTimeSchedule_Params params;
	params.CutscneName = CutscneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartTimeSchedule
// (Net, NetRequest, Event, Static, MulticastDelegate, Public, Private, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   CutsceneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::STATIC_StartTimeSchedule(const struct FName& CutsceneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartTimeSchedule");

	ABP_CutsceneTimeScheduleManager_C_StartTimeSchedule_Params params;
	params.CutsceneName = CutsceneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.IsCutsceneStartable
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CutsceneTimeScheduleManager_C::STATIC_IsCutsceneStartable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.IsCutsceneStartable");

	ABP_CutsceneTimeScheduleManager_C_IsCutsceneStartable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.UserConstructionScript
// (NetReliable, Native, Event, MulticastDelegate, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_CutsceneTimeScheduleManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.UserConstructionScript");

	ABP_CutsceneTimeScheduleManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ReceiveTick
// (Net, NetRequest, Exec, Native, NetResponse, Protected, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ReceiveTick");

	ABP_CutsceneTimeScheduleManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.ExecuteUbergraph_BP_CutsceneTimeScheduleManager
// (NetReliable, NetRequest, Event, MulticastDelegate, Private, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   CutsceneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutsceneTimeScheduleManager_C::STATIC_StartElapsedTime__DelegateSignature(const struct FName& CutsceneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartElapsedTime__DelegateSignature");

	ABP_CutsceneTimeScheduleManager_C_StartElapsedTime__DelegateSignature_Params params;
	params.CutsceneName = CutsceneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C.StartTimerCutscene__DelegateSignature
// (Exec, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
