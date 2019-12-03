#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_NPCLeadManager.BP_NPCLeadManager_C
// 0x0171 (0x04B9 - 0x0348)
class ABP_NPCLeadManager_C : public AS3NPCLeadManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)
	class UBPC_FollowFSM_C*                            BPC_FollowFSM;                                            // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_Follower_POI_Selector_C*                BPC_Follower_POI_Selector;                                // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Follow_GoalTime;                                          // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetPos;                                                // 0x036C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Lead_SplineDistanceTarget;                                // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SplineMaxLength;                                          // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_NPC_Lead_C*                              NpcActorRef;                                              // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               FollowFlag;                                               // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	class ANPC_SplineMoveActor_C*                      NpcSplineMoveActorRef;                                    // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3_Character_Adventure_C*                PlayerCharacter;                                          // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TargetRot;                                                // 0x03A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LastRyoLength;                                            // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RyoStopTime;                                              // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetRyoLength;                                          // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastRyoPos;                                               // 0x03B8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ElapsedPushTime;                                          // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayerInBuilding;                                        // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLogicBehaviorTreeMode;                                   // 0x03C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03CA(0x0002) MISSED OFFSET
	float                                              FOLLOW_START_DISTANCE_FAR;                                // 0x03CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      NPCActorClass;                                            // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDrawDebug;                                               // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	float                                              OriginalFollowEndDistance;                                // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Lead_PrevPlayerBasedSpeed;                                // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Lead_FollowerLOS;                                         // 0x03E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET
	float                                              Lead_LastFollowSpeedMatch;                                // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Lead_SplineDistanceTravelled;                             // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Lead_Pathing;                                             // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03F1(0x0003) MISSED OFFSET
	float                                              Lead_TimeWaitingOnFollower;                               // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Lead_NextTimeToTryWave;                                   // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_Lead_WaitAction>                    Lead_WaitAction;                                          // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	class UAnimMontage*                                CurrentWaveMontage;                                       // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   WAVE_RANGE;                                               // 0x0408(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   WAVE_COOLDOWN_SUCCESS;                                    // 0x0410(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   WAVE_COOLDOWN_FAILURE;                                    // 0x0418(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, class US3TalkDataListBase*>     TalkDataMaps;                                             // 0x0420(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EPathFollowingResult>                  Lead_LastPathResult;                                      // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0471(0x0003) MISSED OFFSET
	float                                              Lead_DirectDistanceToEnd;                                 // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Lead_CanWaveAfterTurn;                                    // 0x0478(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0479(0x0003) MISSED OFFSET
	float                                              Lead_SplineDistanceFollowerTravelled;                     // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Lead_SplineDistanceAheadFollower;                         // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LEAD_FORCE_FOLLOWER_MOVE_DISTANCE;                        // 0x0484(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LEAD_FORCE_FOLLOWER_MOVE_TIME;                            // 0x0488(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TickedFSM;                                                // 0x048C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	float                                              DeltaSeconds;                                             // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	class ABP_PlayerFollowAIController_C*              PlayerFollowAI;                                           // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Lead_RequestedFollowerAutoMove;                           // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x04A1(0x0003) MISSED OFFSET
	int                                                Lead_NextSplinePointIndex;                                // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Lead_CompleteFlag;                                        // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	class URequestCounter_C*                           HideCharacterRequestCounter;                              // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTalkEvent;                                               // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPCLeadManager.BP_NPCLeadManager_C");
		return ptr;
	}


	void ResetPartnerCollision();
	void IgnorePartnerCollision();
	void STATIC_StartActionBlock();
	void ReleaseActionBlock();
	void SetLookAtSpline(bool bCanLookAt);
	void BindTalkEvents(bool bBind);
	void UpdateCharacterVisibility();
	void SetFollowEndDistance(float EndDistance, bool Reset);
	bool Lead_IsCompleted();
	bool Lead_StartNextWaitEvent();
	bool Lead_MessageCompleted();
	void STATIC_Lead_GetNextPointDistance(float* Next);
	void STATIC_Lead_CalculateFollowerSpeed(float* Speed, float* TargetMatchAmt);
	void STATIC_CheckLocationOnStairs(const struct FVector& Location, bool* OnStairs);
	struct FVector GetTalkLocation();
	void STATIC_Pair(class ABP_S3_Character_Adventure_C* NewPartner);
	void Unpair();
	void SetPartnerCharacter(class ACharacter* InputPin, bool* bValid);
	void Lead_EstimateSplineTravelDistance(class ACharacter* Character, float* Estimation, float* SqrDistanceFromSpline, bool* ProbablyCloseEnough);
	class AS3Character* GetNPCCharater();
	void ResumeMovement();
	void StopMovement();
	class USkeletalMesh* GetInitialSkeletalMesh();
	void STATIC_TestCanSeeFollower(bool* OutCanSee);
	void STATIC_Lead_WaitForFollower_TryTurnAndReact(bool bForwardOnly);
	void STATIC_Lead_WaitForFollower_StartWave(float TurnAngle, float DistSqr);
	void Lead_WaitForFollower_StartTurn(float TurnAngle);
	void Lead_WaitForFollower_StartTurnCooldown(bool JustWaved);
	void GetRelativeAngleToLocation(const struct FVector& ToLocation, float* OutAngle);
	void STATIC_GetRelativeAngleToFollower(float* OutAngle);
	void GetDirectSqrDistanceToFollower(float* Distance);
	void STATIC_SetPathMassagingEnabled(bool bNewValue);
	void Lead_UpdateDistanceTravelled();
	void STATIC_Lead_CalculateSpeed();
	void STATIC_CanFollow(bool* isFollow);
	void ChangeCollision(class AActor* Actor, bool Enable);
	void STATIC_Follow_IsBeingObstacle(bool* bIsObstacle);
	void CheckStrayOff(const struct FVector& SplinePos, float Distance, bool* ForceMove);
	void STATIC_Lead_WaitForFollower_Tick();
	void STATIC_NextPoint();
	void setFollwFlags(bool follow, bool syncGameinstance);
	void NpcLeadActorExit();
	void NpcLeadActorInit(const struct FVector& SpawnPos, float SpawnRot, bool FollowFlag, class ANPC_SplineMoveActor_C* NpcSplineMoveActorRef);
	void STATIC_UserConstructionScript();
	void STATIC_OnFail_9B54DB094FA168F07F4D998937B7C143(TEnumAsByte<EPathFollowingResult> MovementResult);
	void STATIC_OnSuccess_9B54DB094FA168F07F4D998937B7C143(TEnumAsByte<EPathFollowingResult> MovementResult);
	void Tick_Lead();
	void Tick_Follow();
	void ReceiveBeginPlay();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void OnBeginTalk();
	void OnEndTalk();
	void UpdatePlayerInBuilding();
	void STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnHideRequestCounterChange();
	void STATIC_ExecuteUbergraph_BP_NPCLeadManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
