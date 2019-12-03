
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

// Function BP_S3AttentionController.BP_S3AttentionController_C.GetPriority
// (NetReliable, NetRequest, Exec, Event, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
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
// (NetReliable, NetRequest, Exec, Event, MulticastDelegate, Public, Private, Protected, Delegate, NetClient, Const)
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


// Function BP_S3AttentionController.BP_S3AttentionController_C.UpdateButton
// (Exec, Event, NetResponse, Static, MulticastDelegate, Public, Protected, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_S3AttentionController_C::STATIC_UpdateButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.UpdateButton");

	ABP_S3AttentionController_C_UpdateButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ResetLevelState
// (Net, Exec, Native, Event, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_S3AttentionController_C::STATIC_ResetLevelState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ResetLevelState");

	ABP_S3AttentionController_C_ResetLevelState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.IsStartAC
// (Net, NetRequest, NetMulticast, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           StartAC                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::IsStartAC(bool* StartAC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.IsStartAC");

	ABP_S3AttentionController_C_IsStartAC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartAC != nullptr)
		*StartAC = params.StartAC;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.OnAttentionLevelUnloaded
// (Net, NetMulticast, NetServer, NetClient)
// Parameters:
// bool                           NeetFade                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::OnAttentionLevelUnloaded(bool* NeetFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.OnAttentionLevelUnloaded");

	ABP_S3AttentionController_C_OnAttentionLevelUnloaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NeetFade != nullptr)
		*NeetFade = params.NeetFade;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.UpdateVisibleActorControl
// (Net, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, DLLImport, BlueprintEvent, BlueprintPure, Const)

void ABP_S3AttentionController_C::STATIC_UpdateVisibleActorControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.UpdateVisibleActorControl");

	ABP_S3AttentionController_C_UpdateVisibleActorControl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.SetActorVisibleControl
// (NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, Delegate, HasOutParms, NetClient, Const)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::SetActorVisibleControl(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.SetActorVisibleControl");

	ABP_S3AttentionController_C_SetActorVisibleControl_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.CheckCameraHit
// (Net, NetReliable, Exec, Native, Static, Delegate, NetServer, NetClient, Const)
// Parameters:
// struct FVector                 MoveVec                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bHit                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::STATIC_CheckCameraHit(const struct FVector& MoveVec, bool* bHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.CheckCameraHit");

	ABP_S3AttentionController_C_CheckCameraHit_Params params;
	params.MoveVec = MoveVec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHit != nullptr)
		*bHit = params.bHit;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.CheckDirection
// (Net, NetRequest, Native, Static, NetMulticast, Private, NetServer, NetClient, Const)
// Parameters:
// class US3AttentionComponent*   Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bFind                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::STATIC_CheckDirection(class US3AttentionComponent* Component, bool* bFind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.CheckDirection");

	ABP_S3AttentionController_C_CheckDirection_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFind != nullptr)
		*bFind = params.bFind;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ClearEmaSubtitles
// (Net, NetReliable, NetMulticast, NetServer, NetClient)

void ABP_S3AttentionController_C::ClearEmaSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ClearEmaSubtitles");

	ABP_S3AttentionController_C_ClearEmaSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.DrawEmaSubtitles
// (NetReliable, Exec, Event, NetResponse, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3AttentionController_C::DrawEmaSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.DrawEmaSubtitles");

	ABP_S3AttentionController_C_DrawEmaSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.IsEnabledAttention
// (NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)
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
// (Net, NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Public, Delegate, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (Net, NetRequest, NetMulticast, NetServer, NetClient)
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
// (Exec, Native, Event, NetResponse, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3AttentionController_C::UpdateTimerEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.UpdateTimerEvent");

	ABP_S3AttentionController_C_UpdateTimerEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ForceExecConditionEvent
// (Net, NetReliable, Exec, NetResponse, NetMulticast, MulticastDelegate, Private, NetServer, NetClient, Const)

void ABP_S3AttentionController_C::ForceExecConditionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ForceExecConditionEvent");

	ABP_S3AttentionController_C_ForceExecConditionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ExecConditionEvent
// (Net, Exec, Native, NetResponse, Private, Protected, Delegate, NetClient, Const)

void ABP_S3AttentionController_C::ExecConditionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ExecConditionEvent");

	ABP_S3AttentionController_C_ExecConditionEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.IsStepEvent
// (Event, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)
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
// (NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Public, Private, Protected, NetClient, Const)
// Parameters:
// bool                           Stop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::StopGameTime(bool Stop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.StopGameTime");

	ABP_S3AttentionController_C_StopGameTime_Params params;
	params.Stop = Stop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.IsDisableAttentionState
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)
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
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Private, Protected, NetClient, Const)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::STATIC_SetSearchStateEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.SetSearchStateEnabled");

	ABP_S3AttentionController_C_SetSearchStateEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.IsBackerACEvent
