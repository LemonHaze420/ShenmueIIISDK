
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

// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckTime
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_StepTriggerBase_C::HasGameTimeRestriction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.HasGameTimeRestriction");

	ABP_StepTriggerBase_C_HasGameTimeRestriction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CacheInStepAndTime
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Previous                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Next                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::CacheInStepAndTime(int* Previous, int* Next)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.CacheInStepAndTime");

	ABP_StepTriggerBase_C_CacheInStepAndTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Previous != nullptr)
		*Previous = params.Previous;
	if (Next != nullptr)
		*Next = params.Next;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.OnExitStepAndTime
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_StepTriggerBase_C::OnExitStepAndTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.OnExitStepAndTime");

	ABP_StepTriggerBase_C_OnExitStepAndTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.OnEnterStepAndTime
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_StepTriggerBase_C::OnEnterStepAndTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.OnEnterStepAndTime");

	ABP_StepTriggerBase_C_OnEnterStepAndTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckSavedConditions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_StepTriggerBase_C::CheckSavedConditions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckSavedConditions");

	ABP_StepTriggerBase_C_CheckSavedConditions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CanActionByBehaviorState
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_StepTriggerBase_C::CanActionByBehaviorState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.CanActionByBehaviorState");

	ABP_StepTriggerBase_C_CanActionByBehaviorState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.EnableByStep
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDummy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::EnableByStep(bool bEnable, bool* bDummy)
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
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_StepTriggerBase_C::ResetBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.ResetBind");

	ABP_StepTriggerBase_C_ResetBind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ResetParam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dummy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::ResetParam(bool* dummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.ResetParam");

	ABP_StepTriggerBase_C_ResetParam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dummy != nullptr)
		*dummy = params.dummy;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckOverlapPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Overlap                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::CheckOverlapPlayer(bool* Overlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckOverlapPlayer");

	ABP_StepTriggerBase_C_CheckOverlapPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Overlap != nullptr)
		*Overlap = params.Overlap;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.EndOverlap
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_StepTriggerBase_C::EndOverlap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.EndOverlap");

	ABP_StepTriggerBase_C_EndOverlap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CanAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::PlayAction(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.PlayAction");

	ABP_StepTriggerBase_C_PlayAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckStepAndTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnFlag                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::CheckStepAndTime(bool* ReturnFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.CheckStepAndTime");

	ABP_StepTriggerBase_C_CheckStepAndTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnFlag != nullptr)
		*ReturnFlag = params.ReturnFlag;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_StepTriggerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.UserConstructionScript");

	ABP_StepTriggerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.BindTalkEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_StepTriggerBase_C::BindTalkEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.BindTalkEvent");

	ABP_StepTriggerBase_C_BindTalkEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.OnEndTalk
// (BlueprintCallable, BlueprintEvent)

void ABP_StepTriggerBase_C::OnEndTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.OnEndTalk");

	ABP_StepTriggerBase_C_OnEndTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.UnBindTalkEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_StepTriggerBase_C::UnBindTalkEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.UnBindTalkEvent");

	ABP_StepTriggerBase_C_UnBindTalkEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.OnFinishedTurn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPC_TurnAround_C*       SelfTurnAroundComponent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_StepTriggerBase_C::OnFinishedTurn(class UBPC_TurnAround_C* SelfTurnAroundComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.OnFinishedTurn");

	ABP_StepTriggerBase_C_OnFinishedTurn_Params params;
	params.SelfTurnAroundComponent = SelfTurnAroundComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.BindPlayerBehavior
// (BlueprintCallable, BlueprintEvent)

void ABP_StepTriggerBase_C::BindPlayerBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.BindPlayerBehavior");

	ABP_StepTriggerBase_C_BindPlayerBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ChangePlayerBehavior
// (BlueprintCallable, BlueprintEvent)
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
// (BlueprintCallable, BlueprintEvent)

void ABP_StepTriggerBase_C::UnbindPlayerBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.UnbindPlayerBehavior");

	ABP_StepTriggerBase_C_UnbindPlayerBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ChangeTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EventIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::ChangeTime(int EventIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.ChangeTime");

	ABP_StepTriggerBase_C_ChangeTime_Params params;
	params.EventIndex = EventIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.BindTimeChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::BindTimeChange(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.BindTimeChange");

	ABP_StepTriggerBase_C_BindTimeChange_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.UnbindTimeChange
// (BlueprintCallable, BlueprintEvent)

void ABP_StepTriggerBase_C::UnbindTimeChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.UnbindTimeChange");

	ABP_StepTriggerBase_C_UnbindTimeChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.ReceiveTick");

	ABP_StepTriggerBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_StepTriggerBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.ReceiveBeginPlay");

	ABP_StepTriggerBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.ReceiveEndPlay");

	ABP_StepTriggerBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ChangeStep
// (BlueprintCallable, BlueprintEvent)
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
// (BlueprintCallable, BlueprintEvent)
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.RepondToStepOrTime
// (BlueprintCallable, BlueprintEvent)
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
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_StepTriggerBase_C::TryRegisterNextTimeCheck(bool StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepTriggerBase.BP_StepTriggerBase_C.TryRegisterNextTimeCheck");

	ABP_StepTriggerBase_C_TryRegisterNextTimeCheck_Params params;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepTriggerBase.BP_StepTriggerBase_C.ExecuteUbergraph_BP_StepTriggerBase
// ()
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
