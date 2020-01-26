#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_NPC_Lead.BP_NPC_Lead_C
// 0x007C (0x09B8 - 0x093C)
class ABP_NPC_Lead_C : public ABP_S3Character_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x093C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0940(0x0008) (Transient, DuplicateTransient)
	class UBPC_PCGroundSensor_C*                       BPC_PCGroundSensor;                                       // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_S3AnimNotifyComponent_C*                 BP_S3AnimNotifyComponent;                                 // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_S3PlayerStairClimber_C*                 BPC_S3PlayerStairClimber;                                 // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_NPCLeadAccelerator_C*                   BPC_NPCLeadAccelerator;                                   // 0x0960(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_TalkAvoidanceNPCLead_C*                 BPC_TalkAvoidanceNPCLead;                                 // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFootprintComponent_C*                       FootprintComponent;                                       // 0x0970(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_S3_TalkComponent_C*                     BPC_S3_TalkComponent;                                     // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               TalkSightParam;                                           // 0x0980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeadLookAtFlag;                                           // 0x0981(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0982(0x0006) MISSED OFFSET
	class USkeletalMesh*                               InitialSkeletalMesh;                                      // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_S3ReflectorBoardActor_C*                 ReflectorBoard;                                           // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_LeadNPCMoveState>                   MovementState;                                            // 0x0998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0999(0x0003) MISSED OFFSET
	float                                              TickDeltaSeconds;                                         // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableIK;                                                 // 0x09A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Teleported;                                               // 0x09A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x09A2(0x0006) MISSED OFFSET
	class UBP_Lead_MotionDatabase_C*                   MotionDatabase;                                           // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MotionDBClass;                                            // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC_Lead.BP_NPC_Lead_C");
		return ptr;
	}


	int GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	float GetCurrentTargetSpeed();
	bool IsSitting();
	void SetLookAheadSpline(class USplineComponent* spline);
	bool CanEnterBuilding(class ABP_S3BuildingStaticMeshActor_C* Building);
	void TeleportToLeavePoint();
	void StopMovement(bool bInstant);
	bool IsIdle();
	void GetEnableIK(bool* bIKEnabled);
	void SetEnableIK(bool bInIKEnabled, bool* dummy);
	void GetAnimVelocity(float* Velocity);
	class UBPC_S3PlayerStairClimber_C* GetStairClimber();
	void GetSpeed(float* Speed);
	void SetTargetSpeed(float TargetSpeed);
	bool IsTalking();
	struct FRotator GetTalkRotation();
	void AddTurnAroundComponent(class UBPC_TurnAround_C** Component);
	void UserConstructionScript();
	void OnTalkFinished(class US3TalkComponent* TalkComponent, bool interrupted);
	void OnTalkStart(class US3TalkComponent* TalkComponent);
	void Screen_Player();
	void Screen_NPC();
	void OnFinishedTurnRotate(class UBPC_TurnAround_C* SelfTurnAroundComponent);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void DecideDetectAction(ES3ActionIconType Type);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_0_OnStartStairUse__DelegateSignature();
	void BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_1_OnEndStairUse__DelegateSignature();
	void HandleTeleportSucceeded(bool bIsATest);
	void ExecuteUbergraph_BP_NPC_Lead(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
