
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function FiniteStateMachine.FiniteStateBase.StateUpdate
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Delta                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDummy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFiniteStateBase::StateUpdate(float Delta, bool* bDummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function FiniteStateMachine.FiniteStateBase.StateUpdate");

	UFiniteStateBase_StateUpdate_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDummy != nullptr)
		*bDummy = params.bDummy;
}


// Function FiniteStateMachine.FiniteStateBase.StateOnSuspend
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// bool                           bDummy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFiniteStateBase::StateOnSuspend(bool* bDummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function FiniteStateMachine.FiniteStateBase.StateOnSuspend");

	UFiniteStateBase_StateOnSuspend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDummy != nullptr)
		*bDummy = params.bDummy;
}


// Function FiniteStateMachine.FiniteStateBase.StateOnResume
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// bool                           bDummy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFiniteStateBase::StateOnResume(bool* bDummy)
{
	static auto fn = UObject::FindObject<UFunction>("Function FiniteStateMachine.FiniteStateBase.StateOnResume");

	UFiniteStateBase_StateOnResume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDummy != nullptr)
		*bDummy = params.bDummy;
}


// Function FiniteStateMachine.FiniteStateBase.StateOnInitialize
// (Event, Public, BlueprintEvent)

void UFiniteStateBase::StateOnInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function FiniteStateMachine.FiniteStateBase.StateOnInitialize");

	UFiniteStateBase_StateOnInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FiniteStateMachine.FiniteStateBase.StateExit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Delta                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFiniteStateBase::StateExit(float Delta, bool* bProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function FiniteStateMachine.FiniteStateBase.StateExit");

	UFiniteStateBase_StateExit_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessing != nullptr)
		*bProcessing = params.bProcessing;
}


// Function FiniteStateMachine.FiniteStateBase.StateEnter
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Delta                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProcessing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFiniteStateBase::StateEnter(float Delta, bool* bProcessing)
{
	static auto fn = UObject::FindObject<UFunction>("Function FiniteStateMachine.FiniteStateBase.StateEnter");

	UFiniteStateBase_StateEnter_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bProcessing != nullptr)
		*bProcessing = params.bProcessing;
}


// Function FiniteStateMachine.FiniteStateMachineComponent.UpdateState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Delta                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFiniteStateMachineComponent::UpdateState(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function FiniteStateMachine.FiniteStateMachineComponent.UpdateState");

	UFiniteStateMachineComponent_UpdateState_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FiniteStateMachine.FiniteStateMachineComponent.Suspend
// (Final, Native, Public, BlueprintCallable)

void UFiniteStateMachineComponent::Suspend()
{
	static auto fn = UObject::FindObject<UFunction>("Function FiniteStateMachine.FiniteStateMachineComponent.Suspend");

	UFiniteStateMachineComponent_Suspend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FiniteStateMachine.FiniteStateMachineComponent.SetNewGlobalState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   NewStateName                   (Parm, ZeroConstructor, IsPlainOldData)

void UFiniteStateMachineComponent::SetNewGlobalState(const struct FName& NewStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FiniteStateMachine.FiniteStateMachineComponent.SetNewGlobalState");

	UFiniteStateMachineComponent_SetNewGlobalState_Params params;
	params.NewStateName = NewStateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FiniteStateMachine.FiniteStateMachineComponent.RevertToPreviousState
// (Final, Native, Public, BlueprintCallable)

void UFiniteStateMachineComponent::RevertToPreviousState()
{
	static auto fn = UObject::FindObject<UFunction>("Function FiniteStateMachine.FiniteStateMachineComponent.RevertToPreviousState");

	UFiniteStateMachineComponent_RevertToPreviousState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FiniteStateMachine.FiniteStateMachineComponent.Resume
// (Final, Native, Public, BlueprintCallable)

void UFiniteStateMachineComponent::Resume()
{
	static auto fn = UObject::FindObject<UFunction>("Function FiniteStateMachine.FiniteStateMachineComponent.Resume");

	UFiniteStateMachineComponent_Resume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FiniteStateMachine.FiniteStateMachineComponent.IsStateActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   StateName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFiniteStateMachineComponent::IsStateActive(const struct FName& StateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FiniteStateMachine.FiniteStateMachineComponent.IsStateActive");

	UFiniteStateMachineComponent_IsStateActive_Params params;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FiniteStateMachine.FiniteStateMachineComponent.GetStateByStateName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   StateName                      (Parm, ZeroConstructor, IsPlainOldData)
// class UFiniteStateBase*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFiniteStateBase* UFiniteStateMachineComponent::GetStateByStateName(const struct FName& StateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FiniteStateMachine.FiniteStateMachineComponent.GetStateByStateName");

	UFiniteStateMachineComponent_GetStateByStateName_Params params;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FiniteStateMachine.FiniteStateMachineComponent.CreateStateInstance
// (Final, Native, Public, BlueprintCallable)

void UFiniteStateMachineComponent::CreateStateInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function FiniteStateMachine.FiniteStateMachineComponent.CreateStateInstance");

	UFiniteStateMachineComponent_CreateStateInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FiniteStateMachine.FiniteStateMachineComponent.ChangeStateLazy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   NewStateName                   (Parm, ZeroConstructor, IsPlainOldData)

void UFiniteStateMachineComponent::ChangeStateLazy(const struct FName& NewStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FiniteStateMachine.FiniteStateMachineComponent.ChangeStateLazy");

	UFiniteStateMachineComponent_ChangeStateLazy_Params params;
	params.NewStateName = NewStateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FiniteStateMachine.FiniteStateMachineComponent.ChangeState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   NewStateName                   (Parm, ZeroConstructor, IsPlainOldData)

void UFiniteStateMachineComponent::ChangeState(const struct FName& NewStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FiniteStateMachine.FiniteStateMachineComponent.ChangeState");

	UFiniteStateMachineComponent_ChangeState_Params params;
	params.NewStateName = NewStateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
