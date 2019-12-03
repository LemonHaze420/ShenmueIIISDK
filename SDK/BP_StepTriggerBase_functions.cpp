
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

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckTime
// (Exec, NetResponse, NetMulticast, Protected, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_StepTriggerBase_C::CheckTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckTime");

	ABP_StepTriggerBase_C_CheckTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.HasGameTimeRestriction
// (Net, NetRequest, Exec, Native, Event, MulticastDelegate, Private, Protected, Delegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_StepTriggerBase_C::HasGameTimeRestriction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.HasGameTimeRestriction");

	ABP_StepTriggerBase_C_HasGameTimeRestriction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CacheInStepAndTime
// (Native, Event, MulticastDelegate, Delegate, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Previous                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Next                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::CacheInStepAndTime(int* Previous, int* Next)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.CacheInStepAndTime");

	ABP_StepTriggerBase_C_CacheInStepAndTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Previous != nullptr)
		*Previous = params.Previous;
	if (Next != nullptr)
		*Next = params.Next;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.OnExitStepAndTime
// (NetReliable, NetResponse, Static, MulticastDelegate, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_StepTriggerBase_C::STATIC_OnExitStepAndTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.OnExitStepAndTime");

	ABP_StepTriggerBase_C_OnExitStepAndTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.OnEnterStepAndTime
// (NetReliable, NetRequest, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_StepTriggerBase_C::STATIC_OnEnterStepAndTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.OnEnterStepAndTime");

	ABP_StepTriggerBase_C_OnEnterStepAndTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckSavedConditions
// (Net, NetReliable, NetRequest, Exec, Event, NetResponse, Static, NetMulticast, Public, Private, HasOutParms, NetClient, DLLImport)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_StepTriggerBase_C::STATIC_CheckSavedConditions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckSavedConditions");

	ABP_StepTriggerBase_C_CheckSavedConditions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CanActionByBehaviorState
// (NetReliable, Native, Static, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_StepTriggerBase_C::STATIC_CanActionByBehaviorState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.CanActionByBehaviorState");

	ABP_StepTriggerBase_C_CanActionByBehaviorState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.EnableByStep
// (Net, NetReliable, Exec, NetResponse, Static, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDummy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::STATIC_EnableByStep(bool bEnable, bool* bDummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.EnableByStep");

	ABP_StepTriggerBase_C_EnableByStep_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDummy != nullptr)
		*bDummy = params.bDummy;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ResetBind
// (Exec, Native, NetMulticast, Public, Private, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_StepTriggerBase_C::ResetBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.ResetBind");

	ABP_StepTriggerBase_C_ResetBind_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ResetParam
// (Net, NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::STATIC_ResetParam(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.ResetParam");

	ABP_StepTriggerBase_C_ResetParam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckOverlapPlayer
// (Exec, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Overlap                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::STATIC_CheckOverlapPlayer(bool* Overlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckOverlapPlayer");

	ABP_StepTriggerBase_C_CheckOverlapPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Overlap != nullptr)
		*Overlap = params.Overlap;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.EndOverlap
// (NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_StepTriggerBase_C::STATIC_EndOverlap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.EndOverlap");

	ABP_StepTriggerBase_C_EndOverlap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CanAction
// (Net, NetRequest, Exec, NetResponse, Public, Delegate, BlueprintCallable)
// Parameters:
// bool                           CheckOnly                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CAN                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::CanAction(bool CheckOnly, bool* CAN)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.CanAction");

	ABP_StepTriggerBase_C_CanAction_Params params;
	params.CheckOnly = CheckOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CAN != nullptr)
		*CAN = params.CAN;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckStep
// (NetReliable, NetRequest, Exec, Event, NetMulticast, Private, Protected, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnFlag                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::CheckStep(bool* ReturnFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckStep");

	ABP_StepTriggerBase_C_CheckStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnFlag != nullptr)
		*ReturnFlag = params.ReturnFlag;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.PlayAction
// (NetReliable, Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::STATIC_PlayAction(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.PlayAction");

	ABP_StepTriggerBase_C_PlayAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckStepAndTime
// (NetRequest, Native, Static, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnFlag                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::STATIC_CheckStepAndTime(bool* ReturnFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckStepAndTime");

	ABP_StepTriggerBase_C_CheckStepAndTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnFlag != nullptr)
		*ReturnFlag = params.ReturnFlag;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.UserConstructionScript
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Protected, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_StepTriggerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.UserConstructionScript");

	ABP_StepTriggerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.BindTalkEvent
// (Exec, NetResponse, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_StepTriggerBase_C::STATIC_BindTalkEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.BindTalkEvent");

	ABP_StepTriggerBase_C_BindTalkEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.OnEndTalk