// (Native, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::STATIC_IsBackerACEvent(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.IsBackerACEvent");

	ABP_S3AttentionController_C_IsBackerACEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.IsInputActionEnabled
// (Net, NetReliable, Exec, Native, Event, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3AttentionController_C::STATIC_IsInputActionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.IsInputActionEnabled");

	ABP_S3AttentionController_C_IsInputActionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.IsEffectEnd
// (Net, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3AttentionController_C::STATIC_IsEffectEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.IsEffectEnd");

	ABP_S3AttentionController_C_IsEffectEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.EndAttention
// (Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, Const)

void ABP_S3AttentionController_C::STATIC_EndAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.EndAttention");

	ABP_S3AttentionController_C_EndAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.SetInputActionEnabled
// (NetRequest, Exec, Native, Event, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::STATIC_SetInputActionEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.SetInputActionEnabled");

	ABP_S3AttentionController_C_SetInputActionEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.NotificationEvent
// (NetReliable, Event, MulticastDelegate, Public, Private, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, Const)
// Parameters:
// struct FVector                 FrontVec                       (Parm, OutParm, IsPlainOldData)

void ABP_S3AttentionController_C::STATIC_CalcFrontVector(struct FVector* FrontVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.CalcFrontVector");

	ABP_S3AttentionController_C_CalcFrontVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FrontVec != nullptr)
		*FrontVec = params.FrontVec;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.SetAdjacentComponent
// (NetReliable, NetRequest, Static, NetMulticast, Protected, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// class US3AttentionComponent*   AdjacentComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_S3AttentionController_C::STATIC_SetAdjacentComponent(class US3AttentionComponent* AdjacentComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.SetAdjacentComponent");

	ABP_S3AttentionController_C_SetAdjacentComponent_Params params;
	params.AdjacentComponent = AdjacentComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.TraceRotateTarget
// (Net, NetReliable, Exec, Event, Static, NetMulticast, Private, NetServer, NetClient, Const)
// Parameters:
// TEnumAsByte<ECarouselRotate>   Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::STATIC_TraceRotateTarget(TEnumAsByte<ECarouselRotate> Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.TraceRotateTarget");

	ABP_S3AttentionController_C_TraceRotateTarget_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.SetAttentionComponent
// (NetRequest, Exec, Event, NetResponse, Static, Public, Delegate, HasOutParms, HasDefaults, Const)
// Parameters:
// class US3AttentionComponent*   AttentionComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class US3AttentionComponent*   Output                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_S3AttentionController_C::STATIC_SetAttentionComponent(class US3AttentionComponent* AttentionComponent, class US3AttentionComponent** Output)
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
// (Native, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, Const)

void ABP_S3AttentionController_C::STATIC_UpdateCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.UpdateCursor");

	ABP_S3AttentionController_C_UpdateCursor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ResetEffectEndFlag
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Private, Protected, NetClient, Const)

void ABP_S3AttentionController_C::STATIC_ResetEffectEndFlag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ResetEffectEndFlag");

	ABP_S3AttentionController_C_ResetEffectEndFlag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.DrawAttentionEffect
// (NetReliable, NetRequest, Static, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3AttentionController_C::STATIC_DrawAttentionEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.DrawAttentionEffect");

	ABP_S3AttentionController_C_DrawAttentionEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.SetPlayerVisibility
// (Net, NetRequest, Exec, Native, Event, Static, HasOutParms, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::STATIC_SetPlayerVisibility(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.SetPlayerVisibility");

	ABP_S3AttentionController_C_SetPlayerVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.UpdateZoomRate
// (NetReliable, NetResponse, Static, Public, Private, NetServer, NetClient, Const)
// Parameters:
// float                          CameraZoomOffset               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::STATIC_UpdateZoomRate(float* CameraZoomOffset)
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
// (Net, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, NetClient, Const)
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
// (Net, NetReliable, Static, NetMulticast, MulticastDelegate, Public, Delegate, NetServer, NetClient, Const)
// Parameters:
// struct FVector                 Start                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 End                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HalfHeight                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ignoreActors                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UPrimitiveComponent*     HitComponent                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_S3AttentionController_C::STATIC_CapsuleTrace(const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<class AActor*>* ignoreActors, class UPrimitiveComponent** HitComponent)
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
// (Exec, Event, MulticastDelegate, Public, Private, Protected, HasOutParms, DLLImport, BlueprintEvent, BlueprintPure, Const)
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
// (Net, NetRequest, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, Const)

