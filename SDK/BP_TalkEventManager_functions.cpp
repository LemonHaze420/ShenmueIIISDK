
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

// Function BP_TalkEventManager.BP_TalkEventManager_C.IsStreetFightScript
// (NetRequest, Exec, Native, Static, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TalkEventManager_C::STATIC_IsStreetFightScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.IsStreetFightScript");

	ABP_TalkEventManager_C_IsStreetFightScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.IsIgonoreShe
// (NetRequest, Native, Event, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// bool                           Ignore                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::IsIgonoreShe(bool* Ignore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.IsIgonoreShe");

	ABP_TalkEventManager_C_IsIgonoreShe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ignore != nullptr)
		*Ignore = params.Ignore;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.SetDisableAnsel
// (NetReliable, Native, Event, NetResponse, NetMulticast, Public, Private, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Disable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::SetDisableAnsel(bool Disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.SetDisableAnsel");

	ABP_TalkEventManager_C_SetDisableAnsel_Params params;
	params.Disable = Disable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecMuteSoundTask
// (NetReliable, NetRequest, NetResponse, Static, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class UMuteFadeSoundTask*      MuteSoundTask                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecMuteSoundTask(class UMuteFadeSoundTask* MuteSoundTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecMuteSoundTask");

	ABP_TalkEventManager_C_ExecMuteSoundTask_Params params;
	params.MuteSoundTask = MuteSoundTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.StopForceSkip
// (NetReliable, Native, Event, Static, MulticastDelegate, Public, Protected, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_TalkEventManager_C::STATIC_StopForceSkip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.StopForceSkip");

	ABP_TalkEventManager_C_StopForceSkip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.CheckCanSkip
// (NetReliable, Static, NetMulticast, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Skip                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_CheckCanSkip(bool Skip, bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.CheckCanSkip");

	ABP_TalkEventManager_C_CheckCanSkip_Params params;
	params.Skip = Skip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecFade
// (Net, NetReliable, Exec, NetResponse, Public, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ColorIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecFade(int Type, float Time, int ColorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecFade");

	ABP_TalkEventManager_C_ExecFade_Params params;
	params.Type = Type;
	params.Time = Time;
	params.ColorIndex = ColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.SkipTalk
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           AC_Only                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DEBUG                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_SkipTalk(bool AC_Only, bool DEBUG)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.SkipTalk");

	ABP_TalkEventManager_C_SkipTalk_Params params;
	params.AC_Only = AC_Only;
	params.DEBUG = DEBUG;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.NotifyCameraChange
// (Exec, NetResponse, Static, MulticastDelegate, Delegate, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_TalkEventManager_C::STATIC_NotifyCameraChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.NotifyCameraChange");

	ABP_TalkEventManager_C_NotifyCameraChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.RunStandAloneScript
// (Net, NetReliable, NetRequest, Event, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  InTalkedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InIsBS                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTalkScript*             InTalkScript                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3TalkComponent*        InTalkComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ENPCTalkState                  InTalkState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::RunStandAloneScript(class AActor* InTalkedActor, bool InIsBS, class UTalkScript* InTalkScript, class US3TalkComponent* InTalkComponent, ENPCTalkState InTalkState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.RunStandAloneScript");

	ABP_TalkEventManager_C_RunStandAloneScript_Params params;
	params.InTalkedActor = InTalkedActor;
	params.InIsBS = InIsBS;
	params.InTalkScript = InTalkScript;
	params.InTalkComponent = InTalkComponent;
	params.InTalkState = InTalkState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.CheckLookAtTask
// (NetReliable, Exec, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULookAtTask*             Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Failed                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::CheckLookAtTask(class ULookAtTask* Task, bool* Failed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.CheckLookAtTask");

	ABP_TalkEventManager_C_CheckLookAtTask_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Failed != nullptr)
		*Failed = params.Failed;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.SetMoonLightCastShadow
// (Native, NetResponse, Static, NetMulticast, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_SetMoonLightCastShadow(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.SetMoonLightCastShadow");

	ABP_TalkEventManager_C_SetMoonLightCastShadow_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.TeleportActor
// (NetReliable, NetRequest, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_TeleportActor(class AActor* Actor, const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.TeleportActor");

	ABP_TalkEventManager_C_TeleportActor_Params params;
	params.Actor = Actor;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecPauseScheduleTask
// (Net, NetReliable, Exec, NetResponse, Static, NetMulticast, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPauseScheduleTask*      PauseScheduleTask              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecPauseScheduleTask(class UPauseScheduleTask* PauseScheduleTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecPauseScheduleTask");

	ABP_TalkEventManager_C_ExecPauseScheduleTask_Params params;
	params.PauseScheduleTask = PauseScheduleTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.FinishShowItemEnd
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, Static, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_TalkEventManager_C::STATIC_FinishShowItemEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.FinishShowItemEnd");

	ABP_TalkEventManager_C_FinishShowItemEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.FindTalkScriptTask
// (Net, NetReliable, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTalkScript*             Script                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  CheckTalkTaskClass             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTalkEventTaskBase*      Task                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bExist                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::FindTalkScriptTask(class UTalkScript* Script, class UClass* CheckTalkTaskClass, class UTalkEventTaskBase** Task, bool* bExist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.FindTalkScriptTask");

	ABP_TalkEventManager_C_FindTalkScriptTask_Params params;
	params.Script = Script;
	params.CheckTalkTaskClass = CheckTalkTaskClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Task != nullptr)
		*Task = params.Task;
	if (bExist != nullptr)
		*bExist = params.bExist;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.CheckForceAddDetect
// (NetResponse, NetMulticast, Public, Private, Protected, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_TalkEventManager_C::CheckForceAddDetect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.CheckForceAddDetect");

	ABP_TalkEventManager_C_CheckForceAddDetect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.SetTalkedActor
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_SetTalkedActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.SetTalkedActor");

	ABP_TalkEventManager_C_SetTalkedActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.GetCurrentTask
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, NetServer, NetClient, Const)
// Parameters:
// class UTalkEventTaskBase*      Task                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_GetCurrentTask(class UTalkEventTaskBase** Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.GetCurrentTask");

	ABP_TalkEventManager_C_GetCurrentTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Task != nullptr)
		*Task = params.Task;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecDojoCaptionTask
// (Native, NetResponse, Static, Public, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UDojoCaptionTask*        Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecDojoCaptionTask(class UDojoCaptionTask* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecDojoCaptionTask");

	ABP_TalkEventManager_C_ExecDojoCaptionTask_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecHelpPriorityTask
// (Event, Static, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHelpPriorityTask*       Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecHelpPriorityTask(class UHelpPriorityTask* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecHelpPriorityTask");

	ABP_TalkEventManager_C_ExecHelpPriorityTask_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.Finalize
// (NetMulticast, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TalkEventManager_C::Finalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.Finalize");

	ABP_TalkEventManager_C_Finalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.IsExistTalkScriptTask
// (Net, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTalkScript*             Script                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          CheckTalkTaskClasses           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bExist                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_IsExistTalkScriptTask(class UTalkScript* Script, TArray<class UClass*>* CheckTalkTaskClasses, bool* bExist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.IsExistTalkScriptTask");

	ABP_TalkEventManager_C_IsExistTalkScriptTask_Params params;
	params.Script = Script;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CheckTalkTaskClasses != nullptr)
		*CheckTalkTaskClasses = params.CheckTalkTaskClasses;
	if (bExist != nullptr)
		*bExist = params.bExist;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.IsMiniGameTalk
// (NetRequest, Exec, Event, MulticastDelegate, Public, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bStrictly                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TalkEventManager_C::IsMiniGameTalk(bool bStrictly)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.IsMiniGameTalk");

	ABP_TalkEventManager_C_IsMiniGameTalk_Params params;
	params.bStrictly = bStrictly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.EnableAutoCamera
// (Net, Exec, Native, Static, Public, Protected, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_TalkEventManager_C::STATIC_EnableAutoCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.EnableAutoCamera");

	ABP_TalkEventManager_C_EnableAutoCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.IsWaitTaskWaiting
// (Net, NetRequest, Native, Static, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           isWaiting                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UWaitTask*               WaitTask                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_IsWaitTaskWaiting(bool* isWaiting, class UWaitTask** WaitTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.IsWaitTaskWaiting");

	ABP_TalkEventManager_C_IsWaitTaskWaiting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isWaiting != nullptr)
		*isWaiting = params.isWaiting;
	if (WaitTask != nullptr)
		*WaitTask = params.WaitTask;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.IsTalkTransitionErroredActor
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Private, Delegate, NetServer, BlueprintEvent, BlueprintPure)
// Parameters:
// class AS3Character*            TalkTo                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_IsTalkTransitionErroredActor(class AS3Character* TalkTo, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.IsTalkTransitionErroredActor");

	ABP_TalkEventManager_C_IsTalkTransitionErroredActor_Params params;
	params.TalkTo = TalkTo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.GetMiniGamePrice
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// class ABP_MiniGameManager_C*   MiniGameManager                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Price                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_GetMiniGamePrice(class ABP_MiniGameManager_C* MiniGameManager, bool* Success, int* Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.GetMiniGamePrice");

	ABP_TalkEventManager_C_GetMiniGamePrice_Params params;
	params.MiniGameManager = MiniGameManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Price != nullptr)
		*Price = params.Price;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.TalkTransitionError
