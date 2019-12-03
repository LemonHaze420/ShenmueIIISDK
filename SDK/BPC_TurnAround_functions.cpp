
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

// Function BPC_TurnAround.BPC_TurnAround_C.CheckMinigameRotation
// (Event, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, Const)
// Parameters:
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_TurnAround_C::CheckMinigameRotation(struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.CheckMinigameRotation");

	UBPC_TurnAround_C_CheckMinigameRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;

	return params.ReturnValue;
}


// Function BPC_TurnAround.BPC_TurnAround_C.GetTalkingMinigame
// (Exec, Native, NetMulticast, Private, NetServer, NetClient, Const)
// Parameters:
// class US3TalkComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class US3TalkComponent* UBPC_TurnAround_C::GetTalkingMinigame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.GetTalkingMinigame");

	UBPC_TurnAround_C_GetTalkingMinigame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_TurnAround.BPC_TurnAround_C.TryPreTalkJump
// (Net, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_TurnAround_C::STATIC_TryPreTalkJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.TryPreTalkJump");

	UBPC_TurnAround_C_TryPreTalkJump_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_TurnAround.BPC_TurnAround_C.ShouldLookAtTalkCenter
// (Native, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_TurnAround_C::STATIC_ShouldLookAtTalkCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.ShouldLookAtTalkCenter");

	UBPC_TurnAround_C_ShouldLookAtTalkCenter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_TurnAround.BPC_TurnAround_C.CalcLookAtRotation
// (Net, NetReliable, Exec, Event, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UBPC_TurnAround_C::CalcLookAtRotation(const struct FVector& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.CalcLookAtRotation");

	UBPC_TurnAround_C_CalcLookAtRotation_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_TurnAround.BPC_TurnAround_C.TryPostTeleportTurnaround
// (NetRequest, Exec, Event, NetResponse, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bTeleported                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_C::TryPostTeleportTurnaround(bool bTeleported)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.TryPostTeleportTurnaround");

	UBPC_TurnAround_C_TryPostTeleportTurnaround_Params params;
	params.bTeleported = bTeleported;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.CalcTurnAroundWithin
// (NetReliable, NetRequest, NetMulticast, MulticastDelegate, Public, Private, NetServer, NetClient, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_TurnAround_C::CalcTurnAroundWithin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.CalcTurnAroundWithin");

	UBPC_TurnAround_C_CalcTurnAroundWithin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_TurnAround.BPC_TurnAround_C.SetTurnAroundTarget
// (Net, NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Private, NetServer, NetClient, Const)
// Parameters:
// struct FRotator                Rotator                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_TurnAround_C::SetTurnAroundTarget(const struct FRotator& Rotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.SetTurnAroundTarget");

	UBPC_TurnAround_C_SetTurnAroundTarget_Params params;
	params.Rotator = Rotator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.TurnAroundTickFinish
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPC_TurnAround_C::STATIC_TurnAroundTickFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.TurnAroundTickFinish");

	UBPC_TurnAround_C_TurnAroundTickFinish_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.GetLookAtCenterRotation
// (Net, NetRequest, Exec, Event, NetMulticast, Private, NetServer, NetClient, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UBPC_TurnAround_C::GetLookAtCenterRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.GetLookAtCenterRotation");

	UBPC_TurnAround_C_GetLookAtCenterRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_TurnAround.BPC_TurnAround_C.ForceFinishTurnAroundAuto
// (Net, NetRequest, Event, Public, Private, Protected, HasOutParms, HasDefaults, Const)

void UBPC_TurnAround_C::ForceFinishTurnAroundAuto()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.ForceFinishTurnAroundAuto");

	UBPC_TurnAround_C_ForceFinishTurnAroundAuto_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.RemoveTurnAroundComponent
// (Net, NetReliable, NetRequest, Native, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, Const)

void UBPC_TurnAround_C::STATIC_RemoveTurnAroundComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.RemoveTurnAroundComponent");

	UBPC_TurnAround_C_RemoveTurnAroundComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.SetAdjustTurnAroundAngle
// (NetRequest, Exec, Event, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, Const)

void UBPC_TurnAround_C::STATIC_SetAdjustTurnAroundAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.SetAdjustTurnAroundAngle");

	UBPC_TurnAround_C_SetAdjustTurnAroundAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.ForceFinishTurnAround
// (NetRequest, Exec, Event, Static, NetMulticast, MulticastDelegate, Protected, HasOutParms, Const)
// Parameters:
// bool                           bUpdateRotation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_TurnAround_C::STATIC_ForceFinishTurnAround(bool bUpdateRotation, const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.ForceFinishTurnAround");

	UBPC_TurnAround_C_ForceFinishTurnAround_Params params;
	params.bUpdateRotation = bUpdateRotation;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.IsMultipleTalking
