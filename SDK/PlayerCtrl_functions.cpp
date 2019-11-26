
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

// Function PlayerCtrl.PlayerCtrl_C.GetPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int APlayerCtrl_C::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.GetPriority");

	APlayerCtrl_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerCtrl.PlayerCtrl_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> APlayerCtrl_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.GetDetectAction");

	APlayerCtrl_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_GetIsInFirstPersonMode
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APlayerCtrl_C::PC_GetIsInFirstPersonMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_GetIsInFirstPersonMode");

	APlayerCtrl_C_PC_GetIsInFirstPersonMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_InitPawn
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_S3_Character_Adventure_C* Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_InitPawn(class ABP_S3_Character_Adventure_C* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_InitPawn");

	APlayerCtrl_C_PC_InitPawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_ShouldDelayTalkInteract
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APlayerCtrl_C::PC_ShouldDelayTalkInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_ShouldDelayTalkInteract");

	APlayerCtrl_C_PC_ShouldDelayTalkInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_HasVirtualJoystickInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           newParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_HasVirtualJoystickInput(bool* newParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_HasVirtualJoystickInput");

	APlayerCtrl_C_PC_HasVirtualJoystickInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newParam != nullptr)
		*newParam = params.newParam;
}


// Function PlayerCtrl.PlayerCtrl_C.UseRunEnergy
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::UseRunEnergy()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.UseRunEnergy");

	APlayerCtrl_C_UseRunEnergy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_TalkShowMotionIsCrouch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APlayerCtrl_C::PC_TalkShowMotionIsCrouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_TalkShowMotionIsCrouch");

	APlayerCtrl_C_PC_TalkShowMotionIsCrouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_RequestFaceActor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PC_Sensor_InputDirWS           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_RequestFaceActor(class AActor* PC_Sensor_InputDirWS)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_RequestFaceActor");

	APlayerCtrl_C_PC_RequestFaceActor_Params params;
	params.PC_Sensor_InputDirWS = PC_Sensor_InputDirWS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcMSLeave
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_StateProcMSLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_StateProcMSLeave");

	APlayerCtrl_C_PC_StateProcMSLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_IsIdle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APlayerCtrl_C::PC_IsIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_IsIdle");

	APlayerCtrl_C_PC_IsIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_IsSafeToPlayEventMontages
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APlayerCtrl_C::PC_IsSafeToPlayEventMontages()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_IsSafeToPlayEventMontages");

	APlayerCtrl_C_PC_IsSafeToPlayEventMontages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_GetWalkStopMaxSpeed
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          WALK_SPEED_MAX                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_GetWalkStopMaxSpeed(float* WALK_SPEED_MAX)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_GetWalkStopMaxSpeed");

	APlayerCtrl_C_PC_GetWalkStopMaxSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WALK_SPEED_MAX != nullptr)
		*WALK_SPEED_MAX = params.WALK_SPEED_MAX;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_StopMontage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Anim                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_StopMontage(class UAnimMontage* Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_StopMontage");

	APlayerCtrl_C_PC_StopMontage_Params params;
	params.Anim = Anim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.GetAdventureCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_S3_Character_Adventure_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABP_S3_Character_Adventure_C* APlayerCtrl_C::GetAdventureCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.GetAdventureCharacter");

	APlayerCtrl_C_GetAdventureCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_ShouldRun
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APlayerCtrl_C::PC_ShouldRun()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_ShouldRun");

	APlayerCtrl_C_PC_ShouldRun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_GetEnergyManager
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AS3EnergyManager*        EnergyMan                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_GetEnergyManager(class AS3EnergyManager** EnergyMan)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_GetEnergyManager");

	APlayerCtrl_C_PC_GetEnergyManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnergyMan != nullptr)
		*EnergyMan = params.EnergyMan;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcTickWalk
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_StateProcTickWalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_StateProcTickWalk");

	APlayerCtrl_C_PC_StateProcTickWalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_HasAxisInput
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeadZone                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APlayerCtrl_C::PC_HasAxisInput(float Input, float DeadZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_HasAxisInput");

	APlayerCtrl_C_PC_HasAxisInput_Params params;
	params.Input = Input;
	params.DeadZone = DeadZone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_ApplyInputDeadzone
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeadZone                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gated                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_ApplyInputDeadzone(float Input, float DeadZone, float* Gated)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_ApplyInputDeadzone");

	APlayerCtrl_C_PC_ApplyInputDeadzone_Params params;
	params.Input = Input;
	params.DeadZone = DeadZone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Gated != nullptr)
		*Gated = params.Gated;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_GateInputFloat
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gated                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_GateInputFloat(float Input, float* Gated)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_GateInputFloat");

	APlayerCtrl_C_PC_GateInputFloat_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Gated != nullptr)
		*Gated = params.Gated;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_IsInputAllowed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Allow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_IsInputAllowed(bool* Allow)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_IsInputAllowed");

	APlayerCtrl_C_PC_IsInputAllowed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allow != nullptr)
		*Allow = params.Allow;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_IsInputAllowed_SpecialCased
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3PlayerBehavior              SpecialException               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Allow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_IsInputAllowed_SpecialCased(ES3PlayerBehavior SpecialException, bool* Allow)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_IsInputAllowed_SpecialCased");

	APlayerCtrl_C_PC_IsInputAllowed_SpecialCased_Params params;
	params.SpecialException = SpecialException;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allow != nullptr)
		*Allow = params.Allow;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_R2ButtonRunFlagSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_R2ButtonRunFlagSet(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_R2ButtonRunFlagSet");

	APlayerCtrl_C_PC_R2ButtonRunFlagSet_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_StartWalkStopMontage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CycleStartTime_Fraction_       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_StartWalkStopMontage(float CycleStartTime_Fraction_, class UAnimMontage* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_StartWalkStopMontage");

	APlayerCtrl_C_PC_StartWalkStopMontage_Params params;
	params.CycleStartTime_Fraction_ = CycleStartTime_Fraction_;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_GetWalkCycleTime
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeFraction                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_GetWalkCycleTime(float* TimeFraction, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_GetWalkCycleTime");

	APlayerCtrl_C_PC_GetWalkCycleTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeFraction != nullptr)
		*TimeFraction = params.TimeFraction;
	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_GetWalkCycleTimeFraction
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeFraction                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_GetWalkCycleTimeFraction(float* TimeFraction, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_GetWalkCycleTimeFraction");

	APlayerCtrl_C_PC_GetWalkCycleTimeFraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeFraction != nullptr)
		*TimeFraction = params.TimeFraction;
	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_IsRunning
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsRunning                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_IsRunning(bool* IsRunning)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_IsRunning");

	APlayerCtrl_C_PC_IsRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsRunning != nullptr)
		*IsRunning = params.IsRunning;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_AllowZoomMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OK                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_AllowZoomMode(bool* OK)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_AllowZoomMode");

	APlayerCtrl_C_PC_AllowZoomMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OK != nullptr)
		*OK = params.OK;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_HasMoveInput
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bMove                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_HasMoveInput(bool* bMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_HasMoveInput");

	APlayerCtrl_C_PC_HasMoveInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bMove != nullptr)
		*bMove = params.bMove;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_MatchTarget_RotationOnly
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                MatchRotation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          StartPercent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EndPercent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, IsPlainOldData)