// (NetReliable, Event, Static, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// bool                           bError                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_TalkTransitionError(bool* bError)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.TalkTransitionError");

	ABP_TalkEventManager_C_TalkTransitionError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bError != nullptr)
		*bError = params.bError;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecPlayBgm
// (NetReliable, NetRequest, Exec, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlayBgmTask*            Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecPlayBgm(class UPlayBgmTask* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecPlayBgm");

	ABP_TalkEventManager_C_ExecPlayBgm_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.UpdateDebugForceSkipFlag
// (Exec, Event, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTalkEventTaskBase*      Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::UpdateDebugForceSkipFlag(class UTalkEventTaskBase* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.UpdateDebugForceSkipFlag");

	ABP_TalkEventManager_C_UpdateDebugForceSkipFlag_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.GetNextFighterName
// (NetRequest, Exec, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor)

void ABP_TalkEventManager_C::GetNextFighterName(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.GetNextFighterName");

	ABP_TalkEventManager_C_GetNextFighterName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.UpdateMiniGamePlayCount
// (NetReliable, Exec, Event, NetResponse, NetMulticast, NetServer)
// Parameters:
// int                            PlayCount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::UpdateMiniGamePlayCount(int PlayCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.UpdateMiniGamePlayCount");

	ABP_TalkEventManager_C_UpdateMiniGamePlayCount_Params params;
	params.PlayCount = PlayCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.IsTalkingToShopCharacter
// (Native, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TalkEventManager_C::STATIC_IsTalkingToShopCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.IsTalkingToShopCharacter");

	ABP_TalkEventManager_C_IsTalkingToShopCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.DestroySubtitle
// (NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_TalkEventManager_C::STATIC_DestroySubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.DestroySubtitle");

	ABP_TalkEventManager_C_DestroySubtitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.CreateSubtitle
// (NetRequest, Event, NetMulticast, MulticastDelegate, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_TalkEventManager_C::CreateSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.CreateSubtitle");

	ABP_TalkEventManager_C_CreateSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.IsFinishedTalkActorCamera
// (NetReliable, Exec, NetResponse, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Finished                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_IsFinishedTalkActorCamera(bool* Finished)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.IsFinishedTalkActorCamera");

	ABP_TalkEventManager_C_IsFinishedTalkActorCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Finished != nullptr)
		*Finished = params.Finished;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.RestorePlayerIgnoreCollision
// (NetRequest, Exec, Native, Event, Static, NetMulticast, Private, HasOutParms, NetClient, DLLImport)

void ABP_TalkEventManager_C::STATIC_RestorePlayerIgnoreCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.RestorePlayerIgnoreCollision");

	ABP_TalkEventManager_C_RestorePlayerIgnoreCollision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.MakePlayerIgnoreCollision
// (Net, Exec, Event, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)

void ABP_TalkEventManager_C::MakePlayerIgnoreCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.MakePlayerIgnoreCollision");

	ABP_TalkEventManager_C_MakePlayerIgnoreCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.SetWhetherPlayerIgnoreCollision
// (Net, Exec, NetResponse, Static, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           InStartIgnore                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_SetWhetherPlayerIgnoreCollision(bool InStartIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.SetWhetherPlayerIgnoreCollision");

	ABP_TalkEventManager_C_SetWhetherPlayerIgnoreCollision_Params params;
	params.InStartIgnore = InStartIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecUseIKTask
// (NetRequest, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUseIKTask*              UseIKTask                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecUseIKTask(class UUseIKTask* UseIKTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecUseIKTask");

	ABP_TalkEventManager_C_ExecUseIKTask_Params params;
	params.UseIKTask = UseIKTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.EqualToString
// (NetRequest, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InStr1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 InStr2                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bEqual                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_EqualToString(struct FString* InStr1, struct FString* InStr2, bool* bEqual)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.EqualToString");

	ABP_TalkEventManager_C_EqualToString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InStr1 != nullptr)
		*InStr1 = params.InStr1;
	if (InStr2 != nullptr)
		*InStr2 = params.InStr2;
	if (bEqual != nullptr)
		*bEqual = params.bEqual;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecDevExtendedTask
// (NetReliable, Exec, Event, NetResponse, Public, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UDevExtendedTask*        DevExtendedTask                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecDevExtendedTask(class UDevExtendedTask* DevExtendedTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecDevExtendedTask");

	ABP_TalkEventManager_C_ExecDevExtendedTask_Params params;
	params.DevExtendedTask = DevExtendedTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecPlaySeTask
// (Net, Exec, Native, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPlaySeTask*             PlaySeTask                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecPlaySeTask(class UPlaySeTask* PlaySeTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecPlaySeTask");

	ABP_TalkEventManager_C_ExecPlaySeTask_Params params;
	params.PlaySeTask = PlaySeTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecKsVisibilityTask
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, NetServer)
// Parameters:
// class UKsVisibilityTask*       KsVisibilityTask               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecKsVisibilityTask(class UKsVisibilityTask* KsVisibilityTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecKsVisibilityTask");

	ABP_TalkEventManager_C_ExecKsVisibilityTask_Params params;
	params.KsVisibilityTask = KsVisibilityTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecInventoryTask
// (Event, Static, NetMulticast, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class UInventoryTask*          InventoryTask                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecInventoryTask(class UInventoryTask* InventoryTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecInventoryTask");

	ABP_TalkEventManager_C_ExecInventoryTask_Params params;
	params.InventoryTask = InventoryTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecImaginary
// (NetReliable, Event, NetResponse, Static, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class UImaginary*              ImaginaryTask                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecImaginary(class UImaginary* ImaginaryTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecImaginary");

	ABP_TalkEventManager_C_ExecImaginary_Params params;
	params.ImaginaryTask = ImaginaryTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.IsExistCurrentTalkScriptTask
// (NetRequest, Exec, Event, Static, Public, HasOutParms, Const)
// Parameters:
// TArray<class UClass*>          CheckTalkTaskClasses           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bExist                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_IsExistCurrentTalkScriptTask(TArray<class UClass*>* CheckTalkTaskClasses, bool* bExist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.IsExistCurrentTalkScriptTask");

	ABP_TalkEventManager_C_IsExistCurrentTalkScriptTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CheckTalkTaskClasses != nullptr)
		*CheckTalkTaskClasses = params.CheckTalkTaskClasses;
	if (bExist != nullptr)
		*bExist = params.bExist;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ConvertKeywordSelectedIndex
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_TalkKeywordSelect> Selected                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ConvertKeywordSelectedIndex(int Index, TEnumAsByte<E_TalkKeywordSelect>* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ConvertKeywordSelectedIndex");

	ABP_TalkEventManager_C_ConvertKeywordSelectedIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selected != nullptr)
		*Selected = params.Selected;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecControlCameraTask
// (Net, NetReliable, NetResponse, MulticastDelegate, Public, Private, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UControlCameraTask*      ControlCameraTask              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecControlCameraTask(class UControlCameraTask* ControlCameraTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecControlCameraTask");

	ABP_TalkEventManager_C_ExecControlCameraTask_Params params;
	params.ControlCameraTask = ControlCameraTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.SetupPlayerCameraAfterLookAt
// (Net, NetRequest, Exec, NetMulticast, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_TalkEventManager_C::SetupPlayerCameraAfterLookAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.SetupPlayerCameraAfterLookAt");

	ABP_TalkEventManager_C_SetupPlayerCameraAfterLookAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecBuyKihudaTask
// (Net, NetRequest, Native, NetResponse, Static, NetMulticast, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBuyKihudaTask*          BuyKihudaTask                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecBuyKihudaTask(class UBuyKihudaTask* BuyKihudaTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecBuyKihudaTask");

	ABP_TalkEventManager_C_ExecBuyKihudaTask_Params params;
	params.BuyKihudaTask = BuyKihudaTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.FinishLookAt
// (Net, NetRequest, Exec, Event, NetResponse, Static, Private, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_FinishLookAt(class AActor* NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.FinishLookAt");

	ABP_TalkEventManager_C_FinishLookAt_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.RequestStepChange
// (NetReliable, Native, NetMulticast, Private, HasOutParms, NetClient, DLLImport)
// Parameters:
// int                            Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TalkEventManager_C::RequestStepChange(int Step)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.RequestStepChange");

	ABP_TalkEventManager_C_RequestStepChange_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.HintTalkInit
// (NetRequest, Native, NetResponse, Static, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class AActor*                  TalkedNPC                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_HintTalkInit(class AActor* TalkedNPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.HintTalkInit");

	ABP_TalkEventManager_C_HintTalkInit_Params params;
	params.TalkedNPC = TalkedNPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.FindNPCFromID