// (NetReliable, Native, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsTalking                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_C::IsMultipleTalking(bool* IsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.IsMultipleTalking");

	UBPC_TurnAround_C_IsMultipleTalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsTalking != nullptr)
		*IsTalking = params.IsTalking;
}


// Function BPC_TurnAround.BPC_TurnAround_C.ReturnPreTalkRotationActor
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPC_TurnAround_C::STATIC_ReturnPreTalkRotationActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.ReturnPreTalkRotationActor");

	UBPC_TurnAround_C_ReturnPreTalkRotationActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.CachedPreTalkRotationActor
// (Net, Exec, Event, Public, Private, Protected, HasOutParms, HasDefaults, Const)

void UBPC_TurnAround_C::CachedPreTalkRotationActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.CachedPreTalkRotationActor");

	UBPC_TurnAround_C_CachedPreTalkRotationActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.UpdateTurnAround
// (Net, NetResponse, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFinish                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_C::STATIC_UpdateTurnAround(float Delta, bool* bFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.UpdateTurnAround");

	UBPC_TurnAround_C_UpdateTurnAround_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFinish != nullptr)
		*bFinish = params.bFinish;
}


// Function BPC_TurnAround.BPC_TurnAround_C.IsTurnedAroundState
// (Net, NetReliable, NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bTurned                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_C::STATIC_IsTurnedAroundState(bool* bTurned)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.IsTurnedAroundState");

	UBPC_TurnAround_C_IsTurnedAroundState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bTurned != nullptr)
		*bTurned = params.bTurned;
}


// Function BPC_TurnAround.BPC_TurnAround_C.CanTurnAround
// (Net, NetRequest, Event, Static, NetMulticast, NetServer, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bCan                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_C::STATIC_CanTurnAround(bool* bCan)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.CanTurnAround");

	UBPC_TurnAround_C_CanTurnAround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCan != nullptr)
		*bCan = params.bCan;
}


// Function BPC_TurnAround.BPC_TurnAround_C.ResetTurnAroundParamater
// (Net, NetReliable, NetRequest, NetResponse, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void UBPC_TurnAround_C::ResetTurnAroundParamater()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.ResetTurnAroundParamater");

	UBPC_TurnAround_C_ResetTurnAroundParamater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.ReceiveTick
// (Net, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Private, Protected, HasOutParms, HasDefaults, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_C::STATIC_ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.ReceiveTick");

	UBPC_TurnAround_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.StartTurnAroundByRotation
// (Net, NetRequest, Exec, Event, NetResponse, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          MotionDelayTime                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                TargetRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bAdjustTurnAroundAngle         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_C::StartTurnAroundByRotation(float MotionDelayTime, const struct FRotator& TargetRotation, bool bAdjustTurnAroundAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.StartTurnAroundByRotation");

	UBPC_TurnAround_C_StartTurnAroundByRotation_Params params;
	params.MotionDelayTime = MotionDelayTime;
	params.TargetRotation = TargetRotation;
	params.bAdjustTurnAroundAngle = bAdjustTurnAroundAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.StartTurnAroundByActor
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          MotionDelayTime                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAdjustTurnAroundAngle         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_C::StartTurnAroundByActor(float MotionDelayTime, class AActor* TargetActor, bool bAdjustTurnAroundAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.StartTurnAroundByActor");

	UBPC_TurnAround_C_StartTurnAroundByActor_Params params;
	params.MotionDelayTime = MotionDelayTime;
	params.TargetActor = TargetActor;
	params.bAdjustTurnAroundAngle = bAdjustTurnAroundAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.InternalStartRotation
// (NetReliable, Exec, Event, NetResponse, NetMulticast, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                TargetRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bAdjust                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_C::InternalStartRotation(float Delay, const struct FRotator& TargetRotation, bool bAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.InternalStartRotation");

	UBPC_TurnAround_C_InternalStartRotation_Params params;
	params.Delay = Delay;
	params.TargetRotation = TargetRotation;
	params.bAdjust = bAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.ExecuteUbergraph_BPC_TurnAround
// (Net, NetReliable, NetRequest, Native, Event, Protected, NetServer, NetClient, Const)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_C::ExecuteUbergraph_BPC_TurnAround(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.ExecuteUbergraph_BPC_TurnAround");

	UBPC_TurnAround_C_ExecuteUbergraph_BPC_TurnAround_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.OnFinishTurnAroundDispatcher__DelegateSignature
// (Net, NetReliable, Native, NetResponse, Static, NetMulticast, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBPC_TurnAround_C*       SelfTurnAroundComponent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPC_TurnAround_C::STATIC_OnFinishTurnAroundDispatcher__DelegateSignature(class UBPC_TurnAround_C* SelfTurnAroundComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.OnFinishTurnAroundDispatcher__DelegateSignature");

	UBPC_TurnAround_C_OnFinishTurnAroundDispatcher__DelegateSignature_Params params;
	params.SelfTurnAroundComponent = SelfTurnAroundComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
