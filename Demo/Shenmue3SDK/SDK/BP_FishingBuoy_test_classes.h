#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FishingBuoy_test.BP_FishingBuoy_test_C
// 0x0128 (0x0460 - 0x0338)
class ABP_FishingBuoy_test_C : public AStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                  // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             BuoyRoot;                                                 // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Cable_Attach;                                             // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BuoyMesh;                                                 // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             MeshShakeRoot;                                            // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            CollisionForFishArea;                                     // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    particle;                                                 // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileMovementComponent*                ProjectileMovement;                                       // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BouyMoveTimeline_OffsetRotation_4BFFF60741FC3F2EF7EDF58AFB152CF7;// 0x0380(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BouyMoveTimeline__Direction_4BFFF60741FC3F2EF7EDF58AFB152CF7;// 0x0384(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0385(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BouyMoveTimeline;                                         // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Big_UpDown_z_2ADE53F343BBB05AE42F379207DDE0E0;            // 0x0390(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Big_UpDown__Direction_2ADE53F343BBB05AE42F379207DDE0E0;   // 0x0394(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Big_UpDown;                                               // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Small_UpDown_z_35223CE64F4078B5614EC8A1B9239740;          // 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Small_UpDown__Direction_35223CE64F4078B5614EC8A1B9239740; // 0x03A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Small_UpDown;                                             // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              save_pos;                                                 // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	class ABP_Minigame_Fishing_Test_C*                 MiniGame;                                                 // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              HomingDelayTime;                                          // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugLandingArrow;                                        // 0x03C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	TArray<class AActor*>                              DebugArrow;                                               // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_Fishing_Arrow_C*                         FishingArrow;                                             // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseSplineGuide;                                           // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03E1(0x0003) MISSED OFFSET
	int                                                SplinePosIndex;                                           // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SplineTime;                                               // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PullPower;                                                // 0x03EC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BaseLocation;                                             // 0x03F8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              IdleMoveAngle;                                            // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IdleMoveScale;                                            // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsIdleMove;                                               // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	float                                              SpeedScale;                                               // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CableLengthRate;                                          // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsActiveVelocityDir;                                      // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	struct FVector                                     PreBuoyLocation;                                          // 0x041C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LocationUpdateTimer;                                      // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LocationUpdateInterval;                                   // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentBuoyBaseDirection;                                 // 0x0430(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentVelocity;                                          // 0x043C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              BuoyMovePlayRate;                                         // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentBuoyDepth;                                         // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnEmitterSpeed;                                        // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PullPowerInterpRate;                                      // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RefractionRate;                                           // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PredictionMaxSpeed;                                       // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FishingBuoy_test.BP_FishingBuoy_test_C");
		return ptr;
	}


	void SetRefractionRate(float Rate);
	void InitializeBuoyTransform(const struct FVector& PreBuoyLocation, const struct FVector& BaseDirection);
	void SetPreBuoyLocation(const struct FVector& PreBuoyLocation);
	void UpdateBuoyTransform(bool ForceUpdate);
	void GetCableLengthRate(float* CableLengthRate);
	void ResetIdleMove();
	void UpdateIdleMove();
	void UpdatePull();
	void AddPower(const struct FVector& ArgVector, float ArgPow);
	void GetBPMinigameFishing(class ABP_Minigame_Fishing_Test_C** RetBPFishing);
	void ProjectileStopFunc();
	void UpdateGuideArrowMove();
	void SetupGuideArrow(class ABP_Fishing_Arrow_C* ArgArrow, float ArgArrowPow);
	void UpdateDelayHoming();
	void ResetHoming();
	void StartProjectileAndHoming(class USceneComponent* ArgHomingPos, float ArgDelayTime);
	void SetupTargetHoming(class USceneComponent* ArgTargetActor);
	void SetCaptureActive(bool bEnabled);
	void UserConstructionScript();
	void Small_UpDown__FinishedFunc();
	void Small_UpDown__UpdateFunc();
	void Big_UpDown__FinishedFunc();
	void Big_UpDown__UpdateFunc();
	void BouyMoveTimeline__FinishedFunc();
	void BouyMoveTimeline__UpdateFunc();
	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void Stop_Small_UpDown();
	void Start_Big_UpDown();
	void Stop_Big_UpDown();
	void Set_Active(bool is_active);
	void SetLureMesh(class UStaticMesh* Mesh, float Scale);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void Start_Small_UpDown();
	void SetActiveBuoyVelocityDir(bool Active);
	void StopBuoyVelocityMove();
	void PlayBuoyVelocityMove();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ReceiveBeginPlay();
	void Update();
	void ExecuteUbergraph_BP_FishingBuoy_test(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