// (NetReliable, NetRequest, Exec, Event, Static, Protected, Delegate, NetServer, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_FindNPCFromID(const struct FName& ID, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.FindNPCFromID");

	ABP_TalkEventManager_C_FindNPCFromID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExistAcTask
// (Native, NetResponse, Static, MulticastDelegate, Delegate, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTalkScript*             TalkScript                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Exist                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExistAcTask(class UTalkScript* TalkScript, bool* Exist)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExistAcTask");

	ABP_TalkEventManager_C_ExistAcTask_Params params;
	params.TalkScript = TalkScript;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Exist != nullptr)
		*Exist = params.Exist;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.CanFinishTalkEvent
// (Event, NetResponse, Static, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TalkEventManager_C::STATIC_CanFinishTalkEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.CanFinishTalkEvent");

	ABP_TalkEventManager_C_CanFinishTalkEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetVisibilityTask
// (Net, Static, Public, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USetVisibilityTask*      Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecSetVisibilityTask(class USetVisibilityTask* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetVisibilityTask");

	ABP_TalkEventManager_C_ExecSetVisibilityTask_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecWeatherTask
// (NetReliable, Native, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USetWeatherTask*         Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecWeatherTask(class USetWeatherTask* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecWeatherTask");

	ABP_TalkEventManager_C_ExecWeatherTask_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.CanStartCameraPreviewMode
// (Exec, Native, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           CanStart                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::CanStartCameraPreviewMode(bool* CanStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.CanStartCameraPreviewMode");

	ABP_TalkEventManager_C_CanStartCameraPreviewMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanStart != nullptr)
		*CanStart = params.CanStart;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecCallScriptTask
// (Native, Event, NetMulticast, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCallScriptTask*         Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecCallScriptTask(class UCallScriptTask* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecCallScriptTask");

	ABP_TalkEventManager_C_ExecCallScriptTask_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecPostProcessTask
// (Native, Event, NetResponse, Static, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class UPostProcessTask*        Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecPostProcessTask(class UPostProcessTask* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecPostProcessTask");

	ABP_TalkEventManager_C_ExecPostProcessTask_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecACCamera
// (NetReliable, NetRequest, Exec, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// class UAcCameraTask*           Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecACCamera(class UAcCameraTask* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecACCamera");

	ABP_TalkEventManager_C_ExecACCamera_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecAcEndTask
// (Net, NetReliable, NetRequest, Event, NetMulticast, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAcEndTask*              Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecAcEndTask(class UAcEndTask* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecAcEndTask");

	ABP_TalkEventManager_C_ExecAcEndTask_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecAcTask
// (Net, NetRequest, Exec, NetResponse, NetMulticast, Private, HasOutParms, NetClient, DLLImport)
// Parameters:
// class UAcTask*                 Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecAcTask(class UAcTask* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecAcTask");

	ABP_TalkEventManager_C_ExecAcTask_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetTalkEnableTask
// (NetRequest, Exec, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent)
// Parameters:
// class USetTalkEnableTask*      Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecSetTalkEnableTask(class USetTalkEnableTask* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetTalkEnableTask");

	ABP_TalkEventManager_C_ExecSetTalkEnableTask_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecLoadPositionAndRotationTask
// (NetReliable, Exec, Event, NetResponse, Static, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ULoadPositionAndRotationTask* LoadPositionAndRotationTask    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecLoadPositionAndRotationTask(class ULoadPositionAndRotationTask* LoadPositionAndRotationTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecLoadPositionAndRotationTask");

	ABP_TalkEventManager_C_ExecLoadPositionAndRotationTask_Params params;
	params.LoadPositionAndRotationTask = LoadPositionAndRotationTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecLoadRotationTask
// (Exec, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULoadRotationTask*       LoadRotationTask               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecLoadRotationTask(class ULoadRotationTask* LoadRotationTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecLoadRotationTask");

	ABP_TalkEventManager_C_ExecLoadRotationTask_Params params;
	params.LoadRotationTask = LoadRotationTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecLoadPositionTask
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULoadPositionTask*       Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecLoadPositionTask(class ULoadPositionTask* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecLoadPositionTask");

	ABP_TalkEventManager_C_ExecLoadPositionTask_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSavePositionAndRotationTask
// (NetRequest, Exec, NetMulticast, MulticastDelegate, Public, Protected, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USavePositionAndRotationTask* Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecSavePositionAndRotationTask(class USavePositionAndRotationTask* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSavePositionAndRotationTask");

	ABP_TalkEventManager_C_ExecSavePositionAndRotationTask_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSaveRotationTask
// (Exec, Native, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class USaveRotationTask*       Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecSaveRotationTask(class USaveRotationTask* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSaveRotationTask");

	ABP_TalkEventManager_C_ExecSaveRotationTask_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSavePositionTask
// (NetRequest, Native, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class USavePositionTask*       SavePositionTask               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecSavePositionTask(class USavePositionTask* SavePositionTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSavePositionTask");

	ABP_TalkEventManager_C_ExecSavePositionTask_Params params;
	params.SavePositionTask = SavePositionTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetPositionAndRotationTask
// (NetRequest, Exec, NetMulticast, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class USetPositionAndRotationTask* SetPositionAndRotationTask     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecSetPositionAndRotationTask(class USetPositionAndRotationTask* SetPositionAndRotationTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetPositionAndRotationTask");

	ABP_TalkEventManager_C_ExecSetPositionAndRotationTask_Params params;
	params.SetPositionAndRotationTask = SetPositionAndRotationTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecStopMotionTask
// (Net, NetReliable, NetRequest, Exec, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UStopMotionTask*         StopMotionTask                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecStopMotionTask(class UStopMotionTask* StopMotionTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecStopMotionTask");

	ABP_TalkEventManager_C_ExecStopMotionTask_Params params;
	params.StopMotionTask = StopMotionTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.TryTalkScriptReimport
// (NetReliable, Exec, Native, Event, NetResponse, Static, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTalkScript*             TalkScript                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_TryTalkScriptReimport(class UTalkScript* TalkScript, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.TryTalkScriptReimport");

	ABP_TalkEventManager_C_TryTalkScriptReimport_Params params;
	params.TalkScript = TalkScript;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecCameraActorTask
// (Net, NetReliable, Exec, NetResponse, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCameraActorTask*        CameraActorTask                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecCameraActorTask(class UCameraActorTask* CameraActorTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecCameraActorTask");

	ABP_TalkEventManager_C_ExecCameraActorTask_Params params;
	params.CameraActorTask = CameraActorTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.GetActiveScriptTalkComponent
// (Net, Native, Event, NetResponse, NetMulticast, NetServer)
// Parameters:
// class UBPC_S3_TalkComponent_C* TalkComponent                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_TalkEventManager_C::GetActiveScriptTalkComponent(class UBPC_S3_TalkComponent_C** TalkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.GetActiveScriptTalkComponent");

	ABP_TalkEventManager_C_GetActiveScriptTalkComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TalkComponent != nullptr)
		*TalkComponent = params.TalkComponent;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecCutSceneTask
