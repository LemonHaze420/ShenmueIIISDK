
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

// Function BP_Forklift_New.BP_Forklift_New_C.CheckNeedReverseHit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ImpactNormal                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Forklift_New_C::CheckNeedReverseHit(const struct FVector& ImpactNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.CheckNeedReverseHit");

	ABP_Forklift_New_C_CheckNeedReverseHit_Params params;
	params.ImpactNormal = ImpactNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Forklift_New.BP_Forklift_New_C.DisableUpdateSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::DisableUpdateSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.DisableUpdateSound");

	ABP_Forklift_New_C_DisableUpdateSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.ChangeLoopSEState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Stop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::ChangeLoopSEState(bool Stop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.ChangeLoopSEState");

	ABP_Forklift_New_C_ChangeLoopSEState_Params params;
	params.Stop = Stop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.IsPlayingScriptLabel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Forklift_New_C::IsPlayingScriptLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.IsPlayingScriptLabel");

	ABP_Forklift_New_C_IsPlayingScriptLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Forklift_New.BP_Forklift_New_C.CheckLiftMoveSafety
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::CheckLiftMoveSafety()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.CheckLiftMoveSafety");

	ABP_Forklift_New_C_CheckLiftMoveSafety_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.SetScriptLabels
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           ExistUp                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           Timeup                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Forklift_New_C::SetScriptLabels(TArray<struct FName>* ExistUp, TArray<struct FName>* Timeup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.SetScriptLabels");

	ABP_Forklift_New_C_SetScriptLabels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExistUp != nullptr)
		*ExistUp = params.ExistUp;
	if (Timeup != nullptr)
		*Timeup = params.Timeup;
}


// Function BP_Forklift_New.BP_Forklift_New_C.StopPlayingFeedBack
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::StopPlayingFeedBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.StopPlayingFeedBack");

	ABP_Forklift_New_C_StopPlayingFeedBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.IsInputEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bInputEnabled                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::IsInputEnabled(bool* bInputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.IsInputEnabled");

	ABP_Forklift_New_C_IsInputEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bInputEnabled != nullptr)
		*bInputEnabled = params.bInputEnabled;
}


// Function BP_Forklift_New.BP_Forklift_New_C.DebugLog
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::DebugLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.DebugLog");

	ABP_Forklift_New_C_DebugLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.GetScriptLabel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_MiniGame_FL_LabelType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::GetScriptLabel(TEnumAsByte<E_MiniGame_FL_LabelType> Type, struct FName* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.GetScriptLabel");

	ABP_Forklift_New_C_GetScriptLabel_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_Forklift_New.BP_Forklift_New_C.PlayScriptLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::PlayScriptLabel(const struct FName& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.PlayScriptLabel");

	ABP_Forklift_New_C_PlayScriptLabel_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.ResetRespawnFlag
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::ResetRespawnFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.ResetRespawnFlag");

	ABP_Forklift_New_C_ResetRespawnFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.CollisionCheck
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::CollisionCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.CollisionCheck");

	ABP_Forklift_New_C_CollisionCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.CheckLiftMove
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::CheckLiftMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.CheckLiftMove");

	ABP_Forklift_New_C_CheckLiftMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.SetEnabledSpeedControlCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::SetEnabledSpeedControlCount(bool Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.SetEnabledSpeedControlCount");

	ABP_Forklift_New_C_SetEnabledSpeedControlCount_Params params;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.InitializeValue
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::InitializeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.InitializeValue");

	ABP_Forklift_New_C_InitializeValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.UpdateSteeringAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InputValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::UpdateSteeringAnim(float InputValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.UpdateSteeringAnim");

	ABP_Forklift_New_C_UpdateSteeringAnim_Params params;
	params.InputValue = InputValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.UpdateLight
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::UpdateLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.UpdateLight");

	ABP_Forklift_New_C_UpdateLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.GetClothMeshComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* ABP_Forklift_New_C::GetClothMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.GetClothMeshComponent");

	ABP_Forklift_New_C_GetClothMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Forklift_New.BP_Forklift_New_C.ForceMoveLiftTopLocation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::ForceMoveLiftTopLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.ForceMoveLiftTopLocation");

	ABP_Forklift_New_C_ForceMoveLiftTopLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.UpdateCanDownAreaFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ChangeState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::UpdateCanDownAreaFlag(bool* ChangeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.UpdateCanDownAreaFlag");

	ABP_Forklift_New_C_UpdateCanDownAreaFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChangeState != nullptr)
		*ChangeState = params.ChangeState;
}


// Function BP_Forklift_New.BP_Forklift_New_C.CheckDownContainer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Check                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::CheckDownContainer(bool* Check)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.CheckDownContainer");

	ABP_Forklift_New_C_CheckDownContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Check != nullptr)
		*Check = params.Check;
}


// Function BP_Forklift_New.BP_Forklift_New_C.ReMoveLift
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::ReMoveLift()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.ReMoveLift");

	ABP_Forklift_New_C_ReMoveLift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.CheckHitSomethingOnTheLine
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 EndPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  Hit                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::CheckHitSomethingOnTheLine(const struct FVector& StartPoint, const struct FVector& EndPoint, class AActor** Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.CheckHitSomethingOnTheLine");

	ABP_Forklift_New_C_CheckHitSomethingOnTheLine_Params params;
	params.StartPoint = StartPoint;
	params.EndPoint = EndPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function BP_Forklift_New.BP_Forklift_New_C.CheckUpContainer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Check                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::CheckUpContainer(bool* Check)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.CheckUpContainer");

	ABP_Forklift_New_C_CheckUpContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Check != nullptr)
		*Check = params.Check;
}


