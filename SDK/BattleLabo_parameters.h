#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BattleLabo.BTL_Character.TrySetRadiusSafe
struct ABTL_Character_TrySetRadiusSafe_Params
{
	float                                              TargetRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_Character.SetSkeletalMeshes
struct ABTL_Character_SetSkeletalMeshes_Params
{
	class USkeletalMesh*                               MainMesh;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USkeletalMesh*>                       SubMeshes;                                                // (ConstParm, Parm, ZeroConstructor)
	bool                                               bReinitPose;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_Character.SetAllPhysicsResponseToChannel
struct ABTL_Character_SetAllPhysicsResponseToChannel_Params
{
	class UPrimitiveComponent*                         PrimComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    NewResponse;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_Character.IsValidSectionNameFromCurrentMontage
struct ABTL_Character_IsValidSectionNameFromCurrentMontage_Params
{
	struct FName                                       InSectionName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_SequenceActor.SetSequence
struct ABTL_SequenceActor_SetSequence_Params
{
	class ULevelSequence*                              InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_SequenceActor.SetPlaybackSettingsPauseAtEnd
struct ABTL_SequenceActor_SetPlaybackSettingsPauseAtEnd_Params
{
	bool                                               bInPauseAtEnd;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_SequenceActor.Play
struct ABTL_SequenceActor_Play_Params
{
};

// Function BattleLabo.BTL_SequenceActor.OnUdateCameraCut
struct ABTL_SequenceActor_OnUdateCameraCut_Params
{
	class UObject*                                     CameraObject;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     UnlockIfCameraObject;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bJumpCut;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_SequenceActor.GetLevelSequence
struct ABTL_SequenceActor_GetLevelSequence_Params
{
	class ULevelSequence*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.ActorManagementComponentBase.Start
struct UActorManagementComponentBase_Start_Params
{
};

// Function BattleLabo.ActorManagementComponentBase.OnManagedActorUnregistered_ImplementableEvent
struct UActorManagementComponentBase_OnManagedActorUnregistered_ImplementableEvent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.ActorManagementComponentBase.OnManagedActorRegistered_ImplementableEvent
struct UActorManagementComponentBase_OnManagedActorRegistered_ImplementableEvent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.ActorManagementComponentBase.CheckManagedActor
struct UActorManagementComponentBase_CheckManagedActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_ActionSolverComponent.TickActionTimers
struct UBTL_ActionSolverComponent_TickActionTimers_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CurrentIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_ActionSolverComponent.ResetCurrentActionTimer
struct UBTL_ActionSolverComponent_ResetCurrentActionTimer_Params
{
	unsigned char                                      Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_ActionSolverComponent.InitializeActionTimers
struct UBTL_ActionSolverComponent_InitializeActionTimers_Params
{
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_ActionSolverComponent.GetTimePassedSinceAction
struct UBTL_ActionSolverComponent_GetTimePassedSinceAction_Params
{
	unsigned char                                      Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_ActionSolverComponent.GetCurrentActionTimer
struct UBTL_ActionSolverComponent_GetCurrentActionTimer_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_AIController.SetCrowdSlowdownAtGoal
struct ABTL_AIController_SetCrowdSlowdownAtGoal_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_AIController.SetCrowdSeparationWeight
struct ABTL_AIController_SetCrowdSeparationWeight_Params
{
	float                                              Weight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_AnimInstance.SetRootTranslationScale
struct UBTL_AnimInstance_SetRootTranslationScale_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_AnimInstance.SearchClosestMontage
struct UBTL_AnimInstance_SearchClosestMontage_Params
{
	TArray<class UAnimMontage*>                        Candidates;                                               // (Parm, ZeroConstructor)
	float                                              TargetEndYaw;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_AnimInstance.ResetRootTranslationScale
struct UBTL_AnimInstance_ResetRootTranslationScale_Params
{
};

// Function BattleLabo.BTL_AnimInstance.GetClosest8DirectionIndex
struct UBTL_AnimInstance_GetClosest8DirectionIndex_Params
{
	float                                              Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_AnimInstance.GetClosest8DirectionAngle
struct UBTL_AnimInstance_GetClosest8DirectionAngle_Params
{
	float                                              InputAngle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FirstCheckAngle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Hysteresis;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_AnimInstance.BiasTargetDirection
struct UBTL_AnimInstance_BiasTargetDirection_Params
{
	float                                              TargetAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PreviousTarget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_AnimNotifyContainer.Reset
struct UBTL_AnimNotifyContainer_Reset_Params
{
};

// Function BattleLabo.BTL_AnimNotifyContainer.RemoveNotifyCount
struct UBTL_AnimNotifyContainer_RemoveNotifyCount_Params
{
	struct FName                                       State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_AnimNotifyContainer.ClearNotifyCounts
struct UBTL_AnimNotifyContainer_ClearNotifyCounts_Params
{
};

// Function BattleLabo.BTL_AnimNotifyContainer.CheckNotifyExistFast
struct UBTL_AnimNotifyContainer_CheckNotifyExistFast_Params
{
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_AnimNotifyContainer.AddNotifyCount
struct UBTL_AnimNotifyContainer_AddNotifyCount_Params
{
	struct FName                                       State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_NamedCooldownContainer.SetCooldown
struct UBTL_NamedCooldownContainer_SetCooldown_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_NamedCooldownContainer.IsOnCooldown
struct UBTL_NamedCooldownContainer_IsOnCooldown_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_NamedCooldownContainer.ClearAllCooldowns
struct UBTL_NamedCooldownContainer_ClearAllCooldowns_Params
{
};

// Function BattleLabo.BTL_AttackHitSolverComponent.UpdateAttackCollisions
struct UBTL_AttackHitSolverComponent_UpdateAttackCollisions_Params
{
	TArray<struct FName>                               Tags;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BattleLabo.BTL_AttackHitSolverComponent.RegisterAttackCollider
struct UBTL_AttackHitSolverComponent_RegisterAttackCollider_Params
{
	class UPrimitiveComponent*                         Collider;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       identifer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_AttackHitSolverComponent.CacheColliderTransforms
struct UBTL_AttackHitSolverComponent_CacheColliderTransforms_Params
{
};

// Function BattleLabo.BTL_BattleRallyFunctionLibrary.MakeTimeMSCFromFloat
struct UBTL_BattleRallyFunctionLibrary_MakeTimeMSCFromFloat_Params
{
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBTL_TimeMSC                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_BattleRallyFunctionLibrary.MakeFloatFromTimeMSC
struct UBTL_BattleRallyFunctionLibrary_MakeFloatFromTimeMSC_Params
{
	struct FBTL_TimeMSC                                Time;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_BattleRallyFunctionLibrary.IsTimeMSCZero
struct UBTL_BattleRallyFunctionLibrary_IsTimeMSCZero_Params
{
	struct FBTL_TimeMSC                                Time;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_BattleRallyFunctionLibrary.CreateRecordBook
struct UBTL_BattleRallyFunctionLibrary_CreateRecordBook_Params
{
	TArray<class UBTL_CourseDataAsset*>                Courses;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UBTL_CourseRecordBook*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_BattleRallyFunctionLibrary.CreateLeaderboard
struct UBTL_BattleRallyFunctionLibrary_CreateLeaderboard_Params
{
	struct FName                                       Course;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UBTL_CourseLeaderboard*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_BattleRallyFunctionLibrary.CreateCourseDataAsset
struct UBTL_BattleRallyFunctionLibrary_CreateCourseDataAsset_Params
{
	TArray<struct FDataTableRowHandle>                 Battles;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UBTL_CourseDataAsset*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_BattleSpawner.LaunchDebugBattle
struct ABTL_BattleSpawner_LaunchDebugBattle_Params
{
};

// Function BattleLabo.BTL_BlueprintFunctionLibrary.FindUserClass
struct UBTL_BlueprintFunctionLibrary_FindUserClass_Params
{
	class UClass*                                      BaseClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_BlueprintFunctionLibrary.ClosestPointOnSegment
struct UBTL_BlueprintFunctionLibrary_ClosestPointOnSegment_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     StartPoint;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndPoint;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_BRallyRacerAnimData.SelectIntroCutscene
struct UBTL_BRallyRacerAnimData_SelectIntroCutscene_Params
{
	int                                                PlayNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowB;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBTL_BRallyCourseCutsceneData               OutData;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_BRallyScoreKeeper.SortResults
struct UBTL_BRallyScoreKeeper_SortResults_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_BRallyScoreKeeper.GetTotalScore
struct UBTL_BRallyScoreKeeper_GetTotalScore_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_BRallyScoreKeeper.GetResults
struct UBTL_BRallyScoreKeeper_GetResults_Params
{
	TArray<struct FBTL_ScoreTallyData>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BattleLabo.BTL_BRallyScoreKeeper.Clear
struct UBTL_BRallyScoreKeeper_Clear_Params
{
};

// Function BattleLabo.BTL_BRallyScoreKeeper.AddToMaxCounts
struct UBTL_BRallyScoreKeeper_AddToMaxCounts_Params
{
	TArray<struct FDataTableRowHandle>                 DataTableRowHandles;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BattleLabo.BTL_BRallyScoreKeeper.AddPointsFromTableRows
struct UBTL_BRallyScoreKeeper_AddPointsFromTableRows_Params
{
	TArray<struct FDataTableRowHandle>                 DataTableRowHandles;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BattleLabo.BTL_BRallyScoreKeeper.AddPointsFromTableRow
struct UBTL_BRallyScoreKeeper_AddPointsFromTableRow_Params
{
	struct FDataTableRowHandle                         DataTableRowHandle;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Times;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_BRallyScoreKeeper.AddPointsByRatio
struct UBTL_BRallyScoreKeeper_AddPointsByRatio_Params
{
	struct FDataTableRowHandle                         DataTableRowHandle;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Ratio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_CharacterDataAsset.SpawnCharacterWithDefaults
struct UBTL_CharacterDataAsset_SpawnCharacterWithDefaults_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UBTL_CharacterDataAsset*                     Defaults;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ABTL_Character*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CharacterDataAsset.SpawnCharacter
struct UBTL_CharacterDataAsset_SpawnCharacter_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class ABTL_Character*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CharacterDataAsset.GetCharacterVoiceName
struct UBTL_CharacterDataAsset_GetCharacterVoiceName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CharacterEnviromentInterface.GetAreaFlags
struct UBTL_CharacterEnviromentInterface_GetAreaFlags_Params
{
	TArray<bool>                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BattleLabo.BTL_CharacterMovementComponent.TestPath
struct UBTL_CharacterMovementComponent_TestPath_Params
{
	struct FVector                                     Destination;                                              // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CharacterMovementComponent.SetEnableStepUp
struct UBTL_CharacterMovementComponent_SetEnableStepUp_Params
{
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_CharacterMovementComponent.ConsumePathFollowerMove
struct UBTL_CharacterMovementComponent_ConsumePathFollowerMove_Params
{
};

// Function BattleLabo.BTL_CharacterMovementComponent.AddWorldOffsetToRootMotion
struct UBTL_CharacterMovementComponent_AddWorldOffsetToRootMotion_Params
{
	struct FVector                                     DeltaLocation;                                            // (Parm, IsPlainOldData)
};

// Function BattleLabo.BTL_CharacterMovementComponent.AddLocalOffsetToRootMotion
struct UBTL_CharacterMovementComponent_AddLocalOffsetToRootMotion_Params
{
	struct FVector                                     DeltaLocation;                                            // (Parm, IsPlainOldData)
};

// Function BattleLabo.BTL_CharacterMovementComponent.AddDeltaYawWithRootMotion
struct UBTL_CharacterMovementComponent_AddDeltaYawWithRootMotion_Params
{
	float                                              DeltaRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_CommandLibraryBase.MakeDefaultByteToNameMap
struct UBTL_CommandLibraryBase_MakeDefaultByteToNameMap_Params
{
	TMap<unsigned char, struct FName>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BattleLabo.BTL_CommandLibraryBase.IsSkillEquippable
struct UBTL_CommandLibraryBase_IsSkillEquippable_Params
{
	struct FName                                       SkillId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CommandLibraryBase.IsSkillEquappable
struct UBTL_CommandLibraryBase_IsSkillEquappable_Params
{
	struct FName                                       SkillId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CommandLibraryBase.IsAttackEquippable
struct UBTL_CommandLibraryBase_IsAttackEquippable_Params
{
	struct FName                                       AttackID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CommandLibraryBase.Initialize
struct UBTL_CommandLibraryBase_Initialize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CommandLibraryBase.FindRequiredItem
struct UBTL_CommandLibraryBase_FindRequiredItem_Params
{
	struct FName                                       Attack;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CommandLibraryBase.FindAttackByItem
struct UBTL_CommandLibraryBase_FindAttackByItem_Params
{
	struct FName                                       SkillItem;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CommandLibraryBase.ConvertCommandsByteToName
struct UBTL_CommandLibraryBase_ConvertCommandsByteToName_Params
{
	TArray<unsigned char>                              Input;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BattleLabo.BTL_CommandLibraryBase.ConvertCommandByteToName
struct UBTL_CommandLibraryBase_ConvertCommandByteToName_Params
{
	unsigned char                                      Input;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CommandLibraryBase.CheckPreviousAttacks
struct UBTL_CommandLibraryBase_CheckPreviousAttacks_Params
{
	TArray<struct FName>                               ActualAttacks;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               PatternPrevAttacks;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CommandLibraryBase.CacheComboAttack
struct UBTL_CommandLibraryBase_CacheComboAttack_Params
{
	struct FName                                       Attack;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CommandLibraryBase.CacheAttackLookupData
struct UBTL_CommandLibraryBase_CacheAttackLookupData_Params
{
	struct FName                                       Attack;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       RequiredItem;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CommandSolver.StartsWith_NameArray
struct UBTL_CommandSolver_StartsWith_NameArray_Params
{
	TArray<struct FName>                               DoesThis;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               StartWithThis;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CommandSolver.SearchMostRecentInAttackHistory
struct UBTL_CommandSolver_SearchMostRecentInAttackHistory_Params
{
	TArray<struct FName>                               SearchAttacks;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CommandSolver.RecordAttackToHistory
struct UBTL_CommandSolver_RecordAttackToHistory_Params
{
	struct FName                                       Attack;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CommandSolver.Equals_NameArray
struct UBTL_CommandSolver_Equals_NameArray_Params
{
	TArray<struct FName>                               ArrayA;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               ArrayB;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CourseLeaderboard.TrimToNum
struct UBTL_CourseLeaderboard_TrimToNum_Params
{
	int                                                MaxNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_CourseLeaderboard.ReadSaveData
struct UBTL_CourseLeaderboard_ReadSaveData_Params
{
	struct FBTL_CourseSaveData                         SaveData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BattleLabo.BTL_CourseLeaderboard.MakeSaveData
struct UBTL_CourseLeaderboard_MakeSaveData_Params
{
	TArray<struct FName>                               PlayerIds;                                                // (ConstParm, Parm, ZeroConstructor)
	struct FBTL_CourseSaveData                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BattleLabo.BTL_CourseLeaderboard.GetRecords
struct UBTL_CourseLeaderboard_GetRecords_Params
{
	TArray<struct FBTL_LeaderboardRecord>              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function BattleLabo.BTL_CourseLeaderboard.GetRecordByIndex
struct UBTL_CourseLeaderboard_GetRecordByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBTL_LeaderboardRecord                      OutRecord;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CourseLeaderboard.GetRecordByCharacter
struct UBTL_CourseLeaderboard_GetRecordByCharacter_Params
{
	struct FName                                       CharacterID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBTL_LeaderboardRecord                      OutRecord;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CourseLeaderboard.GetRankPlaceAtIndex
struct UBTL_CourseLeaderboard_GetRankPlaceAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CourseLeaderboard.GetRankPlace
struct UBTL_CourseLeaderboard_GetRankPlace_Params
{
	struct FName                                       CharacterID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CourseLeaderboard.GetRankIndex
struct UBTL_CourseLeaderboard_GetRankIndex_Params
{
	struct FName                                       CharacterID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CourseLeaderboard.GetParCharacter
struct UBTL_CourseLeaderboard_GetParCharacter_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CourseLeaderboard.GetCourseId
struct UBTL_CourseLeaderboard_GetCourseId_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CourseLeaderboard.EnableDuplicates
struct UBTL_CourseLeaderboard_EnableDuplicates_Params
{
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_CourseLeaderboard.CompareToParRecord
struct UBTL_CourseLeaderboard_CompareToParRecord_Params
{
	struct FBTL_LeaderboardRecord                      Record;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Relative;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CourseLeaderboard.CompareRankToPar
struct UBTL_CourseLeaderboard_CompareRankToPar_Params
{
	struct FName                                       InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RanksAbove;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CourseLeaderboard.AddRecord
struct UBTL_CourseLeaderboard_AddRecord_Params
{
	struct FBTL_LeaderboardRecord                      NewEntry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CourseMapData.AreLabelLocationsValid
struct UBTL_CourseMapData_AreLabelLocationsValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTLDataTableFunctionLibrary.GetDataTableRowFromName
struct UBTLDataTableFunctionLibrary_GetDataTableRowFromName_Params
{
	class UScriptStruct*                               Struct;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  Table;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTableRowBase                               OutRow;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CourseRecordBook.ReadSaveData
struct UBTL_CourseRecordBook_ReadSaveData_Params
{
	TArray<struct FBTL_CourseSaveData>                 SaveData;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BattleLabo.BTL_CourseRecordBook.GetLeaderboard
struct UBTL_CourseRecordBook_GetLeaderboard_Params
{
	struct FName                                       Course;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UBTL_CourseLeaderboard*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_CourseRecordBook.CreatePlayerSaveData
struct UBTL_CourseRecordBook_CreatePlayerSaveData_Params
{
	TArray<struct FName>                               PlayerCharacters;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FBTL_CourseSaveData>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BattleLabo.BTL_GoalpostBehavior.OnPlayerEntered
struct UBTL_GoalpostBehavior_OnPlayerEntered_Params
{
	class ABTL_Character*                              Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ABTL_BRallyGoalpost*                         Goalpost;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_MeshFaderComponent.StartFadeOut
struct UBTL_MeshFaderComponent_StartFadeOut_Params
{
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_MeshFaderComponent.StartFadeIn
struct UBTL_MeshFaderComponent_StartFadeIn_Params
{
	class AActor*                                      Executor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_MeshFaderComponent.SetMeshComponents
struct UBTL_MeshFaderComponent_SetMeshComponents_Params
{
	TArray<class UMeshComponent*>                      Components;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BattleLabo.BTL_MeshFaderComponent.CreateFadeMaterial
struct UBTL_MeshFaderComponent_CreateFadeMaterial_Params
{
	class UMaterialInterface*                          SourceMaterial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_MeshFaderComponent.AddMeshComponent
struct UBTL_MeshFaderComponent_AddMeshComponent_Params
{
	class UMeshComponent*                              Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BattleLabo.BTLKismetLibrary.XorIntegerFlag
struct UBTLKismetLibrary_XorIntegerFlag_Params
{
	int                                                lflag;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                rflag;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTLKismetLibrary.SetIntegerFlag
struct UBTLKismetLibrary_SetIntegerFlag_Params
{
	int                                                flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                bitindex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTLKismetLibrary.OrIntegerFlag
struct UBTLKismetLibrary_OrIntegerFlag_Params
{
	int                                                lflag;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                rflag;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTLKismetLibrary.NotIntegerFlag
struct UBTLKismetLibrary_NotIntegerFlag_Params
{
	int                                                flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTLKismetLibrary.IntersectionOfLineAndCircle
struct UBTLKismetLibrary_IntersectionOfLineAndCircle_Params
{
	struct FVector                                     _startPos;                                                // (Parm, IsPlainOldData)
	struct FVector                                     _endPos;                                                  // (Parm, IsPlainOldData)
	struct FVector                                     _circleCenterPos;                                         // (Parm, IsPlainOldData)
	float                                              _rad;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTLKismetLibrary.GetRowByNameSyncActionInfo
struct UBTLKismetLibrary_GetRowByNameSyncActionInfo_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       pName;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSyncActionInfoNative                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BattleLabo.BTLKismetLibrary.GetRowByNameMoveGapCondition
struct UBTLKismetLibrary_GetRowByNameMoveGapCondition_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       pName;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FMoveGapConditionNative                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BattleLabo.BTLKismetLibrary.GetRowByNameMotionDatabaseElement
struct UBTLKismetLibrary_GetRowByNameMotionDatabaseElement_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       pName;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FMotionDatabaseElementNative                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BattleLabo.BTLKismetLibrary.GetNotifyTriggerTime
struct UBTLKismetLibrary_GetNotifyTriggerTime_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTLKismetLibrary.GetNotifyTrigger
struct UBTLKismetLibrary_GetNotifyTrigger_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NotifyClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartRange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Last;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify*                                 ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTLKismetLibrary.GetNotifyStateStartTime
struct UBTLKismetLibrary_GetNotifyStateStartTime_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyState*                            NotifyState;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTLKismetLibrary.GetNotifyStates
struct UBTLKismetLibrary_GetNotifyStates_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StateClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimNotifyState*>                    States;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor)
};

// Function BattleLabo.BTLKismetLibrary.GetNotifyStateEndTime
struct UBTLKismetLibrary_GetNotifyStateEndTime_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyState*                            NotifyState;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTLKismetLibrary.GetNotifyStateAtTime
struct UBTLKismetLibrary_GetNotifyStateAtTime_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StateClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Last;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyState*                            ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTLKismetLibrary.GetNotifyState
struct UBTLKismetLibrary_GetNotifyState_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StateClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartRange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Last;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyState*                            ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTLKismetLibrary.GetIntegerFlag
struct UBTLKismetLibrary_GetIntegerFlag_Params
{
	int                                                flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                bitindex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTLKismetLibrary.GetCustomNotifyTime
struct UBTLKismetLibrary_GetCustomNotifyTime_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NotifyName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTLKismetLibrary.EstimateNextNameInSequence
struct UBTLKismetLibrary_EstimateNextNameInSequence_Params
{
	TArray<struct FName>                               Names;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Confidence;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTLKismetLibrary.EllipseContains
struct UBTLKismetLibrary_EllipseContains_Params
{
	struct FVector2D                                   Point;                                                    // (Parm, IsPlainOldData)
	struct FVector2D                                   Radii;                                                    // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTLKismetLibrary.EllipseClamp
struct UBTLKismetLibrary_EllipseClamp_Params
{
	struct FVector2D                                   Point;                                                    // (Parm, IsPlainOldData)
	struct FVector2D                                   Radii;                                                    // (Parm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTLKismetLibrary.ContainsNotifyState
struct UBTLKismetLibrary_ContainsNotifyState_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyState*                            NotifyState;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTLKismetLibrary.CallRemoteLevelEvent
struct UBTLKismetLibrary_CallRemoteLevelEvent_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTLKismetLibrary.AndIntegerFlag
struct UBTLKismetLibrary_AndIntegerFlag_Params
{
	int                                                lflag;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                rflag;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_NavigationFunctionLibrary.TestPathExists
struct UBTL_NavigationFunctionLibrary_TestPathExists_Params
{
	class UObject*                                     Querier;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_NavigationFunctionLibrary.GetRecastNavmesh
struct UBTL_NavigationFunctionLibrary_GetRecastNavmesh_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ARecastNavMesh*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_NavigationFunctionLibrary.FindDistanceToWall
struct UBTL_NavigationFunctionLibrary_FindDistanceToWall_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLoc;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ARecastNavMesh*                              NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutClosestPointOnWall;                                    // (Parm, OutParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_NPCLODComponent.GetState
struct UBTL_NPCLODComponent_GetState_Params
{
	EBTL_NPCLODState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_NPCLODComponent.GetSpawnLocation
struct UBTL_NPCLODComponent_GetSpawnLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_EnemySearchPath.SetupOrigin
struct UBTL_EnemySearchPath_SetupOrigin_Params
{
	int                                                GoalIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_EnemySearchPath.SetupInsert
struct UBTL_EnemySearchPath_SetupInsert_Params
{
	int                                                AIndex;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ACost;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BIndex;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BCost;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_EnemySearchPath.Insert
struct UBTL_EnemySearchPath_Insert_Params
{
	int                                                AIndex;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ACost;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BIndex;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BCost;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_EnemySearchPath.FindAndUsePath
struct UBTL_EnemySearchPath_FindAndUsePath_Params
{
	int                                                Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Route;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BattleLabo.BTL_EnemySearchPath.AddNode
struct UBTL_EnemySearchPath_AddNode_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_EnemySearchPath.AddEdge
struct UBTL_EnemySearchPath_AddEdge_Params
{
	int                                                NodeIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EdgeTo;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EdgeCost;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_PawnSeperatorComponent.GetVirtualActorLocation
struct UBTL_PawnSeperatorComponent_GetVirtualActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_PawnSeperatorComponent.FindSeperationFor
struct UBTL_PawnSeperatorComponent_FindSeperationFor_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UShapeComponent*                             Capsule;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PushDirection;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     SeperationVector;                                         // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_PawnSeperatorComponent.CanLeadSeperationCalc
struct UBTL_PawnSeperatorComponent_CanLeadSeperationCalc_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_PawnSeperatorComponent.CalculateActorSeperation
struct UBTL_PawnSeperatorComponent_CalculateActorSeperation_Params
{
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SeperationVector;                                         // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_RagdollSolverComponent.SnapActorToPelvis
struct UBTL_RagdollSolverComponent_SnapActorToPelvis_Params
{
};

// Function BattleLabo.BTL_RagdollSolverComponent.ResetReflectTransformCache
struct UBTL_RagdollSolverComponent_ResetReflectTransformCache_Params
{
};

// Function BattleLabo.BTL_RagdollSolverComponent.PreRagdollOverlap
struct UBTL_RagdollSolverComponent_PreRagdollOverlap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_RagdollSolverComponent.MoveActorSafelyToPelvis
struct UBTL_RagdollSolverComponent_MoveActorSafelyToPelvis_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_RagdollSolverComponent.InitPreRagdollCollision
struct UBTL_RagdollSolverComponent_InitPreRagdollCollision_Params
{
	TArray<class UPrimitiveComponent*>                 InCollision;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                InObjectTypes;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_RagdollSolverComponent.GetWorldSpacePelvisLocation
struct UBTL_RagdollSolverComponent_GetWorldSpacePelvisLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_RagdollSolverComponent.GetVirtualActorLocation
struct UBTL_RagdollSolverComponent_GetVirtualActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_RagdollSolverComponent.GetIsRagdolling
struct UBTL_RagdollSolverComponent_GetIsRagdolling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_RagdollSolverComponent.GetBeingRagdoll
struct UBTL_RagdollSolverComponent_GetBeingRagdoll_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_RagdollSolverComponent.EnablePreRagdollCollision
struct UBTL_RagdollSolverComponent_EnablePreRagdollCollision_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_ReplayRecordComponent.SetReplayRecordTime
struct UBTL_ReplayRecordComponent_SetReplayRecordTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_ReplayRecordComponent.GetStartGameTime
struct UBTL_ReplayRecordComponent_GetStartGameTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_ReplayRecordComponent.GetEndGameTime
struct UBTL_ReplayRecordComponent_GetEndGameTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_ReplaySkeletalMeshComponent.ToggleReplayStopSwitch
struct UBTL_ReplaySkeletalMeshComponent_ToggleReplayStopSwitch_Params
{
};

// Function BattleLabo.BTL_ReplaySkeletalMeshComponent.StartReplay
struct UBTL_ReplaySkeletalMeshComponent_StartReplay_Params
{
	class UBTL_ReplayRecordComponent*                  ReplayRecordComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              StartGameTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndGameTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_ReplaySkeletalMeshComponent.ReplayToHead
struct UBTL_ReplaySkeletalMeshComponent_ReplayToHead_Params
{
};

// Function BattleLabo.BTL_ReplaySkeletalMeshComponent.FinishReplay
struct UBTL_ReplaySkeletalMeshComponent_FinishReplay_Params
{
};

// Function BattleLabo.BTL_ReplaySkeletalMeshComponent.AddReplayTime
struct UBTL_ReplaySkeletalMeshComponent_AddReplayTime_Params
{
	float                                              AddTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_RuntimeAttackDB.SearchMontages
struct UBTL_RuntimeAttackDB_SearchMontages_Params
{
	struct FName                                       SearchTerm;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<class UAnimMontage*>                        Results;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_RuntimeAttackDB.LoadMontagesFromDBAsset
struct UBTL_RuntimeAttackDB_LoadMontagesFromDBAsset_Params
{
	TArray<struct FName>                               Identifiers;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UBTL_AttackDBAsset*                          DatabaseAsset;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_RuntimeAttackDB.IsLoading
struct UBTL_RuntimeAttackDB_IsLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_SequencePlayer.SetIgnoreUpdateCameraCut
struct UBTL_SequencePlayer_SetIgnoreUpdateCameraCut_Params
{
	bool                                               bNewIgnore;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_SequencePlayer.RegisterSwitchObject
struct UBTL_SequencePlayer_RegisterSwitchObject_Params
{
	struct FString                                     SrcObjectName;                                            // (Parm, ZeroConstructor)
	class UObject*                                     DstObject;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UBTL_SequencePlayer*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_SequencePlayer.CleanUpInternalSpawnedObjects
struct UBTL_SequencePlayer_CleanUpInternalSpawnedObjects_Params
{
};

// Function BattleLabo.BTL_SplineNavigationComponent.GetSplineRightVector
struct UBTL_SplineNavigationComponent_GetSplineRightVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_SplineNavigationComponent.GetDistanceAlongSpline
struct UBTL_SplineNavigationComponent_GetDistanceAlongSpline_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_SplineNavigationComponent.GetDistanceAlongNormal
struct UBTL_SplineNavigationComponent_GetDistanceAlongNormal_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_SplineNavigationComponent.GetClosestSplineLocation
struct UBTL_SplineNavigationComponent_GetClosestSplineLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_SplineNavigationComponent.EstimateLocationAhead
struct UBTL_SplineNavigationComponent_EstimateLocationAhead_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_SplineNavigationComponent.CalculateFollowDirection
struct UBTL_SplineNavigationComponent_CalculateFollowDirection_Params
{
	float                                              LookAheadDistance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetNormalDistance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_SplineFunctionLibrary.FindDistanceClosestToWorldLocation
struct UBTL_SplineFunctionLibrary_FindDistanceClosestToWorldLocation_Params
{
	class USplineComponent*                            spline;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_SplineFunctionLibrary.ConvertInputKeyToDistance
struct UBTL_SplineFunctionLibrary_ConvertInputKeyToDistance_Params
{
	class USplineComponent*                            spline;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              InputKey;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_StatusComponent.SetHPFlag
struct UBTL_StatusComponent_SetHPFlag_Params
{
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_StatusComponent.IsZeroHP
struct UBTL_StatusComponent_IsZeroHP_Params
{
	bool                                               IsZero;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_StatusComponent.HasHP
struct UBTL_StatusComponent_HasHP_Params
{
	bool                                               IsPositive;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_NPCLODSystem.SetSpline
struct UBTL_NPCLODSystem_SetSpline_Params
{
	class USplineComponent*                            InSpline;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BattleLabo.BTL_NPCLODSystem.RegisterNPCs
struct UBTL_NPCLODSystem_RegisterNPCs_Params
{
	TArray<class ABTL_Character*>                      NPCs;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BattleLabo.BTL_SurroundCoordinator.TryGetAnchorAngleWS
struct UBTL_SurroundCoordinator_TryGetAnchorAngleWS_Params
{
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_SurroundCoordinator.TryCalculateDirectionWS
struct UBTL_SurroundCoordinator_TryCalculateDirectionWS_Params
{
	class AAIController*                               NPC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_SurroundCoordinator.SetPlayer
struct UBTL_SurroundCoordinator_SetPlayer_Params
{
	class ABTL_Character*                              Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_SurroundCoordinator.SetNewAnchor
struct UBTL_SurroundCoordinator_SetNewAnchor_Params
{
	class AAIController*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_SurroundCoordinator.Reserve
struct UBTL_SurroundCoordinator_Reserve_Params
{
	class AAIController*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_SurroundCoordinator.RemoveNPC
struct UBTL_SurroundCoordinator_RemoveNPC_Params
{
	class AAIController*                               NPC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.BTL_SurroundCoordinator.HasReservation
struct UBTL_SurroundCoordinator_HasReservation_Params
{
	class AAIController*                               ItemToFind;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_SurroundCoordinator.GetOffsetForIndex
struct UBTL_SurroundCoordinator_GetOffsetForIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_SurroundCoordinator.GetNPCReservationIndex
struct UBTL_SurroundCoordinator_GetNPCReservationIndex_Params
{
	class AAIController*                               ItemToFind;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_SurroundCoordinator.GetClosestOpenIndex
struct UBTL_SurroundCoordinator_GetClosestOpenIndex_Params
{
	class AAIController*                               NPC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_SurroundCoordinator.GetAnchorNPC
struct UBTL_SurroundCoordinator_GetAnchorNPC_Params
{
	class AAIController*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.BTL_SurroundCoordinator.ClearAllReservationsButAnchor
struct UBTL_SurroundCoordinator_ClearAllReservationsButAnchor_Params
{
};

// Function BattleLabo.BTL_SurroundCoordinator.ClearAllReservations
struct UBTL_SurroundCoordinator_ClearAllReservations_Params
{
};

// Function BattleLabo.CircleDrawComponent.ClearLength
struct UCircleDrawComponent_ClearLength_Params
{
};

// Function BattleLabo.CircleDrawComponent.AddLength
struct UCircleDrawComponent_AddLength_Params
{
	float                                              Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.UndulationInfoFunctionLibrary.SetupUndulationInfo
struct UUndulationInfoFunctionLibrary_SetupUndulationInfo_Params
{
	struct FUndulationInfoContainer                    Container;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                InfoCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WallPointCount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StepPointCount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.UndulationInfoFunctionLibrary.SetUndulationInfo
struct UUndulationInfoFunctionLibrary_SetUndulationInfo_Params
{
	struct FUndulationInfoContainer                    Container;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                InfoIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUndulationInfoParamNative                  Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BattleLabo.UndulationInfoFunctionLibrary.SetRaycastHitpointInfo
struct UUndulationInfoFunctionLibrary_SetRaycastHitpointInfo_Params
{
	struct FUndulationInfoContainer                    Container;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                InfoIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ERaycastHitpointInfoType                           Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRaycastHitpointInfoNative                  Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BattleLabo.UndulationInfoFunctionLibrary.GetUndulationInfoCount
struct UUndulationInfoFunctionLibrary_GetUndulationInfoCount_Params
{
	struct FUndulationInfoContainer                    Container;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.UndulationInfoFunctionLibrary.GetUndulationInfo
struct UUndulationInfoFunctionLibrary_GetUndulationInfo_Params
{
	struct FUndulationInfoContainer                    Container;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                InfoIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUndulationInfoParamNative                  OutStruct;                                                // (Parm, OutParm)
	int                                                WallRaycastHitpointInfoCount;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StepRaycastHitpointInfoCount;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.UndulationInfoFunctionLibrary.GetRaycastHitpointInfoCount
struct UUndulationInfoFunctionLibrary_GetRaycastHitpointInfoCount_Params
{
	struct FUndulationInfoContainer                    Container;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                InfoIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ERaycastHitpointInfoType                           Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.UndulationInfoFunctionLibrary.GetRaycastHitpointInfo
struct UUndulationInfoFunctionLibrary_GetRaycastHitpointInfo_Params
{
	struct FUndulationInfoContainer                    Container;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                InfoIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ERaycastHitpointInfoType                           Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRaycastHitpointInfoNative                  OutStruct;                                                // (Parm, OutParm)
};

// Function BattleLabo.UndulationInfoFunctionLibrary.GetEnableRaycastHitpointInfoCount
struct UUndulationInfoFunctionLibrary_GetEnableRaycastHitpointInfoCount_Params
{
	struct FUndulationInfoContainer                    Container;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                InfoIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ERaycastHitpointInfoType                           Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.UndulationInfoFunctionLibrary.ClearWorks
struct UUndulationInfoFunctionLibrary_ClearWorks_Params
{
	struct FUndulationInfoContainer                    Container;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BattleLabo.KeyConfig.SwitchKey
struct UKeyConfig_SwitchKey_Params
{
	struct FName                                       A;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       B;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BattleLabo.KeyConfig.SortObject
struct UKeyConfig_SortObject_Params
{
	TArray<class UObject*>                             TargetArray;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USortObjectCompare*                          Compare;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.KeyConfig.SortName
struct UKeyConfig_SortName_Params
{
	TArray<struct FName>                               TargetArray;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USortNameCompare*                            Compare;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.KeyConfig.SortActor
struct UKeyConfig_SortActor_Params
{
	TArray<class AActor*>                              TargetArray;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USortActorCompare*                           Compare;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.KeyConfig.SetMontagePosition
struct UKeyConfig_SetMontagePosition_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.KeyConfig.SetMontageBlendOutTime
struct UKeyConfig_SetMontageBlendOutTime_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.KeyConfig.SetMontageBlendInTime
struct UKeyConfig_SetMontageBlendInTime_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.KeyConfig.ResetAction
struct UKeyConfig_ResetAction_Params
{
	struct FKey                                        Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.KeyConfig.IsPlayingAttackMontage
struct UKeyConfig_IsPlayingAttackMontage_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.KeyConfig.GetMontageBlendOutTime
struct UKeyConfig_GetMontageBlendOutTime_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.KeyConfig.GetMontageBlendInTime
struct UKeyConfig_GetMontageBlendInTime_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.KeyConfig.GetKeyArray
struct UKeyConfig_GetKeyArray_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FKey>                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BattleLabo.KeyConfig.GetFollowingPathLength
struct UKeyConfig_GetFollowingPathLength_Params
{
	class UPathFollowingComponent*                     PathFollowingComponent;                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.KeyConfig.GetCurrentMontagePosition
struct UKeyConfig_GetCurrentMontagePosition_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.KeyConfig.GetCurrentMontagePlayRate
struct UKeyConfig_GetCurrentMontagePlayRate_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.KeyConfig.EnableNextAttack
struct UKeyConfig_EnableNextAttack_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.KeyConfig.DispCurrentAnimInfo
struct UKeyConfig_DispCurrentAnimInfo_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BattleLabo.KeyConfig.CreateObjectForTemplate
struct UKeyConfig_CreateObjectForTemplate_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Template;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.KeyConfig.CreateObject
struct UKeyConfig_CreateObject_Params
{
	class UClass*                                      ObjectClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.Json.LoadJson
struct UJson_LoadJson_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	struct FJsonData                                   Data;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.Json.GetString
struct UJson_GetString_Params
{
	struct FJsonData                                   JsonData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.Json.GetInt
struct UJson_GetInt_Params
{
	struct FJsonData                                   JsonData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                Int;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.Json.GetFloat
struct UJson_GetFloat_Params
{
	struct FJsonData                                   JsonData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	float                                              Float;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.Json.GetData
struct UJson_GetData_Params
{
	struct FJsonData                                   JsonData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	struct FJsonData                                   Data;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.Json.GetBool
struct UJson_GetBool_Params
{
	struct FJsonData                                   JsonData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               Bool;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.Json.GetArray
struct UJson_GetArray_Params
{
	struct FJsonData                                   JsonData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	TArray<struct FString>                             Array;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.MyCharacterMovementComponent.UseRequestedVector
struct UMyCharacterMovementComponent_UseRequestedVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.SortActorCompare.Compare
struct USortActorCompare_Compare_Params
{
	class AActor*                                      A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.SortObjectCompare.Compare
struct USortObjectCompare_Compare_Params
{
	class UObject*                                     A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BattleLabo.SquareDrawComponent.ClearSquare
struct USquareDrawComponent_ClearSquare_Params
{
};

// Function BattleLabo.SquareDrawComponent.AddSquare
struct USquareDrawComponent_AddSquare_Params
{
	struct FVector                                     LT;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     RT;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     LB;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     RB;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BattleLabo.SortNameCompare.Compare
struct USortNameCompare_Compare_Params
{
	struct FName                                       A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