// (Net, Exec, Native, Event, NetMulticast, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayCutsceneTask*       Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecCutSceneTask(class UPlayCutsceneTask* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecCutSceneTask");

	ABP_TalkEventManager_C_ExecCutSceneTask_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecRewardMiniGameTask
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class UGiftMiniGameTask*       GiftMiniGameTask               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecRewardMiniGameTask(class UGiftMiniGameTask* GiftMiniGameTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecRewardMiniGameTask");

	ABP_TalkEventManager_C_ExecRewardMiniGameTask_Params params;
	params.GiftMiniGameTask = GiftMiniGameTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ActivateMiniGameTask
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Public, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTalkEventTaskBase*      TaskBase                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ActivateMiniGameTask(class UTalkEventTaskBase* TaskBase, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ActivateMiniGameTask");

	ABP_TalkEventManager_C_ActivateMiniGameTask_Params params;
	params.TaskBase = TaskBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecUpdatePlayPriceMiniGameTask
// (Net, NetRequest, Exec, Native, NetResponse, Public, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUpdatePlayPriceMiniGame* UpdatePlayPriceMniGameTask     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecUpdatePlayPriceMiniGameTask(class UUpdatePlayPriceMiniGame* UpdatePlayPriceMniGameTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecUpdatePlayPriceMiniGameTask");

	ABP_TalkEventManager_C_ExecUpdatePlayPriceMiniGameTask_Params params;
	params.UpdatePlayPriceMniGameTask = UpdatePlayPriceMniGameTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecChooseMiniGameTask
// (NetReliable, NetRequest, Native, Private, Protected, Delegate, HasDefaults, NetClient, Const)
// Parameters:
// class UChooseMiniGameTask*     ChooseMniGameTask              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecChooseMiniGameTask(class UChooseMiniGameTask* ChooseMniGameTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecChooseMiniGameTask");

	ABP_TalkEventManager_C_ExecChooseMiniGameTask_Params params;
	params.ChooseMniGameTask = ChooseMniGameTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.PrintTalkDebug
// (Net, Static, MulticastDelegate, NetServer)

void ABP_TalkEventManager_C::STATIC_PrintTalkDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.PrintTalkDebug");

	ABP_TalkEventManager_C_PrintTalkDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetPositionTask
// (Net, Native, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USetPositionTask*        SetPositionTask                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecSetPositionTask(class USetPositionTask* SetPositionTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetPositionTask");

	ABP_TalkEventManager_C_ExecSetPositionTask_Params params;
	params.SetPositionTask = SetPositionTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetRotatioinTask
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USetRotationTask*        SetRotationTask                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecSetRotatioinTask(class USetRotationTask* SetRotationTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetRotatioinTask");

	ABP_TalkEventManager_C_ExecSetRotatioinTask_Params params;
	params.SetRotationTask = SetRotationTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetBsEnableTask
// (Net, NetRequest, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USetBsEnableTask*        BsEnableTask                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecSetBsEnableTask(class USetBsEnableTask* BsEnableTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetBsEnableTask");

	ABP_TalkEventManager_C_ExecSetBsEnableTask_Params params;
	params.BsEnableTask = BsEnableTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetBsCountTask
// (NetReliable, Exec, Native, Event, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USetBsCountTask*         SetBsCountTask                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecSetBsCountTask(class USetBsCountTask* SetBsCountTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetBsCountTask");

	ABP_TalkEventManager_C_ExecSetBsCountTask_Params params;
	params.SetBsCountTask = SetBsCountTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExistLookAtTurnningCharacter
// (NetRequest, Native, Event, NetResponse, Static, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExistLookAtTurnningCharacter(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExistLookAtTurnningCharacter");

	ABP_TalkEventManager_C_ExistLookAtTurnningCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.FinalizeMiniGame
// (NetReliable, Exec, Event, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)

void ABP_TalkEventManager_C::FinalizeMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.FinalizeMiniGame");

	ABP_TalkEventManager_C_FinalizeMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecResultMiniGameTask
// (NetReliable, Exec, Native, NetMulticast, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class UResultMiniGameTask*     ResultGameTask                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecResultMiniGameTask(class UResultMiniGameTask* ResultGameTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecResultMiniGameTask");

	ABP_TalkEventManager_C_ExecResultMiniGameTask_Params params;
	params.ResultGameTask = ResultGameTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecResumeMiniGameTask
// (NetReliable, NetRequest, Exec, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UResumeMiniGameTask*     ResumeMiniGameTask             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecResumeMiniGameTask(class UResumeMiniGameTask* ResumeMiniGameTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecResumeMiniGameTask");

	ABP_TalkEventManager_C_ExecResumeMiniGameTask_Params params;
	params.ResumeMiniGameTask = ResumeMiniGameTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecEventMiniGameTask
// (Exec, Native, NetResponse, Static, MulticastDelegate, Delegate, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UEventMiniGameTask*      EventGameTask                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecEventMiniGameTask(class UEventMiniGameTask* EventGameTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecEventMiniGameTask");

	ABP_TalkEventManager_C_ExecEventMiniGameTask_Params params;
	params.EventGameTask = EventGameTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.GetLookAtCache
// (Net, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bLookAtCommandExecuted         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  LookAtTarget                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_GetLookAtCache(bool* bLookAtCommandExecuted, class AActor** LookAtTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.GetLookAtCache");

	ABP_TalkEventManager_C_GetLookAtCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLookAtCommandExecuted != nullptr)
		*bLookAtCommandExecuted = params.bLookAtCommandExecuted;
	if (LookAtTarget != nullptr)
		*LookAtTarget = params.LookAtTarget;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.UpdateCameraGroupTask
// (Net, NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent)
// Parameters:
// class UUpdateCameraGroupTask*  Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_UpdateCameraGroupTask(class UUpdateCameraGroupTask* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.UpdateCameraGroupTask");

	ABP_TalkEventManager_C_UpdateCameraGroupTask_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.UpdateCameraTask
// (NetRequest, Native, Static, Public, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUpdateCameraTask*       Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_UpdateCameraTask(class UUpdateCameraTask* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.UpdateCameraTask");

	ABP_TalkEventManager_C_UpdateCameraTask_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecCanMiniGameTask
// (NetReliable, NetRequest, Event, Static, Public, Private, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UCanMiniGameFlagTask*    CanMiniGameFlagTask            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecCanMiniGameTask(class UCanMiniGameFlagTask* CanMiniGameFlagTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecCanMiniGameTask");

	ABP_TalkEventManager_C_ExecCanMiniGameTask_Params params;
	params.CanMiniGameFlagTask = CanMiniGameFlagTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecShowPriceTask
// (Net, NetReliable, NetRequest, Static, Public, Private, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UShowPriceTask*          ShowPriceTask                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecShowPriceTask(class UShowPriceTask* ShowPriceTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecShowPriceTask");

	ABP_TalkEventManager_C_ExecShowPriceTask_Params params;
	params.ShowPriceTask = ShowPriceTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecEnterMiniGameTask
// (Exec, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnterMiniGameTask*      EnterMiniGameTask              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecEnterMiniGameTask(class UEnterMiniGameTask* EnterMiniGameTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecEnterMiniGameTask");

	ABP_TalkEventManager_C_ExecEnterMiniGameTask_Params params;
	params.EnterMiniGameTask = EnterMiniGameTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.CreateAutoTalkCameraDirector
// (Net, NetReliable, NetRequest, Native, NetResponse, Static, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_TalkEventManager_C::STATIC_CreateAutoTalkCameraDirector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.CreateAutoTalkCameraDirector");

	ABP_TalkEventManager_C_CreateAutoTalkCameraDirector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.WhetherToChangeCamera
// (NetReliable, Native, NetResponse, Static, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_WhetherToChangeCamera(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.WhetherToChangeCamera");

	ABP_TalkEventManager_C_WhetherToChangeCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.GetTalkTaskDuration
// (Exec, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTalkTask*               TalkTask                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::GetTalkTaskDuration(class UTalkTask* TalkTask, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.GetTalkTaskDuration");

	ABP_TalkEventManager_C_GetTalkTaskDuration_Params params;
	params.TalkTask = TalkTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.GetCurrentTalkTaskDuration
// (NetRequest, Native, Event, Private, HasOutParms, NetClient, DLLImport)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::GetCurrentTalkTaskDuration(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.GetCurrentTalkTaskDuration");

	ABP_TalkEventManager_C_GetCurrentTalkTaskDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.GetDetectActionTarget
// (Net, NetReliable, Native, Event, NetResponse, NetMulticast, NetServer)
// Parameters:
// class AActor*                  DetectActionTarget             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::GetDetectActionTarget(class AActor** DetectActionTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.GetDetectActionTarget");

	ABP_TalkEventManager_C_GetDetectActionTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DetectActionTarget != nullptr)
		*DetectActionTarget = params.DetectActionTarget;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.SetTalkedActorFromTalkScript
// (Net, NetReliable, Static, MulticastDelegate, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)

void ABP_TalkEventManager_C::STATIC_SetTalkedActorFromTalkScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.SetTalkedActorFromTalkScript");

	ABP_TalkEventManager_C_SetTalkedActorFromTalkScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.GetActorFromTagCharaName
// (Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   CharaName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::GetActorFromTagCharaName(const struct FName& CharaName, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.GetActorFromTagCharaName");

	ABP_TalkEventManager_C_GetActorFromTagCharaName_Params params;
	params.CharaName = CharaName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecCharacterTurnTask
// (Net, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCharacterTurnTask*      CharacterTurnTask              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecCharacterTurnTask(class UCharacterTurnTask* CharacterTurnTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecCharacterTurnTask");

	ABP_TalkEventManager_C_ExecCharacterTurnTask_Params params;
	params.CharacterTurnTask = CharacterTurnTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.GetJoinedThisTalkActorByName
// (NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_GetJoinedThisTalkActorByName(const struct FName& Name, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.GetJoinedThisTalkActorByName");

	ABP_TalkEventManager_C_GetJoinedThisTalkActorByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.CanSkipCurrentTask
// (Net, NetReliable, NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Public, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bCan                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_CanSkipCurrentTask(bool* bCan)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.CanSkipCurrentTask");

	ABP_TalkEventManager_C_CanSkipCurrentTask_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCan != nullptr)
		*bCan = params.bCan;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecFadeTask
// (NetReliable, Native, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFadeTask*               FadeTask                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecFadeTask(class UFadeTask* FadeTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecFadeTask");

	ABP_TalkEventManager_C_ExecFadeTask_Params params;
	params.FadeTask = FadeTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecStartedMiniGameTask
