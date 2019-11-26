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

// BlueprintGeneratedClass BP_Forklift_New.BP_Forklift_New_C
// 0x0257 (0x0864 - 0x060D)
class ABP_Forklift_New_C : public ABP_KartPawnBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x060D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               CameraBlockCollision;                                     // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               CollisionErrorCheck;                                      // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LeftHandPos;                                              // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RightHandPos;                                             // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        handle;                                                   // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             HandleRotateRoot;                                         // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             HandleRoot;                                               // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         Light2;                                                   // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         Light1;                                                   // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Lift;                                                     // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               LiftVerticalCollision;                                    // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             ContainerPoint2;                                          // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             ContainerPoint1;                                          // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               LiftCollision;                                            // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            FirstPersonCamera;                                        // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             ContainerAttachPoint;                                     // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               ForwardCollision;                                         // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               ContainerSensor;                                          // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      RYO;                                                      // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ListRoot;                                                 // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ShakeTimeLine_Shake_A32F275348F3335C07DF3A92658D0E83;     // 0x06B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ShakeTimeLine__Direction_A32F275348F3335C07DF3A92658D0E83;// 0x06BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ShakeTimeLine;                                            // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_FL_Container_C*                          RefContainer;                                             // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCarryBox;                                                // 0x06D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanDownArea;                                             // 0x06D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLiftMoving;                                              // 0x06D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInputEnabled;                                            // 0x06D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CarriedNum;                                               // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentHightNum;                                          // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NextHighNum;                                              // 0x06DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForkSpeed;                                                // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReverseLift;                                             // 0x06E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x06E5(0x0003) MISSED OFFSET
	TArray<float>                                      LiftUpDownRate;                                           // 0x06E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bPreCarryBox;                                             // 0x06F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreLiftMoving;                                           // 0x06F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCameraSubjectivity;                                      // 0x06FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x06FB(0x0001) MISSED OFFSET
	float                                              ForkAlpha;                                                // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BaseLiftRootRelativeLocation;                             // 0x0700(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPause;                                                   // 0x070C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x070D(0x0003) MISSED OFFSET
	struct FVector                                     MeshVelocity;                                             // 0x0710(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SoundCollisionJudgeSpeed;                                 // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         SE_TireConcretePlayer;                                    // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         SE_LiftUpPlayer;                                          // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         SE_LiftDownPlayer;                                        // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         SE_CrushPlayer;                                           // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         SE_CrushWoodboxPlayer;                                    // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         SE_SkidPlayer;                                            // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBackAccel;                                               // 0x0750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0751(0x0003) MISSED OFFSET
	struct FVector                                     ShakeBaseLocation;                                        // 0x0754(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                ContainerAreaCount;                                       // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0764(0x0004) MISSED OFFSET
	TArray<bool>                                       CanDownAreaChangeList;                                    // 0x0768(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CanDownAreaCount;                                         // 0x0778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceStop;                                               // 0x077C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x077D(0x0003) MISSED OFFSET
	struct FTransform                                  ForceStopTrans;                                           // 0x0780(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentTopHeightNum;                                      // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLightOn;                                                // 0x07B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x07B5(0x0003) MISSED OFFSET
	float                                              LightIntensity;                                           // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SteeringAnimRate;                                         // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UABP_ForkliftRyo_Mini_C*                     RefRyoABP;                                                // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HandleRootUpVector;                                       // 0x07C8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x07D4(0x0004) MISSED OFFSET
	class UForceFeedbackEffect*                        FBLiftStop;                                               // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        FBLiftMove;                                               // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HandleRotateAngle;                                        // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpeedOnSlow;                                           // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MiniGame_FL_LiftHeight>              CurrentLiftHeight;                                        // 0x07F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MiniGame_FL_LiftHeight>              NextLiftHeight;                                           // 0x07F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MiniGame_FL_LiftHeight>              CurrentTopLiftHeight;                                     // 0x07F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1];                                       // 0x07F3(0x0001) MISSED OFFSET
	float                                              InsideCollisionTimer;                                     // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RespawnJudgeTime;                                         // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsRespawn;                                                // 0x07FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x07FD(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRespawnDispacher;                                       // 0x0800(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UForceFeedbackEffect*                        FBCrush;                                                  // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_SubtitlePlayer_C*                        SubtitlePlayer;                                           // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PlayScriptLabelName;                                      // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               ExistUpLabelList;                                         // 0x0828(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               TimeUpLabelList;                                          // 0x0838(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnEndwithPlayingLabelDispacher;                           // 0x0848(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                SpeedControlCount;                                        // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableSoundUpdate;                                      // 0x085C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x085D(0x0003) MISSED OFFSET
	float                                              HitSoundPlayDegree;                                       // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Forklift_New.BP_Forklift_New_C");
		return ptr;
	}


	bool CheckNeedReverseHit(const struct FVector& ImpactNormal);
	void DisableUpdateSound();
	void ChangeLoopSEState(bool Stop);
	bool IsPlayingScriptLabel();
	void CheckLiftMoveSafety();
	void SetScriptLabels(TArray<struct FName>* ExistUp, TArray<struct FName>* Timeup);
	void StopPlayingFeedBack();
	void IsInputEnabled(bool* bInputEnabled);
	void DebugLog();
	void GetScriptLabel(TEnumAsByte<E_MiniGame_FL_LabelType> Type, struct FName* Output);
	void PlayScriptLabel(const struct FName& Label);
	void ResetRespawnFlag();
	void CollisionCheck();
	void CheckLiftMove();
	void SetEnabledSpeedControlCount(bool Add);
	void InitializeValue();
	void UpdateSteeringAnim(float InputValue);
	void UpdateLight();
	class UMeshComponent* GetClothMeshComponent();
	void ForceMoveLiftTopLocation();
	void UpdateCanDownAreaFlag(bool* ChangeState);
	void CheckDownContainer(bool* Check);
	void ReMoveLift();
	void CheckHitSomethingOnTheLine(const struct FVector& StartPoint, const struct FVector& EndPoint, class AActor** Hit);
	void CheckUpContainer(bool* Check);
	void CheckCanLiftDonw(bool* CanDown);
	void CheckHitContainerOnTheLine(const struct FVector& StartPoint, const struct FVector& EndPoint, class ABP_FL_Container_C** Hit);
	void CanDownContainer(bool* CanDown);
	void UpdateContainerCollision();
	void SetForkAlpha(float Alpha);
	void GetForkAlpha(float* Alpha);
	void UpdateLiftUpDown(float DeltaSeconds);
	void MoveLift(TEnumAsByte<E_MiniGame_FL_LiftHeight> NextLiftHeight);
	void UserConstructionScript();
	void ShakeTimeLine__FinishedFunc();
	void ShakeTimeLine__UpdateFunc();
	void ReceiveBeginPlay();
	void StopLiftMove();
	void InputForkDown();
	void BndEvt__ContainerSensor_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__ContainerSensor_K2Node_ComponentBoundEvent_43_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__LiftCollision_K2Node_ComponentBoundEvent_42_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);
	void ForceStop();
	void InputChangeCamera();
	void PauseForMap(bool Pause);
	void Event_InputThrottle(float Throttle_Axis);
	void Event_InputSteering(float Steering_Axis);
	void InitializeSound();
	void Update_Engine_Sound();
	void BndEvt__CrushSoundCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__ForwardCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void PlayScriptWithInputOff(TEnumAsByte<E_MiniGame_FL_LabelType> Type);
	void EndGameWithPlayingLabel();
	void ReverseLift();
	void ExecuteUbergraph_BP_Forklift_New(int EntryPoint);
	void OnEndwithPlayingLabelDispacher__DelegateSignature();
	void OnRespawnDispacher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
