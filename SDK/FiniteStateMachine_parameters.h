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

// Function FiniteStateMachine.FiniteStateBase.StateUpdate
struct UFiniteStateBase_StateUpdate_Params
{
	float                                              Delta;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDummy;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FiniteStateMachine.FiniteStateBase.StateOnSuspend
struct UFiniteStateBase_StateOnSuspend_Params
{
	bool                                               bDummy;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FiniteStateMachine.FiniteStateBase.StateOnResume
struct UFiniteStateBase_StateOnResume_Params
{
	bool                                               bDummy;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FiniteStateMachine.FiniteStateBase.StateOnInitialize
struct UFiniteStateBase_StateOnInitialize_Params
{
};

// Function FiniteStateMachine.FiniteStateBase.StateExit
struct UFiniteStateBase_StateExit_Params
{
	float                                              Delta;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProcessing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FiniteStateMachine.FiniteStateBase.StateEnter
struct UFiniteStateBase_StateEnter_Params
{
	float                                              Delta;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProcessing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FiniteStateMachine.FiniteStateMachineComponent.UpdateState
struct UFiniteStateMachineComponent_UpdateState_Params
{
	float                                              Delta;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FiniteStateMachine.FiniteStateMachineComponent.Suspend
struct UFiniteStateMachineComponent_Suspend_Params
{
};

// Function FiniteStateMachine.FiniteStateMachineComponent.SetNewGlobalState
struct UFiniteStateMachineComponent_SetNewGlobalState_Params
{
	struct FName                                       NewStateName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FiniteStateMachine.FiniteStateMachineComponent.RevertToPreviousState
struct UFiniteStateMachineComponent_RevertToPreviousState_Params
{
};

// Function FiniteStateMachine.FiniteStateMachineComponent.Resume
struct UFiniteStateMachineComponent_Resume_Params
{
};

// Function FiniteStateMachine.FiniteStateMachineComponent.IsStateActive
struct UFiniteStateMachineComponent_IsStateActive_Params
{
	struct FName                                       StateName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FiniteStateMachine.FiniteStateMachineComponent.GetStateByStateName
struct UFiniteStateMachineComponent_GetStateByStateName_Params
{
	struct FName                                       StateName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UFiniteStateBase*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FiniteStateMachine.FiniteStateMachineComponent.CreateStateInstance
struct UFiniteStateMachineComponent_CreateStateInstance_Params
{
};

// Function FiniteStateMachine.FiniteStateMachineComponent.ChangeStateLazy
struct UFiniteStateMachineComponent_ChangeStateLazy_Params
{
	struct FName                                       NewStateName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FiniteStateMachine.FiniteStateMachineComponent.ChangeState
struct UFiniteStateMachineComponent_ChangeState_Params
{
	struct FName                                       NewStateName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
