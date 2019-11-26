
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

// Function BP_S3AttentionController.BP_S3AttentionController_C.GetPriority
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_S3AttentionController_C::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.GetPriority");

	ABP_S3AttentionController_C_GetPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.GetDetectAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FS3DetectActionParam> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FS3DetectActionParam> ABP_S3AttentionController_C::GetDetectAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.GetDetectAction");

	ABP_S3AttentionController_C_GetDetectAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.UpdateVisibleActorControl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::UpdateVisibleActorControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.UpdateVisibleActorControl");

	ABP_S3AttentionController_C_UpdateVisibleActorControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.SetActorVisibleControl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::SetActorVisibleControl(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.SetActorVisibleControl");

	ABP_S3AttentionController_C_SetActorVisibleControl_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.CheckCameraHit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 MoveVec                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bHit                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::CheckCameraHit(const struct FVector& MoveVec, bool* bHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.CheckCameraHit");

	ABP_S3AttentionController_C_CheckCameraHit_Params params;
	params.MoveVec = MoveVec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHit != nullptr)
		*bHit = params.bHit;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.CheckDirection
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3AttentionComponent*   Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bFind                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::CheckDirection(class US3AttentionComponent* Component, bool* bFind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.CheckDirection");

	ABP_S3AttentionController_C_CheckDirection_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFind != nullptr)
		*bFind = params.bFind;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ClearEmaSubtitles
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::ClearEmaSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ClearEmaSubtitles");

	ABP_S3AttentionController_C_ClearEmaSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.DrawEmaSubtitles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::DrawEmaSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.DrawEmaSubtitles");

	ABP_S3AttentionController_C_DrawEmaSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.IsEnabledAttention
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class US3AttentionComponent*   Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3AttentionController_C::IsEnabledAttention(class US3AttentionComponent* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.IsEnabledAttention");

	ABP_S3AttentionController_C_IsEnabledAttention_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.PlayBGMwithManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAtomCue*           Cue                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_S3AttentionManager_C* Manager                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::PlayBGMwithManager(class USoundAtomCue* Cue, class ABP_S3AttentionManager_C* Manager)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.PlayBGMwithManager");

	ABP_S3AttentionController_C_PlayBGMwithManager_Params params;
	params.Cue = Cue;
	params.Manager = Manager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.SetEnabledTimerEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::SetEnabledTimerEvent(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.SetEnabledTimerEvent");

	ABP_S3AttentionController_C_SetEnabledTimerEvent_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.UpdateTimerEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::UpdateTimerEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.UpdateTimerEvent");

	ABP_S3AttentionController_C_UpdateTimerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ForceExecConditionEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::ForceExecConditionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ForceExecConditionEvent");

	ABP_S3AttentionController_C_ForceExecConditionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ExecConditionEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::ExecConditionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ExecConditionEvent");

	ABP_S3AttentionController_C_ExecConditionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.IsStepEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3AttentionController_C::IsStepEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.IsStepEvent");

	ABP_S3AttentionController_C_IsStepEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.StopGameTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Stop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::StopGameTime(bool Stop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.StopGameTime");

	ABP_S3AttentionController_C_StopGameTime_Params params;
	params.Stop = Stop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.IsDisableAttentionState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3AttentionController_C::IsDisableAttentionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.IsDisableAttentionState");

	ABP_S3AttentionController_C_IsDisableAttentionState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.SetSearchStateEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::SetSearchStateEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.SetSearchStateEnabled");

	ABP_S3AttentionController_C_SetSearchStateEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.IsBackerACEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::IsBackerACEvent(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.IsBackerACEvent");

	ABP_S3AttentionController_C_IsBackerACEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.IsInputActionEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3AttentionController_C::IsInputActionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.IsInputActionEnabled");

	ABP_S3AttentionController_C_IsInputActionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.IsEffectEnd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3AttentionController_C::IsEffectEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.IsEffectEnd");

	ABP_S3AttentionController_C_IsEffectEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.EndAttention
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::EndAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.EndAttention");

	ABP_S3AttentionController_C_EndAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.SetInputActionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::SetInputActionEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.SetInputActionEnabled");

	ABP_S3AttentionController_C_SetInputActionEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.NotificationEvent
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ScriptLabel                    (Parm, OutParm, ZeroConstructor)

void ABP_S3AttentionController_C::NotificationEvent(struct FString* ScriptLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.NotificationEvent");

	ABP_S3AttentionController_C_NotificationEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScriptLabel != nullptr)
		*ScriptLabel = params.ScriptLabel;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.CalcFrontVector
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 FrontVec                       (Parm, OutParm, IsPlainOldData)

void ABP_S3AttentionController_C::CalcFrontVector(struct FVector* FrontVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.CalcFrontVector");

	ABP_S3AttentionController_C_CalcFrontVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FrontVec != nullptr)
		*FrontVec = params.FrontVec;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.SetAdjacentComponent
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3AttentionComponent*   AdjacentComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_S3AttentionController_C::SetAdjacentComponent(class US3AttentionComponent* AdjacentComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.SetAdjacentComponent");

	ABP_S3AttentionController_C_SetAdjacentComponent_Params params;
	params.AdjacentComponent = AdjacentComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.TraceRotateTarget
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECarouselRotate>   Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::TraceRotateTarget(TEnumAsByte<ECarouselRotate> Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.TraceRotateTarget");

	ABP_S3AttentionController_C_TraceRotateTarget_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.SetAttentionComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3AttentionComponent*   AttentionComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class US3AttentionComponent*   Output                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_S3AttentionController_C::SetAttentionComponent(class US3AttentionComponent* AttentionComponent, class US3AttentionComponent** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.SetAttentionComponent");

	ABP_S3AttentionController_C_SetAttentionComponent_Params params;
	params.AttentionComponent = AttentionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.UpdateCursor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::UpdateCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.UpdateCursor");

	ABP_S3AttentionController_C_UpdateCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ResetEffectEndFlag
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::ResetEffectEndFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ResetEffectEndFlag");

	ABP_S3AttentionController_C_ResetEffectEndFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.DrawAttentionEffect
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::DrawAttentionEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.DrawAttentionEffect");

	ABP_S3AttentionController_C_DrawAttentionEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.SetPlayerVisibility
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::SetPlayerVisibility(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.SetPlayerVisibility");

	ABP_S3AttentionController_C_SetPlayerVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.UpdateZoomRate
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CameraZoomOffset               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::UpdateZoomRate(float* CameraZoomOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.UpdateZoomRate");

	ABP_S3AttentionController_C_UpdateZoomRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraZoomOffset != nullptr)
		*CameraZoomOffset = params.CameraZoomOffset;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.MultiCapsuleTrace
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 End                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HalfHeight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ignoreActors                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           DEBUG                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HitComponent                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// struct FVector                 MoveVec                        (Parm, OutParm, IsPlainOldData)

bool ABP_S3AttentionController_C::MultiCapsuleTrace(const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, bool DEBUG, TArray<class AActor*>* ignoreActors, class UPrimitiveComponent** HitComponent, struct FVector* MoveVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.MultiCapsuleTrace");

	ABP_S3AttentionController_C_MultiCapsuleTrace_Params params;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;
	params.DEBUG = DEBUG;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ignoreActors != nullptr)
		*ignoreActors = params.ignoreActors;
	if (HitComponent != nullptr)
		*HitComponent = params.HitComponent;
	if (MoveVec != nullptr)
		*MoveVec = params.MoveVec;

	return params.ReturnValue;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.CapsuleTrace
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 End                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HalfHeight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ignoreActors                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UPrimitiveComponent*     HitComponent                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3AttentionController_C::CapsuleTrace(const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<class AActor*>* ignoreActors, class UPrimitiveComponent** HitComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.CapsuleTrace");

	ABP_S3AttentionController_C_CapsuleTrace_Params params;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.HalfHeight = HalfHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ignoreActors != nullptr)
		*ignoreActors = params.ignoreActors;
	if (HitComponent != nullptr)
		*HitComponent = params.HitComponent;

	return params.ReturnValue;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ResetCamera
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::ResetCamera(float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ResetCamera");

	ABP_S3AttentionController_C_ResetCamera_Params params;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ExitAttentionRequest
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::ExitAttentionRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ExitAttentionRequest");

	ABP_S3AttentionController_C_ExitAttentionRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ExitAttention
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::ExitAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ExitAttention");

	ABP_S3AttentionController_C_ExitAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.PlayGetSE
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::PlayGetSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.PlayGetSE");

	ABP_S3AttentionController_C_PlayGetSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.InputAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::InputAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.InputAction");

	ABP_S3AttentionController_C_InputAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.IsLookActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartTrace                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 EndTrace                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Look                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::IsLookActor(const struct FVector& StartTrace, const struct FVector& EndTrace, bool* Look)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.IsLookActor");

	ABP_S3AttentionController_C_IsLookActor_Params params;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Look != nullptr)
		*Look = params.Look;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.SearchReset
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::SearchReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.SearchReset");

	ABP_S3AttentionController_C_SearchReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.StartAttention
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3AttentionComponent*   InAttentionComponent           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 InHitLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_S3AttentionController_C::StartAttention(class US3AttentionComponent* InAttentionComponent, const struct FVector& InHitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.StartAttention");

	ABP_S3AttentionController_C_StartAttention_Params params;
	params.InAttentionComponent = InAttentionComponent;
	params.InHitLocation = InHitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.SearchTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::SearchTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.SearchTarget");

	ABP_S3AttentionController_C_SearchTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.FreeMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::FreeMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.FreeMove");

	ABP_S3AttentionController_C_FreeMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.CheckNeighbourTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3AttentionComponent*   Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_S3AttentionController_C::CheckNeighbourTarget(class US3AttentionComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.CheckNeighbourTarget");

	ABP_S3AttentionController_C_CheckNeighbourTarget_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.DrawArrow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Vec                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_S3AttentionController_C::DrawArrow(const struct FVector& Vec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.DrawArrow");

	ABP_S3AttentionController_C_DrawArrow_Params params;
	params.Vec = Vec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.DrawNextDirection
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::DrawNextDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.DrawNextDirection");

	ABP_S3AttentionController_C_DrawNextDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.InputKey
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   KeyName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::InputKey(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.InputKey");

	ABP_S3AttentionController_C_InputKey_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.CheckCondition
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::CheckCondition(int* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.CheckCondition");

	ABP_S3AttentionController_C_CheckCondition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.CameraSetting
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::CameraSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.CameraSetting");

	ABP_S3AttentionController_C_CameraSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.MoveCamera
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::MoveCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.MoveCamera");

	ABP_S3AttentionController_C_MoveCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ChangeTarget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::ChangeTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ChangeTarget");

	ABP_S3AttentionController_C_ChangeTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.CalcNormal
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3AttentionComponent*   Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, IsPlainOldData)

void ABP_S3AttentionController_C::CalcNormal(class US3AttentionComponent* Component, const struct FVector& HitLocation, struct FVector* Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.CalcNormal");

	ABP_S3AttentionController_C_CalcNormal_Params params;
	params.Component = Component;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Normal != nullptr)
		*Normal = params.Normal;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.TraceNextTarget
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US3AttentionComponent*   Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   KeyName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3AttentionComponent*   NextComponent                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_S3AttentionController_C::TraceNextTarget(class US3AttentionComponent* Component, const struct FName& KeyName, bool Add, class US3AttentionComponent** NextComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.TraceNextTarget");

	ABP_S3AttentionController_C_TraceNextTarget_Params params;
	params.Component = Component;
	params.KeyName = KeyName;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextComponent != nullptr)
		*NextComponent = params.NextComponent;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.PlayScript
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ScriptLabel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           DisableButton                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Once                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Playing                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::PlayScript(const struct FString& ScriptLabel, bool DisableButton, bool Once, bool* Playing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.PlayScript");

	ABP_S3AttentionController_C_PlayScript_Params params;
	params.ScriptLabel = ScriptLabel;
	params.DisableButton = DisableButton;
	params.Once = Once;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Playing != nullptr)
		*Playing = params.Playing;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.UserConstructionScript");

	ABP_S3AttentionController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3AttentionController_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_8");

	ABP_S3AttentionController_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3AttentionController_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_7");

	ABP_S3AttentionController_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3AttentionController_C::InpActEvt_SearchRightSelect_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_6");

	ABP_S3AttentionController_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3AttentionController_C::InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_5");

	ABP_S3AttentionController_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_S3AttentionController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ReceiveBeginPlay");

	ABP_S3AttentionController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ReceiveTick");

	ABP_S3AttentionController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80");

	ABP_S3AttentionController_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91");

	ABP_S3AttentionController_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.DelayStartAttention
// (BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::DelayStartAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.DelayStartAttention");

	ABP_S3AttentionController_C_DelayStartAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.DelayEndAttention
// (BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::DelayEndAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.DelayEndAttention");

	ABP_S3AttentionController_C_DelayEndAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.AxisToDirection
// (BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::AxisToDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.AxisToDirection");

	ABP_S3AttentionController_C_AxisToDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_61
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_61(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_61");

	ABP_S3AttentionController_C_InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_61_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.DecideDetectAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.DecideDetectAction");

	ABP_S3AttentionController_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.StartACEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTalkScript*             ACEventScript                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::StartACEvent(class UTalkScript* ACEventScript)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.StartACEvent");

	ABP_S3AttentionController_C_StartACEvent_Params params;
	params.ACEventScript = ACEventScript;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.Event_CameraZoomAxis
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::Event_CameraZoomAxis(float Axis, bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.Event_CameraZoomAxis");

	ABP_S3AttentionController_C_Event_CameraZoomAxis_Params params;
	params.Axis = Axis;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ReceiveEndPlay");

	ABP_S3AttentionController_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ExecuteUbergraph_BP_S3AttentionController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::ExecuteUbergraph_BP_S3AttentionController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ExecuteUbergraph_BP_S3AttentionController");

	ABP_S3AttentionController_C_ExecuteUbergraph_BP_S3AttentionController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.OnExitAttentin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::OnExitAttentin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.OnExitAttentin__DelegateSignature");

	ABP_S3AttentionController_C_OnExitAttentin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.OnEndAttention__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::OnEndAttention__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.OnEndAttention__DelegateSignature");

	ABP_S3AttentionController_C_OnEndAttention__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.OnStartAttention__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_S3AttentionController_C::OnStartAttention__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.OnStartAttention__DelegateSignature");

	ABP_S3AttentionController_C_OnStartAttention__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.OnFindNPC__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ScheduleNPC_C*       NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::OnFindNPC__DelegateSignature(class ABP_ScheduleNPC_C* NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.OnFindNPC__DelegateSignature");

	ABP_S3AttentionController_C_OnFindNPC__DelegateSignature_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.OnAccordCondition__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_S3AttentionController_C::OnAccordCondition__DelegateSignature(const struct FString& EventId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.OnAccordCondition__DelegateSignature");

	ABP_S3AttentionController_C_OnAccordCondition__DelegateSignature_Params params;
	params.EventId = EventId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