// (Net, NetReliable, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UStartedMiniGameTask*    MiniGameTask                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecStartedMiniGameTask(class UStartedMiniGameTask* MiniGameTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecStartedMiniGameTask");

	ABP_TalkEventManager_C_ExecStartedMiniGameTask_Params params;
	params.MiniGameTask = MiniGameTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.CanTransitionToTalkProcessing
// (NetRequest, Public, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  TalkTo                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::CanTransitionToTalkProcessing(class AActor* TalkTo, bool* bProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.CanTransitionToTalkProcessing");

	ABP_TalkEventManager_C_CanTransitionToTalkProcessing_Params params;
	params.TalkTo = TalkTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessing != nullptr)
		*bProcessing = params.bProcessing;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.InitVariables
// (NetRequest, Exec, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class AActor*                  InTalkedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InIsBS                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_InitVariables(class AActor* InTalkedActor, bool InIsBS)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.InitVariables");

	ABP_TalkEventManager_C_InitVariables_Params params;
	params.InTalkedActor = InTalkedActor;
	params.InIsBS = InIsBS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.GetTalkType
// (Event, NetResponse, Static, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTalkEventTaskBase*      Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EAutoCameraType                Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_GetTalkType(class UTalkEventTaskBase* Task, EAutoCameraType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.GetTalkType");

	ABP_TalkEventManager_C_GetTalkType_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.GetLookAtTaskMotionDirection
// (NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Private, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  LookAtActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  NpcActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Picth                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_GetLookAtTaskMotionDirection(class AActor* LookAtActor, class AActor* NpcActor, float* Yaw, float* Picth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.GetLookAtTaskMotionDirection");

	ABP_TalkEventManager_C_GetLookAtTaskMotionDirection_Params params;
	params.LookAtActor = LookAtActor;
	params.NpcActor = NpcActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Yaw != nullptr)
		*Yaw = params.Yaw;
	if (Picth != nullptr)
		*Picth = params.Picth;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecLookAtTask
// (Net, NetResponse, Static, MulticastDelegate, NetServer)
// Parameters:
// class ULookAtTask*             LookAtTask                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnlyCamera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecLookAtTask(class ULookAtTask* LookAtTask, bool OnlyCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecLookAtTask");

	ABP_TalkEventManager_C_ExecLookAtTask_Params params;
	params.LookAtTask = LookAtTask;
	params.OnlyCamera = OnlyCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecShowItemTask
// (Net, NetReliable, Native, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// class UShowItemTask*           ShowItemTask                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isShowStart                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecShowItemTask(class UShowItemTask* ShowItemTask, bool* isShowStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecShowItemTask");

	ABP_TalkEventManager_C_ExecShowItemTask_Params params;
	params.ShowItemTask = ShowItemTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isShowStart != nullptr)
		*isShowStart = params.isShowStart;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.DestroyKeywardSelect
// (Net, NetReliable, Exec, Native, NetResponse, Static, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_TalkEventManager_C::STATIC_DestroyKeywardSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.DestroyKeywardSelect");

	ABP_TalkEventManager_C_DestroyKeywardSelect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecKsLabelTask
// (Net, Exec, Event, NetResponse, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class UKsLabelTask*            KsLabelTask                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecKsLabelTask(class UKsLabelTask* KsLabelTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecKsLabelTask");

	ABP_TalkEventManager_C_ExecKsLabelTask_Params params;
	params.KsLabelTask = KsLabelTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.TryGetItemIndex
// (Net, Native, Event, NetResponse, Static, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 FlagStr                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_TryGetItemIndex(const struct FString& FlagStr, bool* IsFound, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.TryGetItemIndex");

	ABP_TalkEventManager_C_TryGetItemIndex_Params params;
	params.FlagStr = FlagStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFound != nullptr)
		*IsFound = params.IsFound;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecItemTask
// (Net, NetReliable, NetRequest, Native, Event, Static, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintPure)
// Parameters:
// class UItemTask*               ItemTask                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecItemTask(class UItemTask* ItemTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecItemTask");

	ABP_TalkEventManager_C_ExecItemTask_Params params;
	params.ItemTask = ItemTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.SetTalkActors
// (Event, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintEvent, BlueprintPure)

void ABP_TalkEventManager_C::STATIC_SetTalkActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.SetTalkActors");

	ABP_TalkEventManager_C_SetTalkActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.SetTargetsFromIds
// (NetReliable, NetRequest, Event, Static, Public, Delegate, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FString>         Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          TargetArray                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_TalkEventManager_C::STATIC_SetTargetsFromIds(TArray<struct FString>* Array, TArray<class AActor*>* TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.SetTargetsFromIds");

	ABP_TalkEventManager_C_SetTargetsFromIds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecCameraTask
// (NetRequest, Exec, Native, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UCameraTask*             CameraTask                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecCameraTask(class UCameraTask* CameraTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecCameraTask");

	ABP_TalkEventManager_C_ExecCameraTask_Params params;
	params.CameraTask = CameraTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecCameraGroupTargets
// (NetRequest, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class UCameraGroupTask*        CameraGroupTask                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecCameraGroupTargets(class UCameraGroupTask* CameraGroupTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecCameraGroupTargets");

	ABP_TalkEventManager_C_ExecCameraGroupTargets_Params params;
	params.CameraGroupTask = CameraGroupTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.GetSubtitleChara
// (NetReliable, NetRequest, Native, Event, NetMulticast, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class UTalkTask*               TalkTask                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_TalkCharacterType> TalkType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::GetSubtitleChara(class UTalkTask* TalkTask, TEnumAsByte<EN_TalkCharacterType>* TalkType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.GetSubtitleChara");

	ABP_TalkEventManager_C_GetSubtitleChara_Params params;
	params.TalkTask = TalkTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TalkType != nullptr)
		*TalkType = params.TalkType;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.GetSpeakerID
// (Exec, Event, NetMulticast, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)
// Parameters:
// class UTalkTask*               TalkTask                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::GetSpeakerID(class UTalkTask* TalkTask, struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.GetSpeakerID");

	ABP_TalkEventManager_C_GetSpeakerID_Params params;
	params.TalkTask = TalkTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ClearSubtitle
// (Net, Native, MulticastDelegate, Private, Protected, Delegate, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_TalkEventManager_C::ClearSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ClearSubtitle");

	ABP_TalkEventManager_C_ClearSubtitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.RevertFlags
// (Native, NetResponse, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_TalkEventManager_C::RevertFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.RevertFlags");

	ABP_TalkEventManager_C_RevertFlags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecMotionTask
// (NetRequest, Event, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMotionTask*             MotionTask                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecMotionTask(class UMotionTask* MotionTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecMotionTask");

	ABP_TalkEventManager_C_ExecMotionTask_Params params;
	params.MotionTask = MotionTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecInfoTask
// (NetRequest, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInfoTask*               InfoTask                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecInfoTask(class UInfoTask* InfoTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecInfoTask");

	ABP_TalkEventManager_C_ExecInfoTask_Params params;
	params.InfoTask = InfoTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.TraceErrorVoice
// (Event, NetResponse, Static, MulticastDelegate, Delegate, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Voice                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_TraceErrorVoice(class UObject* Voice, const struct FName& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.TraceErrorVoice");

	ABP_TalkEventManager_C_TraceErrorVoice_Params params;
	params.Voice = Voice;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecFocusChange
// (Net, NetRequest, Exec, Native, Static, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UChangeFocusTask*        Task                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecFocusChange(class UChangeFocusTask* Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecFocusChange");

	ABP_TalkEventManager_C_ExecFocusChange_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.UpdateSubList
// (NetReliable, Native, NetResponse, NetMulticast, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport)

void ABP_TalkEventManager_C::UpdateSubList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.UpdateSubList");

	ABP_TalkEventManager_C_UpdateSubList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.UpdateActiveList
// (Exec, MulticastDelegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)

void ABP_TalkEventManager_C::UpdateActiveList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.UpdateActiveList");

	ABP_TalkEventManager_C_UpdateActiveList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.TryGetTalkComponent
// (Net, NetReliable, NetResponse, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBPC_S3_TalkComponent_C* TalkComponent                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_TalkEventManager_C::TryGetTalkComponent(class AActor* Actor, class UBPC_S3_TalkComponent_C** TalkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.TryGetTalkComponent");

	ABP_TalkEventManager_C_TryGetTalkComponent_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TalkComponent != nullptr)
		*TalkComponent = params.TalkComponent;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecEmoteTask
// (Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEmoteTask*              EmoteTask                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ExecEmoteTask(class UEmoteTask* EmoteTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecEmoteTask");

	ABP_TalkEventManager_C_ExecEmoteTask_Params params;
	params.EmoteTask = EmoteTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.FindSubStrings
// (Exec, Event, NetResponse, Static, Public, Private, Protected, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 InStr                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FString>         SubStrings                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsFound                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         foundStrings                   (Parm, OutParm, ZeroConstructor)