void ABP_S3AttentionController_C::STATIC_ExitAttentionRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ExitAttentionRequest");

	ABP_S3AttentionController_C_ExitAttentionRequest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ExitAttention
// (NetReliable, NetResponse, NetMulticast, Public, Private, NetServer, HasOutParms, NetClient, Const)

void ABP_S3AttentionController_C::ExitAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ExitAttention");

	ABP_S3AttentionController_C_ExitAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.PlayGetSE
// (Net, NetReliable, NetRequest, Exec, Event, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)

void ABP_S3AttentionController_C::PlayGetSE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.PlayGetSE");

	ABP_S3AttentionController_C_PlayGetSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.InputAction
// (NetReliable, NetRequest, Event, Private, Protected, Delegate, HasOutParms, NetClient, Const)
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
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Private, Protected, NetClient, Const)
// Parameters:
// struct FVector                 StartTrace                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 EndTrace                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Look                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::STATIC_IsLookActor(const struct FVector& StartTrace, const struct FVector& EndTrace, bool* Look)
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
// (NetRequest, Exec, Static, Private, Protected, Delegate, HasDefaults, NetClient, Const)

void ABP_S3AttentionController_C::STATIC_SearchReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.SearchReset");

	ABP_S3AttentionController_C_SearchReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.StartAttention
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Private, Protected, Delegate, HasDefaults, NetClient, Const)
// Parameters:
// class US3AttentionComponent*   InAttentionComponent           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 InHitLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_S3AttentionController_C::STATIC_StartAttention(class US3AttentionComponent* InAttentionComponent, const struct FVector& InHitLocation)
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
// (Net, NetReliable, NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, HasOutParms, NetClient, Const)

void ABP_S3AttentionController_C::SearchTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.SearchTarget");

	ABP_S3AttentionController_C_SearchTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.FreeMove
// (Net, Event, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_S3AttentionController_C::FreeMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.FreeMove");

	ABP_S3AttentionController_C_FreeMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.CheckNeighbourTarget
// (NetResponse, Static, NetMulticast, Private, NetServer, NetClient, Const)
// Parameters:
// class US3AttentionComponent*   Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_S3AttentionController_C::STATIC_CheckNeighbourTarget(class US3AttentionComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.CheckNeighbourTarget");

	ABP_S3AttentionController_C_CheckNeighbourTarget_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.DrawArrow
// (NetResponse, Static, NetMulticast, MulticastDelegate, Public, NetServer, NetClient, Const)
// Parameters:
// struct FVector                 Vec                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_S3AttentionController_C::STATIC_DrawArrow(const struct FVector& Vec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.DrawArrow");

	ABP_S3AttentionController_C_DrawArrow_Params params;
	params.Vec = Vec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.DrawNextDirection
// (Net, NetReliable, Exec, Native, NetResponse, Static, NetMulticast, Delegate, NetClient, Const)

void ABP_S3AttentionController_C::STATIC_DrawNextDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.DrawNextDirection");

	ABP_S3AttentionController_C_DrawNextDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.InputKey
// (Exec, Event, NetResponse, Static, NetMulticast, Protected, NetServer, NetClient, Const)
// Parameters:
// struct FName                   KeyName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::STATIC_InputKey(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.InputKey");

	ABP_S3AttentionController_C_InputKey_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.CheckCondition
// (Net, NetResponse, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, Const)
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
// (NetRequest, Native, Static, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3AttentionController_C::STATIC_CameraSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.CameraSetting");

	ABP_S3AttentionController_C_CameraSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.MoveCamera
// (NetReliable, Event, Static, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, Const)

void ABP_S3AttentionController_C::STATIC_MoveCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.MoveCamera");

	ABP_S3AttentionController_C_MoveCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ChangeTarget
// (NetRequest, Exec, Native, NetMulticast, MulticastDelegate, Public, Private, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void ABP_S3AttentionController_C::ChangeTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ChangeTarget");

	ABP_S3AttentionController_C_ChangeTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.CalcNormal
// (Net, Static, NetMulticast, MulticastDelegate, Delegate, NetServer, HasOutParms, HasDefaults, Const)
// Parameters:
// class US3AttentionComponent*   Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, IsPlainOldData)

void ABP_S3AttentionController_C::STATIC_CalcNormal(class US3AttentionComponent* Component, const struct FVector& HitLocation, struct FVector* Normal)
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
// (NetReliable, Static, NetMulticast, Protected, NetServer, NetClient, Const)
// Parameters:
// class US3AttentionComponent*   Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   KeyName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3AttentionComponent*   NextComponent                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_S3AttentionController_C::STATIC_TraceNextTarget(class US3AttentionComponent* Component, const struct FName& KeyName, bool Add, class US3AttentionComponent** NextComponent)
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
// (NetReliable, Event, Static, Private, Protected, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 ScriptLabel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           DisableButton                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Once                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Playing                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::STATIC_PlayScript(const struct FString& ScriptLabel, bool DisableButton, bool Once, bool* Playing)
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
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Private, Protected, NetClient, Const)

