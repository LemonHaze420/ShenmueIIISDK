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

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.ResetPartnerCollision
struct ABP_NPCLeadManager_C_ResetPartnerCollision_Params
{
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.IgnorePartnerCollision
struct ABP_NPCLeadManager_C_IgnorePartnerCollision_Params
{
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.StartActionBlock
struct ABP_NPCLeadManager_C_StartActionBlock_Params
{
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.ReleaseActionBlock
struct ABP_NPCLeadManager_C_ReleaseActionBlock_Params
{
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.SetLookAtSpline
struct ABP_NPCLeadManager_C_SetLookAtSpline_Params
{
	bool                                               bCanLookAt;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.BindTalkEvents
struct ABP_NPCLeadManager_C_BindTalkEvents_Params
{
	bool                                               bBind;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.UpdateCharacterVisibility
struct ABP_NPCLeadManager_C_UpdateCharacterVisibility_Params
{
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.SetFollowEndDistance
struct ABP_NPCLeadManager_C_SetFollowEndDistance_Params
{
	float                                              EndDistance;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_IsCompleted
struct ABP_NPCLeadManager_C_Lead_IsCompleted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_StartNextWaitEvent
struct ABP_NPCLeadManager_C_Lead_StartNextWaitEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_MessageCompleted
struct ABP_NPCLeadManager_C_Lead_MessageCompleted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_GetNextPointDistance
struct ABP_NPCLeadManager_C_Lead_GetNextPointDistance_Params
{
	float                                              Next;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_CalculateFollowerSpeed
struct ABP_NPCLeadManager_C_Lead_CalculateFollowerSpeed_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TargetMatchAmt;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.CheckLocationOnStairs
struct ABP_NPCLeadManager_C_CheckLocationOnStairs_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               OnStairs;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.GetTalkLocation
struct ABP_NPCLeadManager_C_GetTalkLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Pair
struct ABP_NPCLeadManager_C_Pair_Params
{
	class ABP_S3_Character_Adventure_C*                NewPartner;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Unpair
struct ABP_NPCLeadManager_C_Unpair_Params
{
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.SetPartnerCharacter
struct ABP_NPCLeadManager_C_SetPartnerCharacter_Params
{
	class ACharacter*                                  InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_EstimateSplineTravelDistance
struct ABP_NPCLeadManager_C_Lead_EstimateSplineTravelDistance_Params
{
	class ACharacter*                                  Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Estimation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SqrDistanceFromSpline;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ProbablyCloseEnough;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.GetNPCCharater
struct ABP_NPCLeadManager_C_GetNPCCharater_Params
{
	class AS3Character*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.ResumeMovement
struct ABP_NPCLeadManager_C_ResumeMovement_Params
{
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.StopMovement
struct ABP_NPCLeadManager_C_StopMovement_Params
{
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.GetInitialSkeletalMesh
struct ABP_NPCLeadManager_C_GetInitialSkeletalMesh_Params
{
	class USkeletalMesh*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.TestCanSeeFollower
struct ABP_NPCLeadManager_C_TestCanSeeFollower_Params
{
	bool                                               OutCanSee;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_WaitForFollower_TryTurnAndReact
struct ABP_NPCLeadManager_C_Lead_WaitForFollower_TryTurnAndReact_Params
{
	bool                                               bForwardOnly;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_WaitForFollower_StartWave
struct ABP_NPCLeadManager_C_Lead_WaitForFollower_StartWave_Params
{
	float                                              TurnAngle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistSqr;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_WaitForFollower_StartTurn
struct ABP_NPCLeadManager_C_Lead_WaitForFollower_StartTurn_Params
{
	float                                              TurnAngle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_WaitForFollower_StartTurnCooldown
struct ABP_NPCLeadManager_C_Lead_WaitForFollower_StartTurnCooldown_Params
{
	bool                                               JustWaved;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.GetRelativeAngleToLocation
struct ABP_NPCLeadManager_C_GetRelativeAngleToLocation_Params
{
	struct FVector                                     ToLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              OutAngle;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.GetRelativeAngleToFollower
struct ABP_NPCLeadManager_C_GetRelativeAngleToFollower_Params
{
	float                                              OutAngle;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.GetDirectSqrDistanceToFollower
struct ABP_NPCLeadManager_C_GetDirectSqrDistanceToFollower_Params
{
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.SetPathMassagingEnabled
struct ABP_NPCLeadManager_C_SetPathMassagingEnabled_Params
{
	bool                                               bNewValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_UpdateDistanceTravelled
struct ABP_NPCLeadManager_C_Lead_UpdateDistanceTravelled_Params
{
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_CalculateSpeed
struct ABP_NPCLeadManager_C_Lead_CalculateSpeed_Params
{
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.CanFollow
struct ABP_NPCLeadManager_C_CanFollow_Params
{
	bool                                               isFollow;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.ChangeCollision
struct ABP_NPCLeadManager_C_ChangeCollision_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Follow_IsBeingObstacle
struct ABP_NPCLeadManager_C_Follow_IsBeingObstacle_Params
{
	bool                                               bIsObstacle;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.CheckStrayOff
struct ABP_NPCLeadManager_C_CheckStrayOff_Params
{
	struct FVector                                     SplinePos;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceMove;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Lead_WaitForFollower_Tick
struct ABP_NPCLeadManager_C_Lead_WaitForFollower_Tick_Params
{
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.NextPoint
struct ABP_NPCLeadManager_C_NextPoint_Params
{
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.setFollwFlags
struct ABP_NPCLeadManager_C_setFollwFlags_Params
{
	bool                                               follow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               syncGameinstance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.NpcLeadActorExit
struct ABP_NPCLeadManager_C_NpcLeadActorExit_Params
{
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.NpcLeadActorInit
struct ABP_NPCLeadManager_C_NpcLeadActorInit_Params
{
	struct FVector                                     SpawnPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              SpawnRot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FollowFlag;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ANPC_SplineMoveActor_C*                      NpcSplineMoveActorRef;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.UserConstructionScript
struct ABP_NPCLeadManager_C_UserConstructionScript_Params
{
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.OnFail_9B54DB094FA168F07F4D998937B7C143
struct ABP_NPCLeadManager_C_OnFail_9B54DB094FA168F07F4D998937B7C143_Params
{
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.OnSuccess_9B54DB094FA168F07F4D998937B7C143
struct ABP_NPCLeadManager_C_OnSuccess_9B54DB094FA168F07F4D998937B7C143_Params
{
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Tick_Lead
struct ABP_NPCLeadManager_C_Tick_Lead_Params
{
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.Tick_Follow
struct ABP_NPCLeadManager_C_Tick_Follow_Params
{
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.ReceiveBeginPlay
struct ABP_NPCLeadManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.ReceiveTick
struct ABP_NPCLeadManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.OnBeginTalk
struct ABP_NPCLeadManager_C_OnBeginTalk_Params
{
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.OnEndTalk
struct ABP_NPCLeadManager_C_OnEndTalk_Params
{
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.UpdatePlayerInBuilding
struct ABP_NPCLeadManager_C_UpdatePlayerInBuilding_Params
{
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.ReceiveEndPlay
struct ABP_NPCLeadManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.OnHideRequestCounterChange
struct ABP_NPCLeadManager_C_OnHideRequestCounterChange_Params
{
};

// Function BP_NPCLeadManager.BP_NPCLeadManager_C.ExecuteUbergraph_BP_NPCLeadManager
struct ABP_NPCLeadManager_C_ExecuteUbergraph_BP_NPCLeadManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
