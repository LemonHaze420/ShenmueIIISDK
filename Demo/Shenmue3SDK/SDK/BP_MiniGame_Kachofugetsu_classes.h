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

// BlueprintGeneratedClass BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C
// 0x04CF (0x0AD8 - 0x0609)
class ABP_MiniGame_Kachofugetsu_C : public ABP_MiniGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0609(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             FlowerPos;                                                // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             MoonPos;                                                  // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             WindPos;                                                  // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             BirdPos;                                                  // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BlockCollision4;                                          // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BlockCollision3;                                          // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BlockCollision2;                                          // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BlockCollision1;                                          // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        SignBoard;                                                // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        AnimationBall;                                            // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameBetSeet_C*                      BPC_MiniGameBetSeet;                                      // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DummyVisible;                                             // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameInputWaitTimer_C*               BPC_MiniGameInputWaitTimer;                               // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ThrowHandPos;                                             // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BowlCol5;                                                 // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BowlCol4;                                                 // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BowlCol3;                                                 // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BowlCol2;                                                 // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BowlCol1;                                                 // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        XObject;                                                  // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               CoverCollision;                                           // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RuleLookAtEndPoint;                                       // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RuleLookAtStartPoint;                                     // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_SplineMovementTalkActorCamera_C*        BPC_SplineMovementTalkActorCamera;                        // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            RuleCameraSpline;                                         // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            RuleCamera;                                               // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameGamble_C*                       BPC_MiniGameGamble;                                       // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            GameArea;                                                 // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            MoonCol;                                                  // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            WindCol;                                                  // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            BirdCol;                                                  // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            FlowerCol;                                                // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SpawnBallInfo;                                            // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             GameMainStartCameraPos;                                   // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Bowl;                                                     // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             HandMeshRoot;                                             // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BetSign;                                                  // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EMiniGameKFTypeEnum>                   CurrentSelectType;                                        // 0x0748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0749(0x0003) MISSED OFFSET
	struct FVector                                     PlayerMeshPos;                                            // 0x074C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PurePlayerMeshPos;                                        // 0x0758(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMiniGameKFFlowEnum>                   CurrentGameFlow;                                          // 0x0764(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0765(0x0003) MISSED OFFSET
	class ABP_KF_BetMoney_C*                           RefBetMoneyObj;                                           // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                StepCount;                                                // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWaitTime;                                                // 0x0774(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0775(0x0003) MISSED OFFSET
	class UCurveFloat*                                 CameraCurve;                                              // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraMoveTime;                                           // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraMoveTotalTime;                                      // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGameWin;                                                 // 0x0788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMiniGameKFTypeEnum>                   ResultType;                                               // 0x0789(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x078A(0x0006) MISSED OFFSET
	class ABP_KF_Ball2_C*                              RefBall;                                                  // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMiniGameKFTypeEnum>                   BallHitAreaType;                                          // 0x0798(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCheckOutSideBall;                                        // 0x0799(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x079A(0x0006) MISSED OFFSET
	TArray<class USphereComponent*>                    TypeColList;                                              // 0x07A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                EVENT_BET_SELECT;                                         // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EVENT_RYO_THROW;                                          // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EVENT_BET_DROP;                                           // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EVENT_GAME_RESULT;                                        // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RuleCameraSpeed;                                          // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreviewDistanceAlpha;                                     // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTalkActorCamProcessing;                                  // 0x07C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x07C9(0x0003) MISSED OFFSET
	float                                              RuleFinishSplineDelay;                                    // 0x07CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RuleWaitSplineStartTime;                                  // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                KFResultIndex;                                            // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugForceResult;                                        // 0x07D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMiniGameKFTypeEnum>                   DebugResult;                                              // 0x07D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x07DA(0x0002) MISSED OFFSET
	float                                              GameMainStartOffsetZ;                                     // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHitBallBowl;                                             // 0x07E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0xF];                                       // 0x07E1(0x000F) MISSED OFFSET
	struct FTransform                                  MeshRelativeTransform;                                    // 0x07F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrowPower;                                               // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0824(0x0004) MISSED OFFSET
	class ABP_S3SoundPlayer_C*                         SE_ThrowPlayer;                                           // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsGiftType;                                               // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0831(0x0007) MISSED OFFSET
	struct FName                                       GiftName;                                                 // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_SpawnableSequenceActor_C*                RefSequenceActor;                                         // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsForceWinGame;                                           // 0x0848(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0849(0x0003) MISSED OFFSET
	int                                                EventLosingCount;                                         // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       EventLosingKey;                                           // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDebugForceWin;                                          // 0x0858(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0859(0x0007) MISSED OFFSET
	TArray<class UBoxComponent*>                       SafetyBlockCollision;                                     // 0x0860(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UUserWidget*                                 RefWidget;                                                // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              ForceWinRate;                                             // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BackerEventFlagNum;                                       // 0x087C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<int, int>                                     FortuneFlagMap;                                           // 0x0880(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              FortuneWinRate;                                           // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x08D4(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData14[0x50];                                      // 0x08D4(0x0050) UNKNOWN PROPERTY: MapProperty BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.SequenceMap
	struct FName                                       PlayCountSaveKey;                                         // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PlayCountEventKey;                                        // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMiniGameKFTypeEnum>                   LoseResult;                                               // 0x0938(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bVisibleButton;                                           // 0x0939(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x6];                                       // 0x093A(0x0006) MISSED OFFSET
	TArray<float>                                      DetachTimeList;                                           // 0x0940(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<EMiniGameKFTypeEnum>, int>        FortuneNumMap;                                            // 0x0950(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<EMiniGameKFTypeEnum>, float>      ResultWaitNumMap;                                         // 0x09A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EMiniGameKFTypeEnum>                   ResultForChina;                                           // 0x09F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsChinaMainland;                                          // 0x09F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDebugChinaMainland;                                     // 0x09F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x1];                                       // 0x09F3(0x0001) MISSED OFFSET
	float                                              BaseWait;                                                 // 0x09F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FString>                             ViewTextListCN;                                           // 0x09F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ViewInterval;                                             // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0A0C(0x0004) MISSED OFFSET
	TArray<struct FString>                             ViewTextListTW;                                           // 0x0A10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsFortuneEnabled;                                         // 0x0A20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0A21(0x0003) MISSED OFFSET
	int                                                AppearPlayCount;                                          // 0x0A24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseAnimTime;                                             // 0x0A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxAppearPlayCount;                                       // 0x0A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                AppearTimerHandle;                                        // 0x0A30(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UCurveFloat*                                 AppearImageSpeedCurve;                                    // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseAppearSETiming;                                       // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FadeOutStartCount;                                        // 0x0A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ResultSoundDelayTime;                                     // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x0A4C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData20[0x50];                                      // 0x0A4C(0x0050) UNKNOWN PROPERTY: MapProperty BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ChinaKFImageList
	unsigned char                                      UnknownData21[0x28];                                      // 0x0AA0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C.ChinaBGImage
	struct FString                                     ChinaImageLoadKey;                                        // 0x0AC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_Kachofugetsu.BP_MiniGame_Kachofugetsu_C");
		return ptr;
	}


	void SetChinaTextures();
	float GetAppearRate();
	void GetChinaText(int Index, struct FString* Return);
	struct FVector MainCameraEndPos();
	void InitializeGameCollision();
	void UpdateBackerEventCount();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	float GetResultWaitTime(TEnumAsByte<EMiniGameKFTypeEnum> Index);
	void GetRandomResult(TEnumAsByte<EMiniGameKFTypeEnum> IgnoreType, bool UseIgnoreType, TEnumAsByte<EMiniGameKFTypeEnum>* Type);
	void UpdatePlayCountWinFlag();
	void SpawnForceResultSequence(TEnumAsByte<EMiniGameKFTypeEnum> Type);
	class UMeshComponent* GetClothMeshComponent();
	void GetLevelSequence(TEnumAsByte<EMiniGameKFTypeEnum> Type, class ULevelSequence** Sequence);
	void InitAsyncLoad(bool* dummy);
	void CalcForceWinRate();
	void IsForceWinByFortune(bool* IsForceWin);
	void IsBackerEvent(bool* IsEvent);
	void SetGameCollisionEnabled(bool Enabled);
	bool IsEventStep();
	void SaveEventLosing();
	void IsForceWin(bool* ForceWin);
	void LoadEventLosing();
	void SetBoardInfo();
	void GetBallThrowPower(float* Power);
	void DetachAndThrowBall();
	void GetAnimInstance(class UABP_MiniGame_KF_Ryo_C** AsABP_Mini_Game_KF_Ryo);
	void ForceRepay();
	void UpdateBallMove(float DeltaSeconds);
	void InitializeValue();
	void UpdateGameMainCamera(float DeltaSeconds);
	void SpawnBall();
	void DecideType(bool* Return);
	void SetPlayerMeshPos(const struct FVector& pos);
	void InterpPlayerMeshPos(float DeltaSeconds);
	void InputAction(TEnumAsByte<EMiniGameKFTypeEnum> Command);
	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	void UserConstructionScript();
	void BndEvt__FlowerCol_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__FlowerCol_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__BirdCol_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BirdCol_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__WindCol_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__WindCol_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__MoonCol_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__MoonCol_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__GameArea_K2Node_ComponentBoundEvent_656_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__CoverCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__BowlCol1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__BowlCol2_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__BowlCol3_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__BowlCol4_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__BowlCol5_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void WinMiniGame();
	void LoseMiniGame();
	void DrawMiniGame();
	void StartMiniGame();
	void EndMiniGame();
	void FinalizeTalk();
	void OnFinishedFade();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature();
	void OnTalkScriptEvent(int* EventNumber);
	void ResumeMiniGame(struct FString* ResumeKeyword);
	void ThrowBall();
	void FlowSelectDecideEvent();
	void ThrowBallFromAnim();
	void StopThrowBallSE();
	void BindBallHitXEvent();
	void ForceWin();
	void CancelMiniGame();
	void ConsumeGamblePrice();
	void ForceLoseEvent();
	void DelayedInitialize();
	void GameFlowForChina(TEnumAsByte<EMiniGameKFTypeEnum> Result);
	void ActionForChina();
	void PlayAppearUIAnim();
	void DecideResultForChina();
	void ExecuteUbergraph_BP_MiniGame_Kachofugetsu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