void ABP_S3AttentionController_C::STATIC_UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.UserConstructionScript");

	ABP_S3AttentionController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_8
// (NetRequest, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3AttentionController_C::InpActEvt_SearchUpSelect_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_8");

	ABP_S3AttentionController_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_7
// (NetRequest, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3AttentionController_C::InpActEvt_SearchDownSelect_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_7");

	ABP_S3AttentionController_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_6
// (Net, NetReliable, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3AttentionController_C::InpActEvt_SearchRightSelect_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_6");

	ABP_S3AttentionController_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_5
// (NetReliable, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_S3AttentionController_C::InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_5");

	ABP_S3AttentionController_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ReceiveBeginPlay
// (Net, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_S3AttentionController_C::STATIC_ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ReceiveBeginPlay");

	ABP_S3AttentionController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ReceiveTick
// (Net, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ReceiveTick");

	ABP_S3AttentionController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80
// (Net, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80");

	ABP_S3AttentionController_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91
// (Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91");

	ABP_S3AttentionController_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.DelayStartAttention
// (Net, NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_S3AttentionController_C::STATIC_DelayStartAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.DelayStartAttention");

	ABP_S3AttentionController_C_DelayStartAttention_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.DelayEndAttention
// (NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_S3AttentionController_C::STATIC_DelayEndAttention()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.DelayEndAttention");

	ABP_S3AttentionController_C_DelayEndAttention_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.AxisToDirection
// (NetReliable, NetRequest, NetResponse, Static, MulticastDelegate, Delegate, NetServer, NetClient, Const)

void ABP_S3AttentionController_C::STATIC_AxisToDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.AxisToDirection");

	ABP_S3AttentionController_C_AxisToDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_61
// (Net, NetReliable, NetRequest, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_61(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_61");

	ABP_S3AttentionController_C_InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_61_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.DecideDetectAction
// (Net, NetReliable, NetRequest, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// ES3ActionIconType              Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::DecideDetectAction(ES3ActionIconType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.DecideDetectAction");

	ABP_S3AttentionController_C_DecideDetectAction_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.StartACEvent
// (NetReliable, NetRequest, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// class UTalkScript*             ACEventScript                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::StartACEvent(class UTalkScript* ACEventScript)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.StartACEvent");

	ABP_S3AttentionController_C_StartACEvent_Params params;
	params.ACEventScript = ACEventScript;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.Event_CameraZoomAxis
// (Net, Exec, Native, MulticastDelegate, Private, Delegate, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure, Const)
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
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ReceiveEndPlay
// (Net, NetRequest, Native, Event, MulticastDelegate, Private, NetServer, HasOutParms, NetClient, Const)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.ReceiveEndPlay");

	ABP_S3AttentionController_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.ExecuteUbergraph_BP_S3AttentionController
// (NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
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
// (Native, NetResponse, Static, NetMulticast, Public, Private, Protected, NetClient, Const)

void ABP_S3AttentionController_C::STATIC_OnExitAttentin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.OnExitAttentin__DelegateSignature");

	ABP_S3AttentionController_C_OnExitAttentin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.OnEndAttention__DelegateSignature
// (Native, NetResponse, Static, NetMulticast, Public, Private, Protected, NetClient, Const)

void ABP_S3AttentionController_C::STATIC_OnEndAttention__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.OnEndAttention__DelegateSignature");

	ABP_S3AttentionController_C_OnEndAttention__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.OnStartAttention__DelegateSignature
// (Native, NetResponse, Static, NetMulticast, Public, Private, Protected, NetClient, Const)

void ABP_S3AttentionController_C::STATIC_OnStartAttention__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.OnStartAttention__DelegateSignature");

	ABP_S3AttentionController_C_OnStartAttention__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.OnFindNPC__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Private, Protected, NetClient, Const)
// Parameters:
// class ABP_ScheduleNPC_C*       NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_S3AttentionController_C::STATIC_OnFindNPC__DelegateSignature(class ABP_ScheduleNPC_C* NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_S3AttentionController.BP_S3AttentionController_C.OnFindNPC__DelegateSignature");

	ABP_S3AttentionController_C_OnFindNPC__DelegateSignature_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_S3AttentionController.BP_S3AttentionController_C.OnAccordCondition__DelegateSignature
// (Net, NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Private, Protected, NetClient, Const)
// Parameters:
// struct FString                 EventId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_S3AttentionController_C::STATIC_OnAccordCondition__DelegateSignature(const struct FString& EventId)
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
