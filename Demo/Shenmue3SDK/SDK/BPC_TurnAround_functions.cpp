
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

// Function BPC_TurnAround.BPC_TurnAround_C.ShouldLookAtTalkCenter
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_TurnAround_C::ShouldLookAtTalkCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.ShouldLookAtTalkCenter");

	UBPC_TurnAround_C_ShouldLookAtTalkCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_TurnAround.BPC_TurnAround_C.CalcLookAtRotation
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPC_TurnAround_C::TryPostTeleportTurnaround()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.TryPostTeleportTurnaround");

	UBPC_TurnAround_C_TryPostTeleportTurnaround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.CalcTurnAroundWithin
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
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
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotator                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_TurnAround_C::SetTurnAroundTarget(const struct FRotator& Rotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.SetTurnAroundTarget");

	UBPC_TurnAround_C_SetTurnAroundTarget_Params params;
	params.Rotator = Rotator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.TurnAroundTickFinish
// (Protected, BlueprintCallable, BlueprintEvent)

void UBPC_TurnAround_C::TurnAroundTickFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.TurnAroundTickFinish");

	UBPC_TurnAround_C_TurnAroundTickFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.GetLookAtCenterRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPC_TurnAround_C::ForceFinishTurnAroundAuto()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.ForceFinishTurnAroundAuto");

	UBPC_TurnAround_C_ForceFinishTurnAroundAuto_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.RemoveTurnAroundComponent
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_TurnAround_C::RemoveTurnAroundComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.RemoveTurnAroundComponent");

	UBPC_TurnAround_C_RemoveTurnAroundComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.SetAdjustTurnAroundAngle
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPC_TurnAround_C::SetAdjustTurnAroundAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.SetAdjustTurnAroundAngle");

	UBPC_TurnAround_C_SetAdjustTurnAroundAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.ForceFinishTurnAround
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUpdateRotation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_TurnAround_C::ForceFinishTurnAround(bool bUpdateRotation, const struct FRotator& NewRotation)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsTalking                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_C::IsMultipleTalking(bool* IsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.IsMultipleTalking");

	UBPC_TurnAround_C_IsMultipleTalking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsTalking != nullptr)
		*IsTalking = params.IsTalking;
}


// Function BPC_TurnAround.BPC_TurnAround_C.ReturnPreTalkRotationActor
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_TurnAround_C::ReturnPreTalkRotationActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.ReturnPreTalkRotationActor");

	UBPC_TurnAround_C_ReturnPreTalkRotationActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.CachedPreTalkRotationActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPC_TurnAround_C::CachedPreTalkRotationActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.CachedPreTalkRotationActor");

	UBPC_TurnAround_C_CachedPreTalkRotationActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.UpdateTurnAround
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFinish                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_C::UpdateTurnAround(float Delta, bool* bFinish)
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
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bTurned                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_C::IsTurnedAroundState(bool* bTurned)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.IsTurnedAroundState");

	UBPC_TurnAround_C_IsTurnedAroundState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bTurned != nullptr)
		*bTurned = params.bTurned;
}


// Function BPC_TurnAround.BPC_TurnAround_C.CanTurnAround
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCan                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_C::CanTurnAround(bool* bCan)
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
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_TurnAround_C::ResetTurnAroundParamater()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.ResetTurnAroundParamater");

	UBPC_TurnAround_C_ResetTurnAroundParamater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.ReceiveTick");

	UBPC_TurnAround_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.StartTurnAroundByRotation
// (BlueprintCallable, BlueprintEvent)
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
// (BlueprintCallable, BlueprintEvent)
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
// (BlueprintCallable, BlueprintEvent)
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
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_TurnAround_C::ExecuteUbergraph_BPC_TurnAround(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.ExecuteUbergraph_BPC_TurnAround");

	UBPC_TurnAround_C_ExecuteUbergraph_BPC_TurnAround_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_TurnAround.BPC_TurnAround_C.OnFinishTurnAroundDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPC_TurnAround_C*       SelfTurnAroundComponent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPC_TurnAround_C::OnFinishTurnAroundDispatcher__DelegateSignature(class UBPC_TurnAround_C* SelfTurnAroundComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_TurnAround.BPC_TurnAround_C.OnFinishTurnAroundDispatcher__DelegateSignature");

	UBPC_TurnAround_C_OnFinishTurnAroundDispatcher__DelegateSignature_Params params;
	params.SelfTurnAroundComponent = SelfTurnAroundComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