void APlayerCtrl_C::PC_MatchTarget_RotationOnly(const struct FRotator& MatchRotation, float StartPercent, float EndPercent, float DeltaSeconds, struct FRotator* OutRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_MatchTarget_RotationOnly");

	APlayerCtrl_C_PC_MatchTarget_RotationOnly_Params params;
	params.MatchRotation = MatchRotation;
	params.StartPercent = StartPercent;
	params.EndPercent = EndPercent;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_TurnBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShapeComponent*         Shape                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bNewReaction                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_TurnBack(class UShapeComponent* Shape, const struct FVector& Normal, bool* bNewReaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_TurnBack");

	APlayerCtrl_C_PC_TurnBack_Params params;
	params.Shape = Shape;
	params.Normal = Normal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bNewReaction != nullptr)
		*bNewReaction = params.bNewReaction;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcEnter_Stair
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_StateProcEnter_Stair()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_StateProcEnter_Stair");

	APlayerCtrl_C_PC_StateProcEnter_Stair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_SkipTalkShowMotion
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_SkipTalkShowMotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_SkipTalkShowMotion");

	APlayerCtrl_C_PC_SkipTalkShowMotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_MustAdjustBeforeUseDoor
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bNeedsToAlgin                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_MustAdjustBeforeUseDoor(bool* bNeedsToAlgin)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_MustAdjustBeforeUseDoor");

	APlayerCtrl_C_PC_MustAdjustBeforeUseDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bNeedsToAlgin != nullptr)
		*bNeedsToAlgin = params.bNeedsToAlgin;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_CanStopWithCurrentSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bCanStop                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_CanStopWithCurrentSpeed(bool* bCanStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_CanStopWithCurrentSpeed");

	APlayerCtrl_C_PC_CanStopWithCurrentSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanStop != nullptr)
		*bCanStop = params.bCanStop;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_UpdateInputPostAI
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_UpdateInputPostAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_UpdateInputPostAI");

	APlayerCtrl_C_PC_UpdateInputPostAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcTick_Door
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_StateProcTick_Door()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_StateProcTick_Door");

	APlayerCtrl_C_PC_StateProcTick_Door_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_GetShouldStopForTalk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bShouldStop                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_GetShouldStopForTalk(bool* bShouldStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_GetShouldStopForTalk");

	APlayerCtrl_C_PC_GetShouldStopForTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldStop != nullptr)
		*bShouldStop = params.bShouldStop;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_CalculateObstacleStopParams
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OutTargetSpeed                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutTargetDeaccel               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_CalculateObstacleStopParams(float* OutTargetSpeed, float* OutTargetDeaccel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_CalculateObstacleStopParams");

	APlayerCtrl_C_PC_CalculateObstacleStopParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTargetSpeed != nullptr)
		*OutTargetSpeed = params.OutTargetSpeed;
	if (OutTargetDeaccel != nullptr)
		*OutTargetDeaccel = params.OutTargetDeaccel;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_TransitTalk
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_TransitTalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_TransitTalk");

	APlayerCtrl_C_PC_TransitTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_TalkShowMotionSelect
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*            OutMontage                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_TalkShowMotionSelect(class UAnimMontage** OutMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_TalkShowMotionSelect");

	APlayerCtrl_C_PC_TalkShowMotionSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMontage != nullptr)
		*OutMontage = params.OutMontage;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcMSE_Stop
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_StateProcMSE_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_StateProcMSE_Stop");

	APlayerCtrl_C_PC_StateProcMSE_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcMSE_Door
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_StateProcMSE_Door()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_StateProcMSE_Door");

	APlayerCtrl_C_PC_StateProcMSE_Door_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_Sensor_UpdateNoInputForwardTrackAngle
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_Sensor_UpdateNoInputForwardTrackAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_Sensor_UpdateNoInputForwardTrackAngle");

	APlayerCtrl_C_PC_Sensor_UpdateNoInputForwardTrackAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_RequestTargetSwitching
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PC_Sensor_InputDirWS           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          PC_NPCSelectDir                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_RequestTargetSwitching(const struct FVector& PC_Sensor_InputDirWS, float PC_NPCSelectDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_RequestTargetSwitching");

	APlayerCtrl_C_PC_RequestTargetSwitching_Params params;
	params.PC_Sensor_InputDirWS = PC_Sensor_InputDirWS;
	params.PC_NPCSelectDir = PC_NPCSelectDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_ApplySlopeSpeedFactor
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          OriginalSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SlopeAngle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutSpeed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_ApplySlopeSpeedFactor(float OriginalSpeed, float SlopeAngle, float* OutSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_ApplySlopeSpeedFactor");

	APlayerCtrl_C_PC_ApplySlopeSpeedFactor_Params params;
	params.OriginalSpeed = OriginalSpeed;
	params.SlopeAngle = SlopeAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSpeed != nullptr)
		*OutSpeed = params.OutSpeed;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcLeave_Stair
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_StateProcLeave_Stair()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_StateProcLeave_Stair");

	APlayerCtrl_C_PC_StateProcLeave_Stair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcMSE_Stair
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_StateProcMSE_Stair()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_StateProcMSE_Stair");

	APlayerCtrl_C_PC_StateProcMSE_Stair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcTick_Stair
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_StateProcTick_Stair()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_StateProcTick_Stair");

	APlayerCtrl_C_PC_StateProcTick_Stair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcTick_WalkStop
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_StateProcTick_WalkStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_StateProcTick_WalkStop");

	APlayerCtrl_C_PC_StateProcTick_WalkStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_SensorDetectTurnDirection
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_SensorDetectTurnDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_SensorDetectTurnDirection");

	APlayerCtrl_C_PC_SensorDetectTurnDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_AI_UpdateTargetSwitching
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_AI_UpdateTargetSwitching()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_AI_UpdateTargetSwitching");

	APlayerCtrl_C_PC_AI_UpdateTargetSwitching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_UpdateSensorHistory
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_UpdateSensorHistory()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_UpdateSensorHistory");

	APlayerCtrl_C_PC_UpdateSensorHistory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_UpdateSensor_References
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_UpdateSensor_References()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_UpdateSensor_References");

	APlayerCtrl_C_PC_UpdateSensor_References_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_UpdateSensor_Physical
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_UpdateSensor_Physical()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_UpdateSensor_Physical");

	APlayerCtrl_C_PC_UpdateSensor_Physical_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcMSE_Turn
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_StateProcMSE_Turn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_StateProcMSE_Turn");

	APlayerCtrl_C_PC_StateProcMSE_Turn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_Turn_GetTurnRelativeAngle
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_Turn_GetTurnRelativeAngle(const struct FVector& Direction, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_Turn_GetTurnRelativeAngle");

	APlayerCtrl_C_PC_Turn_GetTurnRelativeAngle_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcTick_Turn
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_StateProcTick_Turn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_StateProcTick_Turn");

	APlayerCtrl_C_PC_StateProcTick_Turn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_CalcFootPivotRootDelta
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Delta                          (Parm, OutParm, IsPlainOldData)

void APlayerCtrl_C::PC_CalcFootPivotRootDelta(float Angle, struct FVector* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_CalcFootPivotRootDelta");

	APlayerCtrl_C_PC_CalcFootPivotRootDelta_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delta != nullptr)
		*Delta = params.Delta;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_TransitTurn
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_TransitTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_TransitTurn");

	APlayerCtrl_C_PC_TransitTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_TransitStop
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_TransitStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_TransitStop");

	APlayerCtrl_C_PC_TransitStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_StopMontages
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UAnimMontage*>    AnimList                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void APlayerCtrl_C::PC_StopMontages(TArray<class UAnimMontage*>* AnimList)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_StopMontages");

	APlayerCtrl_C_PC_StopMontages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimList != nullptr)
		*AnimList = params.AnimList;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_SetNextStateStair
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_PC_Stair>       NextMS                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CONTINUE                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Interrupt                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_SetNextStateStair(TEnumAsByte<EN_PC_Stair> NextMS, bool CONTINUE, bool Interrupt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_SetNextStateStair");

	APlayerCtrl_C_PC_SetNextStateStair_Params params;
	params.NextMS = NextMS;
	params.CONTINUE = CONTINUE;
	params.Interrupt = Interrupt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_TransitStair
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_TransitStair()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_TransitStair");

	APlayerCtrl_C_PC_TransitStair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_TransitWalk
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_TransitWalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_TransitWalk");

	APlayerCtrl_C_PC_TransitWalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcLeave_Input
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_StateProcLeave_Input()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_StateProcLeave_Input");

	APlayerCtrl_C_PC_StateProcLeave_Input_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_TransitIdle
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_TransitIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_TransitIdle");

	APlayerCtrl_C_PC_TransitIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_TransitDoor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_TransitDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_TransitDoor");

	APlayerCtrl_C_PC_TransitDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_IsAbleToTransitDoor
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APlayerCtrl_C::PC_IsAbleToTransitDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_IsAbleToTransitDoor");

	APlayerCtrl_C_PC_IsAbleToTransitDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_DetectObstacle_Test
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_DetectObstacle_Test()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_DetectObstacle_Test");

	APlayerCtrl_C_PC_DetectObstacle_Test_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_IsAdjustedDoorFront
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Adjusted                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_IsAdjustedDoorFront(bool* Adjusted)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_IsAdjustedDoorFront");

	APlayerCtrl_C_PC_IsAdjustedDoorFront_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Adjusted != nullptr)
		*Adjusted = params.Adjusted;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_SetNextStateDoor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_PC_Door>        NextMS                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CONTINUE                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Interrupt                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_SetNextStateDoor(TEnumAsByte<EN_PC_Door> NextMS, bool CONTINUE, bool Interrupt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_SetNextStateDoor");

	APlayerCtrl_C_PC_SetNextStateDoor_Params params;
	params.NextMS = NextMS;
	params.CONTINUE = CONTINUE;
	params.Interrupt = Interrupt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_UpdateAccessibleObject
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_UpdateAccessibleObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_UpdateAccessibleObject");

	APlayerCtrl_C_PC_UpdateAccessibleObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_AddDetectActorIfUnregistered
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_AddDetectActorIfUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_AddDetectActorIfUnregistered");

	APlayerCtrl_C_PC_AddDetectActorIfUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_BeginPlayImpl
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_BeginPlayImpl()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_BeginPlayImpl");

	APlayerCtrl_C_PC_BeginPlayImpl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_DrawShapeCollision
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShapeComponent*         Shape                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Thickness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_DrawShapeCollision(class UShapeComponent* Shape, float Thickness, const struct FLinearColor& Color, bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_DrawShapeCollision");

	APlayerCtrl_C_PC_DrawShapeCollision_Params params;
	params.Shape = Shape;
	params.Thickness = Thickness;
	params.Color = Color;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_DrawText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 StartPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void APlayerCtrl_C::PC_DrawText(const struct FString& Text, const struct FVector& StartPos, const struct FVector& Offset, bool Enable, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_DrawText");

	APlayerCtrl_C_PC_DrawText_Params params;
	params.Text = Text;
	params.StartPos = StartPos;
	params.Offset = Offset;
	params.Enable = Enable;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_SetEnableFallDetection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_SetEnableFallDetection(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_SetEnableFallDetection");

	APlayerCtrl_C_PC_SetEnableFallDetection_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_AI_Runable
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Runable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_AI_Runable(bool Start, bool* Runable)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_AI_Runable");

	APlayerCtrl_C_PC_AI_Runable_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Runable != nullptr)
		*Runable = params.Runable;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_AI_Walkable
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Walkable                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_AI_Walkable(bool Start, bool* Walkable)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_AI_Walkable");

	APlayerCtrl_C_PC_AI_Walkable_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Walkable != nullptr)
		*Walkable = params.Walkable;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_ResetSensor
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_ResetSensor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_ResetSensor");

	APlayerCtrl_C_PC_ResetSensor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_GetMontage
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EN_PC_EventMontage> MontageType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_GetMontage(TEnumAsByte<EN_PC_EventMontage> MontageType, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_GetMontage");

	APlayerCtrl_C_PC_GetMontage_Params params;
	params.MontageType = MontageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_SetNextStateStop
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_PC_Stop>        NextMS                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CONTINUE                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Interrupt                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_SetNextStateStop(TEnumAsByte<EN_PC_Stop> NextMS, bool CONTINUE, bool Interrupt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_SetNextStateStop");

	APlayerCtrl_C_PC_SetNextStateStop_Params params;
	params.NextMS = NextMS;
	params.CONTINUE = CONTINUE;
	params.Interrupt = Interrupt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_LockInputCancel
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_LockInputCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_LockInputCancel");

	APlayerCtrl_C_PC_LockInputCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_LockInputDirTick
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_LockInputDirTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_LockInputDirTick");

	APlayerCtrl_C_PC_LockInputDirTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_LockInputDir
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          inDuration                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_LockInputDir(float inDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_LockInputDir");

	APlayerCtrl_C_PC_LockInputDir_Params params;
	params.inDuration = inDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_DrawDirectionArrow
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Length                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_DrawDirectionArrow(const struct FVector& StartPos, const struct FVector& Direction, float Length, float Thickness, const struct FLinearColor& Color, bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_DrawDirectionArrow");

	APlayerCtrl_C_PC_DrawDirectionArrow_Params params;
	params.StartPos = StartPos;
	params.Direction = Direction;
	params.Length = Length;
	params.Thickness = Thickness;
	params.Color = Color;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_SensorUpdateInputDir
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_SensorUpdateInputDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_SensorUpdateInputDir");

	APlayerCtrl_C_PC_SensorUpdateInputDir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_CalcDirectionType
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ForwardDir                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 InputDir                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TEnumAsByte<EN_PC_DirectionType> DirectionType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AngleDegSigned                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_CalcDirectionType(const struct FVector& ForwardDir, const struct FVector& InputDir, TEnumAsByte<EN_PC_DirectionType>* DirectionType, float* AngleDegSigned)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_CalcDirectionType");

	APlayerCtrl_C_PC_CalcDirectionType_Params params;
	params.ForwardDir = ForwardDir;
	params.InputDir = InputDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DirectionType != nullptr)
		*DirectionType = params.DirectionType;
	if (AngleDegSigned != nullptr)
		*AngleDegSigned = params.AngleDegSigned;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_ResetInput
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_ResetInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_ResetInput");

	APlayerCtrl_C_PC_ResetInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_InputControl
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_InputControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_InputControl");

	APlayerCtrl_C_PC_InputControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_IsPlayerBhv
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ES3PlayerBehavior              Behavior                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Same                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_IsPlayerBhv(ES3PlayerBehavior Behavior, bool* Same)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_IsPlayerBhv");

	APlayerCtrl_C_PC_IsPlayerBhv_Params params;
	params.Behavior = Behavior;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Same != nullptr)
		*Same = params.Same;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_IsTalkCrouchEnd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           TalkCrouch                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_IsTalkCrouchEnd(bool* TalkCrouch)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_IsTalkCrouchEnd");

	APlayerCtrl_C_PC_IsTalkCrouchEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TalkCrouch != nullptr)
		*TalkCrouch = params.TalkCrouch;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_IsTalkStand
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           TalkCrouch                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_IsTalkStand(bool* TalkCrouch)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_IsTalkStand");

	APlayerCtrl_C_PC_IsTalkStand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TalkCrouch != nullptr)
		*TalkCrouch = params.TalkCrouch;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_IsTalkCrouching
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           TalkCrouch                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_IsTalkCrouching(bool* TalkCrouch)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_IsTalkCrouching");

	APlayerCtrl_C_PC_IsTalkCrouching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TalkCrouch != nullptr)
		*TalkCrouch = params.TalkCrouch;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_ConvertBehaviorToState
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3PlayerBehavior              Behavior                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_PC_State>       State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_ConvertBehaviorToState(ES3PlayerBehavior Behavior, TEnumAsByte<EN_PC_State>* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_ConvertBehaviorToState");

	APlayerCtrl_C_PC_ConvertBehaviorToState_Params params;
	params.Behavior = Behavior;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_ConvertBehaviorToMS
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3PlayerBehavior              Behavior                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_PC_State>       State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  MS                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_ConvertBehaviorToMS(ES3PlayerBehavior Behavior, TEnumAsByte<EN_PC_State> State, unsigned char* MS)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_ConvertBehaviorToMS");

	APlayerCtrl_C_PC_ConvertBehaviorToMS_Params params;
	params.Behavior = Behavior;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MS != nullptr)
		*MS = params.MS;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_ElapseTimeState
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_ElapseTimeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_ElapseTimeState");

	APlayerCtrl_C_PC_ElapseTimeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_TransitState
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_TransitState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_TransitState");

	APlayerCtrl_C_PC_TransitState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_UpdateState
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_UpdateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_UpdateState");

	APlayerCtrl_C_PC_UpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_SetNextStateTalk
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_PC_Talk>        NextMS                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CONTINUE                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Interrupt                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_SetNextStateTalk(TEnumAsByte<EN_PC_Talk> NextMS, bool CONTINUE, bool Interrupt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_SetNextStateTalk");

	APlayerCtrl_C_PC_SetNextStateTalk_Params params;
	params.NextMS = NextMS;
	params.CONTINUE = CONTINUE;
	params.Interrupt = Interrupt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_SetNextStateTurn
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_PC_Turn>        NextMS                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CONTINUE                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Interrupt                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_SetNextStateTurn(TEnumAsByte<EN_PC_Turn> NextMS, bool CONTINUE, bool Interrupt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_SetNextStateTurn");

	APlayerCtrl_C_PC_SetNextStateTurn_Params params;
	params.NextMS = NextMS;
	params.CONTINUE = CONTINUE;
	params.Interrupt = Interrupt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_SetNextStateWalk
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_PC_Walk>        NextMS                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CONTINUE                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Interrupt                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_SetNextStateWalk(TEnumAsByte<EN_PC_Walk> NextMS, bool CONTINUE, bool Interrupt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_SetNextStateWalk");

	APlayerCtrl_C_PC_SetNextStateWalk_Params params;
	params.NextMS = NextMS;
	params.CONTINUE = CONTINUE;
	params.Interrupt = Interrupt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_SetNextStateStand
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_PC_Stand>       NextMS                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CONTINUE                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Interrupt                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_SetNextStateStand(TEnumAsByte<EN_PC_Stand> NextMS, bool CONTINUE, bool Interrupt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_SetNextStateStand");

	APlayerCtrl_C_PC_SetNextStateStand_Params params;
	params.NextMS = NextMS;
	params.CONTINUE = CONTINUE;
	params.Interrupt = Interrupt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_SetNextState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EN_PC_State>       NextState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NextMS                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CONTINUE                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Interrupt                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_SetNextState(TEnumAsByte<EN_PC_State> NextState, unsigned char NextMS, bool CONTINUE, bool Interrupt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_SetNextState");

	APlayerCtrl_C_PC_SetNextState_Params params;
	params.NextState = NextState;
	params.NextMS = NextMS;
	params.CONTINUE = CONTINUE;
	params.Interrupt = Interrupt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcLeave
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_StateProcLeave()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_StateProcLeave");

	APlayerCtrl_C_PC_StateProcLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcMSEnter
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_StateProcMSEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_StateProcMSEnter");

	APlayerCtrl_C_PC_StateProcMSEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_IsPlayingMontageList
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UAnimMontage*>    AnimMontageList                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsPlaying                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_IsPlayingMontageList(TArray<class UAnimMontage*>* AnimMontageList, bool* IsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_IsPlayingMontageList");

	APlayerCtrl_C_PC_IsPlayingMontageList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimMontageList != nullptr)
		*AnimMontageList = params.AnimMontageList;
	if (IsPlaying != nullptr)
		*IsPlaying = params.IsPlaying;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_IsPlayingMontage
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            MontageRef                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPlaying                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_IsPlayingMontage(class UAnimMontage* MontageRef, bool* IsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_IsPlayingMontage");

	APlayerCtrl_C_PC_IsPlayingMontage_Params params;
	params.MontageRef = MontageRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlaying != nullptr)
		*IsPlaying = params.IsPlaying;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcTick
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_StateProcTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_StateProcTick");

	APlayerCtrl_C_PC_StateProcTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcEnter
// (Private, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_StateProcEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_StateProcEnter");

	APlayerCtrl_C_PC_StateProcEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_UpdateSensor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_UpdateSensor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_UpdateSensor");

	APlayerCtrl_C_PC_UpdateSensor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_IsAbleToTalk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           flag                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_IsAbleToTalk(bool* flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_IsAbleToTalk");

	APlayerCtrl_C_PC_IsAbleToTalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (flag != nullptr)
		*flag = params.flag;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_Init
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_Init");

	APlayerCtrl_C_PC_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_Calc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           flag                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_Calc(bool* flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_Calc");

	APlayerCtrl_C_PC_Calc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (flag != nullptr)
		*flag = params.flag;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_TalkShowMotionCalc
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_TalkShowMotionCalc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_TalkShowMotionCalc");

	APlayerCtrl_C_PC_TalkShowMotionCalc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_TalkShowMotionEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StopMotion                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_TalkShowMotionEnd(bool StopMotion)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_TalkShowMotionEnd");

	APlayerCtrl_C_PC_TalkShowMotionEnd_Params params;
	params.StopMotion = StopMotion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_TalkShowMotionStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ItemNameId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            showType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EN_SHOW_ID>        ItemShowTypeId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DirOtherFlag                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::PC_TalkShowMotionStart(const struct FName& ItemNameId, int showType, TEnumAsByte<EN_SHOW_ID> ItemShowTypeId, bool DirOtherFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_TalkShowMotionStart");

	APlayerCtrl_C_PC_TalkShowMotionStart_Params params;
	params.ItemNameId = ItemNameId;
	params.showType = showType;
	params.ItemShowTypeId = ItemShowTypeId;
	params.DirOtherFlag = DirOtherFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.PC_TalkStartInit
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::PC_TalkStartInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.PC_TalkStartInit");

	APlayerCtrl_C_PC_TalkStartInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.UserConstructionScript");

	APlayerCtrl_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.InpActEvt_SwitchTarget_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerCtrl_C::InpActEvt_SwitchTarget_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.InpActEvt_SwitchTarget_K2Node_InputActionEvent_6");

	APlayerCtrl_C_InpActEvt_SwitchTarget_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.InpActEvt_VirtualJoystickOn_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerCtrl_C::InpActEvt_VirtualJoystickOn_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.InpActEvt_VirtualJoystickOn_K2Node_InputActionEvent_5");

	APlayerCtrl_C_InpActEvt_VirtualJoystickOn_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.InpActEvt_VirtualJoystickOn_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerCtrl_C::InpActEvt_VirtualJoystickOn_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.InpActEvt_VirtualJoystickOn_K2Node_InputActionEvent_4");

	APlayerCtrl_C_InpActEvt_VirtualJoystickOn_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.InternalRunAxis
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::InternalRunAxis(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.InternalRunAxis");

	APlayerCtrl_C_InternalRunAxis_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.InternalMoveForwardAxis
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::InternalMoveForwardAxis(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.InternalMoveForwardAxis");

	APlayerCtrl_C_InternalMoveForwardAxis_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.InternalMoveRightAxis
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::InternalMoveRightAxis(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.InternalMoveRightAxis");

	APlayerCtrl_C_InternalMoveRightAxis_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_7
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_7(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_7");

	APlayerCtrl_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_7_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91");

	APlayerCtrl_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.InpAxisEvt_RunAxis_K2Node_InputAxisEvent_13
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::InpAxisEvt_RunAxis_K2Node_InputAxisEvent_13(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.InpAxisEvt_RunAxis_K2Node_InputAxisEvent_13");

	APlayerCtrl_C_InpAxisEvt_RunAxis_K2Node_InputAxisEvent_13_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.BndEvt__BP_PlayerInputBufferComponent_K2Node_ComponentBoundEvent_0_OnTargetSelectAction__DelegateSignature
// (BlueprintEvent)

void APlayerCtrl_C::BndEvt__BP_PlayerInputBufferComponent_K2Node_ComponentBoundEvent_0_OnTargetSelectAction__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.BndEvt__BP_PlayerInputBufferComponent_K2Node_ComponentBoundEvent_0_OnTargetSelectAction__DelegateSignature");

	APlayerCtrl_C_BndEvt__BP_PlayerInputBufferComponent_K2Node_ComponentBoundEvent_0_OnTargetSelectAction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.DecideDetectAction");

	APlayerCtrl_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.MouseMoveAxii
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Axii                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void APlayerCtrl_C::MouseMoveAxii(const struct FVector2D& Axii)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.MouseMoveAxii");

	APlayerCtrl_C_MouseMoveAxii_Params params;
	params.Axii = Axii;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.SetVirtualMovementInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldVector                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Magnitude                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Run                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::SetVirtualMovementInput(const struct FVector& WorldVector, float Magnitude, bool Run)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.SetVirtualMovementInput");

	APlayerCtrl_C_SetVirtualMovementInput_Params params;
	params.WorldVector = WorldVector;
	params.Magnitude = Magnitude;
	params.Run = Run;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerCtrl_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.ReceiveBeginPlay");

	APlayerCtrl_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.ReceiveTick");

	APlayerCtrl_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.Reinit
// (BlueprintCallable, BlueprintEvent)

void APlayerCtrl_C::Reinit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.Reinit");

	APlayerCtrl_C_Reinit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.BndEvt__BPC_PlayerTargetSwitcher_K2Node_ComponentBoundEvent_0_OnFaceDirection__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void APlayerCtrl_C::BndEvt__BPC_PlayerTargetSwitcher_K2Node_ComponentBoundEvent_0_OnFaceDirection__DelegateSignature(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.BndEvt__BPC_PlayerTargetSwitcher_K2Node_ComponentBoundEvent_0_OnFaceDirection__DelegateSignature");

	APlayerCtrl_C_BndEvt__BPC_PlayerTargetSwitcher_K2Node_ComponentBoundEvent_0_OnFaceDirection__DelegateSignature_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.ReceiveEndPlay");

	APlayerCtrl_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.ExecuteUbergraph_PlayerCtrl
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::ExecuteUbergraph_PlayerCtrl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.ExecuteUbergraph_PlayerCtrl");

	APlayerCtrl_C_ExecuteUbergraph_PlayerCtrl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCtrl.PlayerCtrl_C.DetectFallDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CharaPos                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 CharaDir                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           IsRight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCtrl_C::DetectFallDispatcher__DelegateSignature(const struct FVector& CharaPos, const struct FVector& CharaDir, bool IsRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCtrl.PlayerCtrl_C.DetectFallDispatcher__DelegateSignature");

	APlayerCtrl_C_DetectFallDispatcher__DelegateSignature_Params params;
	params.CharaPos = CharaPos;
	params.CharaDir = CharaDir;
	params.IsRight = IsRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