// Function BP_Forklift_New.BP_Forklift_New_C.CheckCanLiftDonw
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanDown                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::CheckCanLiftDonw(bool* CanDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.CheckCanLiftDonw");

	ABP_Forklift_New_C_CheckCanLiftDonw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanDown != nullptr)
		*CanDown = params.CanDown;
}


// Function BP_Forklift_New.BP_Forklift_New_C.CheckHitContainerOnTheLine
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 StartPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 EndPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class ABP_FL_Container_C*      Hit                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::CheckHitContainerOnTheLine(const struct FVector& StartPoint, const struct FVector& EndPoint, class ABP_FL_Container_C** Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.CheckHitContainerOnTheLine");

	ABP_Forklift_New_C_CheckHitContainerOnTheLine_Params params;
	params.StartPoint = StartPoint;
	params.EndPoint = EndPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function BP_Forklift_New.BP_Forklift_New_C.CanDownContainer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanDown                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::CanDownContainer(bool* CanDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.CanDownContainer");

	ABP_Forklift_New_C_CanDownContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanDown != nullptr)
		*CanDown = params.CanDown;
}


// Function BP_Forklift_New.BP_Forklift_New_C.UpdateContainerCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::UpdateContainerCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.UpdateContainerCollision");

	ABP_Forklift_New_C_UpdateContainerCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.SetForkAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::SetForkAlpha(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.SetForkAlpha");

	ABP_Forklift_New_C_SetForkAlpha_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.GetForkAlpha
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::GetForkAlpha(float* Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.GetForkAlpha");

	ABP_Forklift_New_C_GetForkAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alpha != nullptr)
		*Alpha = params.Alpha;
}


