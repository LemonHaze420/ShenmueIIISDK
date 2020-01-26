
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

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.IsInteracting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_S3PlayerStairClimber_C::IsInteracting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.IsInteracting");

	UBPC_S3PlayerStairClimber_C_IsInteracting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.IsAbleToMove
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_S3PlayerStairClimber_C::IsAbleToMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.IsAbleToMove");

	UBPC_S3PlayerStairClimber_C_IsAbleToMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.IsHeightFixEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bEnabled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::IsHeightFixEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.IsHeightFixEnabled");

	UBPC_S3PlayerStairClimber_C_IsHeightFixEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnabled != nullptr)
		*bEnabled = params.bEnabled;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.BottomToCenterLocationWithOffset
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 Bottom                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Center                         (Parm, OutParm, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::BottomToCenterLocationWithOffset(const struct FVector& Bottom, struct FVector* Center)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.BottomToCenterLocationWithOffset");

	UBPC_S3PlayerStairClimber_C_BottomToCenterLocationWithOffset_Params params;
	params.Bottom = Bottom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Center != nullptr)
		*Center = params.Center;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ShouldStartInteracting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_S3PlayerStairClimber_C::ShouldStartInteracting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ShouldStartInteracting");

	UBPC_S3PlayerStairClimber_C_ShouldStartInteracting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.CheckLeaving
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          FudgeDist                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FudgeAngle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_S3PlayerStairClimber_C::CheckLeaving(float FudgeDist, float FudgeAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.CheckLeaving");

	UBPC_S3PlayerStairClimber_C_CheckLeaving_Params params;
	params.FudgeDist = FudgeDist;
	params.FudgeAngle = FudgeAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ShouldKeepInteracting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_S3PlayerStairClimber_C::ShouldKeepInteracting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ShouldKeepInteracting");

	UBPC_S3PlayerStairClimber_C_ShouldKeepInteracting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.AlignToStairInstant
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPC_S3PlayerStairClimber_C::AlignToStairInstant()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.AlignToStairInstant");

	UBPC_S3PlayerStairClimber_C_AlignToStairInstant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.CalcStopMontageTime
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBPC_S3PlayerStairClimber_C::CalcStopMontageTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.CalcStopMontageTime");

	UBPC_S3PlayerStairClimber_C_CalcStopMontageTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.GetStairAlignmentForward
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBPC_S3PlayerStairClimber_C::GetStairAlignmentForward()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.GetStairAlignmentForward");

	UBPC_S3PlayerStairClimber_C_GetStairAlignmentForward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.PlayMontageFrom
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::PlayMontageFrom(class UAnimMontage* Montage, float Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.PlayMontageFrom");

	UBPC_S3PlayerStairClimber_C_PlayMontageFrom_Params params;
	params.Montage = Montage;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.CalcWalkCycleFromMontageRatio
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DirUp                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Cycle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::CalcWalkCycleFromMontageRatio(float A, bool DirUp, float* Cycle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.CalcWalkCycleFromMontageRatio");

	UBPC_S3PlayerStairClimber_C_CalcWalkCycleFromMontageRatio_Params params;
	params.A = A;
	params.DirUp = DirUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cycle != nullptr)
		*Cycle = params.Cycle;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.PlayMontage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::PlayMontage(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.PlayMontage");

	UBPC_S3PlayerStairClimber_C_PlayMontage_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ConsumeOutput
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Turning                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TurnDirection                  (Parm, OutParm, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::ConsumeOutput(bool* Turning, struct FVector* TurnDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ConsumeOutput");

	UBPC_S3PlayerStairClimber_C_ConsumeOutput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Turning != nullptr)
		*Turning = params.Turning;
	if (TurnDirection != nullptr)
		*TurnDirection = params.TurnDirection;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_PC_Stair>       State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::SetState(TEnumAsByte<EN_PC_Stair> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.SetState");

	UBPC_S3PlayerStairClimber_C_SetState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.rotate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetDirection                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::rotate(const struct FVector& TargetDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.rotate");

	UBPC_S3PlayerStairClimber_C_rotate_Params params;
	params.TargetDirection = TargetDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.MoveToLocation
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::MoveToLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.MoveToLocation");

	UBPC_S3PlayerStairClimber_C_MoveToLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.GetRegularWalkCycle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Cycle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::GetRegularWalkCycle(float* Cycle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.GetRegularWalkCycle");

	UBPC_S3PlayerStairClimber_C_GetRegularWalkCycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cycle != nullptr)
		*Cycle = params.Cycle;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.EnterFSMState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_PC_Stair>       State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::EnterFSMState(TEnumAsByte<EN_PC_Stair> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.EnterFSMState");

	UBPC_S3PlayerStairClimber_C_EnterFSMState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.GetABP
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimInstance* UBPC_S3PlayerStairClimber_C::GetABP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.GetABP");

	UBPC_S3PlayerStairClimber_C_GetABP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.GetStairWalkCycle
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            WalkLoopMontage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Cycle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::GetStairWalkCycle(class UAnimMontage* WalkLoopMontage, float* Cycle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.GetStairWalkCycle");

	UBPC_S3PlayerStairClimber_C_GetStairWalkCycle_Params params;
	params.WalkLoopMontage = WalkLoopMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cycle != nullptr)
		*Cycle = params.Cycle;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.TickFSMTransitions
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_S3PlayerStairClimber_C::TickFSMTransitions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.TickFSMTransitions");

	UBPC_S3PlayerStairClimber_C_TickFSMTransitions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.TickFSMBehavior
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::TickFSMBehavior(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.TickFSMBehavior");

	UBPC_S3PlayerStairClimber_C_TickFSMBehavior_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.DeactivateFSM
// (Public, BlueprintCallable, BlueprintEvent)

void UBPC_S3PlayerStairClimber_C::DeactivateFSM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.DeactivateFSM");

	UBPC_S3PlayerStairClimber_C_DeactivateFSM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ActivateFSM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_PC_Stair>       State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::ActivateFSM(TEnumAsByte<EN_PC_Stair> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ActivateFSM");

	UBPC_S3PlayerStairClimber_C_ActivateFSM_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPC_S3PlayerStairClimber_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ReceiveBeginPlay");

	UBPC_S3PlayerStairClimber_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ExecuteUbergraph_BPC_S3PlayerStairClimber
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::ExecuteUbergraph_BPC_S3PlayerStairClimber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ExecuteUbergraph_BPC_S3PlayerStairClimber");

	UBPC_S3PlayerStairClimber_C_ExecuteUbergraph_BPC_S3PlayerStairClimber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