void ABP_TalkEventManager_C::STATIC_FindSubStrings(const struct FString& InStr, TArray<struct FString>* SubStrings, bool* IsFound, TArray<struct FString>* foundStrings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.FindSubStrings");

	ABP_TalkEventManager_C_FindSubStrings_Params params;
	params.InStr = InStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubStrings != nullptr)
		*SubStrings = params.SubStrings;
	if (IsFound != nullptr)
		*IsFound = params.IsFound;
	if (foundStrings != nullptr)
		*foundStrings = params.foundStrings;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetFlag
// (Net, NetMulticast, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent)
// Parameters:
// class USetTask*                SetTask                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecSetFlag(class USetTask* SetTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetFlag");

	ABP_TalkEventManager_C_ExecSetFlag_Params params;
	params.SetTask = SetTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ReplaceLF
// (Net, NetReliable, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 InStr                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 Result                         (Parm, OutParm, ZeroConstructor)

void ABP_TalkEventManager_C::STATIC_ReplaceLF(const struct FString& InStr, struct FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ReplaceLF");

	ABP_TalkEventManager_C_ReplaceLF_Params params;
	params.InStr = InStr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecNoVoiceTimeTask
// (NetRequest, Exec, Event, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// class USetNoVoiceTimeTask*     NoVoiceTimeTask                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecNoVoiceTimeTask(class USetNoVoiceTimeTask* NoVoiceTimeTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecNoVoiceTimeTask");

	ABP_TalkEventManager_C_ExecNoVoiceTimeTask_Params params;
	params.NoVoiceTimeTask = NoVoiceTimeTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecIfTask
// (Net, Native, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UIfTask*                 IfTask                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecIfTask(class UIfTask* IfTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecIfTask");

	ABP_TalkEventManager_C_ExecIfTask_Params params;
	params.IfTask = IfTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.EvaluateExpression
// (NetMulticast, Private, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FString                 InStr                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bError                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::EvaluateExpression(const struct FString& InStr, int* Result, bool* bError)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.EvaluateExpression");

	ABP_TalkEventManager_C_EvaluateExpression_Params params;
	params.InStr = InStr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (bError != nullptr)
		*bError = params.bError;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.StartTalk
// (Net, NetReliable, Exec, Native, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTalkTask*               TalkTask                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::StartTalk(class UTalkTask* TalkTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.StartTalk");

	ABP_TalkEventManager_C_StartTalk_Params params;
	params.TalkTask = TalkTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.CreateCameraManager
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EAutoCameraType                AutoCameraType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::CreateCameraManager(EAutoCameraType AutoCameraType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.CreateCameraManager");

	ABP_TalkEventManager_C_CreateCameraManager_Params params;
	params.AutoCameraType = AutoCameraType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.UserConstructionScript
// (Net, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_TalkEventManager_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.UserConstructionScript");

	ABP_TalkEventManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.InpActEvt_Shift_C_K2Node_InputKeyEvent_8
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_TalkEventManager_C::STATIC_InpActEvt_Shift_C_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.InpActEvt_Shift_C_K2Node_InputKeyEvent_8");

	ABP_TalkEventManager_C_InpActEvt_Shift_C_K2Node_InputKeyEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.InpActEvt_Ctrl_Q_K2Node_InputKeyEvent_7
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_TalkEventManager_C::STATIC_InpActEvt_Ctrl_Q_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.InpActEvt_Ctrl_Q_K2Node_InputKeyEvent_7");

	ABP_TalkEventManager_C_InpActEvt_Ctrl_Q_K2Node_InputKeyEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.InpActEvt_Shift_K_K2Node_InputKeyEvent_6
// (Net, NetRequest, Exec, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_TalkEventManager_C::STATIC_InpActEvt_Shift_K_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.InpActEvt_Shift_K_K2Node_InputKeyEvent_6");

	ABP_TalkEventManager_C_InpActEvt_Shift_K_K2Node_InputKeyEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.InpActEvt_Q_K2Node_InputKeyEvent_5
// (NetRequest, Exec, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_TalkEventManager_C::STATIC_InpActEvt_Q_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.InpActEvt_Q_K2Node_InputKeyEvent_5");

	ABP_TalkEventManager_C_InpActEvt_Q_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.InpActEvt_TalkSkip_K2Node_InputActionEvent_2
// (NetRequest, Exec, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_TalkEventManager_C::STATIC_InpActEvt_TalkSkip_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.InpActEvt_TalkSkip_K2Node_InputActionEvent_2");

	ABP_TalkEventManager_C_InpActEvt_TalkSkip_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnLoaded_8AD0905A45E984F04EF8EC995D53228B
// (Net, NetReliable, Exec, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_OnLoaded_8AD0905A45E984F04EF8EC995D53228B(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnLoaded_8AD0905A45E984F04EF8EC995D53228B");

	ABP_TalkEventManager_C_OnLoaded_8AD0905A45E984F04EF8EC995D53228B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.BindHUDFadeEvents
// (Net, NetRequest, Native, Event, NetResponse, NetMulticast, NetServer)

void ABP_TalkEventManager_C::BindHUDFadeEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.BindHUDFadeEvents");

	ABP_TalkEventManager_C_BindHUDFadeEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.UnbindHUDEvents
// (Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_UnbindHUDEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.UnbindHUDEvents");

	ABP_TalkEventManager_C_UnbindHUDEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnFinishedFadeIn
// (Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_OnFinishedFadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnFinishedFadeIn");

	ABP_TalkEventManager_C_OnFinishedFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnFinishedFadeOut
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, NetServer)

void ABP_TalkEventManager_C::OnFinishedFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnFinishedFadeOut");

	ABP_TalkEventManager_C_OnFinishedFadeOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.BindPopupItemEvent
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, NetServer)

void ABP_TalkEventManager_C::BindPopupItemEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.BindPopupItemEvent");

	ABP_TalkEventManager_C_BindPopupItemEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnFinishedPopup
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, NetServer)

void ABP_TalkEventManager_C::OnFinishedPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnFinishedPopup");

	ABP_TalkEventManager_C_OnFinishedPopup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.BindBuyKihudaEvents
// (Net, NetReliable, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_S3BetMoneyManager_C* BetManager                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_BindBuyKihudaEvents(class ABP_S3BetMoneyManager_C* BetManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.BindBuyKihudaEvents");

	ABP_TalkEventManager_C_BindBuyKihudaEvents_Params params;
	params.BetManager = BetManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnBuyKihuda
// (Net, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, NetServer)

void ABP_TalkEventManager_C::OnBuyKihuda()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnBuyKihuda");

	ABP_TalkEventManager_C_OnBuyKihuda_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnCancelledKihuda
// (Net, NetRequest, Exec, Native, Event, NetResponse, NetMulticast, NetServer)

void ABP_TalkEventManager_C::OnCancelledKihuda()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnCancelledKihuda");

	ABP_TalkEventManager_C_OnCancelledKihuda_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.UnbindBuyKihudaEvents
// (NetReliable, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_S3BetMoneyManager_C* BetManager                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_UnbindBuyKihudaEvents(class ABP_S3BetMoneyManager_C* BetManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.UnbindBuyKihudaEvents");

	ABP_TalkEventManager_C_UnbindBuyKihudaEvents_Params params;
	params.BetManager = BetManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.BindinventoryEvents
// (NetReliable, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_UI_GiftManager_C*    UseItemManager                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_BindinventoryEvents(class ABP_UI_GiftManager_C* UseItemManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.BindinventoryEvents");

	ABP_TalkEventManager_C_BindinventoryEvents_Params params;
	params.UseItemManager = UseItemManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.UnbindinventoryEvents
// (Net, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_UI_GiftManager_C*    UseItemManager                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_UnbindinventoryEvents(class ABP_UI_GiftManager_C* UseItemManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.UnbindinventoryEvents");

	ABP_TalkEventManager_C_UnbindinventoryEvents_Params params;
	params.UseItemManager = UseItemManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnInventoryUseItem
// (Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_UseItemResult>  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_OnInventoryUseItem(TEnumAsByte<EN_UseItemResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnInventoryUseItem");

	ABP_TalkEventManager_C_OnInventoryUseItem_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.BindShowItemZoomEvent
// (NetReliable, Exec, Native, Event, NetResponse, NetMulticast, NetServer)

void ABP_TalkEventManager_C::BindShowItemZoomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.BindShowItemZoomEvent");

	ABP_TalkEventManager_C_BindShowItemZoomEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.UnbindShowItemZoomEvent
// (NetReliable, Exec, Native, Event, NetResponse, NetMulticast, NetServer)

void ABP_TalkEventManager_C::UnbindShowItemZoomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.UnbindShowItemZoomEvent");

	ABP_TalkEventManager_C_UnbindShowItemZoomEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.CheckForShowItemZoomCameraStart
// (Net, NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_CheckForShowItemZoomCameraStart(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.CheckForShowItemZoomCameraStart");

	ABP_TalkEventManager_C_CheckForShowItemZoomCameraStart_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.BindShowItemPutAwayEvent
