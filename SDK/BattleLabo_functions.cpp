
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

// Function BattleLabo.BTL_Character.TrySetRadiusSafe
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TargetRadius                   (Parm, ZeroConstructor, IsPlainOldData)

void ABTL_Character::TrySetRadiusSafe(float TargetRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_Character.TrySetRadiusSafe");

	ABTL_Character_TrySetRadiusSafe_Params params;
	params.TargetRadius = TargetRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_Character.SetSkeletalMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMesh*           MainMesh                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USkeletalMesh*>   SubMeshes                      (ConstParm, Parm, ZeroConstructor)
// bool                           bReinitPose                    (Parm, ZeroConstructor, IsPlainOldData)

void ABTL_Character::SetSkeletalMeshes(class USkeletalMesh* MainMesh, TArray<class USkeletalMesh*> SubMeshes, bool bReinitPose)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_Character.SetSkeletalMeshes");

	ABTL_Character_SetSkeletalMeshes_Params params;
	params.MainMesh = MainMesh;
	params.SubMeshes = SubMeshes;
	params.bReinitPose = bReinitPose;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_Character.SetAllPhysicsResponseToChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     PrimComp                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ECollisionChannel> Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECollisionResponse> NewResponse                    (Parm, ZeroConstructor, IsPlainOldData)

void ABTL_Character::SetAllPhysicsResponseToChannel(class UPrimitiveComponent* PrimComp, TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_Character.SetAllPhysicsResponseToChannel");

	ABTL_Character_SetAllPhysicsResponseToChannel_Params params;
	params.PrimComp = PrimComp;
	params.Channel = Channel;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_Character.IsValidSectionNameFromCurrentMontage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InSectionName                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABTL_Character::IsValidSectionNameFromCurrentMontage(const struct FName& InSectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_Character.IsValidSectionNameFromCurrentMontage");

	ABTL_Character_IsValidSectionNameFromCurrentMontage_Params params;
	params.InSectionName = InSectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SequenceActor.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*          InSequence                     (Parm, ZeroConstructor, IsPlainOldData)

void ABTL_SequenceActor::SetSequence(class ULevelSequence* InSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SequenceActor.SetSequence");

	ABTL_SequenceActor_SetSequence_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SequenceActor.SetPlaybackSettingsPauseAtEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInPauseAtEnd                  (Parm, ZeroConstructor, IsPlainOldData)

void ABTL_SequenceActor::SetPlaybackSettingsPauseAtEnd(bool bInPauseAtEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SequenceActor.SetPlaybackSettingsPauseAtEnd");

	ABTL_SequenceActor_SetPlaybackSettingsPauseAtEnd_Params params;
	params.bInPauseAtEnd = bInPauseAtEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SequenceActor.Play
// (Final, Native, Public, BlueprintCallable)

void ABTL_SequenceActor::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SequenceActor.Play");

	ABTL_SequenceActor_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SequenceActor.OnUdateCameraCut
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 CameraObject                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 UnlockIfCameraObject           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bJumpCut                       (Parm, ZeroConstructor, IsPlainOldData)

void ABTL_SequenceActor::OnUdateCameraCut(class UObject* CameraObject, class UObject* UnlockIfCameraObject, bool bJumpCut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SequenceActor.OnUdateCameraCut");

	ABTL_SequenceActor_OnUdateCameraCut_Params params;
	params.CameraObject = CameraObject;
	params.UnlockIfCameraObject = UnlockIfCameraObject;
	params.bJumpCut = bJumpCut;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SequenceActor.GetLevelSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelSequence* ABTL_SequenceActor::GetLevelSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SequenceActor.GetLevelSequence");

	ABTL_SequenceActor_GetLevelSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.ActorManagementComponentBase.Start
// (Final, Native, Public, BlueprintCallable)

void UActorManagementComponentBase::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.ActorManagementComponentBase.Start");

	UActorManagementComponentBase_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.ActorManagementComponentBase.OnManagedActorUnregistered_ImplementableEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UActorManagementComponentBase::OnManagedActorUnregistered_ImplementableEvent(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.ActorManagementComponentBase.OnManagedActorUnregistered_ImplementableEvent");

	UActorManagementComponentBase_OnManagedActorUnregistered_ImplementableEvent_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.ActorManagementComponentBase.OnManagedActorRegistered_ImplementableEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UActorManagementComponentBase::OnManagedActorRegistered_ImplementableEvent(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.ActorManagementComponentBase.OnManagedActorRegistered_ImplementableEvent");

	UActorManagementComponentBase_OnManagedActorRegistered_ImplementableEvent_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.ActorManagementComponentBase.CheckManagedActor
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActorManagementComponentBase::CheckManagedActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.ActorManagementComponentBase.CheckManagedActor");

	UActorManagementComponentBase_CheckManagedActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_ActionSolverComponent.TickActionTimers
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  CurrentIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_ActionSolverComponent::TickActionTimers(float DeltaTime, unsigned char CurrentIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ActionSolverComponent.TickActionTimers");

	UBTL_ActionSolverComponent_TickActionTimers_Params params;
	params.DeltaTime = DeltaTime;
	params.CurrentIndex = CurrentIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_ActionSolverComponent.ResetCurrentActionTimer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// unsigned char                  Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_ActionSolverComponent::ResetCurrentActionTimer(unsigned char Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ActionSolverComponent.ResetCurrentActionTimer");

	UBTL_ActionSolverComponent_ResetCurrentActionTimer_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_ActionSolverComponent.InitializeActionTimers
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_ActionSolverComponent::InitializeActionTimers(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ActionSolverComponent.InitializeActionTimers");

	UBTL_ActionSolverComponent_InitializeActionTimers_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_ActionSolverComponent.GetTimePassedSinceAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_ActionSolverComponent::GetTimePassedSinceAction(unsigned char Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ActionSolverComponent.GetTimePassedSinceAction");

	UBTL_ActionSolverComponent_GetTimePassedSinceAction_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_ActionSolverComponent.GetCurrentActionTimer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_ActionSolverComponent::GetCurrentActionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ActionSolverComponent.GetCurrentActionTimer");

	UBTL_ActionSolverComponent_GetCurrentActionTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_AIController.SetCrowdSlowdownAtGoal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void ABTL_AIController::SetCrowdSlowdownAtGoal(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AIController.SetCrowdSlowdownAtGoal");

	ABTL_AIController_SetCrowdSlowdownAtGoal_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_AIController.SetCrowdSeparationWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Weight                         (Parm, ZeroConstructor, IsPlainOldData)

void ABTL_AIController::SetCrowdSeparationWeight(float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AIController.SetCrowdSeparationWeight");

	ABTL_AIController_SetCrowdSeparationWeight_Params params;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_AnimInstance.SetRootTranslationScale
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_AnimInstance::SetRootTranslationScale(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AnimInstance.SetRootTranslationScale");

	UBTL_AnimInstance_SetRootTranslationScale_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_AnimInstance.SearchClosestMontage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UAnimMontage*>    Candidates                     (Parm, ZeroConstructor)
// float                          TargetEndYaw                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* UBTL_AnimInstance::SearchClosestMontage(TArray<class UAnimMontage*> Candidates, float TargetEndYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AnimInstance.SearchClosestMontage");

	UBTL_AnimInstance_SearchClosestMontage_Params params;
	params.Candidates = Candidates;
	params.TargetEndYaw = TargetEndYaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_AnimInstance.ResetRootTranslationScale
// (Final, Native, Protected, BlueprintCallable)

void UBTL_AnimInstance::ResetRootTranslationScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AnimInstance.ResetRootTranslationScale");

	UBTL_AnimInstance_ResetRootTranslationScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_AnimInstance.GetClosest8DirectionIndex
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Target                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTL_AnimInstance::GetClosest8DirectionIndex(float Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AnimInstance.GetClosest8DirectionIndex");

	UBTL_AnimInstance_GetClosest8DirectionIndex_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_AnimInstance.GetClosest8DirectionAngle
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          InputAngle                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          FirstCheckAngle                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Hysteresis                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_AnimInstance::GetClosest8DirectionAngle(float InputAngle, float FirstCheckAngle, float Hysteresis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AnimInstance.GetClosest8DirectionAngle");

	UBTL_AnimInstance_GetClosest8DirectionAngle_Params params;
	params.InputAngle = InputAngle;
	params.FirstCheckAngle = FirstCheckAngle;
	params.Hysteresis = Hysteresis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_AnimInstance.BiasTargetDirection
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          TargetAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          PreviousTarget                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_AnimInstance::BiasTargetDirection(float TargetAngle, float PreviousTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AnimInstance.BiasTargetDirection");

	UBTL_AnimInstance_BiasTargetDirection_Params params;
	params.TargetAngle = TargetAngle;
	params.PreviousTarget = PreviousTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_AnimNotifyContainer.Reset
// (Native, Event, Protected, BlueprintEvent)

void UBTL_AnimNotifyContainer::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AnimNotifyContainer.Reset");

	UBTL_AnimNotifyContainer_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_AnimNotifyContainer.RemoveNotifyCount
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   State                          (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_AnimNotifyContainer::RemoveNotifyCount(const struct FName& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AnimNotifyContainer.RemoveNotifyCount");

	UBTL_AnimNotifyContainer_RemoveNotifyCount_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_AnimNotifyContainer.ClearNotifyCounts
// (Final, Native, Protected, BlueprintCallable)

void UBTL_AnimNotifyContainer::ClearNotifyCounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AnimNotifyContainer.ClearNotifyCounts");

	UBTL_AnimNotifyContainer_ClearNotifyCounts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_AnimNotifyContainer.CheckNotifyExistFast
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_AnimNotifyContainer::CheckNotifyExistFast(const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AnimNotifyContainer.CheckNotifyExistFast");

	UBTL_AnimNotifyContainer_CheckNotifyExistFast_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_AnimNotifyContainer.AddNotifyCount
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   State                          (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_AnimNotifyContainer::AddNotifyCount(const struct FName& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AnimNotifyContainer.AddNotifyCount");

	UBTL_AnimNotifyContainer_AddNotifyCount_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_NamedCooldownContainer.SetCooldown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_NamedCooldownContainer::SetCooldown(const struct FName& Name, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_NamedCooldownContainer.SetCooldown");

	UBTL_NamedCooldownContainer_SetCooldown_Params params;
	params.Name = Name;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_NamedCooldownContainer.IsOnCooldown
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_NamedCooldownContainer::IsOnCooldown(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_NamedCooldownContainer.IsOnCooldown");

	UBTL_NamedCooldownContainer_IsOnCooldown_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_NamedCooldownContainer.ClearAllCooldowns
// (Final, Native, Public, BlueprintCallable)

void UBTL_NamedCooldownContainer::ClearAllCooldowns()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_NamedCooldownContainer.ClearAllCooldowns");

	UBTL_NamedCooldownContainer_ClearAllCooldowns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_AttackHitSolverComponent.UpdateAttackCollisions
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>           Tags                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBTL_AttackHitSolverComponent::UpdateAttackCollisions(TArray<struct FName> Tags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AttackHitSolverComponent.UpdateAttackCollisions");

	UBTL_AttackHitSolverComponent_UpdateAttackCollisions_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_AttackHitSolverComponent.RegisterAttackCollider
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Collider                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   identifer                      (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_AttackHitSolverComponent::RegisterAttackCollider(class UPrimitiveComponent* Collider, const struct FName& identifer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AttackHitSolverComponent.RegisterAttackCollider");

	UBTL_AttackHitSolverComponent_RegisterAttackCollider_Params params;
	params.Collider = Collider;
	params.identifer = identifer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_AttackHitSolverComponent.CacheColliderTransforms
// (Final, Native, Public, BlueprintCallable)

void UBTL_AttackHitSolverComponent::CacheColliderTransforms()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AttackHitSolverComponent.CacheColliderTransforms");

	UBTL_AttackHitSolverComponent_CacheColliderTransforms_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_BattleRallyFunctionLibrary.MakeTimeMSCFromFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Seconds                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FBTL_TimeMSC            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FBTL_TimeMSC UBTL_BattleRallyFunctionLibrary::STATIC_MakeTimeMSCFromFloat(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BattleRallyFunctionLibrary.MakeTimeMSCFromFloat");

	UBTL_BattleRallyFunctionLibrary_MakeTimeMSCFromFloat_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BattleRallyFunctionLibrary.MakeFloatFromTimeMSC
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBTL_TimeMSC            Time                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_BattleRallyFunctionLibrary::STATIC_MakeFloatFromTimeMSC(const struct FBTL_TimeMSC& Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BattleRallyFunctionLibrary.MakeFloatFromTimeMSC");

	UBTL_BattleRallyFunctionLibrary_MakeFloatFromTimeMSC_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BattleRallyFunctionLibrary.IsTimeMSCZero
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBTL_TimeMSC            Time                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_BattleRallyFunctionLibrary::STATIC_IsTimeMSCZero(const struct FBTL_TimeMSC& Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BattleRallyFunctionLibrary.IsTimeMSCZero");

	UBTL_BattleRallyFunctionLibrary_IsTimeMSCZero_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BattleRallyFunctionLibrary.CreateRecordBook
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UBTL_CourseDataAsset*> Courses                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UBTL_CourseRecordBook*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBTL_CourseRecordBook* UBTL_BattleRallyFunctionLibrary::STATIC_CreateRecordBook(TArray<class UBTL_CourseDataAsset*> Courses)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BattleRallyFunctionLibrary.CreateRecordBook");

	UBTL_BattleRallyFunctionLibrary_CreateRecordBook_Params params;
	params.Courses = Courses;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BattleRallyFunctionLibrary.CreateLeaderboard
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Course                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData)
// class UBTL_CourseLeaderboard*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBTL_CourseLeaderboard* UBTL_BattleRallyFunctionLibrary::STATIC_CreateLeaderboard(const struct FName& Course, class UDataTable* DataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BattleRallyFunctionLibrary.CreateLeaderboard");

	UBTL_BattleRallyFunctionLibrary_CreateLeaderboard_Params params;
	params.Course = Course;
	params.DataTable = DataTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BattleRallyFunctionLibrary.CreateCourseDataAsset
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FDataTableRowHandle> Battles                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UBTL_CourseDataAsset*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBTL_CourseDataAsset* UBTL_BattleRallyFunctionLibrary::STATIC_CreateCourseDataAsset(TArray<struct FDataTableRowHandle> Battles)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BattleRallyFunctionLibrary.CreateCourseDataAsset");

	UBTL_BattleRallyFunctionLibrary_CreateCourseDataAsset_Params params;
	params.Battles = Battles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BattleSpawner.LaunchDebugBattle
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABTL_BattleSpawner::LaunchDebugBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BattleSpawner.LaunchDebugBattle");

	ABTL_BattleSpawner_LaunchDebugBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_BlueprintFunctionLibrary.FindUserClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  BaseClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBTL_BlueprintFunctionLibrary::STATIC_FindUserClass(class UClass* BaseClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BlueprintFunctionLibrary.FindUserClass");

	UBTL_BlueprintFunctionLibrary_FindUserClass_Params params;
	params.BaseClass = BaseClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BlueprintFunctionLibrary.ClosestPointOnSegment
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 StartPoint                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 EndPoint                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBTL_BlueprintFunctionLibrary::STATIC_ClosestPointOnSegment(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BlueprintFunctionLibrary.ClosestPointOnSegment");

	UBTL_BlueprintFunctionLibrary_ClosestPointOnSegment_Params params;
	params.Point = Point;
	params.StartPoint = StartPoint;
	params.EndPoint = EndPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BRallyRacerAnimData.SelectIntroCutscene
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// int                            PlayNum                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowB                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FBTL_BRallyCourseCutsceneData OutData                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_BRallyRacerAnimData::SelectIntroCutscene(int PlayNum, bool bAllowB, struct FBTL_BRallyCourseCutsceneData* OutData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BRallyRacerAnimData.SelectIntroCutscene");

	UBTL_BRallyRacerAnimData_SelectIntroCutscene_Params params;
	params.PlayNum = PlayNum;
	params.bAllowB = bAllowB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutData != nullptr)
		*OutData = params.OutData;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BRallyScoreKeeper.SortResults
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_BRallyScoreKeeper::SortResults(class UDataTable* DataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BRallyScoreKeeper.SortResults");

	UBTL_BRallyScoreKeeper_SortResults_Params params;
	params.DataTable = DataTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_BRallyScoreKeeper.GetTotalScore
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTL_BRallyScoreKeeper::GetTotalScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BRallyScoreKeeper.GetTotalScore");

	UBTL_BRallyScoreKeeper_GetTotalScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BRallyScoreKeeper.GetResults
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FBTL_ScoreTallyData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBTL_ScoreTallyData> UBTL_BRallyScoreKeeper::GetResults()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BRallyScoreKeeper.GetResults");

	UBTL_BRallyScoreKeeper_GetResults_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BRallyScoreKeeper.Clear
// (Final, Native, Public, BlueprintCallable)

void UBTL_BRallyScoreKeeper::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BRallyScoreKeeper.Clear");

	UBTL_BRallyScoreKeeper_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_BRallyScoreKeeper.AddToMaxCounts
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FDataTableRowHandle> DataTableRowHandles            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBTL_BRallyScoreKeeper::AddToMaxCounts(TArray<struct FDataTableRowHandle> DataTableRowHandles)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BRallyScoreKeeper.AddToMaxCounts");

	UBTL_BRallyScoreKeeper_AddToMaxCounts_Params params;
	params.DataTableRowHandles = DataTableRowHandles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_BRallyScoreKeeper.AddPointsFromTableRows
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FDataTableRowHandle> DataTableRowHandles            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBTL_BRallyScoreKeeper::AddPointsFromTableRows(TArray<struct FDataTableRowHandle> DataTableRowHandles)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BRallyScoreKeeper.AddPointsFromTableRows");

	UBTL_BRallyScoreKeeper_AddPointsFromTableRows_Params params;
	params.DataTableRowHandles = DataTableRowHandles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_BRallyScoreKeeper.AddPointsFromTableRow
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     DataTableRowHandle             (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Times                          (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_BRallyScoreKeeper::AddPointsFromTableRow(const struct FDataTableRowHandle& DataTableRowHandle, int Times)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BRallyScoreKeeper.AddPointsFromTableRow");

	UBTL_BRallyScoreKeeper_AddPointsFromTableRow_Params params;
	params.DataTableRowHandle = DataTableRowHandle;
	params.Times = Times;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_BRallyScoreKeeper.AddPointsByRatio
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     DataTableRowHandle             (ConstParm, Parm, OutParm, ReferenceParm)
// float                          Ratio                          (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_BRallyScoreKeeper::AddPointsByRatio(const struct FDataTableRowHandle& DataTableRowHandle, float Ratio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BRallyScoreKeeper.AddPointsByRatio");

	UBTL_BRallyScoreKeeper_AddPointsByRatio_Params params;
	params.DataTableRowHandle = DataTableRowHandle;
	params.Ratio = Ratio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CharacterDataAsset.SpawnCharacterWithDefaults
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UBTL_CharacterDataAsset* Defaults                       (Parm, ZeroConstructor, IsPlainOldData)
// class ABTL_Character*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABTL_Character* UBTL_CharacterDataAsset::SpawnCharacterWithDefaults(class UObject* WorldContextObject, const struct FTransform& SpawnTransform, class UBTL_CharacterDataAsset* Defaults)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CharacterDataAsset.SpawnCharacterWithDefaults");

	UBTL_CharacterDataAsset_SpawnCharacterWithDefaults_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SpawnTransform = SpawnTransform;
	params.Defaults = Defaults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CharacterDataAsset.SpawnCharacter
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class ABTL_Character*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ABTL_Character* UBTL_CharacterDataAsset::SpawnCharacter(class UObject* WorldContextObject, const struct FTransform& SpawnTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CharacterDataAsset.SpawnCharacter");

	UBTL_CharacterDataAsset_SpawnCharacter_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CharacterDataAsset.GetCharacterVoiceName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBTL_CharacterDataAsset::GetCharacterVoiceName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CharacterDataAsset.GetCharacterVoiceName");

	UBTL_CharacterDataAsset_GetCharacterVoiceName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CharacterEnviromentInterface.GetAreaFlags
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<bool>                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<bool> UBTL_CharacterEnviromentInterface::GetAreaFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CharacterEnviromentInterface.GetAreaFlags");

	UBTL_CharacterEnviromentInterface_GetAreaFlags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CharacterMovementComponent.TestPath
// (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                 Destination                    (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_CharacterMovementComponent::TestPath(const struct FVector& Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CharacterMovementComponent.TestPath");

	UBTL_CharacterMovementComponent_TestPath_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CharacterMovementComponent.SetEnableStepUp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_CharacterMovementComponent::SetEnableStepUp(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CharacterMovementComponent.SetEnableStepUp");

	UBTL_CharacterMovementComponent_SetEnableStepUp_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CharacterMovementComponent.ConsumePathFollowerMove
// (Final, Native, Public, BlueprintCallable)

void UBTL_CharacterMovementComponent::ConsumePathFollowerMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CharacterMovementComponent.ConsumePathFollowerMove");

	UBTL_CharacterMovementComponent_ConsumePathFollowerMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CharacterMovementComponent.AddWorldOffsetToRootMotion
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 DeltaLocation                  (Parm, IsPlainOldData)

void UBTL_CharacterMovementComponent::AddWorldOffsetToRootMotion(const struct FVector& DeltaLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CharacterMovementComponent.AddWorldOffsetToRootMotion");

	UBTL_CharacterMovementComponent_AddWorldOffsetToRootMotion_Params params;
	params.DeltaLocation = DeltaLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CharacterMovementComponent.AddLocalOffsetToRootMotion
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 DeltaLocation                  (Parm, IsPlainOldData)

void UBTL_CharacterMovementComponent::AddLocalOffsetToRootMotion(const struct FVector& DeltaLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CharacterMovementComponent.AddLocalOffsetToRootMotion");

	UBTL_CharacterMovementComponent_AddLocalOffsetToRootMotion_Params params;
	params.DeltaLocation = DeltaLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CharacterMovementComponent.AddDeltaYawWithRootMotion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaRotation                  (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_CharacterMovementComponent::AddDeltaYawWithRootMotion(float DeltaRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CharacterMovementComponent.AddDeltaYawWithRootMotion");

	UBTL_CharacterMovementComponent_AddDeltaYawWithRootMotion_Params params;
	params.DeltaRotation = DeltaRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CommandLibraryBase.MakeDefaultByteToNameMap
// (Event, Protected, BlueprintEvent)
// Parameters:
// TMap<unsigned char, struct FName> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<unsigned char, struct FName> UBTL_CommandLibraryBase::MakeDefaultByteToNameMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandLibraryBase.MakeDefaultByteToNameMap");

	UBTL_CommandLibraryBase_MakeDefaultByteToNameMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandLibraryBase.IsSkillEquippable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   SkillId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_CommandLibraryBase::IsSkillEquippable(const struct FName& SkillId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandLibraryBase.IsSkillEquippable");

	UBTL_CommandLibraryBase_IsSkillEquippable_Params params;
	params.SkillId = SkillId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandLibraryBase.IsSkillEquappable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   SkillId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_CommandLibraryBase::IsSkillEquappable(const struct FName& SkillId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandLibraryBase.IsSkillEquappable");

	UBTL_CommandLibraryBase_IsSkillEquappable_Params params;
	params.SkillId = SkillId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandLibraryBase.IsAttackEquippable
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   AttackID                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_CommandLibraryBase::IsAttackEquippable(const struct FName& AttackID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandLibraryBase.IsAttackEquippable");

	UBTL_CommandLibraryBase_IsAttackEquippable_Params params;
	params.AttackID = AttackID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandLibraryBase.Initialize
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_CommandLibraryBase::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandLibraryBase.Initialize");

	UBTL_CommandLibraryBase_Initialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandLibraryBase.FindRequiredItem
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Attack                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBTL_CommandLibraryBase::FindRequiredItem(const struct FName& Attack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandLibraryBase.FindRequiredItem");

	UBTL_CommandLibraryBase_FindRequiredItem_Params params;
	params.Attack = Attack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandLibraryBase.FindAttackByItem
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// struct FName                   SkillItem                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBTL_CommandLibraryBase::FindAttackByItem(const struct FName& SkillItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandLibraryBase.FindAttackByItem");

	UBTL_CommandLibraryBase_FindAttackByItem_Params params;
	params.SkillItem = SkillItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandLibraryBase.ConvertCommandsByteToName
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<unsigned char>          Input                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UBTL_CommandLibraryBase::ConvertCommandsByteToName(TArray<unsigned char> Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandLibraryBase.ConvertCommandsByteToName");

	UBTL_CommandLibraryBase_ConvertCommandsByteToName_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandLibraryBase.ConvertCommandByteToName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  Input                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBTL_CommandLibraryBase::ConvertCommandByteToName(unsigned char Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandLibraryBase.ConvertCommandByteToName");

	UBTL_CommandLibraryBase_ConvertCommandByteToName_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandLibraryBase.CheckPreviousAttacks
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ActualAttacks                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           PatternPrevAttacks             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_CommandLibraryBase::CheckPreviousAttacks(TArray<struct FName> ActualAttacks, TArray<struct FName> PatternPrevAttacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandLibraryBase.CheckPreviousAttacks");

	UBTL_CommandLibraryBase_CheckPreviousAttacks_Params params;
	params.ActualAttacks = ActualAttacks;
	params.PatternPrevAttacks = PatternPrevAttacks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandLibraryBase.CacheComboAttack
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Attack                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UBTL_CommandLibraryBase::CacheComboAttack(const struct FName& Attack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandLibraryBase.CacheComboAttack");

	UBTL_CommandLibraryBase_CacheComboAttack_Params params;
	params.Attack = Attack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CommandLibraryBase.CacheAttackLookupData
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Attack                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   RequiredItem                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UBTL_CommandLibraryBase::CacheAttackLookupData(const struct FName& Attack, const struct FName& RequiredItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandLibraryBase.CacheAttackLookupData");

	UBTL_CommandLibraryBase_CacheAttackLookupData_Params params;
	params.Attack = Attack;
	params.RequiredItem = RequiredItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CommandSolver.StartsWith_NameArray
// (Final, Native, Protected, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<struct FName>           DoesThis                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           StartWithThis                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_CommandSolver::StartsWith_NameArray(TArray<struct FName> DoesThis, TArray<struct FName> StartWithThis)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandSolver.StartsWith_NameArray");

	UBTL_CommandSolver_StartsWith_NameArray_Params params;
	params.DoesThis = DoesThis;
	params.StartWithThis = StartWithThis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandSolver.SearchMostRecentInAttackHistory
// (Final, Native, Protected, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<struct FName>           SearchAttacks                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBTL_CommandSolver::SearchMostRecentInAttackHistory(TArray<struct FName> SearchAttacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandSolver.SearchMostRecentInAttackHistory");

	UBTL_CommandSolver_SearchMostRecentInAttackHistory_Params params;
	params.SearchAttacks = SearchAttacks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandSolver.RecordAttackToHistory
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Attack                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UBTL_CommandSolver::RecordAttackToHistory(const struct FName& Attack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandSolver.RecordAttackToHistory");

	UBTL_CommandSolver_RecordAttackToHistory_Params params;
	params.Attack = Attack;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CommandSolver.Equals_NameArray
// (Final, Native, Protected, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<struct FName>           ArrayA                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           ArrayB                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_CommandSolver::Equals_NameArray(TArray<struct FName> ArrayA, TArray<struct FName> ArrayB)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandSolver.Equals_NameArray");

	UBTL_CommandSolver_Equals_NameArray_Params params;
	params.ArrayA = ArrayA;
	params.ArrayB = ArrayB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.TrimToNum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            MaxNum                         (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_CourseLeaderboard::TrimToNum(int MaxNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.TrimToNum");

	UBTL_CourseLeaderboard_TrimToNum_Params params;
	params.MaxNum = MaxNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CourseLeaderboard.ReadSaveData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBTL_CourseSaveData     SaveData                       (ConstParm, Parm, OutParm, ReferenceParm)

void UBTL_CourseLeaderboard::ReadSaveData(const struct FBTL_CourseSaveData& SaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.ReadSaveData");

	UBTL_CourseLeaderboard_ReadSaveData_Params params;
	params.SaveData = SaveData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CourseLeaderboard.MakeSaveData
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// TArray<struct FName>           PlayerIds                      (ConstParm, Parm, ZeroConstructor)
// struct FBTL_CourseSaveData     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBTL_CourseSaveData UBTL_CourseLeaderboard::MakeSaveData(TArray<struct FName> PlayerIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.MakeSaveData");

	UBTL_CourseLeaderboard_MakeSaveData_Params params;
	params.PlayerIds = PlayerIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.GetRecords
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FBTL_LeaderboardRecord> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FBTL_LeaderboardRecord> UBTL_CourseLeaderboard::GetRecords()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.GetRecords");

	UBTL_CourseLeaderboard_GetRecords_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.GetRecordByIndex
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FBTL_LeaderboardRecord  OutRecord                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_CourseLeaderboard::GetRecordByIndex(int Index, struct FBTL_LeaderboardRecord* OutRecord)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.GetRecordByIndex");

	UBTL_CourseLeaderboard_GetRecordByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRecord != nullptr)
		*OutRecord = params.OutRecord;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.GetRecordByCharacter
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   CharacterID                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBTL_LeaderboardRecord  OutRecord                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_CourseLeaderboard::GetRecordByCharacter(const struct FName& CharacterID, struct FBTL_LeaderboardRecord* OutRecord)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.GetRecordByCharacter");

	UBTL_CourseLeaderboard_GetRecordByCharacter_Params params;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRecord != nullptr)
		*OutRecord = params.OutRecord;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.GetRankPlaceAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTL_CourseLeaderboard::GetRankPlaceAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.GetRankPlaceAtIndex");

	UBTL_CourseLeaderboard_GetRankPlaceAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.GetRankPlace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   CharacterID                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTL_CourseLeaderboard::GetRankPlace(const struct FName& CharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.GetRankPlace");

	UBTL_CourseLeaderboard_GetRankPlace_Params params;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.GetRankIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   CharacterID                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTL_CourseLeaderboard::GetRankIndex(const struct FName& CharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.GetRankIndex");

	UBTL_CourseLeaderboard_GetRankIndex_Params params;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.GetParCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBTL_CourseLeaderboard::GetParCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.GetParCharacter");

	UBTL_CourseLeaderboard_GetParCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.GetCourseId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBTL_CourseLeaderboard::GetCourseId()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.GetCourseId");

	UBTL_CourseLeaderboard_GetCourseId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.EnableDuplicates
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_CourseLeaderboard::EnableDuplicates(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.EnableDuplicates");

	UBTL_CourseLeaderboard_EnableDuplicates_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CourseLeaderboard.CompareToParRecord
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// struct FBTL_LeaderboardRecord  Record                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Relative                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_CourseLeaderboard::CompareToParRecord(const struct FBTL_LeaderboardRecord& Record, int* Relative)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.CompareToParRecord");

	UBTL_CourseLeaderboard_CompareToParRecord_Params params;
	params.Record = Record;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Relative != nullptr)
		*Relative = params.Relative;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.CompareRankToPar
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// struct FName                   InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            RanksAbove                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_CourseLeaderboard::CompareRankToPar(const struct FName& InCharacter, int* RanksAbove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.CompareRankToPar");

	UBTL_CourseLeaderboard_CompareRankToPar_Params params;
	params.InCharacter = InCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RanksAbove != nullptr)
		*RanksAbove = params.RanksAbove;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.AddRecord
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBTL_LeaderboardRecord  NewEntry                       (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTL_CourseLeaderboard::AddRecord(const struct FBTL_LeaderboardRecord& NewEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.AddRecord");

	UBTL_CourseLeaderboard_AddRecord_Params params;
	params.NewEntry = NewEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseMapData.AreLabelLocationsValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_CourseMapData::AreLabelLocationsValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseMapData.AreLabelLocationsValid");

	UBTL_CourseMapData_AreLabelLocationsValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLDataTableFunctionLibrary.GetDataTableRowFromName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UScriptStruct*           Struct                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDataTable*              Table                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FTableRowBase           OutRow                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTLDataTableFunctionLibrary::STATIC_GetDataTableRowFromName(class UScriptStruct* Struct, class UDataTable* Table, const struct FName& RowName, struct FTableRowBase* OutRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLDataTableFunctionLibrary.GetDataTableRowFromName");

	UBTLDataTableFunctionLibrary_GetDataTableRowFromName_Params params;
	params.Struct = Struct;
	params.Table = Table;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRow != nullptr)
		*OutRow = params.OutRow;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseRecordBook.ReadSaveData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FBTL_CourseSaveData> SaveData                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBTL_CourseRecordBook::ReadSaveData(TArray<struct FBTL_CourseSaveData> SaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseRecordBook.ReadSaveData");

	UBTL_CourseRecordBook_ReadSaveData_Params params;
	params.SaveData = SaveData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CourseRecordBook.GetLeaderboard
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Course                         (Parm, ZeroConstructor, IsPlainOldData)
// class UBTL_CourseLeaderboard*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBTL_CourseLeaderboard* UBTL_CourseRecordBook::GetLeaderboard(const struct FName& Course)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseRecordBook.GetLeaderboard");

	UBTL_CourseRecordBook_GetLeaderboard_Params params;
	params.Course = Course;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseRecordBook.CreatePlayerSaveData
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// TArray<struct FName>           PlayerCharacters               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FBTL_CourseSaveData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBTL_CourseSaveData> UBTL_CourseRecordBook::CreatePlayerSaveData(TArray<struct FName> PlayerCharacters)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseRecordBook.CreatePlayerSaveData");

	UBTL_CourseRecordBook_CreatePlayerSaveData_Params params;
	params.PlayerCharacters = PlayerCharacters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_GoalpostBehavior.OnPlayerEntered
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABTL_Character*          Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class ABTL_BRallyGoalpost*     Goalpost                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_GoalpostBehavior::OnPlayerEntered(class ABTL_Character* Player, class ABTL_BRallyGoalpost* Goalpost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_GoalpostBehavior.OnPlayerEntered");

	UBTL_GoalpostBehavior_OnPlayerEntered_Params params;
	params.Player = Player;
	params.Goalpost = Goalpost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_MeshFaderComponent.StartFadeOut
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Executor                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_MeshFaderComponent::StartFadeOut(class AActor* Executor, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_MeshFaderComponent.StartFadeOut");

	UBTL_MeshFaderComponent_StartFadeOut_Params params;
	params.Executor = Executor;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_MeshFaderComponent.StartFadeIn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Executor                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_MeshFaderComponent::StartFadeIn(class AActor* Executor, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_MeshFaderComponent.StartFadeIn");

	UBTL_MeshFaderComponent_StartFadeIn_Params params;
	params.Executor = Executor;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_MeshFaderComponent.SetMeshComponents
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UMeshComponent*>  Components                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBTL_MeshFaderComponent::SetMeshComponents(TArray<class UMeshComponent*> Components)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_MeshFaderComponent.SetMeshComponents");

	UBTL_MeshFaderComponent_SetMeshComponents_Params params;
	params.Components = Components;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_MeshFaderComponent.CreateFadeMaterial
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      SourceMaterial                 (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UBTL_MeshFaderComponent::CreateFadeMaterial(class UMaterialInterface* SourceMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_MeshFaderComponent.CreateFadeMaterial");

	UBTL_MeshFaderComponent_CreateFadeMaterial_Params params;
	params.SourceMaterial = SourceMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_MeshFaderComponent.AddMeshComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMeshComponent*          Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBTL_MeshFaderComponent::AddMeshComponent(class UMeshComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_MeshFaderComponent.AddMeshComponent");

	UBTL_MeshFaderComponent_AddMeshComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTLKismetLibrary.XorIntegerFlag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            lflag                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            rflag                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTLKismetLibrary::STATIC_XorIntegerFlag(int lflag, int rflag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.XorIntegerFlag");

	UBTLKismetLibrary_XorIntegerFlag_Params params;
	params.lflag = lflag;
	params.rflag = rflag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.SetIntegerFlag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            flag                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            bitindex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Status                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTLKismetLibrary::STATIC_SetIntegerFlag(int flag, int bitindex, bool Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.SetIntegerFlag");

	UBTLKismetLibrary_SetIntegerFlag_Params params;
	params.flag = flag;
	params.bitindex = bitindex;
	params.Status = Status;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.OrIntegerFlag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            lflag                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            rflag                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTLKismetLibrary::STATIC_OrIntegerFlag(int lflag, int rflag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.OrIntegerFlag");

	UBTLKismetLibrary_OrIntegerFlag_Params params;
	params.lflag = lflag;
	params.rflag = rflag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.NotIntegerFlag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            flag                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTLKismetLibrary::STATIC_NotIntegerFlag(int flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.NotIntegerFlag");

	UBTLKismetLibrary_NotIntegerFlag_Params params;
	params.flag = flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.IntersectionOfLineAndCircle
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 _startPos                      (Parm, IsPlainOldData)
// struct FVector                 _endPos                        (Parm, IsPlainOldData)
// struct FVector                 _circleCenterPos               (Parm, IsPlainOldData)
// float                          _rad                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UBTLKismetLibrary::STATIC_IntersectionOfLineAndCircle(const struct FVector& _startPos, const struct FVector& _endPos, const struct FVector& _circleCenterPos, float _rad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.IntersectionOfLineAndCircle");

	UBTLKismetLibrary_IntersectionOfLineAndCircle_Params params;
	params._startPos = _startPos;
	params._endPos = _endPos;
	params._circleCenterPos = _circleCenterPos;
	params._rad = _rad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetRowByNameSyncActionInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   pName                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FSyncActionInfoNative   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSyncActionInfoNative UBTLKismetLibrary::STATIC_GetRowByNameSyncActionInfo(class UDataTable* DataTable, const struct FName& pName, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetRowByNameSyncActionInfo");

	UBTLKismetLibrary_GetRowByNameSyncActionInfo_Params params;
	params.DataTable = DataTable;
	params.pName = pName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetRowByNameMoveGapCondition
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   pName                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FMoveGapConditionNative ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMoveGapConditionNative UBTLKismetLibrary::STATIC_GetRowByNameMoveGapCondition(class UDataTable* DataTable, const struct FName& pName, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetRowByNameMoveGapCondition");

	UBTLKismetLibrary_GetRowByNameMoveGapCondition_Params params;
	params.DataTable = DataTable;
	params.pName = pName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetRowByNameMotionDatabaseElement
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   pName                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FMotionDatabaseElementNative ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMotionDatabaseElementNative UBTLKismetLibrary::STATIC_GetRowByNameMotionDatabaseElement(class UDataTable* DataTable, const struct FName& pName, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetRowByNameMotionDatabaseElement");

	UBTLKismetLibrary_GetRowByNameMotionDatabaseElement_Params params;
	params.DataTable = DataTable;
	params.pName = pName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetNotifyTriggerTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify*             Notify                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTLKismetLibrary::STATIC_GetNotifyTriggerTime(class UAnimMontage* Montage, class UAnimNotify* Notify)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetNotifyTriggerTime");

	UBTLKismetLibrary_GetNotifyTriggerTime_Params params;
	params.Montage = Montage;
	params.Notify = Notify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetNotifyTrigger
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  NotifyClass                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartRange                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndRange                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Last                           (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify*             ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimNotify* UBTLKismetLibrary::STATIC_GetNotifyTrigger(class UAnimMontage* Montage, class UClass* NotifyClass, float StartRange, float EndRange, bool Last)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetNotifyTrigger");

	UBTLKismetLibrary_GetNotifyTrigger_Params params;
	params.Montage = Montage;
	params.NotifyClass = NotifyClass;
	params.StartRange = StartRange;
	params.EndRange = EndRange;
	params.Last = Last;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetNotifyStateStartTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState*        NotifyState                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTLKismetLibrary::STATIC_GetNotifyStateStartTime(class UAnimMontage* Montage, class UAnimNotifyState* NotifyState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetNotifyStateStartTime");

	UBTLKismetLibrary_GetNotifyStateStartTime_Params params;
	params.Montage = Montage;
	params.NotifyState = NotifyState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetNotifyStates
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  StateClass                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimNotifyState*> States                         (ConstParm, Parm, OutParm, ZeroConstructor)

void UBTLKismetLibrary::STATIC_GetNotifyStates(class UAnimMontage* Montage, class UClass* StateClass, TArray<class UAnimNotifyState*> States)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetNotifyStates");

	UBTLKismetLibrary_GetNotifyStates_Params params;
	params.Montage = Montage;
	params.StateClass = StateClass;
	params.States = States;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTLKismetLibrary.GetNotifyStateEndTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState*        NotifyState                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTLKismetLibrary::STATIC_GetNotifyStateEndTime(class UAnimMontage* Montage, class UAnimNotifyState* NotifyState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetNotifyStateEndTime");

	UBTLKismetLibrary_GetNotifyStateEndTime_Params params;
	params.Montage = Montage;
	params.NotifyState = NotifyState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetNotifyStateAtTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  StateClass                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Last                           (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState*        ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimNotifyState* UBTLKismetLibrary::STATIC_GetNotifyStateAtTime(class UAnimMontage* Montage, class UClass* StateClass, float Time, bool Last)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetNotifyStateAtTime");

	UBTLKismetLibrary_GetNotifyStateAtTime_Params params;
	params.Montage = Montage;
	params.StateClass = StateClass;
	params.Time = Time;
	params.Last = Last;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetNotifyState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  StateClass                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartRange                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndRange                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Last                           (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState*        ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimNotifyState* UBTLKismetLibrary::STATIC_GetNotifyState(class UAnimMontage* Montage, class UClass* StateClass, float StartRange, float EndRange, bool Last)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetNotifyState");

	UBTLKismetLibrary_GetNotifyState_Params params;
	params.Montage = Montage;
	params.StateClass = StateClass;
	params.StartRange = StartRange;
	params.EndRange = EndRange;
	params.Last = Last;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetIntegerFlag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            flag                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            bitindex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTLKismetLibrary::STATIC_GetIntegerFlag(int flag, int bitindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetIntegerFlag");

	UBTLKismetLibrary_GetIntegerFlag_Params params;
	params.flag = flag;
	params.bitindex = bitindex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetCustomNotifyTime
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NotifyName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTLKismetLibrary::STATIC_GetCustomNotifyTime(class UAnimMontage* Montage, const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetCustomNotifyTime");

	UBTLKismetLibrary_GetCustomNotifyTime_Params params;
	params.Montage = Montage;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.EstimateNextNameInSequence
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>           Names                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Confidence                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBTLKismetLibrary::STATIC_EstimateNextNameInSequence(TArray<struct FName> Names, int* Confidence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.EstimateNextNameInSequence");

	UBTLKismetLibrary_EstimateNextNameInSequence_Params params;
	params.Names = Names;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Confidence != nullptr)
		*Confidence = params.Confidence;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.EllipseContains
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D               Point                          (Parm, IsPlainOldData)
// struct FVector2D               Radii                          (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTLKismetLibrary::STATIC_EllipseContains(const struct FVector2D& Point, const struct FVector2D& Radii)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.EllipseContains");

	UBTLKismetLibrary_EllipseContains_Params params;
	params.Point = Point;
	params.Radii = Radii;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.EllipseClamp
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Point                          (Parm, IsPlainOldData)
// struct FVector2D               Radii                          (Parm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UBTLKismetLibrary::STATIC_EllipseClamp(const struct FVector2D& Point, const struct FVector2D& Radii)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.EllipseClamp");

	UBTLKismetLibrary_EllipseClamp_Params params;
	params.Point = Point;
	params.Radii = Radii;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.ContainsNotifyState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState*        NotifyState                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTLKismetLibrary::STATIC_ContainsNotifyState(class UAnimMontage* Montage, class UAnimNotifyState* NotifyState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.ContainsNotifyState");

	UBTLKismetLibrary_ContainsNotifyState_Params params;
	params.Montage = Montage;
	params.NotifyState = NotifyState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.CallRemoteLevelEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTLKismetLibrary::STATIC_CallRemoteLevelEvent(const struct FName& EventName, class AActor* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.CallRemoteLevelEvent");

	UBTLKismetLibrary_CallRemoteLevelEvent_Params params;
	params.EventName = EventName;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.AndIntegerFlag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            lflag                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            rflag                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTLKismetLibrary::STATIC_AndIntegerFlag(int lflag, int rflag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.AndIntegerFlag");

	UBTLKismetLibrary_AndIntegerFlag_Params params;
	params.lflag = lflag;
	params.rflag = rflag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_NavigationFunctionLibrary.TestPathExists
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 Querier                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 EndLocation                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_NavigationFunctionLibrary::STATIC_TestPathExists(class UObject* Querier, const struct FVector& StartLocation, const struct FVector& EndLocation, class UClass* FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_NavigationFunctionLibrary.TestPathExists");

	UBTL_NavigationFunctionLibrary_TestPathExists_Params params;
	params.Querier = Querier;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_NavigationFunctionLibrary.GetRecastNavmesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ARecastNavMesh*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ARecastNavMesh* UBTL_NavigationFunctionLibrary::STATIC_GetRecastNavmesh(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_NavigationFunctionLibrary.GetRecastNavmesh");

	UBTL_NavigationFunctionLibrary_GetRecastNavmesh_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_NavigationFunctionLibrary.FindDistanceToWall
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartLoc                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class ARecastNavMesh*          NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxDistance                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutClosestPointOnWall          (Parm, OutParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_NavigationFunctionLibrary::STATIC_FindDistanceToWall(class UObject* WorldContextObject, const struct FVector& StartLoc, class UClass* FilterClass, class ARecastNavMesh* NavData, float MaxDistance, struct FVector* OutClosestPointOnWall)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_NavigationFunctionLibrary.FindDistanceToWall");

	UBTL_NavigationFunctionLibrary_FindDistanceToWall_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StartLoc = StartLoc;
	params.FilterClass = FilterClass;
	params.NavData = NavData;
	params.MaxDistance = MaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutClosestPointOnWall != nullptr)
		*OutClosestPointOnWall = params.OutClosestPointOnWall;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_NPCLODComponent.GetState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EBTL_NPCLODState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EBTL_NPCLODState UBTL_NPCLODComponent::GetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_NPCLODComponent.GetState");

	UBTL_NPCLODComponent_GetState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_NPCLODComponent.GetSpawnLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBTL_NPCLODComponent::GetSpawnLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_NPCLODComponent.GetSpawnLocation");

	UBTL_NPCLODComponent_GetSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_EnemySearchPath.SetupOrigin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            GoalIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_EnemySearchPath::SetupOrigin(int GoalIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_EnemySearchPath.SetupOrigin");

	UBTL_EnemySearchPath_SetupOrigin_Params params;
	params.GoalIndex = GoalIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_EnemySearchPath.SetupInsert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AIndex                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ACost                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            BIndex                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          BCost                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTL_EnemySearchPath::SetupInsert(int AIndex, float ACost, int BIndex, float BCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_EnemySearchPath.SetupInsert");

	UBTL_EnemySearchPath_SetupInsert_Params params;
	params.AIndex = AIndex;
	params.ACost = ACost;
	params.BIndex = BIndex;
	params.BCost = BCost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_EnemySearchPath.Insert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            AIndex                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ACost                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            BIndex                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          BCost                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTL_EnemySearchPath::Insert(int AIndex, float ACost, int BIndex, float BCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_EnemySearchPath.Insert");

	UBTL_EnemySearchPath_Insert_Params params;
	params.AIndex = AIndex;
	params.ACost = ACost;
	params.BIndex = BIndex;
	params.BCost = BCost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_EnemySearchPath.FindAndUsePath
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            Start                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Route                          (Parm, OutParm, ZeroConstructor)

void UBTL_EnemySearchPath::FindAndUsePath(int Start, TArray<int>* Route)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_EnemySearchPath.FindAndUsePath");

	UBTL_EnemySearchPath_FindAndUsePath_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Route != nullptr)
		*Route = params.Route;
}


// Function BattleLabo.BTL_EnemySearchPath.AddNode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTL_EnemySearchPath::AddNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_EnemySearchPath.AddNode");

	UBTL_EnemySearchPath_AddNode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_EnemySearchPath.AddEdge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NodeIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            EdgeTo                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          EdgeCost                       (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_EnemySearchPath::AddEdge(int NodeIndex, int EdgeTo, float EdgeCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_EnemySearchPath.AddEdge");

	UBTL_EnemySearchPath_AddEdge_Params params;
	params.NodeIndex = NodeIndex;
	params.EdgeTo = EdgeTo;
	params.EdgeCost = EdgeCost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_PawnSeperatorComponent.GetVirtualActorLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBTL_PawnSeperatorComponent::GetVirtualActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_PawnSeperatorComponent.GetVirtualActorLocation");

	UBTL_PawnSeperatorComponent_GetVirtualActorLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_PawnSeperatorComponent.FindSeperationFor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UShapeComponent*         Capsule                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PushDirection                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 SeperationVector               (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_PawnSeperatorComponent::FindSeperationFor(class AActor* Other, class UShapeComponent* Capsule, float Distance, const struct FVector& PushDirection, struct FVector* SeperationVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_PawnSeperatorComponent.FindSeperationFor");

	UBTL_PawnSeperatorComponent_FindSeperationFor_Params params;
	params.Other = Other;
	params.Capsule = Capsule;
	params.Distance = Distance;
	params.PushDirection = PushDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SeperationVector != nullptr)
		*SeperationVector = params.SeperationVector;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_PawnSeperatorComponent.CanLeadSeperationCalc
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_PawnSeperatorComponent::CanLeadSeperationCalc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_PawnSeperatorComponent.CanLeadSeperationCalc");

	UBTL_PawnSeperatorComponent_CanLeadSeperationCalc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_PawnSeperatorComponent.CalculateActorSeperation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxDistance                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SeperationVector               (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_PawnSeperatorComponent::CalculateActorSeperation(class AActor* Other, float MaxDistance, struct FVector* SeperationVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_PawnSeperatorComponent.CalculateActorSeperation");

	UBTL_PawnSeperatorComponent_CalculateActorSeperation_Params params;
	params.Other = Other;
	params.MaxDistance = MaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SeperationVector != nullptr)
		*SeperationVector = params.SeperationVector;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_RagdollSolverComponent.SnapActorToPelvis
// (Final, Native, Protected, BlueprintCallable)

void UBTL_RagdollSolverComponent::SnapActorToPelvis()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RagdollSolverComponent.SnapActorToPelvis");

	UBTL_RagdollSolverComponent_SnapActorToPelvis_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_RagdollSolverComponent.ResetReflectTransformCache
// (Final, Native, Protected, BlueprintCallable)

void UBTL_RagdollSolverComponent::ResetReflectTransformCache()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RagdollSolverComponent.ResetReflectTransformCache");

	UBTL_RagdollSolverComponent_ResetReflectTransformCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_RagdollSolverComponent.PreRagdollOverlap
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_RagdollSolverComponent::PreRagdollOverlap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RagdollSolverComponent.PreRagdollOverlap");

	UBTL_RagdollSolverComponent_PreRagdollOverlap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_RagdollSolverComponent.MoveActorSafelyToPelvis
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_RagdollSolverComponent::MoveActorSafelyToPelvis()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RagdollSolverComponent.MoveActorSafelyToPelvis");

	UBTL_RagdollSolverComponent_MoveActorSafelyToPelvis_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_RagdollSolverComponent.InitPreRagdollCollision
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UPrimitiveComponent*> InCollision                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            InObjectTypes                  (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_RagdollSolverComponent::InitPreRagdollCollision(TArray<class UPrimitiveComponent*> InCollision, int InObjectTypes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RagdollSolverComponent.InitPreRagdollCollision");

	UBTL_RagdollSolverComponent_InitPreRagdollCollision_Params params;
	params.InCollision = InCollision;
	params.InObjectTypes = InObjectTypes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_RagdollSolverComponent.GetWorldSpacePelvisLocation
// (Final, Native, Protected, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBTL_RagdollSolverComponent::GetWorldSpacePelvisLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RagdollSolverComponent.GetWorldSpacePelvisLocation");

	UBTL_RagdollSolverComponent_GetWorldSpacePelvisLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_RagdollSolverComponent.GetVirtualActorLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBTL_RagdollSolverComponent::GetVirtualActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RagdollSolverComponent.GetVirtualActorLocation");

	UBTL_RagdollSolverComponent_GetVirtualActorLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_RagdollSolverComponent.GetIsRagdolling
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_RagdollSolverComponent::GetIsRagdolling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RagdollSolverComponent.GetIsRagdolling");

	UBTL_RagdollSolverComponent_GetIsRagdolling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_RagdollSolverComponent.GetBeingRagdoll
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_RagdollSolverComponent::GetBeingRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RagdollSolverComponent.GetBeingRagdoll");

	UBTL_RagdollSolverComponent_GetBeingRagdoll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_RagdollSolverComponent.EnablePreRagdollCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_RagdollSolverComponent::EnablePreRagdollCollision(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RagdollSolverComponent.EnablePreRagdollCollision");

	UBTL_RagdollSolverComponent_EnablePreRagdollCollision_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_ReplayRecordComponent.SetReplayRecordTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_ReplayRecordComponent::STATIC_SetReplayRecordTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ReplayRecordComponent.SetReplayRecordTime");

	UBTL_ReplayRecordComponent_SetReplayRecordTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_ReplayRecordComponent.GetStartGameTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_ReplayRecordComponent::GetStartGameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ReplayRecordComponent.GetStartGameTime");

	UBTL_ReplayRecordComponent_GetStartGameTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_ReplayRecordComponent.GetEndGameTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_ReplayRecordComponent::GetEndGameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ReplayRecordComponent.GetEndGameTime");

	UBTL_ReplayRecordComponent_GetEndGameTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_ReplaySkeletalMeshComponent.ToggleReplayStopSwitch
// (Final, Native, Public, BlueprintCallable)

void UBTL_ReplaySkeletalMeshComponent::ToggleReplayStopSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ReplaySkeletalMeshComponent.ToggleReplayStopSwitch");

	UBTL_ReplaySkeletalMeshComponent_ToggleReplayStopSwitch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_ReplaySkeletalMeshComponent.StartReplay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBTL_ReplayRecordComponent* ReplayRecordComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          StartGameTime                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndGameTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_ReplaySkeletalMeshComponent::StartReplay(class UBTL_ReplayRecordComponent* ReplayRecordComponent, float StartGameTime, float EndGameTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ReplaySkeletalMeshComponent.StartReplay");

	UBTL_ReplaySkeletalMeshComponent_StartReplay_Params params;
	params.ReplayRecordComponent = ReplayRecordComponent;
	params.StartGameTime = StartGameTime;
	params.EndGameTime = EndGameTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_ReplaySkeletalMeshComponent.ReplayToHead
// (Final, Native, Public, BlueprintCallable)

void UBTL_ReplaySkeletalMeshComponent::ReplayToHead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ReplaySkeletalMeshComponent.ReplayToHead");

	UBTL_ReplaySkeletalMeshComponent_ReplayToHead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_ReplaySkeletalMeshComponent.FinishReplay
// (Final, Native, Public, BlueprintCallable)

void UBTL_ReplaySkeletalMeshComponent::FinishReplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ReplaySkeletalMeshComponent.FinishReplay");

	UBTL_ReplaySkeletalMeshComponent_FinishReplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_ReplaySkeletalMeshComponent.AddReplayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          AddTime                        (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_ReplaySkeletalMeshComponent::AddReplayTime(float AddTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ReplaySkeletalMeshComponent.AddReplayTime");

	UBTL_ReplaySkeletalMeshComponent_AddReplayTime_Params params;
	params.AddTime = AddTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_RuntimeAttackDB.SearchMontages
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// struct FName                   SearchTerm                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<class UAnimMontage*>    Results                        (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_RuntimeAttackDB::SearchMontages(const struct FName& SearchTerm, TArray<class UAnimMontage*>* Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RuntimeAttackDB.SearchMontages");

	UBTL_RuntimeAttackDB_SearchMontages_Params params;
	params.SearchTerm = SearchTerm;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Results != nullptr)
		*Results = params.Results;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_RuntimeAttackDB.LoadMontagesFromDBAsset
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>           Identifiers                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UBTL_AttackDBAsset*      DatabaseAsset                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBTL_RuntimeAttackDB::LoadMontagesFromDBAsset(TArray<struct FName> Identifiers, class UBTL_AttackDBAsset* DatabaseAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RuntimeAttackDB.LoadMontagesFromDBAsset");

	UBTL_RuntimeAttackDB_LoadMontagesFromDBAsset_Params params;
	params.Identifiers = Identifiers;
	params.DatabaseAsset = DatabaseAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_RuntimeAttackDB.IsLoading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_RuntimeAttackDB::IsLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RuntimeAttackDB.IsLoading");

	UBTL_RuntimeAttackDB_IsLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SequencePlayer.SetIgnoreUpdateCameraCut
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewIgnore                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_SequencePlayer::SetIgnoreUpdateCameraCut(bool bNewIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SequencePlayer.SetIgnoreUpdateCameraCut");

	UBTL_SequencePlayer_SetIgnoreUpdateCameraCut_Params params;
	params.bNewIgnore = bNewIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SequencePlayer.RegisterSwitchObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 SrcObjectName                  (Parm, ZeroConstructor)
// class UObject*                 DstObject                      (Parm, ZeroConstructor, IsPlainOldData)
// class UBTL_SequencePlayer*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBTL_SequencePlayer* UBTL_SequencePlayer::RegisterSwitchObject(const struct FString& SrcObjectName, class UObject* DstObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SequencePlayer.RegisterSwitchObject");

	UBTL_SequencePlayer_RegisterSwitchObject_Params params;
	params.SrcObjectName = SrcObjectName;
	params.DstObject = DstObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SequencePlayer.CleanUpInternalSpawnedObjects
// (Final, Native, Public, BlueprintCallable)

void UBTL_SequencePlayer::CleanUpInternalSpawnedObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SequencePlayer.CleanUpInternalSpawnedObjects");

	UBTL_SequencePlayer_CleanUpInternalSpawnedObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SplineNavigationComponent.GetSplineRightVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBTL_SplineNavigationComponent::GetSplineRightVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SplineNavigationComponent.GetSplineRightVector");

	UBTL_SplineNavigationComponent_GetSplineRightVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SplineNavigationComponent.GetDistanceAlongSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_SplineNavigationComponent::GetDistanceAlongSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SplineNavigationComponent.GetDistanceAlongSpline");

	UBTL_SplineNavigationComponent_GetDistanceAlongSpline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SplineNavigationComponent.GetDistanceAlongNormal
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_SplineNavigationComponent::GetDistanceAlongNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SplineNavigationComponent.GetDistanceAlongNormal");

	UBTL_SplineNavigationComponent_GetDistanceAlongNormal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SplineNavigationComponent.GetClosestSplineLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBTL_SplineNavigationComponent::GetClosestSplineLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SplineNavigationComponent.GetClosestSplineLocation");

	UBTL_SplineNavigationComponent_GetClosestSplineLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SplineNavigationComponent.EstimateLocationAhead
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBTL_SplineNavigationComponent::EstimateLocationAhead(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SplineNavigationComponent.EstimateLocationAhead");

	UBTL_SplineNavigationComponent_EstimateLocationAhead_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SplineNavigationComponent.CalculateFollowDirection
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          LookAheadDistance              (Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetNormalDistance           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBTL_SplineNavigationComponent::CalculateFollowDirection(float LookAheadDistance, float TargetNormalDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SplineNavigationComponent.CalculateFollowDirection");

	UBTL_SplineNavigationComponent_CalculateFollowDirection_Params params;
	params.LookAheadDistance = LookAheadDistance;
	params.TargetNormalDistance = TargetNormalDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SplineFunctionLibrary.FindDistanceClosestToWorldLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class USplineComponent*        spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_SplineFunctionLibrary::STATIC_FindDistanceClosestToWorldLocation(class USplineComponent* spline, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SplineFunctionLibrary.FindDistanceClosestToWorldLocation");

	UBTL_SplineFunctionLibrary_FindDistanceClosestToWorldLocation_Params params;
	params.spline = spline;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SplineFunctionLibrary.ConvertInputKeyToDistance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USplineComponent*        spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          InputKey                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_SplineFunctionLibrary::STATIC_ConvertInputKeyToDistance(class USplineComponent* spline, float InputKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SplineFunctionLibrary.ConvertInputKeyToDistance");

	UBTL_SplineFunctionLibrary_ConvertInputKeyToDistance_Params params;
	params.spline = spline;
	params.InputKey = InputKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_StatusComponent.SetHPFlag
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_StatusComponent::SetHPFlag(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_StatusComponent.SetHPFlag");

	UBTL_StatusComponent_SetHPFlag_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_StatusComponent.IsZeroHP
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           IsZero                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_StatusComponent::IsZeroHP(bool* IsZero)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_StatusComponent.IsZeroHP");

	UBTL_StatusComponent_IsZeroHP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsZero != nullptr)
		*IsZero = params.IsZero;
}


// Function BattleLabo.BTL_StatusComponent.HasHP
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           IsPositive                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_StatusComponent::HasHP(bool* IsPositive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_StatusComponent.HasHP");

	UBTL_StatusComponent_HasHP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPositive != nullptr)
		*IsPositive = params.IsPositive;
}


// Function BattleLabo.BTL_NPCLODSystem.SetSpline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USplineComponent*        InSpline                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBTL_NPCLODSystem::SetSpline(class USplineComponent* InSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_NPCLODSystem.SetSpline");

	UBTL_NPCLODSystem_SetSpline_Params params;
	params.InSpline = InSpline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_NPCLODSystem.RegisterNPCs
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class ABTL_Character*>  NPCs                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBTL_NPCLODSystem::RegisterNPCs(TArray<class ABTL_Character*> NPCs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_NPCLODSystem.RegisterNPCs");

	UBTL_NPCLODSystem_RegisterNPCs_Params params;
	params.NPCs = NPCs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SurroundCoordinator.TryGetAnchorAngleWS
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_SurroundCoordinator::TryGetAnchorAngleWS(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.TryGetAnchorAngleWS");

	UBTL_SurroundCoordinator_TryGetAnchorAngleWS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SurroundCoordinator.TryCalculateDirectionWS
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// class AAIController*           NPC                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_SurroundCoordinator::TryCalculateDirectionWS(class AAIController* NPC, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.TryCalculateDirectionWS");

	UBTL_SurroundCoordinator_TryCalculateDirectionWS_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SurroundCoordinator.SetPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ABTL_Character*          Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_SurroundCoordinator::SetPlayer(class ABTL_Character* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.SetPlayer");

	UBTL_SurroundCoordinator_SetPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SurroundCoordinator.SetNewAnchor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AAIController*           Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_SurroundCoordinator::SetNewAnchor(class AAIController* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.SetNewAnchor");

	UBTL_SurroundCoordinator_SetNewAnchor_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SurroundCoordinator.Reserve
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AAIController*           Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_SurroundCoordinator::Reserve(class AAIController* Item, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.Reserve");

	UBTL_SurroundCoordinator_Reserve_Params params;
	params.Item = Item;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SurroundCoordinator.RemoveNPC
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AAIController*           NPC                            (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_SurroundCoordinator::RemoveNPC(class AAIController* NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.RemoveNPC");

	UBTL_SurroundCoordinator_RemoveNPC_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SurroundCoordinator.HasReservation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AAIController*           ItemToFind                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_SurroundCoordinator::HasReservation(class AAIController* ItemToFind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.HasReservation");

	UBTL_SurroundCoordinator_HasReservation_Params params;
	params.ItemToFind = ItemToFind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SurroundCoordinator.GetOffsetForIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_SurroundCoordinator::GetOffsetForIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.GetOffsetForIndex");

	UBTL_SurroundCoordinator_GetOffsetForIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SurroundCoordinator.GetNPCReservationIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AAIController*           ItemToFind                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTL_SurroundCoordinator::GetNPCReservationIndex(class AAIController* ItemToFind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.GetNPCReservationIndex");

	UBTL_SurroundCoordinator_GetNPCReservationIndex_Params params;
	params.ItemToFind = ItemToFind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SurroundCoordinator.GetClosestOpenIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AAIController*           NPC                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTL_SurroundCoordinator::GetClosestOpenIndex(class AAIController* NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.GetClosestOpenIndex");

	UBTL_SurroundCoordinator_GetClosestOpenIndex_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SurroundCoordinator.GetAnchorNPC
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AAIController*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AAIController* UBTL_SurroundCoordinator::GetAnchorNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.GetAnchorNPC");

	UBTL_SurroundCoordinator_GetAnchorNPC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SurroundCoordinator.ClearAllReservationsButAnchor
// (Final, Native, Public, BlueprintCallable)

void UBTL_SurroundCoordinator::ClearAllReservationsButAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.ClearAllReservationsButAnchor");

	UBTL_SurroundCoordinator_ClearAllReservationsButAnchor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SurroundCoordinator.ClearAllReservations
// (Final, Native, Public, BlueprintCallable)

void UBTL_SurroundCoordinator::ClearAllReservations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.ClearAllReservations");

	UBTL_SurroundCoordinator_ClearAllReservations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.CircleDrawComponent.ClearLength
// (Final, Native, Public, BlueprintCallable)

void UCircleDrawComponent::ClearLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.CircleDrawComponent.ClearLength");

	UCircleDrawComponent_ClearLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.CircleDrawComponent.AddLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Length                         (Parm, ZeroConstructor, IsPlainOldData)

void UCircleDrawComponent::AddLength(float Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.CircleDrawComponent.AddLength");

	UCircleDrawComponent_AddLength_Params params;
	params.Length = Length;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.UndulationInfoFunctionLibrary.SetupUndulationInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUndulationInfoContainer Container                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            InfoCount                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            WallPointCount                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            StepPointCount                 (Parm, ZeroConstructor, IsPlainOldData)

void UUndulationInfoFunctionLibrary::STATIC_SetupUndulationInfo(const struct FUndulationInfoContainer& Container, int InfoCount, int WallPointCount, int StepPointCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.UndulationInfoFunctionLibrary.SetupUndulationInfo");

	UUndulationInfoFunctionLibrary_SetupUndulationInfo_Params params;
	params.Container = Container;
	params.InfoCount = InfoCount;
	params.WallPointCount = WallPointCount;
	params.StepPointCount = StepPointCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.UndulationInfoFunctionLibrary.SetUndulationInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUndulationInfoContainer Container                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            InfoIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FUndulationInfoParamNative Param                          (ConstParm, Parm, OutParm, ReferenceParm)

void UUndulationInfoFunctionLibrary::STATIC_SetUndulationInfo(const struct FUndulationInfoContainer& Container, int InfoIndex, const struct FUndulationInfoParamNative& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.UndulationInfoFunctionLibrary.SetUndulationInfo");

	UUndulationInfoFunctionLibrary_SetUndulationInfo_Params params;
	params.Container = Container;
	params.InfoIndex = InfoIndex;
	params.Param = Param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.UndulationInfoFunctionLibrary.SetRaycastHitpointInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUndulationInfoContainer Container                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            InfoIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// ERaycastHitpointInfoType       Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRaycastHitpointInfoNative Point                          (ConstParm, Parm, OutParm, ReferenceParm)

void UUndulationInfoFunctionLibrary::STATIC_SetRaycastHitpointInfo(const struct FUndulationInfoContainer& Container, int InfoIndex, ERaycastHitpointInfoType Type, int PointIndex, const struct FRaycastHitpointInfoNative& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.UndulationInfoFunctionLibrary.SetRaycastHitpointInfo");

	UUndulationInfoFunctionLibrary_SetRaycastHitpointInfo_Params params;
	params.Container = Container;
	params.InfoIndex = InfoIndex;
	params.Type = Type;
	params.PointIndex = PointIndex;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.UndulationInfoFunctionLibrary.GetUndulationInfoCount
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUndulationInfoContainer Container                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUndulationInfoFunctionLibrary::STATIC_GetUndulationInfoCount(const struct FUndulationInfoContainer& Container)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.UndulationInfoFunctionLibrary.GetUndulationInfoCount");

	UUndulationInfoFunctionLibrary_GetUndulationInfoCount_Params params;
	params.Container = Container;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.UndulationInfoFunctionLibrary.GetUndulationInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUndulationInfoContainer Container                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            InfoIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FUndulationInfoParamNative OutStruct                      (Parm, OutParm)
// int                            WallRaycastHitpointInfoCount   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepRaycastHitpointInfoCount   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUndulationInfoFunctionLibrary::STATIC_GetUndulationInfo(const struct FUndulationInfoContainer& Container, int InfoIndex, struct FUndulationInfoParamNative* OutStruct, int* WallRaycastHitpointInfoCount, int* StepRaycastHitpointInfoCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.UndulationInfoFunctionLibrary.GetUndulationInfo");

	UUndulationInfoFunctionLibrary_GetUndulationInfo_Params params;
	params.Container = Container;
	params.InfoIndex = InfoIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutStruct != nullptr)
		*OutStruct = params.OutStruct;
	if (WallRaycastHitpointInfoCount != nullptr)
		*WallRaycastHitpointInfoCount = params.WallRaycastHitpointInfoCount;
	if (StepRaycastHitpointInfoCount != nullptr)
		*StepRaycastHitpointInfoCount = params.StepRaycastHitpointInfoCount;
}


// Function BattleLabo.UndulationInfoFunctionLibrary.GetRaycastHitpointInfoCount
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUndulationInfoContainer Container                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            InfoIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// ERaycastHitpointInfoType       Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUndulationInfoFunctionLibrary::STATIC_GetRaycastHitpointInfoCount(const struct FUndulationInfoContainer& Container, int InfoIndex, ERaycastHitpointInfoType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.UndulationInfoFunctionLibrary.GetRaycastHitpointInfoCount");

	UUndulationInfoFunctionLibrary_GetRaycastHitpointInfoCount_Params params;
	params.Container = Container;
	params.InfoIndex = InfoIndex;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.UndulationInfoFunctionLibrary.GetRaycastHitpointInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUndulationInfoContainer Container                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            InfoIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// ERaycastHitpointInfoType       Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRaycastHitpointInfoNative OutStruct                      (Parm, OutParm)

void UUndulationInfoFunctionLibrary::STATIC_GetRaycastHitpointInfo(const struct FUndulationInfoContainer& Container, int InfoIndex, ERaycastHitpointInfoType Type, int PointIndex, struct FRaycastHitpointInfoNative* OutStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.UndulationInfoFunctionLibrary.GetRaycastHitpointInfo");

	UUndulationInfoFunctionLibrary_GetRaycastHitpointInfo_Params params;
	params.Container = Container;
	params.InfoIndex = InfoIndex;
	params.Type = Type;
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutStruct != nullptr)
		*OutStruct = params.OutStruct;
}


// Function BattleLabo.UndulationInfoFunctionLibrary.GetEnableRaycastHitpointInfoCount
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FUndulationInfoContainer Container                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            InfoIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// ERaycastHitpointInfoType       Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUndulationInfoFunctionLibrary::STATIC_GetEnableRaycastHitpointInfoCount(const struct FUndulationInfoContainer& Container, int InfoIndex, ERaycastHitpointInfoType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.UndulationInfoFunctionLibrary.GetEnableRaycastHitpointInfoCount");

	UUndulationInfoFunctionLibrary_GetEnableRaycastHitpointInfoCount_Params params;
	params.Container = Container;
	params.InfoIndex = InfoIndex;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.UndulationInfoFunctionLibrary.ClearWorks
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FUndulationInfoContainer Container                      (ConstParm, Parm, OutParm, ReferenceParm)

void UUndulationInfoFunctionLibrary::STATIC_ClearWorks(const struct FUndulationInfoContainer& Container)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.UndulationInfoFunctionLibrary.ClearWorks");

	UUndulationInfoFunctionLibrary_ClearWorks_Params params;
	params.Container = Container;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.KeyConfig.SwitchKey
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   A                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   B                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UKeyConfig::STATIC_SwitchKey(const struct FName& A, const struct FName& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.SwitchKey");

	UKeyConfig_SwitchKey_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.KeyConfig.SortObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UObject*>         TargetArray                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USortObjectCompare*      Compare                        (Parm, ZeroConstructor, IsPlainOldData)

void UKeyConfig::STATIC_SortObject(class USortObjectCompare* Compare, TArray<class UObject*>* TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.SortObject");

	UKeyConfig_SortObject_Params params;
	params.Compare = Compare;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;
}


// Function BattleLabo.KeyConfig.SortName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>           TargetArray                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USortNameCompare*        Compare                        (Parm, ZeroConstructor, IsPlainOldData)

void UKeyConfig::STATIC_SortName(class USortNameCompare* Compare, TArray<struct FName>* TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.SortName");

	UKeyConfig_SortName_Params params;
	params.Compare = Compare;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;
}


// Function BattleLabo.KeyConfig.SortActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          TargetArray                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USortActorCompare*       Compare                        (Parm, ZeroConstructor, IsPlainOldData)

void UKeyConfig::STATIC_SortActor(class USortActorCompare* Compare, TArray<class AActor*>* TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.SortActor");

	UKeyConfig_SortActor_Params params;
	params.Compare = Compare;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;
}


// Function BattleLabo.KeyConfig.SetMontagePosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Position                       (Parm, ZeroConstructor, IsPlainOldData)

void UKeyConfig::STATIC_SetMontagePosition(class UAnimInstance* AnimInstance, class UAnimMontage* Montage, float Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.SetMontagePosition");

	UKeyConfig_SetMontagePosition_Params params;
	params.AnimInstance = AnimInstance;
	params.Montage = Montage;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.KeyConfig.SetMontageBlendOutTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UKeyConfig::STATIC_SetMontageBlendOutTime(class UAnimMontage* Montage, float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.SetMontageBlendOutTime");

	UKeyConfig_SetMontageBlendOutTime_Params params;
	params.Montage = Montage;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.KeyConfig.SetMontageBlendInTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UKeyConfig::STATIC_SetMontageBlendInTime(class UAnimMontage* Montage, float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.SetMontageBlendInTime");

	UKeyConfig_SetMontageBlendInTime_Params params;
	params.Montage = Montage;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.KeyConfig.ResetAction
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FKey                    Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKeyConfig::STATIC_ResetAction(const struct FKey& Key, const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.ResetAction");

	UKeyConfig_ResetAction_Params params;
	params.Key = Key;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.KeyConfig.IsPlayingAttackMontage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKeyConfig::STATIC_IsPlayingAttackMontage(class UAnimInstance* AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.IsPlayingAttackMontage");

	UKeyConfig_IsPlayingAttackMontage_Params params;
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.KeyConfig.GetMontageBlendOutTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKeyConfig::STATIC_GetMontageBlendOutTime(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.GetMontageBlendOutTime");

	UKeyConfig_GetMontageBlendOutTime_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.KeyConfig.GetMontageBlendInTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKeyConfig::STATIC_GetMontageBlendInTime(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.GetMontageBlendInTime");

	UKeyConfig_GetMontageBlendInTime_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.KeyConfig.GetKeyArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FKey>            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FKey> UKeyConfig::STATIC_GetKeyArray(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.GetKeyArray");

	UKeyConfig_GetKeyArray_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.KeyConfig.GetFollowingPathLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPathFollowingComponent* PathFollowingComponent         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKeyConfig::STATIC_GetFollowingPathLength(class UPathFollowingComponent* PathFollowingComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.GetFollowingPathLength");

	UKeyConfig_GetFollowingPathLength_Params params;
	params.PathFollowingComponent = PathFollowingComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.KeyConfig.GetCurrentMontagePosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKeyConfig::STATIC_GetCurrentMontagePosition(class UAnimInstance* AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.GetCurrentMontagePosition");

	UKeyConfig_GetCurrentMontagePosition_Params params;
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.KeyConfig.GetCurrentMontagePlayRate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKeyConfig::STATIC_GetCurrentMontagePlayRate(class UAnimInstance* AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.GetCurrentMontagePlayRate");

	UKeyConfig_GetCurrentMontagePlayRate_Params params;
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.KeyConfig.EnableNextAttack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKeyConfig::STATIC_EnableNextAttack(class UAnimInstance* AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.EnableNextAttack");

	UKeyConfig_EnableNextAttack_Params params;
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.KeyConfig.DispCurrentAnimInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)

void UKeyConfig::STATIC_DispCurrentAnimInfo(class UAnimInstance* AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.DispCurrentAnimInfo");

	UKeyConfig_DispCurrentAnimInfo_Params params;
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.KeyConfig.CreateObjectForTemplate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Template                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UKeyConfig::STATIC_CreateObjectForTemplate(class UObject* Outer, const struct FName& Name, class UObject* Template)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.CreateObjectForTemplate");

	UKeyConfig_CreateObjectForTemplate_Params params;
	params.Outer = Outer;
	params.Name = Name;
	params.Template = Template;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.KeyConfig.CreateObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ObjectClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UKeyConfig::STATIC_CreateObject(class UClass* ObjectClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.CreateObject");

	UKeyConfig_CreateObject_Params params;
	params.ObjectClass = ObjectClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.Json.LoadJson
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FJsonData               Data                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJson::STATIC_LoadJson(const struct FString& Name, struct FJsonData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.Json.LoadJson");

	UJson_LoadJson_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function BattleLabo.Json.GetString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FJsonData               JsonData                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJson::STATIC_GetString(const struct FJsonData& JsonData, const struct FString& Key, struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.Json.GetString");

	UJson_GetString_Params params;
	params.JsonData = JsonData;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;

	return params.ReturnValue;
}


// Function BattleLabo.Json.GetInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FJsonData               JsonData                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            Int                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJson::STATIC_GetInt(const struct FJsonData& JsonData, const struct FString& Key, int* Int)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.Json.GetInt");

	UJson_GetInt_Params params;
	params.JsonData = JsonData;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Int != nullptr)
		*Int = params.Int;

	return params.ReturnValue;
}


// Function BattleLabo.Json.GetFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FJsonData               JsonData                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Key                            (Parm, ZeroConstructor)
// float                          Float                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJson::STATIC_GetFloat(const struct FJsonData& JsonData, const struct FString& Key, float* Float)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.Json.GetFloat");

	UJson_GetFloat_Params params;
	params.JsonData = JsonData;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Float != nullptr)
		*Float = params.Float;

	return params.ReturnValue;
}


// Function BattleLabo.Json.GetData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FJsonData               JsonData                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FJsonData               Data                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJson::STATIC_GetData(const struct FJsonData& JsonData, const struct FString& Key, struct FJsonData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.Json.GetData");

	UJson_GetData_Params params;
	params.JsonData = JsonData;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function BattleLabo.Json.GetBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FJsonData               JsonData                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           Bool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJson::STATIC_GetBool(const struct FJsonData& JsonData, const struct FString& Key, bool* Bool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.Json.GetBool");

	UJson_GetBool_Params params;
	params.JsonData = JsonData;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bool != nullptr)
		*Bool = params.Bool;

	return params.ReturnValue;
}


// Function BattleLabo.Json.GetArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FJsonData               JsonData                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Key                            (Parm, ZeroConstructor)
// TArray<struct FString>         Array                          (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJson::STATIC_GetArray(const struct FJsonData& JsonData, const struct FString& Key, TArray<struct FString>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.Json.GetArray");

	UJson_GetArray_Params params;
	params.JsonData = JsonData;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

	return params.ReturnValue;
}


// Function BattleLabo.MyCharacterMovementComponent.UseRequestedVector
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UMyCharacterMovementComponent::UseRequestedVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.MyCharacterMovementComponent.UseRequestedVector");

	UMyCharacterMovementComponent_UseRequestedVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.SortActorCompare.Compare
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  A                              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  B                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USortActorCompare::Compare(class AActor* A, class AActor* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.SortActorCompare.Compare");

	USortActorCompare_Compare_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.SortObjectCompare.Compare
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                 A                              (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 B                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USortObjectCompare::Compare(class UObject* A, class UObject* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.SortObjectCompare.Compare");

	USortObjectCompare_Compare_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.SquareDrawComponent.ClearSquare
// (Final, Native, Public, BlueprintCallable)

void USquareDrawComponent::ClearSquare()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.SquareDrawComponent.ClearSquare");

	USquareDrawComponent_ClearSquare_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.SquareDrawComponent.AddSquare
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 LT                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 RT                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 LB                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 RB                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void USquareDrawComponent::AddSquare(const struct FVector& LT, const struct FVector& RT, const struct FVector& LB, const struct FVector& RB)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.SquareDrawComponent.AddSquare");

	USquareDrawComponent_AddSquare_Params params;
	params.LT = LT;
	params.RT = RT;
	params.LB = LB;
	params.RB = RB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.SortNameCompare.Compare
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   A                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   B                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USortNameCompare::Compare(const struct FName& A, const struct FName& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.SortNameCompare.Compare");

	USortNameCompare_Compare_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
