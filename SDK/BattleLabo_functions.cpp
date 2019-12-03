
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

// Function BattleLabo.BTL_Character.TrySetRadiusSafe
// ()
// Parameters:
// float                          TargetRadius                   (Parm, ZeroConstructor, IsPlainOldData)

void ABTL_Character::TrySetRadiusSafe(float TargetRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_Character.TrySetRadiusSafe");

	ABTL_Character_TrySetRadiusSafe_Params params;
	params.TargetRadius = TargetRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_Character.SetSkeletalMeshes
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_Character.SetAllPhysicsResponseToChannel
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_Character.IsValidSectionNameFromCurrentMontage
// ()
// Parameters:
// struct FName                   InSectionName                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABTL_Character::IsValidSectionNameFromCurrentMontage(const struct FName& InSectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_Character.IsValidSectionNameFromCurrentMontage");

	ABTL_Character_IsValidSectionNameFromCurrentMontage_Params params;
	params.InSectionName = InSectionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SequenceActor.SetSequence
// ()
// Parameters:
// class ULevelSequence*          InSequence                     (Parm, ZeroConstructor, IsPlainOldData)

void ABTL_SequenceActor::SetSequence(class ULevelSequence* InSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SequenceActor.SetSequence");

	ABTL_SequenceActor_SetSequence_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SequenceActor.SetPlaybackSettingsPauseAtEnd
// ()
// Parameters:
// bool                           bInPauseAtEnd                  (Parm, ZeroConstructor, IsPlainOldData)

void ABTL_SequenceActor::SetPlaybackSettingsPauseAtEnd(bool bInPauseAtEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SequenceActor.SetPlaybackSettingsPauseAtEnd");

	ABTL_SequenceActor_SetPlaybackSettingsPauseAtEnd_Params params;
	params.bInPauseAtEnd = bInPauseAtEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SequenceActor.Play
// ()

void ABTL_SequenceActor::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SequenceActor.Play");

	ABTL_SequenceActor_Play_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SequenceActor.OnUdateCameraCut
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SequenceActor.GetLevelSequence
// ()
// Parameters:
// class ULevelSequence*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelSequence* ABTL_SequenceActor::GetLevelSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SequenceActor.GetLevelSequence");

	ABTL_SequenceActor_GetLevelSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.ActorManagementComponentBase.Start
// ()

void UActorManagementComponentBase::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.ActorManagementComponentBase.Start");

	UActorManagementComponentBase_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.ActorManagementComponentBase.OnManagedActorUnregistered_ImplementableEvent
// ()
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
// ()
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
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UActorManagementComponentBase::CheckManagedActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.ActorManagementComponentBase.CheckManagedActor");

	UActorManagementComponentBase_CheckManagedActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_AIController.SetCrowdSlowdownAtGoal
// ()
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void ABTL_AIController::SetCrowdSlowdownAtGoal(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AIController.SetCrowdSlowdownAtGoal");

	ABTL_AIController_SetCrowdSlowdownAtGoal_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_AIController.SetCrowdSeparationWeight
// ()
// Parameters:
// float                          Weight                         (Parm, ZeroConstructor, IsPlainOldData)

void ABTL_AIController::SetCrowdSeparationWeight(float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AIController.SetCrowdSeparationWeight");

	ABTL_AIController_SetCrowdSeparationWeight_Params params;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_AnimNotifyContainer.Reset
// ()

void UBTL_AnimNotifyContainer::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AnimNotifyContainer.Reset");

	UBTL_AnimNotifyContainer_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_AnimNotifyContainer.RemoveNotifyCount
// ()
// Parameters:
// struct FName                   State                          (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_AnimNotifyContainer::RemoveNotifyCount(const struct FName& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AnimNotifyContainer.RemoveNotifyCount");

	UBTL_AnimNotifyContainer_RemoveNotifyCount_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_AnimNotifyContainer.ClearNotifyCounts
// ()

void UBTL_AnimNotifyContainer::ClearNotifyCounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AnimNotifyContainer.ClearNotifyCounts");

	UBTL_AnimNotifyContainer_ClearNotifyCounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_AnimNotifyContainer.CheckNotifyExistFast
// ()
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_AnimNotifyContainer::CheckNotifyExistFast(const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AnimNotifyContainer.CheckNotifyExistFast");

	UBTL_AnimNotifyContainer_CheckNotifyExistFast_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_AnimNotifyContainer.AddNotifyCount
// ()
// Parameters:
// struct FName                   State                          (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_AnimNotifyContainer::AddNotifyCount(const struct FName& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AnimNotifyContainer.AddNotifyCount");

	UBTL_AnimNotifyContainer_AddNotifyCount_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_NamedCooldownContainer.SetCooldown
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_NamedCooldownContainer.IsOnCooldown
// ()
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_NamedCooldownContainer::IsOnCooldown(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_NamedCooldownContainer.IsOnCooldown");

	UBTL_NamedCooldownContainer_IsOnCooldown_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_NamedCooldownContainer.ClearAllCooldowns
// ()

void UBTL_NamedCooldownContainer::ClearAllCooldowns()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_NamedCooldownContainer.ClearAllCooldowns");

	UBTL_NamedCooldownContainer_ClearAllCooldowns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_AnimInstance.SetRootTranslationScale
// ()
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_AnimInstance::SetRootTranslationScale(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AnimInstance.SetRootTranslationScale");

	UBTL_AnimInstance_SetRootTranslationScale_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_AnimInstance.SearchClosestMontage
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_AnimInstance.ResetRootTranslationScale
// ()

void UBTL_AnimInstance::ResetRootTranslationScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AnimInstance.ResetRootTranslationScale");

	UBTL_AnimInstance_ResetRootTranslationScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_AnimInstance.GetClosest8DirectionIndex
// ()
// Parameters:
// float                          Target                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTL_AnimInstance::GetClosest8DirectionIndex(float Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AnimInstance.GetClosest8DirectionIndex");

	UBTL_AnimInstance_GetClosest8DirectionIndex_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_AnimInstance.GetClosest8DirectionAngle
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_AnimInstance.BiasTargetDirection
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BattleSpawner.LaunchDebugBattle
// ()

void ABTL_BattleSpawner::LaunchDebugBattle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BattleSpawner.LaunchDebugBattle");

	ABTL_BattleSpawner_LaunchDebugBattle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_BlueprintFunctionLibrary.FindUserClass
// ()
// Parameters:
// class UClass*                  BaseClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBTL_BlueprintFunctionLibrary::FindUserClass(class UClass* BaseClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BlueprintFunctionLibrary.FindUserClass");

	UBTL_BlueprintFunctionLibrary_FindUserClass_Params params;
	params.BaseClass = BaseClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BlueprintFunctionLibrary.ClosestPointOnSegment
// ()
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 StartPoint                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 EndPoint                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBTL_BlueprintFunctionLibrary::ClosestPointOnSegment(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BlueprintFunctionLibrary.ClosestPointOnSegment");

	UBTL_BlueprintFunctionLibrary_ClosestPointOnSegment_Params params;
	params.Point = Point;
	params.StartPoint = StartPoint;
	params.EndPoint = EndPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_AttackHitSolverComponent.UpdateAttackCollisions
// ()
// Parameters:
// TArray<struct FName>           Tags                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBTL_AttackHitSolverComponent::UpdateAttackCollisions(TArray<struct FName> Tags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AttackHitSolverComponent.UpdateAttackCollisions");

	UBTL_AttackHitSolverComponent_UpdateAttackCollisions_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_AttackHitSolverComponent.RegisterAttackCollider
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_AttackHitSolverComponent.CacheColliderTransforms
// ()

void UBTL_AttackHitSolverComponent::CacheColliderTransforms()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_AttackHitSolverComponent.CacheColliderTransforms");

	UBTL_AttackHitSolverComponent_CacheColliderTransforms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_BRallyRacerAnimData.SelectIntroCutscene
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutData != nullptr)
		*OutData = params.OutData;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BRallyScoreKeeper.SortResults
// ()
// Parameters:
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_BRallyScoreKeeper::SortResults(class UDataTable* DataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BRallyScoreKeeper.SortResults");

	UBTL_BRallyScoreKeeper_SortResults_Params params;
	params.DataTable = DataTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_BRallyScoreKeeper.GetTotalScore
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTL_BRallyScoreKeeper::GetTotalScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BRallyScoreKeeper.GetTotalScore");

	UBTL_BRallyScoreKeeper_GetTotalScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BRallyScoreKeeper.GetResults
// ()
// Parameters:
// TArray<struct FBTL_ScoreTallyData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBTL_ScoreTallyData> UBTL_BRallyScoreKeeper::GetResults()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BRallyScoreKeeper.GetResults");

	UBTL_BRallyScoreKeeper_GetResults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BRallyScoreKeeper.Clear
// ()

void UBTL_BRallyScoreKeeper::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BRallyScoreKeeper.Clear");

	UBTL_BRallyScoreKeeper_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_BRallyScoreKeeper.AddToMaxCounts
// ()
// Parameters:
// TArray<struct FDataTableRowHandle> DataTableRowHandles            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBTL_BRallyScoreKeeper::AddToMaxCounts(TArray<struct FDataTableRowHandle> DataTableRowHandles)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BRallyScoreKeeper.AddToMaxCounts");

	UBTL_BRallyScoreKeeper_AddToMaxCounts_Params params;
	params.DataTableRowHandles = DataTableRowHandles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_BRallyScoreKeeper.AddPointsFromTableRows
// ()
// Parameters:
// TArray<struct FDataTableRowHandle> DataTableRowHandles            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBTL_BRallyScoreKeeper::AddPointsFromTableRows(TArray<struct FDataTableRowHandle> DataTableRowHandles)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BRallyScoreKeeper.AddPointsFromTableRows");

	UBTL_BRallyScoreKeeper_AddPointsFromTableRows_Params params;
	params.DataTableRowHandles = DataTableRowHandles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_BRallyScoreKeeper.AddPointsFromTableRow
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_BRallyScoreKeeper.AddPointsByRatio
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CharacterDataAsset.SpawnCharacterWithDefaults
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CharacterDataAsset.SpawnCharacter
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CharacterDataAsset.GetCharacterVoiceName
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBTL_CharacterDataAsset::GetCharacterVoiceName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CharacterDataAsset.GetCharacterVoiceName");

	UBTL_CharacterDataAsset_GetCharacterVoiceName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CharacterEnviromentInterface.GetAreaFlags
// ()
// Parameters:
// TArray<bool>                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<bool> UBTL_CharacterEnviromentInterface::GetAreaFlags()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CharacterEnviromentInterface.GetAreaFlags");

	UBTL_CharacterEnviromentInterface_GetAreaFlags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CharacterMovementComponent.TestPath
// ()
// Parameters:
// struct FVector                 Destination                    (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_CharacterMovementComponent::TestPath(const struct FVector& Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CharacterMovementComponent.TestPath");

	UBTL_CharacterMovementComponent_TestPath_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CharacterMovementComponent.SetEnableStepUp
// ()
// Parameters:
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_CharacterMovementComponent::SetEnableStepUp(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CharacterMovementComponent.SetEnableStepUp");

	UBTL_CharacterMovementComponent_SetEnableStepUp_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CharacterMovementComponent.ConsumePathFollowerMove
// ()

void UBTL_CharacterMovementComponent::ConsumePathFollowerMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CharacterMovementComponent.ConsumePathFollowerMove");

	UBTL_CharacterMovementComponent_ConsumePathFollowerMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CharacterMovementComponent.AddWorldOffsetToRootMotion
// ()
// Parameters:
// struct FVector                 DeltaLocation                  (Parm, IsPlainOldData)

void UBTL_CharacterMovementComponent::AddWorldOffsetToRootMotion(const struct FVector& DeltaLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CharacterMovementComponent.AddWorldOffsetToRootMotion");

	UBTL_CharacterMovementComponent_AddWorldOffsetToRootMotion_Params params;
	params.DeltaLocation = DeltaLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CharacterMovementComponent.AddLocalOffsetToRootMotion
// ()
// Parameters:
// struct FVector                 DeltaLocation                  (Parm, IsPlainOldData)

void UBTL_CharacterMovementComponent::AddLocalOffsetToRootMotion(const struct FVector& DeltaLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CharacterMovementComponent.AddLocalOffsetToRootMotion");

	UBTL_CharacterMovementComponent_AddLocalOffsetToRootMotion_Params params;
	params.DeltaLocation = DeltaLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CharacterMovementComponent.AddDeltaYawWithRootMotion
// ()
// Parameters:
// float                          DeltaRotation                  (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_CharacterMovementComponent::AddDeltaYawWithRootMotion(float DeltaRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CharacterMovementComponent.AddDeltaYawWithRootMotion");

	UBTL_CharacterMovementComponent_AddDeltaYawWithRootMotion_Params params;
	params.DeltaRotation = DeltaRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CommandSolver.StartsWith_NameArray
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandSolver.SearchMostRecentInAttackHistory
// ()
// Parameters:
// TArray<struct FName>           SearchAttacks                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBTL_CommandSolver::SearchMostRecentInAttackHistory(TArray<struct FName> SearchAttacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandSolver.SearchMostRecentInAttackHistory");

	UBTL_CommandSolver_SearchMostRecentInAttackHistory_Params params;
	params.SearchAttacks = SearchAttacks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandSolver.RecordAttackToHistory
// ()
// Parameters:
// struct FName                   Attack                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UBTL_CommandSolver::RecordAttackToHistory(const struct FName& Attack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandSolver.RecordAttackToHistory");

	UBTL_CommandSolver_RecordAttackToHistory_Params params;
	params.Attack = Attack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CommandSolver.Equals_NameArray
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.TrimToNum
// ()
// Parameters:
// int                            MaxNum                         (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_CourseLeaderboard::TrimToNum(int MaxNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.TrimToNum");

	UBTL_CourseLeaderboard_TrimToNum_Params params;
	params.MaxNum = MaxNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CourseLeaderboard.ReadSaveData
// ()
// Parameters:
// struct FBTL_CourseSaveData     SaveData                       (ConstParm, Parm, OutParm, ReferenceParm)

void UBTL_CourseLeaderboard::ReadSaveData(const struct FBTL_CourseSaveData& SaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.ReadSaveData");

	UBTL_CourseLeaderboard_ReadSaveData_Params params;
	params.SaveData = SaveData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CourseLeaderboard.MakeSaveData
// ()
// Parameters:
// TArray<struct FName>           PlayerIds                      (ConstParm, Parm, ZeroConstructor)
// struct FBTL_CourseSaveData     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBTL_CourseSaveData UBTL_CourseLeaderboard::MakeSaveData(TArray<struct FName> PlayerIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.MakeSaveData");

	UBTL_CourseLeaderboard_MakeSaveData_Params params;
	params.PlayerIds = PlayerIds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.GetRecords
// ()
// Parameters:
// TArray<struct FBTL_LeaderboardRecord> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FBTL_LeaderboardRecord> UBTL_CourseLeaderboard::GetRecords()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.GetRecords");

	UBTL_CourseLeaderboard_GetRecords_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.GetRecordByIndex
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRecord != nullptr)
		*OutRecord = params.OutRecord;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.GetRecordByCharacter
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRecord != nullptr)
		*OutRecord = params.OutRecord;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.GetRankPlaceAtIndex
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTL_CourseLeaderboard::GetRankPlaceAtIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.GetRankPlaceAtIndex");

	UBTL_CourseLeaderboard_GetRankPlaceAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.GetRankPlace
// ()
// Parameters:
// struct FName                   CharacterID                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTL_CourseLeaderboard::GetRankPlace(const struct FName& CharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.GetRankPlace");

	UBTL_CourseLeaderboard_GetRankPlace_Params params;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.GetRankIndex
// ()
// Parameters:
// struct FName                   CharacterID                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTL_CourseLeaderboard::GetRankIndex(const struct FName& CharacterID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.GetRankIndex");

	UBTL_CourseLeaderboard_GetRankIndex_Params params;
	params.CharacterID = CharacterID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.GetParCharacter
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBTL_CourseLeaderboard::GetParCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.GetParCharacter");

	UBTL_CourseLeaderboard_GetParCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.GetCourseId
// ()
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBTL_CourseLeaderboard::GetCourseId()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.GetCourseId");

	UBTL_CourseLeaderboard_GetCourseId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.EnableDuplicates
// ()
// Parameters:
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_CourseLeaderboard::EnableDuplicates(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.EnableDuplicates");

	UBTL_CourseLeaderboard_EnableDuplicates_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CourseLeaderboard.CompareToParRecord
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Relative != nullptr)
		*Relative = params.Relative;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.CompareRankToPar
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RanksAbove != nullptr)
		*RanksAbove = params.RanksAbove;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseLeaderboard.AddRecord
// ()
// Parameters:
// struct FBTL_LeaderboardRecord  NewEntry                       (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTL_CourseLeaderboard::AddRecord(const struct FBTL_LeaderboardRecord& NewEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseLeaderboard.AddRecord");

	UBTL_CourseLeaderboard_AddRecord_Params params;
	params.NewEntry = NewEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseMapData.AreLabelLocationsValid
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_CourseMapData::AreLabelLocationsValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseMapData.AreLabelLocationsValid");

	UBTL_CourseMapData_AreLabelLocationsValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandLibraryBase.MakeDefaultByteToNameMap
// ()
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
// ()
// Parameters:
// struct FName                   SkillId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_CommandLibraryBase::IsSkillEquippable(const struct FName& SkillId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandLibraryBase.IsSkillEquippable");

	UBTL_CommandLibraryBase_IsSkillEquippable_Params params;
	params.SkillId = SkillId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandLibraryBase.IsSkillEquappable
// ()
// Parameters:
// struct FName                   SkillId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_CommandLibraryBase::IsSkillEquappable(const struct FName& SkillId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandLibraryBase.IsSkillEquappable");

	UBTL_CommandLibraryBase_IsSkillEquappable_Params params;
	params.SkillId = SkillId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandLibraryBase.IsAttackEquippable
// ()
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
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_CommandLibraryBase::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandLibraryBase.Initialize");

	UBTL_CommandLibraryBase_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandLibraryBase.FindRequiredItem
// ()
// Parameters:
// struct FName                   Attack                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBTL_CommandLibraryBase::FindRequiredItem(const struct FName& Attack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandLibraryBase.FindRequiredItem");

	UBTL_CommandLibraryBase_FindRequiredItem_Params params;
	params.Attack = Attack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandLibraryBase.FindAttackByItem
// ()
// Parameters:
// struct FName                   SkillItem                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBTL_CommandLibraryBase::FindAttackByItem(const struct FName& SkillItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandLibraryBase.FindAttackByItem");

	UBTL_CommandLibraryBase_FindAttackByItem_Params params;
	params.SkillItem = SkillItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandLibraryBase.ConvertCommandsByteToName
// ()
// Parameters:
// TArray<unsigned char>          Input                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UBTL_CommandLibraryBase::ConvertCommandsByteToName(TArray<unsigned char> Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandLibraryBase.ConvertCommandsByteToName");

	UBTL_CommandLibraryBase_ConvertCommandsByteToName_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandLibraryBase.ConvertCommandByteToName
// ()
// Parameters:
// unsigned char                  Input                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBTL_CommandLibraryBase::ConvertCommandByteToName(unsigned char Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandLibraryBase.ConvertCommandByteToName");

	UBTL_CommandLibraryBase_ConvertCommandByteToName_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandLibraryBase.CheckPreviousAttacks
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CommandLibraryBase.CacheComboAttack
// ()
// Parameters:
// struct FName                   Attack                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UBTL_CommandLibraryBase::CacheComboAttack(const struct FName& Attack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CommandLibraryBase.CacheComboAttack");

	UBTL_CommandLibraryBase_CacheComboAttack_Params params;
	params.Attack = Attack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CommandLibraryBase.CacheAttackLookupData
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTLDataTableFunctionLibrary.GetDataTableRowFromName
// ()
// Parameters:
// class UScriptStruct*           Struct                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDataTable*              Table                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FTableRowBase           OutRow                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTLDataTableFunctionLibrary::GetDataTableRowFromName(class UScriptStruct* Struct, class UDataTable* Table, const struct FName& RowName, struct FTableRowBase* OutRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLDataTableFunctionLibrary.GetDataTableRowFromName");

	UBTLDataTableFunctionLibrary_GetDataTableRowFromName_Params params;
	params.Struct = Struct;
	params.Table = Table;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRow != nullptr)
		*OutRow = params.OutRow;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_EnemySearchPath.SetupOrigin
// ()
// Parameters:
// int                            GoalIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_EnemySearchPath::SetupOrigin(int GoalIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_EnemySearchPath.SetupOrigin");

	UBTL_EnemySearchPath_SetupOrigin_Params params;
	params.GoalIndex = GoalIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_EnemySearchPath.SetupInsert
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_EnemySearchPath.Insert
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_EnemySearchPath.FindAndUsePath
// ()
// Parameters:
// int                            Start                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Route                          (Parm, OutParm, ZeroConstructor)

void UBTL_EnemySearchPath::FindAndUsePath(int Start, TArray<int>* Route)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_EnemySearchPath.FindAndUsePath");

	UBTL_EnemySearchPath_FindAndUsePath_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Route != nullptr)
		*Route = params.Route;
}


// Function BattleLabo.BTL_EnemySearchPath.AddNode
// ()
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTL_EnemySearchPath::AddNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_EnemySearchPath.AddNode");

	UBTL_EnemySearchPath_AddNode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_EnemySearchPath.AddEdge
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_ActionSolverComponent.TickActionTimers
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_ActionSolverComponent.ResetCurrentActionTimer
// ()
// Parameters:
// unsigned char                  Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_ActionSolverComponent::ResetCurrentActionTimer(unsigned char Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ActionSolverComponent.ResetCurrentActionTimer");

	UBTL_ActionSolverComponent_ResetCurrentActionTimer_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_ActionSolverComponent.InitializeActionTimers
// ()
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_ActionSolverComponent::InitializeActionTimers(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ActionSolverComponent.InitializeActionTimers");

	UBTL_ActionSolverComponent_InitializeActionTimers_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_ActionSolverComponent.GetTimePassedSinceAction
// ()
// Parameters:
// unsigned char                  Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_ActionSolverComponent::GetTimePassedSinceAction(unsigned char Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ActionSolverComponent.GetTimePassedSinceAction");

	UBTL_ActionSolverComponent_GetTimePassedSinceAction_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_ActionSolverComponent.GetCurrentActionTimer
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_ActionSolverComponent::GetCurrentActionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ActionSolverComponent.GetCurrentActionTimer");

	UBTL_ActionSolverComponent_GetCurrentActionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_GoalpostBehavior.OnPlayerEntered
// ()
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


// Function BattleLabo.BTLKismetLibrary.XorIntegerFlag
// ()
// Parameters:
// int                            lflag                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            rflag                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTLKismetLibrary::XorIntegerFlag(int lflag, int rflag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.XorIntegerFlag");

	UBTLKismetLibrary_XorIntegerFlag_Params params;
	params.lflag = lflag;
	params.rflag = rflag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.SetIntegerFlag
// ()
// Parameters:
// int                            flag                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            bitindex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Status                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTLKismetLibrary::SetIntegerFlag(int flag, int bitindex, bool Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.SetIntegerFlag");

	UBTLKismetLibrary_SetIntegerFlag_Params params;
	params.flag = flag;
	params.bitindex = bitindex;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.OrIntegerFlag
// ()
// Parameters:
// int                            lflag                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            rflag                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTLKismetLibrary::OrIntegerFlag(int lflag, int rflag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.OrIntegerFlag");

	UBTLKismetLibrary_OrIntegerFlag_Params params;
	params.lflag = lflag;
	params.rflag = rflag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.NotIntegerFlag
// ()
// Parameters:
// int                            flag                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTLKismetLibrary::NotIntegerFlag(int flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.NotIntegerFlag");

	UBTLKismetLibrary_NotIntegerFlag_Params params;
	params.flag = flag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.IntersectionOfLineAndCircle
// ()
// Parameters:
// struct FVector                 _startPos                      (Parm, IsPlainOldData)
// struct FVector                 _endPos                        (Parm, IsPlainOldData)
// struct FVector                 _circleCenterPos               (Parm, IsPlainOldData)
// float                          _rad                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UBTLKismetLibrary::IntersectionOfLineAndCircle(const struct FVector& _startPos, const struct FVector& _endPos, const struct FVector& _circleCenterPos, float _rad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.IntersectionOfLineAndCircle");

	UBTLKismetLibrary_IntersectionOfLineAndCircle_Params params;
	params._startPos = _startPos;
	params._endPos = _endPos;
	params._circleCenterPos = _circleCenterPos;
	params._rad = _rad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetRowByNameSyncActionInfo
// ()
// Parameters:
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   pName                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FSyncActionInfoNative   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSyncActionInfoNative UBTLKismetLibrary::GetRowByNameSyncActionInfo(class UDataTable* DataTable, const struct FName& pName, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetRowByNameSyncActionInfo");

	UBTLKismetLibrary_GetRowByNameSyncActionInfo_Params params;
	params.DataTable = DataTable;
	params.pName = pName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetRowByNameMoveGapCondition
// ()
// Parameters:
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   pName                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FMoveGapConditionNative ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMoveGapConditionNative UBTLKismetLibrary::GetRowByNameMoveGapCondition(class UDataTable* DataTable, const struct FName& pName, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetRowByNameMoveGapCondition");

	UBTLKismetLibrary_GetRowByNameMoveGapCondition_Params params;
	params.DataTable = DataTable;
	params.pName = pName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetRowByNameMotionDatabaseElement
// ()
// Parameters:
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   pName                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FMotionDatabaseElementNative ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMotionDatabaseElementNative UBTLKismetLibrary::GetRowByNameMotionDatabaseElement(class UDataTable* DataTable, const struct FName& pName, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetRowByNameMotionDatabaseElement");

	UBTLKismetLibrary_GetRowByNameMotionDatabaseElement_Params params;
	params.DataTable = DataTable;
	params.pName = pName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetNotifyTriggerTime
// ()
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify*             Notify                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTLKismetLibrary::GetNotifyTriggerTime(class UAnimMontage* Montage, class UAnimNotify* Notify)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetNotifyTriggerTime");

	UBTLKismetLibrary_GetNotifyTriggerTime_Params params;
	params.Montage = Montage;
	params.Notify = Notify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetNotifyTrigger
// ()
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  NotifyClass                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartRange                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndRange                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Last                           (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify*             ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimNotify* UBTLKismetLibrary::GetNotifyTrigger(class UAnimMontage* Montage, class UClass* NotifyClass, float StartRange, float EndRange, bool Last)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetNotifyTrigger");

	UBTLKismetLibrary_GetNotifyTrigger_Params params;
	params.Montage = Montage;
	params.NotifyClass = NotifyClass;
	params.StartRange = StartRange;
	params.EndRange = EndRange;
	params.Last = Last;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetNotifyStateStartTime
// ()
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState*        NotifyState                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTLKismetLibrary::GetNotifyStateStartTime(class UAnimMontage* Montage, class UAnimNotifyState* NotifyState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetNotifyStateStartTime");

	UBTLKismetLibrary_GetNotifyStateStartTime_Params params;
	params.Montage = Montage;
	params.NotifyState = NotifyState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetNotifyStates
// ()
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  StateClass                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimNotifyState*> States                         (ConstParm, Parm, OutParm, ZeroConstructor)

void UBTLKismetLibrary::GetNotifyStates(class UAnimMontage* Montage, class UClass* StateClass, TArray<class UAnimNotifyState*> States)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetNotifyStates");

	UBTLKismetLibrary_GetNotifyStates_Params params;
	params.Montage = Montage;
	params.StateClass = StateClass;
	params.States = States;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTLKismetLibrary.GetNotifyStateEndTime
// ()
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState*        NotifyState                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTLKismetLibrary::GetNotifyStateEndTime(class UAnimMontage* Montage, class UAnimNotifyState* NotifyState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetNotifyStateEndTime");

	UBTLKismetLibrary_GetNotifyStateEndTime_Params params;
	params.Montage = Montage;
	params.NotifyState = NotifyState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetNotifyStateAtTime
// ()
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  StateClass                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Last                           (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState*        ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimNotifyState* UBTLKismetLibrary::GetNotifyStateAtTime(class UAnimMontage* Montage, class UClass* StateClass, float Time, bool Last)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetNotifyStateAtTime");

	UBTLKismetLibrary_GetNotifyStateAtTime_Params params;
	params.Montage = Montage;
	params.StateClass = StateClass;
	params.Time = Time;
	params.Last = Last;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetNotifyState
// ()
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  StateClass                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartRange                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndRange                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Last                           (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState*        ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimNotifyState* UBTLKismetLibrary::GetNotifyState(class UAnimMontage* Montage, class UClass* StateClass, float StartRange, float EndRange, bool Last)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetNotifyState");

	UBTLKismetLibrary_GetNotifyState_Params params;
	params.Montage = Montage;
	params.StateClass = StateClass;
	params.StartRange = StartRange;
	params.EndRange = EndRange;
	params.Last = Last;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetIntegerFlag
// ()
// Parameters:
// int                            flag                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            bitindex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTLKismetLibrary::GetIntegerFlag(int flag, int bitindex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetIntegerFlag");

	UBTLKismetLibrary_GetIntegerFlag_Params params;
	params.flag = flag;
	params.bitindex = bitindex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.GetCustomNotifyTime
// ()
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NotifyName                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTLKismetLibrary::GetCustomNotifyTime(class UAnimMontage* Montage, const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.GetCustomNotifyTime");

	UBTLKismetLibrary_GetCustomNotifyTime_Params params;
	params.Montage = Montage;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.EstimateNextNameInSequence
// ()
// Parameters:
// TArray<struct FName>           Names                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Confidence                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UBTLKismetLibrary::EstimateNextNameInSequence(TArray<struct FName> Names, int* Confidence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.EstimateNextNameInSequence");

	UBTLKismetLibrary_EstimateNextNameInSequence_Params params;
	params.Names = Names;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Confidence != nullptr)
		*Confidence = params.Confidence;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.EllipseContains
// ()
// Parameters:
// struct FVector2D               Point                          (Parm, IsPlainOldData)
// struct FVector2D               Radii                          (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTLKismetLibrary::EllipseContains(const struct FVector2D& Point, const struct FVector2D& Radii)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.EllipseContains");

	UBTLKismetLibrary_EllipseContains_Params params;
	params.Point = Point;
	params.Radii = Radii;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.EllipseClamp
// ()
// Parameters:
// struct FVector2D               Point                          (Parm, IsPlainOldData)
// struct FVector2D               Radii                          (Parm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UBTLKismetLibrary::EllipseClamp(const struct FVector2D& Point, const struct FVector2D& Radii)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.EllipseClamp");

	UBTLKismetLibrary_EllipseClamp_Params params;
	params.Point = Point;
	params.Radii = Radii;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.ContainsNotifyState
// ()
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotifyState*        NotifyState                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTLKismetLibrary::ContainsNotifyState(class UAnimMontage* Montage, class UAnimNotifyState* NotifyState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.ContainsNotifyState");

	UBTLKismetLibrary_ContainsNotifyState_Params params;
	params.Montage = Montage;
	params.NotifyState = NotifyState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.CallRemoteLevelEvent
// ()
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTLKismetLibrary::CallRemoteLevelEvent(const struct FName& EventName, class AActor* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.CallRemoteLevelEvent");

	UBTLKismetLibrary_CallRemoteLevelEvent_Params params;
	params.EventName = EventName;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTLKismetLibrary.AndIntegerFlag
// ()
// Parameters:
// int                            lflag                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            rflag                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTLKismetLibrary::AndIntegerFlag(int lflag, int rflag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTLKismetLibrary.AndIntegerFlag");

	UBTLKismetLibrary_AndIntegerFlag_Params params;
	params.lflag = lflag;
	params.rflag = rflag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_MeshFaderComponent.StartFadeOut
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_MeshFaderComponent.StartFadeIn
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_MeshFaderComponent.SetMeshComponents
// ()
// Parameters:
// TArray<class UMeshComponent*>  Components                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBTL_MeshFaderComponent::SetMeshComponents(TArray<class UMeshComponent*> Components)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_MeshFaderComponent.SetMeshComponents");

	UBTL_MeshFaderComponent_SetMeshComponents_Params params;
	params.Components = Components;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_MeshFaderComponent.CreateFadeMaterial
// ()
// Parameters:
// class UMaterialInterface*      SourceMaterial                 (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UBTL_MeshFaderComponent::CreateFadeMaterial(class UMaterialInterface* SourceMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_MeshFaderComponent.CreateFadeMaterial");

	UBTL_MeshFaderComponent_CreateFadeMaterial_Params params;
	params.SourceMaterial = SourceMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_MeshFaderComponent.AddMeshComponent
// ()
// Parameters:
// class UMeshComponent*          Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBTL_MeshFaderComponent::AddMeshComponent(class UMeshComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_MeshFaderComponent.AddMeshComponent");

	UBTL_MeshFaderComponent_AddMeshComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_NavigationFunctionLibrary.TestPathExists
// ()
// Parameters:
// class UObject*                 Querier                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 EndLocation                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_NavigationFunctionLibrary::TestPathExists(class UObject* Querier, const struct FVector& StartLocation, const struct FVector& EndLocation, class UClass* FilterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_NavigationFunctionLibrary.TestPathExists");

	UBTL_NavigationFunctionLibrary_TestPathExists_Params params;
	params.Querier = Querier;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_NavigationFunctionLibrary.GetRecastNavmesh
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ARecastNavMesh*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ARecastNavMesh* UBTL_NavigationFunctionLibrary::GetRecastNavmesh(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_NavigationFunctionLibrary.GetRecastNavmesh");

	UBTL_NavigationFunctionLibrary_GetRecastNavmesh_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_NavigationFunctionLibrary.FindDistanceToWall
// ()
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartLoc                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class ARecastNavMesh*          NavData                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxDistance                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutClosestPointOnWall          (Parm, OutParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_NavigationFunctionLibrary::FindDistanceToWall(class UObject* WorldContextObject, const struct FVector& StartLoc, class UClass* FilterClass, class ARecastNavMesh* NavData, float MaxDistance, struct FVector* OutClosestPointOnWall)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_NavigationFunctionLibrary.FindDistanceToWall");

	UBTL_NavigationFunctionLibrary_FindDistanceToWall_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StartLoc = StartLoc;
	params.FilterClass = FilterClass;
	params.NavData = NavData;
	params.MaxDistance = MaxDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutClosestPointOnWall != nullptr)
		*OutClosestPointOnWall = params.OutClosestPointOnWall;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_NPCLODSystem.SetSpline
// ()
// Parameters:
// class USplineComponent*        InSpline                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBTL_NPCLODSystem::SetSpline(class USplineComponent* InSpline)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_NPCLODSystem.SetSpline");

	UBTL_NPCLODSystem_SetSpline_Params params;
	params.InSpline = InSpline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_NPCLODSystem.RegisterNPCs
// ()
// Parameters:
// TArray<class ABTL_Character*>  NPCs                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBTL_NPCLODSystem::RegisterNPCs(TArray<class ABTL_Character*> NPCs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_NPCLODSystem.RegisterNPCs");

	UBTL_NPCLODSystem_RegisterNPCs_Params params;
	params.NPCs = NPCs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_PawnSeperatorComponent.GetVirtualActorLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBTL_PawnSeperatorComponent::GetVirtualActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_PawnSeperatorComponent.GetVirtualActorLocation");

	UBTL_PawnSeperatorComponent_GetVirtualActorLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_PawnSeperatorComponent.FindSeperationFor
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SeperationVector != nullptr)
		*SeperationVector = params.SeperationVector;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_PawnSeperatorComponent.CanLeadSeperationCalc
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_PawnSeperatorComponent::CanLeadSeperationCalc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_PawnSeperatorComponent.CanLeadSeperationCalc");

	UBTL_PawnSeperatorComponent_CanLeadSeperationCalc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_PawnSeperatorComponent.CalculateActorSeperation
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SeperationVector != nullptr)
		*SeperationVector = params.SeperationVector;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_RagdollSolverComponent.SnapActorToPelvis
// ()

void UBTL_RagdollSolverComponent::SnapActorToPelvis()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RagdollSolverComponent.SnapActorToPelvis");

	UBTL_RagdollSolverComponent_SnapActorToPelvis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_RagdollSolverComponent.ResetReflectTransformCache
// ()

void UBTL_RagdollSolverComponent::ResetReflectTransformCache()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RagdollSolverComponent.ResetReflectTransformCache");

	UBTL_RagdollSolverComponent_ResetReflectTransformCache_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_RagdollSolverComponent.PreRagdollOverlap
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_RagdollSolverComponent::PreRagdollOverlap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RagdollSolverComponent.PreRagdollOverlap");

	UBTL_RagdollSolverComponent_PreRagdollOverlap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_RagdollSolverComponent.MoveActorSafelyToPelvis
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_RagdollSolverComponent::MoveActorSafelyToPelvis()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RagdollSolverComponent.MoveActorSafelyToPelvis");

	UBTL_RagdollSolverComponent_MoveActorSafelyToPelvis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_RagdollSolverComponent.InitPreRagdollCollision
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_RagdollSolverComponent.GetWorldSpacePelvisLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBTL_RagdollSolverComponent::GetWorldSpacePelvisLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RagdollSolverComponent.GetWorldSpacePelvisLocation");

	UBTL_RagdollSolverComponent_GetWorldSpacePelvisLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_RagdollSolverComponent.GetVirtualActorLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBTL_RagdollSolverComponent::GetVirtualActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RagdollSolverComponent.GetVirtualActorLocation");

	UBTL_RagdollSolverComponent_GetVirtualActorLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_RagdollSolverComponent.GetIsRagdolling
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_RagdollSolverComponent::GetIsRagdolling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RagdollSolverComponent.GetIsRagdolling");

	UBTL_RagdollSolverComponent_GetIsRagdolling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_RagdollSolverComponent.GetBeingRagdoll
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_RagdollSolverComponent::GetBeingRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RagdollSolverComponent.GetBeingRagdoll");

	UBTL_RagdollSolverComponent_GetBeingRagdoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_RagdollSolverComponent.EnablePreRagdollCollision
// ()
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_RagdollSolverComponent::EnablePreRagdollCollision(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RagdollSolverComponent.EnablePreRagdollCollision");

	UBTL_RagdollSolverComponent_EnablePreRagdollCollision_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_NPCLODComponent.GetState
// ()
// Parameters:
// EBTL_NPCLODState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EBTL_NPCLODState UBTL_NPCLODComponent::GetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_NPCLODComponent.GetState");

	UBTL_NPCLODComponent_GetState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_NPCLODComponent.GetSpawnLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBTL_NPCLODComponent::GetSpawnLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_NPCLODComponent.GetSpawnLocation");

	UBTL_NPCLODComponent_GetSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BattleRallyFunctionLibrary.MakeTimeMSCFromFloat
// ()
// Parameters:
// float                          Seconds                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FBTL_TimeMSC            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FBTL_TimeMSC UBTL_BattleRallyFunctionLibrary::MakeTimeMSCFromFloat(float Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BattleRallyFunctionLibrary.MakeTimeMSCFromFloat");

	UBTL_BattleRallyFunctionLibrary_MakeTimeMSCFromFloat_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BattleRallyFunctionLibrary.MakeFloatFromTimeMSC
// ()
// Parameters:
// struct FBTL_TimeMSC            Time                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_BattleRallyFunctionLibrary::MakeFloatFromTimeMSC(const struct FBTL_TimeMSC& Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BattleRallyFunctionLibrary.MakeFloatFromTimeMSC");

	UBTL_BattleRallyFunctionLibrary_MakeFloatFromTimeMSC_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BattleRallyFunctionLibrary.IsTimeMSCZero
// ()
// Parameters:
// struct FBTL_TimeMSC            Time                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_BattleRallyFunctionLibrary::IsTimeMSCZero(const struct FBTL_TimeMSC& Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BattleRallyFunctionLibrary.IsTimeMSCZero");

	UBTL_BattleRallyFunctionLibrary_IsTimeMSCZero_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BattleRallyFunctionLibrary.CreateRecordBook
// ()
// Parameters:
// TArray<class UBTL_CourseDataAsset*> Courses                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UBTL_CourseRecordBook*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBTL_CourseRecordBook* UBTL_BattleRallyFunctionLibrary::CreateRecordBook(TArray<class UBTL_CourseDataAsset*> Courses)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BattleRallyFunctionLibrary.CreateRecordBook");

	UBTL_BattleRallyFunctionLibrary_CreateRecordBook_Params params;
	params.Courses = Courses;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BattleRallyFunctionLibrary.CreateLeaderboard
// ()
// Parameters:
// struct FName                   Course                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData)
// class UBTL_CourseLeaderboard*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBTL_CourseLeaderboard* UBTL_BattleRallyFunctionLibrary::CreateLeaderboard(const struct FName& Course, class UDataTable* DataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BattleRallyFunctionLibrary.CreateLeaderboard");

	UBTL_BattleRallyFunctionLibrary_CreateLeaderboard_Params params;
	params.Course = Course;
	params.DataTable = DataTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_BattleRallyFunctionLibrary.CreateCourseDataAsset
// ()
// Parameters:
// TArray<struct FDataTableRowHandle> Battles                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UBTL_CourseDataAsset*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBTL_CourseDataAsset* UBTL_BattleRallyFunctionLibrary::CreateCourseDataAsset(TArray<struct FDataTableRowHandle> Battles)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_BattleRallyFunctionLibrary.CreateCourseDataAsset");

	UBTL_BattleRallyFunctionLibrary_CreateCourseDataAsset_Params params;
	params.Battles = Battles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_ReplayRecordComponent.SetReplayRecordTime
// ()
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_ReplayRecordComponent::SetReplayRecordTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ReplayRecordComponent.SetReplayRecordTime");

	UBTL_ReplayRecordComponent_SetReplayRecordTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_ReplayRecordComponent.GetStartGameTime
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_ReplayRecordComponent::GetStartGameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ReplayRecordComponent.GetStartGameTime");

	UBTL_ReplayRecordComponent_GetStartGameTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_ReplayRecordComponent.GetEndGameTime
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_ReplayRecordComponent::GetEndGameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ReplayRecordComponent.GetEndGameTime");

	UBTL_ReplayRecordComponent_GetEndGameTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_ReplaySkeletalMeshComponent.ToggleReplayStopSwitch
// ()

void UBTL_ReplaySkeletalMeshComponent::ToggleReplayStopSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ReplaySkeletalMeshComponent.ToggleReplayStopSwitch");

	UBTL_ReplaySkeletalMeshComponent_ToggleReplayStopSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_ReplaySkeletalMeshComponent.StartReplay
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_ReplaySkeletalMeshComponent.ReplayToHead
// ()

void UBTL_ReplaySkeletalMeshComponent::ReplayToHead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ReplaySkeletalMeshComponent.ReplayToHead");

	UBTL_ReplaySkeletalMeshComponent_ReplayToHead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_ReplaySkeletalMeshComponent.FinishReplay
// ()

void UBTL_ReplaySkeletalMeshComponent::FinishReplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ReplaySkeletalMeshComponent.FinishReplay");

	UBTL_ReplaySkeletalMeshComponent_FinishReplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_ReplaySkeletalMeshComponent.AddReplayTime
// ()
// Parameters:
// float                          AddTime                        (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_ReplaySkeletalMeshComponent::AddReplayTime(float AddTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_ReplaySkeletalMeshComponent.AddReplayTime");

	UBTL_ReplaySkeletalMeshComponent_AddReplayTime_Params params;
	params.AddTime = AddTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_RuntimeAttackDB.SearchMontages
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Results != nullptr)
		*Results = params.Results;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_RuntimeAttackDB.LoadMontagesFromDBAsset
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_RuntimeAttackDB.IsLoading
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_RuntimeAttackDB::IsLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_RuntimeAttackDB.IsLoading");

	UBTL_RuntimeAttackDB_IsLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SequencePlayer.SetIgnoreUpdateCameraCut
// ()
// Parameters:
// bool                           bNewIgnore                     (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_SequencePlayer::SetIgnoreUpdateCameraCut(bool bNewIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SequencePlayer.SetIgnoreUpdateCameraCut");

	UBTL_SequencePlayer_SetIgnoreUpdateCameraCut_Params params;
	params.bNewIgnore = bNewIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SequencePlayer.RegisterSwitchObject
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SequencePlayer.CleanUpInternalSpawnedObjects
// ()

void UBTL_SequencePlayer::CleanUpInternalSpawnedObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SequencePlayer.CleanUpInternalSpawnedObjects");

	UBTL_SequencePlayer_CleanUpInternalSpawnedObjects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SplineFunctionLibrary.FindDistanceClosestToWorldLocation
// ()
// Parameters:
// class USplineComponent*        spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_SplineFunctionLibrary::FindDistanceClosestToWorldLocation(class USplineComponent* spline, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SplineFunctionLibrary.FindDistanceClosestToWorldLocation");

	UBTL_SplineFunctionLibrary_FindDistanceClosestToWorldLocation_Params params;
	params.spline = spline;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SplineFunctionLibrary.ConvertInputKeyToDistance
// ()
// Parameters:
// class USplineComponent*        spline                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          InputKey                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_SplineFunctionLibrary::ConvertInputKeyToDistance(class USplineComponent* spline, float InputKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SplineFunctionLibrary.ConvertInputKeyToDistance");

	UBTL_SplineFunctionLibrary_ConvertInputKeyToDistance_Params params;
	params.spline = spline;
	params.InputKey = InputKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SplineNavigationComponent.GetSplineRightVector
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBTL_SplineNavigationComponent::GetSplineRightVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SplineNavigationComponent.GetSplineRightVector");

	UBTL_SplineNavigationComponent_GetSplineRightVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SplineNavigationComponent.GetDistanceAlongSpline
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_SplineNavigationComponent::GetDistanceAlongSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SplineNavigationComponent.GetDistanceAlongSpline");

	UBTL_SplineNavigationComponent_GetDistanceAlongSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SplineNavigationComponent.GetDistanceAlongNormal
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_SplineNavigationComponent::GetDistanceAlongNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SplineNavigationComponent.GetDistanceAlongNormal");

	UBTL_SplineNavigationComponent_GetDistanceAlongNormal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SplineNavigationComponent.GetClosestSplineLocation
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBTL_SplineNavigationComponent::GetClosestSplineLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SplineNavigationComponent.GetClosestSplineLocation");

	UBTL_SplineNavigationComponent_GetClosestSplineLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SplineNavigationComponent.EstimateLocationAhead
// ()
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBTL_SplineNavigationComponent::EstimateLocationAhead(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SplineNavigationComponent.EstimateLocationAhead");

	UBTL_SplineNavigationComponent_EstimateLocationAhead_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SplineNavigationComponent.CalculateFollowDirection
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SurroundCoordinator.TryGetAnchorAngleWS
// ()
// Parameters:
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_SurroundCoordinator::TryGetAnchorAngleWS(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.TryGetAnchorAngleWS");

	UBTL_SurroundCoordinator_TryGetAnchorAngleWS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SurroundCoordinator.TryCalculateDirectionWS
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SurroundCoordinator.SetPlayer
// ()
// Parameters:
// class ABTL_Character*          Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_SurroundCoordinator::SetPlayer(class ABTL_Character* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.SetPlayer");

	UBTL_SurroundCoordinator_SetPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SurroundCoordinator.SetNewAnchor
// ()
// Parameters:
// class AAIController*           Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_SurroundCoordinator::SetNewAnchor(class AAIController* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.SetNewAnchor");

	UBTL_SurroundCoordinator_SetNewAnchor_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SurroundCoordinator.Reserve
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SurroundCoordinator.RemoveNPC
// ()
// Parameters:
// class AAIController*           NPC                            (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_SurroundCoordinator::RemoveNPC(class AAIController* NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.RemoveNPC");

	UBTL_SurroundCoordinator_RemoveNPC_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SurroundCoordinator.HasReservation
// ()
// Parameters:
// class AAIController*           ItemToFind                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBTL_SurroundCoordinator::HasReservation(class AAIController* ItemToFind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.HasReservation");

	UBTL_SurroundCoordinator_HasReservation_Params params;
	params.ItemToFind = ItemToFind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SurroundCoordinator.GetOffsetForIndex
// ()
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBTL_SurroundCoordinator::GetOffsetForIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.GetOffsetForIndex");

	UBTL_SurroundCoordinator_GetOffsetForIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SurroundCoordinator.GetNPCReservationIndex
// ()
// Parameters:
// class AAIController*           ItemToFind                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTL_SurroundCoordinator::GetNPCReservationIndex(class AAIController* ItemToFind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.GetNPCReservationIndex");

	UBTL_SurroundCoordinator_GetNPCReservationIndex_Params params;
	params.ItemToFind = ItemToFind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SurroundCoordinator.GetClosestOpenIndex
// ()
// Parameters:
// class AAIController*           NPC                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBTL_SurroundCoordinator::GetClosestOpenIndex(class AAIController* NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.GetClosestOpenIndex");

	UBTL_SurroundCoordinator_GetClosestOpenIndex_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SurroundCoordinator.GetAnchorNPC
// ()
// Parameters:
// class AAIController*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AAIController* UBTL_SurroundCoordinator::GetAnchorNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.GetAnchorNPC");

	UBTL_SurroundCoordinator_GetAnchorNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_SurroundCoordinator.ClearAllReservationsButAnchor
// ()

void UBTL_SurroundCoordinator::ClearAllReservationsButAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.ClearAllReservationsButAnchor");

	UBTL_SurroundCoordinator_ClearAllReservationsButAnchor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_SurroundCoordinator.ClearAllReservations
// ()

void UBTL_SurroundCoordinator::ClearAllReservations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_SurroundCoordinator.ClearAllReservations");

	UBTL_SurroundCoordinator_ClearAllReservations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.UndulationInfoFunctionLibrary.SetupUndulationInfo
// ()
// Parameters:
// struct FUndulationInfoContainer Container                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            InfoCount                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            WallPointCount                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            StepPointCount                 (Parm, ZeroConstructor, IsPlainOldData)

void UUndulationInfoFunctionLibrary::SetupUndulationInfo(const struct FUndulationInfoContainer& Container, int InfoCount, int WallPointCount, int StepPointCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.UndulationInfoFunctionLibrary.SetupUndulationInfo");

	UUndulationInfoFunctionLibrary_SetupUndulationInfo_Params params;
	params.Container = Container;
	params.InfoCount = InfoCount;
	params.WallPointCount = WallPointCount;
	params.StepPointCount = StepPointCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.UndulationInfoFunctionLibrary.SetUndulationInfo
// ()
// Parameters:
// struct FUndulationInfoContainer Container                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            InfoIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FUndulationInfoParamNative Param                          (ConstParm, Parm, OutParm, ReferenceParm)

void UUndulationInfoFunctionLibrary::SetUndulationInfo(const struct FUndulationInfoContainer& Container, int InfoIndex, const struct FUndulationInfoParamNative& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.UndulationInfoFunctionLibrary.SetUndulationInfo");

	UUndulationInfoFunctionLibrary_SetUndulationInfo_Params params;
	params.Container = Container;
	params.InfoIndex = InfoIndex;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.UndulationInfoFunctionLibrary.SetRaycastHitpointInfo
// ()
// Parameters:
// struct FUndulationInfoContainer Container                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            InfoIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// ERaycastHitpointInfoType       Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRaycastHitpointInfoNative Point                          (ConstParm, Parm, OutParm, ReferenceParm)

void UUndulationInfoFunctionLibrary::SetRaycastHitpointInfo(const struct FUndulationInfoContainer& Container, int InfoIndex, ERaycastHitpointInfoType Type, int PointIndex, const struct FRaycastHitpointInfoNative& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.UndulationInfoFunctionLibrary.SetRaycastHitpointInfo");

	UUndulationInfoFunctionLibrary_SetRaycastHitpointInfo_Params params;
	params.Container = Container;
	params.InfoIndex = InfoIndex;
	params.Type = Type;
	params.PointIndex = PointIndex;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.UndulationInfoFunctionLibrary.GetUndulationInfoCount
// ()
// Parameters:
// struct FUndulationInfoContainer Container                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUndulationInfoFunctionLibrary::GetUndulationInfoCount(const struct FUndulationInfoContainer& Container)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.UndulationInfoFunctionLibrary.GetUndulationInfoCount");

	UUndulationInfoFunctionLibrary_GetUndulationInfoCount_Params params;
	params.Container = Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.UndulationInfoFunctionLibrary.GetUndulationInfo
// ()
// Parameters:
// struct FUndulationInfoContainer Container                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            InfoIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FUndulationInfoParamNative OutStruct                      (Parm, OutParm)
// int                            WallRaycastHitpointInfoCount   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            StepRaycastHitpointInfoCount   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUndulationInfoFunctionLibrary::GetUndulationInfo(const struct FUndulationInfoContainer& Container, int InfoIndex, struct FUndulationInfoParamNative* OutStruct, int* WallRaycastHitpointInfoCount, int* StepRaycastHitpointInfoCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.UndulationInfoFunctionLibrary.GetUndulationInfo");

	UUndulationInfoFunctionLibrary_GetUndulationInfo_Params params;
	params.Container = Container;
	params.InfoIndex = InfoIndex;

	auto flags = fn->FunctionFlags;

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
// ()
// Parameters:
// struct FUndulationInfoContainer Container                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            InfoIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// ERaycastHitpointInfoType       Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUndulationInfoFunctionLibrary::GetRaycastHitpointInfoCount(const struct FUndulationInfoContainer& Container, int InfoIndex, ERaycastHitpointInfoType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.UndulationInfoFunctionLibrary.GetRaycastHitpointInfoCount");

	UUndulationInfoFunctionLibrary_GetRaycastHitpointInfoCount_Params params;
	params.Container = Container;
	params.InfoIndex = InfoIndex;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.UndulationInfoFunctionLibrary.GetRaycastHitpointInfo
// ()
// Parameters:
// struct FUndulationInfoContainer Container                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            InfoIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// ERaycastHitpointInfoType       Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRaycastHitpointInfoNative OutStruct                      (Parm, OutParm)

void UUndulationInfoFunctionLibrary::GetRaycastHitpointInfo(const struct FUndulationInfoContainer& Container, int InfoIndex, ERaycastHitpointInfoType Type, int PointIndex, struct FRaycastHitpointInfoNative* OutStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.UndulationInfoFunctionLibrary.GetRaycastHitpointInfo");

	UUndulationInfoFunctionLibrary_GetRaycastHitpointInfo_Params params;
	params.Container = Container;
	params.InfoIndex = InfoIndex;
	params.Type = Type;
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutStruct != nullptr)
		*OutStruct = params.OutStruct;
}


// Function BattleLabo.UndulationInfoFunctionLibrary.GetEnableRaycastHitpointInfoCount
// ()
// Parameters:
// struct FUndulationInfoContainer Container                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            InfoIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// ERaycastHitpointInfoType       Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUndulationInfoFunctionLibrary::GetEnableRaycastHitpointInfoCount(const struct FUndulationInfoContainer& Container, int InfoIndex, ERaycastHitpointInfoType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.UndulationInfoFunctionLibrary.GetEnableRaycastHitpointInfoCount");

	UUndulationInfoFunctionLibrary_GetEnableRaycastHitpointInfoCount_Params params;
	params.Container = Container;
	params.InfoIndex = InfoIndex;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.UndulationInfoFunctionLibrary.ClearWorks
// ()
// Parameters:
// struct FUndulationInfoContainer Container                      (ConstParm, Parm, OutParm, ReferenceParm)

void UUndulationInfoFunctionLibrary::ClearWorks(const struct FUndulationInfoContainer& Container)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.UndulationInfoFunctionLibrary.ClearWorks");

	UUndulationInfoFunctionLibrary_ClearWorks_Params params;
	params.Container = Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_StatusComponent.SetHPFlag
// ()
// Parameters:
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UBTL_StatusComponent::SetHPFlag(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_StatusComponent.SetHPFlag");

	UBTL_StatusComponent_SetHPFlag_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_StatusComponent.IsZeroHP
// ()
// Parameters:
// bool                           IsZero                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_StatusComponent::IsZeroHP(bool* IsZero)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_StatusComponent.IsZeroHP");

	UBTL_StatusComponent_IsZeroHP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsZero != nullptr)
		*IsZero = params.IsZero;
}


// Function BattleLabo.BTL_StatusComponent.HasHP
// ()
// Parameters:
// bool                           IsPositive                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTL_StatusComponent::HasHP(bool* IsPositive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_StatusComponent.HasHP");

	UBTL_StatusComponent_HasHP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPositive != nullptr)
		*IsPositive = params.IsPositive;
}


// Function BattleLabo.CircleDrawComponent.ClearLength
// ()

void UCircleDrawComponent::ClearLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.CircleDrawComponent.ClearLength");

	UCircleDrawComponent_ClearLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.CircleDrawComponent.AddLength
// ()
// Parameters:
// float                          Length                         (Parm, ZeroConstructor, IsPlainOldData)

void UCircleDrawComponent::AddLength(float Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.CircleDrawComponent.AddLength");

	UCircleDrawComponent_AddLength_Params params;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.SquareDrawComponent.ClearSquare
// ()

void USquareDrawComponent::ClearSquare()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.SquareDrawComponent.ClearSquare");

	USquareDrawComponent_ClearSquare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.SquareDrawComponent.AddSquare
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CourseRecordBook.ReadSaveData
// ()
// Parameters:
// TArray<struct FBTL_CourseSaveData> SaveData                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBTL_CourseRecordBook::ReadSaveData(TArray<struct FBTL_CourseSaveData> SaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseRecordBook.ReadSaveData");

	UBTL_CourseRecordBook_ReadSaveData_Params params;
	params.SaveData = SaveData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.BTL_CourseRecordBook.GetLeaderboard
// ()
// Parameters:
// struct FName                   Course                         (Parm, ZeroConstructor, IsPlainOldData)
// class UBTL_CourseLeaderboard*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBTL_CourseLeaderboard* UBTL_CourseRecordBook::GetLeaderboard(const struct FName& Course)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseRecordBook.GetLeaderboard");

	UBTL_CourseRecordBook_GetLeaderboard_Params params;
	params.Course = Course;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.BTL_CourseRecordBook.CreatePlayerSaveData
// ()
// Parameters:
// TArray<struct FName>           PlayerCharacters               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FBTL_CourseSaveData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBTL_CourseSaveData> UBTL_CourseRecordBook::CreatePlayerSaveData(TArray<struct FName> PlayerCharacters)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.BTL_CourseRecordBook.CreatePlayerSaveData");

	UBTL_CourseRecordBook_CreatePlayerSaveData_Params params;
	params.PlayerCharacters = PlayerCharacters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.KeyConfig.SwitchKey
// ()
// Parameters:
// struct FName                   A                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   B                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UKeyConfig::SwitchKey(const struct FName& A, const struct FName& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.SwitchKey");

	UKeyConfig_SwitchKey_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.KeyConfig.SortObject
// ()
// Parameters:
// TArray<class UObject*>         TargetArray                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USortObjectCompare*      Compare                        (Parm, ZeroConstructor, IsPlainOldData)

void UKeyConfig::SortObject(class USortObjectCompare* Compare, TArray<class UObject*>* TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.SortObject");

	UKeyConfig_SortObject_Params params;
	params.Compare = Compare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;
}


// Function BattleLabo.KeyConfig.SortName
// ()
// Parameters:
// TArray<struct FName>           TargetArray                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USortNameCompare*        Compare                        (Parm, ZeroConstructor, IsPlainOldData)

void UKeyConfig::SortName(class USortNameCompare* Compare, TArray<struct FName>* TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.SortName");

	UKeyConfig_SortName_Params params;
	params.Compare = Compare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;
}


// Function BattleLabo.KeyConfig.SortActor
// ()
// Parameters:
// TArray<class AActor*>          TargetArray                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USortActorCompare*       Compare                        (Parm, ZeroConstructor, IsPlainOldData)

void UKeyConfig::SortActor(class USortActorCompare* Compare, TArray<class AActor*>* TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.SortActor");

	UKeyConfig_SortActor_Params params;
	params.Compare = Compare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetArray != nullptr)
		*TargetArray = params.TargetArray;
}


// Function BattleLabo.KeyConfig.SetMontagePosition
// ()
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Position                       (Parm, ZeroConstructor, IsPlainOldData)

void UKeyConfig::SetMontagePosition(class UAnimInstance* AnimInstance, class UAnimMontage* Montage, float Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.SetMontagePosition");

	UKeyConfig_SetMontagePosition_Params params;
	params.AnimInstance = AnimInstance;
	params.Montage = Montage;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.KeyConfig.SetMontageBlendOutTime
// ()
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UKeyConfig::SetMontageBlendOutTime(class UAnimMontage* Montage, float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.SetMontageBlendOutTime");

	UKeyConfig_SetMontageBlendOutTime_Params params;
	params.Montage = Montage;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.KeyConfig.SetMontageBlendInTime
// ()
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UKeyConfig::SetMontageBlendInTime(class UAnimMontage* Montage, float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.SetMontageBlendInTime");

	UKeyConfig_SetMontageBlendInTime_Params params;
	params.Montage = Montage;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.KeyConfig.ResetAction
// ()
// Parameters:
// struct FKey                    Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKeyConfig::ResetAction(const struct FKey& Key, const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.ResetAction");

	UKeyConfig_ResetAction_Params params;
	params.Key = Key;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.KeyConfig.IsPlayingAttackMontage
// ()
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKeyConfig::IsPlayingAttackMontage(class UAnimInstance* AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.IsPlayingAttackMontage");

	UKeyConfig_IsPlayingAttackMontage_Params params;
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.KeyConfig.GetMontageBlendOutTime
// ()
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKeyConfig::GetMontageBlendOutTime(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.GetMontageBlendOutTime");

	UKeyConfig_GetMontageBlendOutTime_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.KeyConfig.GetMontageBlendInTime
// ()
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKeyConfig::GetMontageBlendInTime(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.GetMontageBlendInTime");

	UKeyConfig_GetMontageBlendInTime_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.KeyConfig.GetKeyArray
// ()
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<struct FKey>            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FKey> UKeyConfig::GetKeyArray(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.GetKeyArray");

	UKeyConfig_GetKeyArray_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.KeyConfig.GetFollowingPathLength
// ()
// Parameters:
// class UPathFollowingComponent* PathFollowingComponent         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKeyConfig::GetFollowingPathLength(class UPathFollowingComponent* PathFollowingComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.GetFollowingPathLength");

	UKeyConfig_GetFollowingPathLength_Params params;
	params.PathFollowingComponent = PathFollowingComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.KeyConfig.GetCurrentMontagePosition
// ()
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKeyConfig::GetCurrentMontagePosition(class UAnimInstance* AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.GetCurrentMontagePosition");

	UKeyConfig_GetCurrentMontagePosition_Params params;
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.KeyConfig.GetCurrentMontagePlayRate
// ()
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKeyConfig::GetCurrentMontagePlayRate(class UAnimInstance* AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.GetCurrentMontagePlayRate");

	UKeyConfig_GetCurrentMontagePlayRate_Params params;
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.KeyConfig.EnableNextAttack
// ()
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKeyConfig::EnableNextAttack(class UAnimInstance* AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.EnableNextAttack");

	UKeyConfig_EnableNextAttack_Params params;
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.KeyConfig.DispCurrentAnimInfo
// ()
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)

void UKeyConfig::DispCurrentAnimInfo(class UAnimInstance* AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.DispCurrentAnimInfo");

	UKeyConfig_DispCurrentAnimInfo_Params params;
	params.AnimInstance = AnimInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleLabo.KeyConfig.CreateObjectForTemplate
// ()
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Template                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UKeyConfig::CreateObjectForTemplate(class UObject* Outer, const struct FName& Name, class UObject* Template)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.CreateObjectForTemplate");

	UKeyConfig_CreateObjectForTemplate_Params params;
	params.Outer = Outer;
	params.Name = Name;
	params.Template = Template;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.KeyConfig.CreateObject
// ()
// Parameters:
// class UClass*                  ObjectClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UKeyConfig::CreateObject(class UClass* ObjectClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.KeyConfig.CreateObject");

	UKeyConfig_CreateObject_Params params;
	params.ObjectClass = ObjectClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.Json.LoadJson
// ()
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// struct FJsonData               Data                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJson::LoadJson(const struct FString& Name, struct FJsonData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.Json.LoadJson");

	UJson_LoadJson_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function BattleLabo.Json.GetString
// ()
// Parameters:
// struct FJsonData               JsonData                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJson::GetString(const struct FJsonData& JsonData, const struct FString& Key, struct FString* String)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.Json.GetString");

	UJson_GetString_Params params;
	params.JsonData = JsonData;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;

	return params.ReturnValue;
}


// Function BattleLabo.Json.GetInt
// ()
// Parameters:
// struct FJsonData               JsonData                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            Int                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJson::GetInt(const struct FJsonData& JsonData, const struct FString& Key, int* Int)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.Json.GetInt");

	UJson_GetInt_Params params;
	params.JsonData = JsonData;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Int != nullptr)
		*Int = params.Int;

	return params.ReturnValue;
}


// Function BattleLabo.Json.GetFloat
// ()
// Parameters:
// struct FJsonData               JsonData                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Key                            (Parm, ZeroConstructor)
// float                          Float                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJson::GetFloat(const struct FJsonData& JsonData, const struct FString& Key, float* Float)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.Json.GetFloat");

	UJson_GetFloat_Params params;
	params.JsonData = JsonData;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Float != nullptr)
		*Float = params.Float;

	return params.ReturnValue;
}


// Function BattleLabo.Json.GetData
// ()
// Parameters:
// struct FJsonData               JsonData                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FJsonData               Data                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJson::GetData(const struct FJsonData& JsonData, const struct FString& Key, struct FJsonData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.Json.GetData");

	UJson_GetData_Params params;
	params.JsonData = JsonData;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function BattleLabo.Json.GetBool
// ()
// Parameters:
// struct FJsonData               JsonData                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           Bool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJson::GetBool(const struct FJsonData& JsonData, const struct FString& Key, bool* Bool)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.Json.GetBool");

	UJson_GetBool_Params params;
	params.JsonData = JsonData;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bool != nullptr)
		*Bool = params.Bool;

	return params.ReturnValue;
}


// Function BattleLabo.Json.GetArray
// ()
// Parameters:
// struct FJsonData               JsonData                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 Key                            (Parm, ZeroConstructor)
// TArray<struct FString>         Array                          (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJson::GetArray(const struct FJsonData& JsonData, const struct FString& Key, TArray<struct FString>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.Json.GetArray");

	UJson_GetArray_Params params;
	params.JsonData = JsonData;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

	return params.ReturnValue;
}


// Function BattleLabo.MyCharacterMovementComponent.UseRequestedVector
// ()
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UMyCharacterMovementComponent::UseRequestedVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleLabo.MyCharacterMovementComponent.UseRequestedVector");

	UMyCharacterMovementComponent_UseRequestedVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.SortNameCompare.Compare
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.SortObjectCompare.Compare
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BattleLabo.SortActorCompare.Compare
// ()
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

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