// (Net, Exec, Native, Event, NetResponse, NetMulticast, NetServer)

void ABP_TalkEventManager_C::BindShowItemPutAwayEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.BindShowItemPutAwayEvent");

	ABP_TalkEventManager_C_BindShowItemPutAwayEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.UnbindShowItemPutAwayEvent
// (Net, NetReliable, NetRequest, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_UnbindShowItemPutAwayEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.UnbindShowItemPutAwayEvent");

	ABP_TalkEventManager_C_UnbindShowItemPutAwayEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.CheckForShowItemPutAway
// (Net, Exec, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_CheckForShowItemPutAway(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.CheckForShowItemPutAway");

	ABP_TalkEventManager_C_CheckForShowItemPutAway_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.BindMiniGameEvents
// (Exec, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_MiniGameBase_C*      MiniGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_BindMiniGameEvents(class ABP_MiniGameBase_C* MiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.BindMiniGameEvents");

	ABP_TalkEventManager_C_BindMiniGameEvents_Params params;
	params.MiniGame = MiniGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnMiniGameEnd
// (Exec, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_OnMiniGameEnd(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnMiniGameEnd");

	ABP_TalkEventManager_C_OnMiniGameEnd_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.BindMiniGameEnterEvents
// (Net, NetReliable, NetRequest, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_MiniGameBase_C*      MiniGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_BindMiniGameEnterEvents(class ABP_MiniGameBase_C* MiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.BindMiniGameEnterEvents");

	ABP_TalkEventManager_C_BindMiniGameEnterEvents_Params params;
	params.MiniGame = MiniGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnFinishedEnterMiniGame
// (NetReliable, NetRequest, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_OnFinishedEnterMiniGame(class ABP_MiniGameBase_C* SelfMiniGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnFinishedEnterMiniGame");

	ABP_TalkEventManager_C_OnFinishedEnterMiniGame_Params params;
	params.SelfMiniGame = SelfMiniGame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnMiniGameScriptEvent
// (Net, NetReliable, NetResponse, MulticastDelegate, Protected, HasOutParms, NetClient, DLLImport)
// Parameters:
// class ABP_MiniGameBase_C*      SelfMiniGame                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EventNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::OnMiniGameScriptEvent(class ABP_MiniGameBase_C* SelfMiniGame, int EventNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnMiniGameScriptEvent");

	ABP_TalkEventManager_C_OnMiniGameScriptEvent_Params params;
	params.SelfMiniGame = SelfMiniGame;
	params.EventNumber = EventNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.UnbindMiniGameEvents
// (Net, NetReliable, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_UnbindMiniGameEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.UnbindMiniGameEvents");

	ABP_TalkEventManager_C_UnbindMiniGameEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.BindMiniGameChooseEvents
// (Net, NetRequest, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_MiniGameChoose_C*    MiniGameChooseActor            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_BindMiniGameChooseEvents(class ABP_MiniGameChoose_C* MiniGameChooseActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.BindMiniGameChooseEvents");

	ABP_TalkEventManager_C_BindMiniGameChooseEvents_Params params;
	params.MiniGameChooseActor = MiniGameChooseActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnChooseMiniGame
// (Net, NetRequest, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  ChooseActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_OnChooseMiniGame(class AActor* ChooseActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnChooseMiniGame");

	ABP_TalkEventManager_C_OnChooseMiniGame_Params params;
	params.ChooseActor = ChooseActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnCancelChooseMiniGame
// (NetReliable, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_OnCancelChooseMiniGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnCancelChooseMiniGame");

	ABP_TalkEventManager_C_OnCancelChooseMiniGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnDestroyedChooseActors
// (NetRequest, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_OnDestroyedChooseActors(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnDestroyedChooseActors");

	ABP_TalkEventManager_C_OnDestroyedChooseActors_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.EventFastForwarding
// (Net, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_EventFastForwarding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.EventFastForwarding");

	ABP_TalkEventManager_C_EventFastForwarding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ToggleCameraCutDebugMode
// (NetRequest, Exec, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_ToggleCameraCutDebugMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ToggleCameraCutDebugMode");

	ABP_TalkEventManager_C_ToggleCameraCutDebugMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.TakeCameraDebugScreenShot
// (NetRequest, Exec, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_TakeCameraDebugScreenShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.TakeCameraDebugScreenShot");

	ABP_TalkEventManager_C_TakeCameraDebugScreenShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.CameraManagerLerpEnd
// (Net, NetReliable, Exec, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_CameraManagerLerpEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.CameraManagerLerpEnd");

	ABP_TalkEventManager_C_CameraManagerLerpEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.TryChangeCamera
// (Net, NetReliable, NetRequest, Exec, Event, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// EAutoCameraType                AutoCameraType                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TalkCharacterId                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 LockTargetCharacterId          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_TalkEventManager_C::TryChangeCamera(EAutoCameraType AutoCameraType, const struct FString& TalkCharacterId, const struct FString& LockTargetCharacterId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.TryChangeCamera");

	ABP_TalkEventManager_C_TryChangeCamera_Params params;
	params.AutoCameraType = AutoCameraType;
	params.TalkCharacterId = TalkCharacterId;
	params.LockTargetCharacterId = LockTargetCharacterId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnCallUpdateCameraTask
// (NetResponse, MulticastDelegate, Protected, HasOutParms, NetClient, DLLImport)
// Parameters:
// struct FString                 TalkCharacterId                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 LockTargetCharacterId          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_TalkEventManager_C::OnCallUpdateCameraTask(const struct FString& TalkCharacterId, const struct FString& LockTargetCharacterId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnCallUpdateCameraTask");

	ABP_TalkEventManager_C_OnCallUpdateCameraTask_Params params;
	params.TalkCharacterId = TalkCharacterId;
	params.LockTargetCharacterId = LockTargetCharacterId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.EndPreviewCameraMode
// (NetReliable, Exec, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_EndPreviewCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.EndPreviewCameraMode");

	ABP_TalkEventManager_C_EndPreviewCameraMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnTalkEventFinished
// (NetReliable, Exec, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_OnTalkEventFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnTalkEventFinished");

	ABP_TalkEventManager_C_OnTalkEventFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ReceiveBeginPlay
// (Net, Exec, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ReceiveBeginPlay");

	ABP_TalkEventManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnFinished
// (NetReliable, NetRequest, Exec, Event, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTalkEventTaskBase*      ptr                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NextIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBreakEvent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::OnFinished(class UTalkEventTaskBase* ptr, int NextIndex, bool bBreakEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnFinished");

	ABP_TalkEventManager_C_OnFinished_Params params;
	params.ptr = ptr;
	params.NextIndex = NextIndex;
	params.bBreakEvent = bBreakEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnTalkStart
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTalkEventTaskBase*      ptr                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_OnTalkStart(class UTalkEventTaskBase* ptr)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnTalkStart");

	ABP_TalkEventManager_C_OnTalkStart_Params params;
	params.ptr = ptr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnActivate
// (Net, NetReliable, Exec, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTalkEventTaskBase*      ptr                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_OnActivate(class UTalkEventTaskBase* ptr)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnActivate");

	ABP_TalkEventManager_C_OnActivate_Params params;
	params.ptr = ptr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.DelayedTalkStart
// (Exec, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_DelayedTalkStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.DelayedTalkStart");

	ABP_TalkEventManager_C_DelayedTalkStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ReceiveTick
// (NetReliable, Exec, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ReceiveTick");

	ABP_TalkEventManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnFinishedSubEvent
