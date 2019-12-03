
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

// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.IsInteracting
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_S3PlayerStairClimber_C::STATIC_IsInteracting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.IsInteracting");

	UBPC_S3PlayerStairClimber_C_IsInteracting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.IsAbleToMove
// (NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Private, Protected, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_S3PlayerStairClimber_C::STATIC_IsAbleToMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.IsAbleToMove");

	UBPC_S3PlayerStairClimber_C_IsAbleToMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.IsHeightFixEnabled
// (Net, NetReliable, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// bool                           bEnabled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::STATIC_IsHeightFixEnabled(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.IsHeightFixEnabled");

	UBPC_S3PlayerStairClimber_C_IsHeightFixEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnabled != nullptr)
		*bEnabled = params.bEnabled;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.BottomToCenterLocationWithOffset
// (Native, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Bottom                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Center                         (Parm, OutParm, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::BottomToCenterLocationWithOffset(const struct FVector& Bottom, struct FVector* Center)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.BottomToCenterLocationWithOffset");

	UBPC_S3PlayerStairClimber_C_BottomToCenterLocationWithOffset_Params params;
	params.Bottom = Bottom;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Center != nullptr)
		*Center = params.Center;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ShouldStartInteracting
// (Event, MulticastDelegate, Private, Protected, NetServer, NetClient, BlueprintPure)
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
// (Net, NetRequest, Event, Static, MulticastDelegate, NetClient, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FudgeDist                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FudgeAngle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_S3PlayerStairClimber_C::STATIC_CheckLeaving(float FudgeDist, float FudgeAngle)
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
// (Net, NetReliable, NetRequest, Static, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPC_S3PlayerStairClimber_C::STATIC_ShouldKeepInteracting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ShouldKeepInteracting");

	UBPC_S3PlayerStairClimber_C_ShouldKeepInteracting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.AlignToStairInstant
// (Native, Event, Static, Public, Delegate, NetServer, HasDefaults, BlueprintEvent, BlueprintPure, Const)

void UBPC_S3PlayerStairClimber_C::STATIC_AlignToStairInstant()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.AlignToStairInstant");

	UBPC_S3PlayerStairClimber_C_AlignToStairInstant_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.CalcStopMontageTime
// (Net, NetReliable, Event, NetResponse, MulticastDelegate, Private, Protected, Delegate)
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
// (Net, Exec, NetResponse, Static, NetMulticast, Public, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBPC_S3PlayerStairClimber_C::STATIC_GetStairAlignmentForward()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.GetStairAlignmentForward");

	UBPC_S3PlayerStairClimber_C_GetStairAlignmentForward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.PlayMontageFrom
// (NetRequest, Native, NetResponse, NetMulticast, Private, Protected, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.CalcWalkCycleFromMontageRatio
// (NetReliable, Exec, Native, Event, NetMulticast, Public, Private, Delegate, NetServer, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cycle != nullptr)
		*Cycle = params.Cycle;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.PlayMontage
// (NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::PlayMontage(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.PlayMontage");

	UBPC_S3PlayerStairClimber_C_PlayMontage_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ConsumeOutput
// (Exec, Native, Event, NetMulticast, MulticastDelegate, Public, Private, NetServer, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           turning                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TurnDirection                  (Parm, OutParm, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::ConsumeOutput(bool* turning, struct FVector* TurnDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ConsumeOutput");

	UBPC_S3PlayerStairClimber_C_ConsumeOutput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (turning != nullptr)
		*turning = params.turning;
	if (TurnDirection != nullptr)
		*TurnDirection = params.TurnDirection;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.SetState
// (Net, NetRequest, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
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
// (NetRequest, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)
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
// (Net, NetReliable, Exec, Event, NetMulticast, HasOutParms, HasDefaults, DLLImport)
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
// (Net, NetReliable, NetResponse, NetMulticast, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
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
// (Net, NetReliable, Static, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_PC_Stair>       State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::STATIC_EnterFSMState(TEnumAsByte<EN_PC_Stair> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.EnterFSMState");

	UBPC_S3PlayerStairClimber_C_EnterFSMState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.GetABP
// (NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, MulticastDelegate, Private, Protected, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// class UAnimInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimInstance* UBPC_S3PlayerStairClimber_C::STATIC_GetABP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.GetABP");

	UBPC_S3PlayerStairClimber_C_GetABP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.GetStairWalkCycle
// (NetReliable, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (NetRequest, MulticastDelegate, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)

void UBPC_S3PlayerStairClimber_C::TickFSMTransitions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.TickFSMTransitions");

	UBPC_S3PlayerStairClimber_C_TickFSMTransitions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.TickFSMBehavior
// (NetReliable, NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Public, HasDefaults, NetClient, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (Exec, Event, NetMulticast, HasOutParms, HasDefaults, DLLImport)

void UBPC_S3PlayerStairClimber_C::DeactivateFSM()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.DeactivateFSM");

	UBPC_S3PlayerStairClimber_C_DeactivateFSM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ActivateFSM
// (Net, NetReliable, Native, MulticastDelegate, Public, Private, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_PC_Stair>       State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::ActivateFSM(TEnumAsByte<EN_PC_Stair> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ActivateFSM");

	UBPC_S3PlayerStairClimber_C_ActivateFSM_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ReceiveBeginPlay
// (Net, NetReliable, NetResponse, Private, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure)

void UBPC_S3PlayerStairClimber_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ReceiveBeginPlay");

	UBPC_S3PlayerStairClimber_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ExecuteUbergraph_BPC_S3PlayerStairClimber
// (NetReliable, Exec, Native, Private, Protected, Delegate, NetServer, HasOutParms, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPC_S3PlayerStairClimber_C::ExecuteUbergraph_BPC_S3PlayerStairClimber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPC_S3PlayerStairClimber.BPC_S3PlayerStairClimber_C.ExecuteUbergraph_BPC_S3PlayerStairClimber");

	UBPC_S3PlayerStairClimber_C_ExecuteUbergraph_BPC_S3PlayerStairClimber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