// (Exec, Native, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_StepTriggerBase_C::OnEndTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.OnEndTalk");

	ABP_StepTriggerBase_C_OnEndTalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.UnBindTalkEvent
// (Net, Event, NetResponse, Static, NetMulticast, Public, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void ABP_StepTriggerBase_C::STATIC_UnBindTalkEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.UnBindTalkEvent");

	ABP_StepTriggerBase_C_UnBindTalkEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.OnFinishedTurn
// (NetRequest, Exec, Native, Event, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBPC_TurnAround_C*       SelfTurnAroundComponent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_StepTriggerBase_C::OnFinishedTurn(class UBPC_TurnAround_C* SelfTurnAroundComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.OnFinishedTurn");

	ABP_StepTriggerBase_C_OnFinishedTurn_Params params;
	params.SelfTurnAroundComponent = SelfTurnAroundComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.BindPlayerBehavior
// (NetReliable, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintPure)

void ABP_StepTriggerBase_C::BindPlayerBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.BindPlayerBehavior");

	ABP_StepTriggerBase_C_BindPlayerBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ChangePlayerBehavior
// (NetReliable, Exec, NetResponse, NetMulticast, Public, Private, HasOutParms, NetClient, DLLImport)
// Parameters:
// ES3PlayerBehavior              NewId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ES3PlayerBehavior              OldId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::ChangePlayerBehavior(ES3PlayerBehavior NewId, ES3PlayerBehavior OldId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.ChangePlayerBehavior");

	ABP_StepTriggerBase_C_ChangePlayerBehavior_Params params;
	params.NewId = NewId;
	params.OldId = OldId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.UnbindPlayerBehavior
// (Net, Exec, Event, NetResponse, Static, NetServer)

void ABP_StepTriggerBase_C::STATIC_UnbindPlayerBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.UnbindPlayerBehavior");

	ABP_StepTriggerBase_C_UnbindPlayerBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ChangeTime
// (Net, NetReliable, Exec, NetResponse, Static, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EventIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::STATIC_ChangeTime(int EventIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.ChangeTime");

	ABP_StepTriggerBase_C_ChangeTime_Params params;
	params.EventIndex = EventIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.BindTimeChange
// (NetReliable, Exec, NetResponse, Static, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::STATIC_BindTimeChange(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.BindTimeChange");

	ABP_StepTriggerBase_C_BindTimeChange_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.UnbindTimeChange
// (Net, NetRequest, Event, NetMulticast, NetServer)

void ABP_StepTriggerBase_C::UnbindTimeChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.UnbindTimeChange");

	ABP_StepTriggerBase_C_UnbindTimeChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ReceiveTick
// (Exec, NetResponse, Static, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.ReceiveTick");

	ABP_StepTriggerBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ReceiveBeginPlay
// (NetReliable, NetRequest, Event, NetMulticast, NetServer)

void ABP_StepTriggerBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.ReceiveBeginPlay");

	ABP_StepTriggerBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ReceiveEndPlay
// (Exec, NetResponse, Static, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.ReceiveEndPlay");

	ABP_StepTriggerBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ChangeStep
// (NetRequest, Event, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SetSteps                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::ChangeStep(int SetSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.ChangeStep");

	ABP_StepTriggerBase_C_ChangeStep_Params params;
	params.SetSteps = SetSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ChangeFlag
// (Net, Native, NetResponse, NetMulticast, Public, Private, HasOutParms, NetClient, DLLImport)
// Parameters:
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SetFlags                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::ChangeFlag(int ArrayIndex, int SetFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.ChangeFlag");

	ABP_StepTriggerBase_C_ChangeFlag_Params params;
	params.ArrayIndex = ArrayIndex;
	params.SetFlags = SetFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.RepondToStepOrTime
// (Net, NetReliable, Event, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Init                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::RepondToStepOrTime(bool Init)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.RepondToStepOrTime");

	ABP_StepTriggerBase_C_RepondToStepOrTime_Params params;
	params.Init = Init;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.TryRegisterNextTimeCheck
// (Net, NetRequest, Exec, Native, Event, NetMulticast, Public, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::TryRegisterNextTimeCheck(bool StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.TryRegisterNextTimeCheck");

	ABP_StepTriggerBase_C_TryRegisterNextTimeCheck_Params params;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ExecuteUbergraph_BP_StepTriggerBase
// (Net, NetReliable, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::ExecuteUbergraph_BP_StepTriggerBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.ExecuteUbergraph_BP_StepTriggerBase");

	ABP_StepTriggerBase_C_ExecuteUbergraph_BP_StepTriggerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