// (Net, NetRequest, Exec, Event, MulticastDelegate, Public, Private, Protected, Delegate, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTalkEventTaskBase*      ptr                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NextIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBreakEvent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::OnFinishedSubEvent(class UTalkEventTaskBase* ptr, int NextIndex, bool bBreakEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnFinishedSubEvent");

	ABP_TalkEventManager_C_OnFinishedSubEvent_Params params;
	params.ptr = ptr;
	params.NextIndex = NextIndex;
	params.bBreakEvent = bBreakEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.doNextStep
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_doNextStep(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.doNextStep");

	ABP_TalkEventManager_C_doNextStep_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.doCancel
// (Net, NetReliable, Native, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_doCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.doCancel");

	ABP_TalkEventManager_C_doCancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.InitialMotion
// (Net, NetReliable, Native, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_InitialMotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.InitialMotion");

	ABP_TalkEventManager_C_InitialMotion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnEndInitialMotion
// (NetReliable, Native, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_OnEndInitialMotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnEndInitialMotion");

	ABP_TalkEventManager_C_OnEndInitialMotion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.SkippedCurrentTalk
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTalkTask*               SkippedTask                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_SkippedCurrentTalk(class UTalkTask* SkippedTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.SkippedCurrentTalk");

	ABP_TalkEventManager_C_SkippedCurrentTalk_Params params;
	params.SkippedTask = SkippedTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.catch_onSelected
// (Net, NetRequest, Exec, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_catch_onSelected(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.catch_onSelected");

	ABP_TalkEventManager_C_catch_onSelected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.UnbindKeywardSelect
// (Net, Native, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_UnbindKeywardSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.UnbindKeywardSelect");

	ABP_TalkEventManager_C_UnbindKeywardSelect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.TimeupMessageWait
// (Native, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_TimeupMessageWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.TimeupMessageWait");

	ABP_TalkEventManager_C_TimeupMessageWait_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.FinalizeCleanUI
// (Native, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_FinalizeCleanUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.FinalizeCleanUI");

	ABP_TalkEventManager_C_FinalizeCleanUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.TrySkipCurrentTalkTask
// (Net, NetReliable, NetRequest, Exec, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_TrySkipCurrentTalkTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.TrySkipCurrentTalkTask");

	ABP_TalkEventManager_C_TrySkipCurrentTalkTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.SkipMessageWait
// (Net, NetReliable, NetRequest, Exec, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_SkipMessageWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.SkipMessageWait");

	ABP_TalkEventManager_C_SkipMessageWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnEndCutscene
// (NetReliable, NetRequest, Exec, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_OnEndCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnEndCutscene");

	ABP_TalkEventManager_C_OnEndCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.RunDoorTalk
// (Net, NetRequest, Exec, Native, Event, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// class AActor*                  InTalkedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InIsBS                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTalkScript*             InTalkScript                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBPC_S3_TalkComponent_C* InTalkComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_TalkEventManager_C::RunDoorTalk(class AActor* InTalkedActor, bool InIsBS, class UTalkScript* InTalkScript, class UBPC_S3_TalkComponent_C* InTalkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.RunDoorTalk");

	ABP_TalkEventManager_C_RunDoorTalk_Params params;
	params.InTalkedActor = InTalkedActor;
	params.InIsBS = InIsBS;
	params.InTalkScript = InTalkScript;
	params.InTalkComponent = InTalkComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.HintTalkStart
// (Net, NetReliable, Exec, Native, Event, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// class AActor*                  InTalkedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTalkScript*             InTalkScript                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBPC_S3_TalkComponent_C* InTalkComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  InHintTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::HintTalkStart(class AActor* InTalkedActor, class UTalkScript* InTalkScript, class UBPC_S3_TalkComponent_C* InTalkComponent, class AActor* InHintTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.HintTalkStart");

	ABP_TalkEventManager_C_HintTalkStart_Params params;
	params.InTalkedActor = InTalkedActor;
	params.InTalkScript = InTalkScript;
	params.InTalkComponent = InTalkComponent;
	params.InHintTarget = InHintTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnAcCameraFinised
// (NetRequest, Exec, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class ULevelSequencePlayer*    LevelSequencePlayer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_OnAcCameraFinised(class ULevelSequencePlayer* LevelSequencePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnAcCameraFinised");

	ABP_TalkEventManager_C_OnAcCameraFinised_Params params;
	params.LevelSequencePlayer = LevelSequencePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnAcCameraStoped
// (Net, NetRequest, Exec, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_OnAcCameraStoped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnAcCameraStoped");

	ABP_TalkEventManager_C_OnAcCameraStoped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.SkipShowItem
// (Net, NetRequest, Exec, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_SkipShowItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.SkipShowItem");

	ABP_TalkEventManager_C_SkipShowItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnShowItemZoomEnd
// (Net, Exec, Native, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_OnShowItemZoomEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnShowItemZoomEnd");

	ABP_TalkEventManager_C_OnShowItemZoomEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.StartAC
// (Exec, Native, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_StartAC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.StartAC");

	ABP_TalkEventManager_C_StartAC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnTimeoutTransition
// (Exec, Native, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_OnTimeoutTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnTimeoutTransition");

	ABP_TalkEventManager_C_OnTimeoutTransition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.StopAcCamera
// (Net, NetReliable, NetRequest, Native, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_StopAcCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.StopAcCamera");

	ABP_TalkEventManager_C_StopAcCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.Initialize
// (NetReliable, NetRequest, Native, NetResponse, Static, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  InTalkedActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InIsBS                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTalkScript*             InTalkScript                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3TalkComponent*        InTalkComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ENPCTalkState                  InTalkState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_Initialize(class AActor* InTalkedActor, bool InIsBS, class UTalkScript* InTalkScript, class US3TalkComponent* InTalkComponent, ENPCTalkState InTalkState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.Initialize");

	ABP_TalkEventManager_C_Initialize_Params params;
	params.InTalkedActor = InTalkedActor;
	params.InIsBS = InIsBS;
	params.InTalkScript = InTalkScript;
	params.InTalkComponent = InTalkComponent;
	params.InTalkState = InTalkState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.FinishKSAnim
// (Net, NetReliable, NetRequest, Native, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_FinishKSAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.FinishKSAnim");

	ABP_TalkEventManager_C_FinishKSAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.FinishCaptionAnim
// (NetReliable, NetRequest, Native, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_FinishCaptionAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.FinishCaptionAnim");

	ABP_TalkEventManager_C_FinishCaptionAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.StartShowItemZoom
// (NetReliable, NetRequest, Native, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_StartShowItemZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.StartShowItemZoom");

	ABP_TalkEventManager_C_StartShowItemZoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.DelayPermitUI
// (Net, NetRequest, Native, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_DelayPermitUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.DelayPermitUI");

	ABP_TalkEventManager_C_DelayPermitUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.DisablePhysics
// (NetReliable, NetRequest, Exec, Native, Event, Static, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class AS3Character*            Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_DisablePhysics(class AS3Character* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.DisablePhysics");

	ABP_TalkEventManager_C_DisablePhysics_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.LoadedCueSheet
// (NetRequest, Native, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_LoadedCueSheet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.LoadedCueSheet");

	ABP_TalkEventManager_C_LoadedCueSheet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.WaitLookAtTask
// (NetRequest, Native, Static, NetMulticast, NetServer)

void ABP_TalkEventManager_C::STATIC_WaitLookAtTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.WaitLookAtTask");

	ABP_TalkEventManager_C_WaitLookAtTask_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecuteUbergraph_BP_TalkEventManager
// (Public, Protected, Delegate, HasOutParms, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::ExecuteUbergraph_BP_TalkEventManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.ExecuteUbergraph_BP_TalkEventManager");

	ABP_TalkEventManager_C_ExecuteUbergraph_BP_TalkEventManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnStartAcCameraSequence__DelegateSignature
// (Exec, NetResponse, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ALevelSequenceActor*     PlaySequenceActor              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_OnStartAcCameraSequence__DelegateSignature(class ALevelSequenceActor* PlaySequenceActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnStartAcCameraSequence__DelegateSignature");

	ABP_TalkEventManager_C_OnStartAcCameraSequence__DelegateSignature_Params params;
	params.PlaySequenceActor = PlaySequenceActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnStreetFightFinished__DelegateSignature
// (Net, Exec, NetResponse, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Enum_StreetFightResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_OnStreetFightFinished__DelegateSignature(TEnumAsByte<Enum_StreetFightResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnStreetFightFinished__DelegateSignature");

	ABP_TalkEventManager_C_OnStreetFightFinished__DelegateSignature_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnEndKeywordSelect__DelegateSignature
// (NetReliable, Exec, NetResponse, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<E_TalkKeywordSelect> Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_OnEndKeywordSelect__DelegateSignature(TEnumAsByte<E_TalkKeywordSelect> Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnEndKeywordSelect__DelegateSignature");

	ABP_TalkEventManager_C_OnEndKeywordSelect__DelegateSignature_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnInputQuestDebugKey__DelegateSignature
// (Exec, NetResponse, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_TalkEventManager_C::STATIC_OnInputQuestDebugKey__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnInputQuestDebugKey__DelegateSignature");

	ABP_TalkEventManager_C_OnInputQuestDebugKey__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.OnSkipTalkTask__DelegateSignature
// (Net, Exec, NetResponse, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          SkipTaskDuration               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_OnSkipTalkTask__DelegateSignature(float SkipTaskDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.OnSkipTalkTask__DelegateSignature");

	ABP_TalkEventManager_C_OnSkipTalkTask__DelegateSignature_Params params;
	params.SkipTaskDuration = SkipTaskDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.commandAction(cancel)__DelegateSignature
// (Net, Exec, NetResponse, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)

void ABP_TalkEventManager_C::STATIC_commandAction_cancel___DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.commandAction(cancel)__DelegateSignature");

	ABP_TalkEventManager_C_commandAction_cancel___DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.commandAction(skip)__DelegateSignature
// (NetReliable, Exec, NetResponse, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_commandAction_skip___DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.commandAction(skip)__DelegateSignature");

	ABP_TalkEventManager_C_commandAction_skip___DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TalkEventManager.BP_TalkEventManager_C.commandAction(step)__DelegateSignature
// (Net, Exec, NetResponse, Static, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TalkEventManager_C::STATIC_commandAction_step___DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TalkEventManager.BP_TalkEventManager_C.commandAction(step)__DelegateSignature");

	ABP_TalkEventManager_C_commandAction_step___DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