// Function BP_Forklift_New.BP_Forklift_New_C.UpdateLiftUpDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::UpdateLiftUpDown(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.UpdateLiftUpDown");

	ABP_Forklift_New_C_UpdateLiftUpDown_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.MoveLift
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGame_FL_LiftHeight> NextLiftHeight                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::MoveLift(TEnumAsByte<E_MiniGame_FL_LiftHeight> NextLiftHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.MoveLift");

	ABP_Forklift_New_C_MoveLift_Params params;
	params.NextLiftHeight = NextLiftHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.UserConstructionScript");

	ABP_Forklift_New_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.ShakeTimeLine__FinishedFunc
// (BlueprintEvent)

void ABP_Forklift_New_C::ShakeTimeLine__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.ShakeTimeLine__FinishedFunc");

	ABP_Forklift_New_C_ShakeTimeLine__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.ShakeTimeLine__UpdateFunc
// (BlueprintEvent)

void ABP_Forklift_New_C::ShakeTimeLine__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.ShakeTimeLine__UpdateFunc");

	ABP_Forklift_New_C_ShakeTimeLine__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Forklift_New_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.ReceiveBeginPlay");

	ABP_Forklift_New_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.StopLiftMove
// (BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::StopLiftMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.StopLiftMove");

	ABP_Forklift_New_C_StopLiftMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.InputForkDown
// (BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::InputForkDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.InputForkDown");

	ABP_Forklift_New_C_InputForkDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.BndEvt__ContainerSensor_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Forklift_New_C::BndEvt__ContainerSensor_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.BndEvt__ContainerSensor_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Forklift_New_C_BndEvt__ContainerSensor_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.BndEvt__ContainerSensor_K2Node_ComponentBoundEvent_43_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::BndEvt__ContainerSensor_K2Node_ComponentBoundEvent_43_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.BndEvt__ContainerSensor_K2Node_ComponentBoundEvent_43_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Forklift_New_C_BndEvt__ContainerSensor_K2Node_ComponentBoundEvent_43_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.BndEvt__LiftCollision_K2Node_ComponentBoundEvent_42_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Forklift_New_C::BndEvt__LiftCollision_K2Node_ComponentBoundEvent_42_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.BndEvt__LiftCollision_K2Node_ComponentBoundEvent_42_ComponentHitSignature__DelegateSignature");

	ABP_Forklift_New_C_BndEvt__LiftCollision_K2Node_ComponentBoundEvent_42_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.ReceiveTick");

	ABP_Forklift_New_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.ForceStop
// (BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::ForceStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.ForceStop");

	ABP_Forklift_New_C_ForceStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.InputChangeCamera
// (BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::InputChangeCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.InputChangeCamera");

	ABP_Forklift_New_C_InputChangeCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.PauseForMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Pause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::PauseForMap(bool Pause)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.PauseForMap");

	ABP_Forklift_New_C_PauseForMap_Params params;
	params.Pause = Pause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.Event_InputThrottle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Throttle_Axis                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::Event_InputThrottle(float Throttle_Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.Event_InputThrottle");

	ABP_Forklift_New_C_Event_InputThrottle_Params params;
	params.Throttle_Axis = Throttle_Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.Event_InputSteering
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Steering_Axis                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::Event_InputSteering(float Steering_Axis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.Event_InputSteering");

	ABP_Forklift_New_C_Event_InputSteering_Params params;
	params.Steering_Axis = Steering_Axis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.InitializeSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::InitializeSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.InitializeSound");

	ABP_Forklift_New_C_InitializeSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.Update Engine Sound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::Update_Engine_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.Update Engine Sound");

	ABP_Forklift_New_C_Update_Engine_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.BndEvt__CrushSoundCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Forklift_New_C::BndEvt__CrushSoundCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.BndEvt__CrushSoundCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Forklift_New_C_BndEvt__CrushSoundCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.BndEvt__ForwardCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Forklift_New_C::BndEvt__ForwardCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.BndEvt__ForwardCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_Forklift_New_C_BndEvt__ForwardCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.ReceiveEndPlay");

	ABP_Forklift_New_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.PlayScriptWithInputOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_MiniGame_FL_LabelType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::PlayScriptWithInputOff(TEnumAsByte<E_MiniGame_FL_LabelType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.PlayScriptWithInputOff");

	ABP_Forklift_New_C_PlayScriptWithInputOff_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.EndGameWithPlayingLabel
// (BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::EndGameWithPlayingLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.EndGameWithPlayingLabel");

	ABP_Forklift_New_C_EndGameWithPlayingLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.ReverseLift
// (BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::ReverseLift()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.ReverseLift");

	ABP_Forklift_New_C_ReverseLift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.CheckSensorEndOverlapContainer
// (BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::CheckSensorEndOverlapContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.CheckSensorEndOverlapContainer");

	ABP_Forklift_New_C_CheckSensorEndOverlapContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.ExecuteUbergraph_BP_Forklift_New
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Forklift_New_C::ExecuteUbergraph_BP_Forklift_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.ExecuteUbergraph_BP_Forklift_New");

	ABP_Forklift_New_C_ExecuteUbergraph_BP_Forklift_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.OnEndwithPlayingLabelDispacher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::OnEndwithPlayingLabelDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.OnEndwithPlayingLabelDispacher__DelegateSignature");

	ABP_Forklift_New_C_OnEndwithPlayingLabelDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Forklift_New.BP_Forklift_New_C.OnRespawnDispacher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Forklift_New_C::OnRespawnDispacher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Forklift_New.BP_Forklift_New_C.OnRespawnDispacher__DelegateSignature");

	ABP_Forklift_New_C_OnRespawnDispacher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
