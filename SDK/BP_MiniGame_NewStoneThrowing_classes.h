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

// BlueprintGeneratedClass BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C
// 0x02F8 (0x0958 - 0x0660)
class ABP_MiniGame_NewStoneThrowing_C : public ABP_MiniGame_ThrowGameBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0660(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             SoundRoot;                                                // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        SignBoard;                                                // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameInputWaitTimer_C*               BPC_MiniGameInputWaitTimer;                               // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             MeshRotateRoot;                                           // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        UIArrow;                                                  // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGame_ST_ThrowArmAnimation_C*        BPC_MiniGame_ST_ThrowArmAnimation;                        // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MIniGame_ST_GameScore_C*                BPC_MIniGame_ST_GameScore;                                // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGame_ST_Camera_C*                   BPC_MiniGame_ST_Camera;                                   // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         Spring_Camera;                                            // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_Arm_Rate_2CEE598B401F33A22FC30E9C7BDACCD6;       // 0x06B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_Arm__Direction_2CEE598B401F33A22FC30E9C7BDACCD6; // 0x06B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_Arm;                                             // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_2_NewTrack_0_3F131C72400D42CCD00CA6BD4D4811DE;   // 0x06C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_3F131C72400D42CCD00CA6BD4D4811DE;   // 0x06C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_Rate_A2FF1A6346BFDAA373E02B8AB985A30F;         // 0x06D0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_A2FF1A6346BFDAA373E02B8AB985A30F;   // 0x06D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x06D5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FRotator                                    DefaultCameraRotaiton;                                    // 0x06E0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DefaultMeshRootRotation;                                  // 0x06EC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DefalutPlayerPosition;                                    // 0x06F8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DefaultPlayerRotation;                                    // 0x0704(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerTargetPosition;                                     // 0x0710(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x071C(0x0004) MISSED OFFSET
	class UWBP_MiniGame_ST_Base_C*                     MainWidget;                                               // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                ThrowCount;                                               // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CameaRelativeRotation;                                    // 0x072C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    MeshRelativeRotation;                                     // 0x0738(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                ThrowCountMax;                                            // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDirUp;                                                   // 0x0748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0749(0x0003) MISSED OFFSET
	struct FVector                                     PhysicsVelocity;                                          // 0x074C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FeedBackTime;                                             // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxImpulse;                                               // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinImpulse;                                               // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ThrowObjectScale;                                         // 0x0764(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	class UClass*                                      ThrowObjectClass;                                         // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EVENT_GAME_RESTART;                                       // 0x0778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BaseMeshRootRotate;                                       // 0x077C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrowPower;                                               // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AddYawInterpSpeed;                                        // 0x078C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AddYawValue;                                              // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RightAxisX;                                               // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RightAxisY;                                               // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreRightAxisX;                                            // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreRightAxisY;                                            // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bThrow;                                                   // 0x07A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x07A5(0x0003) MISSED OFFSET
	struct FRotator                                    BaseThrowCameraRotation;                                  // 0x07A8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0xC];                                       // 0x07B4(0x000C) MISSED OFFSET
	struct FTransform                                  CameraDefaultRelativeTrans;                               // 0x07C0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftAxisX;                                                // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftAxisY;                                                // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreLeftAxisX;                                             // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreLeftAxisY;                                             // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCameraFollow;                                            // 0x0800(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0801(0x0003) MISSED OFFSET
	struct FVector                                     BaseThrowCameraForward;                                   // 0x0804(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FollowCameraAngle;                                        // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BaseLookAtPos;                                            // 0x0814(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bChangeGradationRate;                                     // 0x0820(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0821(0x0003) MISSED OFFSET
	float                                              MinScrollSpeed;                                           // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxScrollSpeed;                                           // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentShakingTime;                                       // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    MeshPlayerRelativeRot;                                    // 0x0830(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AddShakeYaw;                                              // 0x083C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxUIArrowRot;                                            // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FST_MiniGame_ST_ArrowData                   MinArrowData;                                             // 0x0844(0x000C) (Edit, BlueprintVisible)
	struct FST_MiniGame_ST_ArrowData                   MaxArrowData;                                             // 0x0850(0x000C) (Edit, BlueprintVisible)
	bool                                               bEnableShake;                                             // 0x085C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x085D(0x0003) MISSED OFFSET
	float                                              CurrentArrowLength;                                       // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReverseUIArrow;                                          // 0x0864(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0865(0x0003) MISSED OFFSET
	float                                              CurrentArmPowerTime;                                      // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUpdateArmPower;                                          // 0x086C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x086D(0x0003) MISSED OFFSET
	float                                              ArmPowerChangeSpeedBase;                                  // 0x0870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SuccessAddPowerSpeed;                                     // 0x0874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArmUpDownChangeSpeed;                                     // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OffsetInputAngle;                                         // 0x087C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NotMoveInputAngle;                                        // 0x0880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentArmUpDownTime;                                     // 0x0884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentArmPowerChangeSpeed;                               // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x088C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 PowerChangeCurve;                                         // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               GiftNameList;                                             // 0x0898(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bMoneyGambleType;                                         // 0x08A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSpecialBucket;                                          // 0x08A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x08AA(0x0002) MISSED OFFSET
	float                                              BaseThrowPower;                                           // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrowPowerChangeSpeed;                                    // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AddYawInterpSpeedFromLStick;                              // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CanChangePowerAngle;                                      // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PowerMoveRange;                                           // 0x08BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentPowerChangeRate;                                   // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreMovePowerInput;                                        // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableDebugUI;                                            // 0x08C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x08C9(0x0003) MISSED OFFSET
	float                                              HandPowerMaxAngle;                                        // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTakeOutAnim;                                            // 0x08D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x08D1(0x0003) MISSED OFFSET
	struct FST_MiniGame_ST_HandAngleRate               MinHandAngleRateData;                                     // 0x08D4(0x0008) (Edit, BlueprintVisible)
	struct FST_MiniGame_ST_HandAngleRate               MaxHandAngleRateData;                                     // 0x08DC(0x0008) (Edit, BlueprintVisible)
	float                                              CurrentHandAngleRate;                                     // 0x08E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseHandAngle;                                            // 0x08E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UIArrowAlpha;                                             // 0x08EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UIArrowHorizonRate;                                       // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UITriangleRate;                                           // 0x08F4(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              UIArrowNumRate;                                           // 0x08FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsGameCenterMode;                                         // 0x0900(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0901(0x0007) MISSED OFFSET
	struct FName                                       OverrideHelpName;                                         // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      BlockingVolumeOnNotPlaying;                               // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bVisibleButton;                                           // 0x0918(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x0919(0x0007) MISSED OFFSET
	class UWBP_MiniGameNewStoneThrowing_C*             RefWidget;                                                // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                HitCount;                                                 // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x092C(0x0004) MISSED OFFSET
	struct FName                                       OverrideBGMID;                                            // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               EndSE;                                                    // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SinSpeed;                                                 // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendSinNum;                                              // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateMoveTime;                                           // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateMoveSpeed;                                          // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateMoveRange;                                          // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseYawValue;                                             // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_NewStoneThrowing.BP_MiniGame_NewStoneThrowing_C");
		return ptr;
	}


	void RotateUpdate();
	float ClacArmPower(float Value);
	void GetMiniGameBGMID(struct FName* ID);
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void SetBlockingVolume(bool Enabled);
	void GetMiniGameHelpName(struct FString* String);
	void SetBoardInfo();
	void InitializeArrow();
	void SetAndInterpHandRotate(bool IsInterp, float Target, float DeltaTime, float InterpSpeed);
	bool IsChangePowerAngle();
	float GetInputPowerLength();
	void AddItem(int* ItemCount);
	void AddGiftList(const struct FName& GiftName);
	void UpdateArrow(float DeltaSeconds);
	void UpdateShaking(float DeltaSeconds);
	void InitializeValue();
	void CameraUpdate(float DeltaSeconds);
	void SetRightAxisY(float Value);
	void SetRightAxisX(float Value);
	void HideUI();
	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	void ShowUIThrowResult(bool IsSuccess, int Point, bool IsVisible);
	void ShowUIGameResult();
	void SetUIScore(int InScore);
	void SetUIThrowCount(int Count);
	void UserConstructionScript();
	void Timeline_Arm__FinishedFunc();
	void Timeline_Arm__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void StartTakeOut();
	void OnFinishedTakeOutAnim();
	void PlayArmUpDown();
	void StopArmUpDown();
	void OnThorwObject();
	void OnFinishedFade();
	void DrawMiniGame();
	void RestartMiniGame();
	void OnDecideThrowingResult(bool bSuccess, int Point, const struct FName& GiftName, bool IsSpecial, class USoundAtomCue* SuccessSound);
	void LoseMiniGame();
	void WinMiniGame();
	void EndMiniGame();
	void StartMiniGame();
	void ReceiveBeginPlay();
	void OnTalkScriptEvent(int EventNumber);
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature();
	void ResumeMiniGame(const struct FString& ResumeKeyword);
	void EndGame();
	void OnFinishedFadeEndGame();
	void ConsumeGamblePrice();
	void OnStopped(bool bResult, int Score, const struct FName& GiftName, bool IsSpecial, class USoundAtomCue* SuccessSound, bool IsGameCenter);
	void FinalizeTalk();
	void ExecuteUbergraph_BP_MiniGame_NewStoneThrowing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
