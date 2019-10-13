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

// BlueprintGeneratedClass BP_Minigame_QTETitle.BP_Minigame_QTETitle_C
// 0x038C (0x0995 - 0x0609)
class ABP_Minigame_QTETitle_C : public ABP_MiniGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0609(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class UBPC_MiniGameGetKihudaFlow_C*                BPC_MiniGameGetKihudaFlow;                                // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameStandaloneTalkScript_C*         BPC_MiniGameStandaloneTalkScript;                         // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ChildActor;                                               // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        Score;                                                    // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        HiScore;                                                  // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        LastScore;                                                // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ScoreTextRoot;                                            // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialBillboardComponent*                 MaterialCircle;                                           // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialBillboardComponent*                 MaterialCross;                                            // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialBillboardComponent*                 MaterialSquare;                                           // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MovingPadRight;                                           // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MovingPadMiddle;                                          // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MovingPadLeft;                                            // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        VideoCabinet_UE;                                          // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _______0__Direction_CDCC615B427228829B5412909D5FD5B0;     // 0x0688(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0689(0x0007) MISSED OFFSET
	class UTimelineComponent*                          UnknownVar01;                                           // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _______4__Direction_000B4B2540C3627E8191098599E7E246;     // 0x0698(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0699(0x0007) MISSED OFFSET
	class UTimelineComponent*                          UnknownVar02;                                           // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScoreFlashTimeline__Direction_EFC8C32C4F94B5C66A70CB8B770FBF93;// 0x06A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x06A9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          ScoreFlashTimeline;                                       // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _______2__Direction_E811283B4F5239BBADB2249A4FBA65C4;     // 0x06B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x06B9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          UnknownVar03;                                           // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _______1__Direction_0991D76A40F1B706D91C0687CB3F8CC9;     // 0x06C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x06C9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          UnknownVar04;                                           // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MovingPadRightTimeline_Roll_EE297A3644AA70B51E67E2912169A19E;// 0x06D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    MovingPadRightTimeline__Direction_EE297A3644AA70B51E67E2912169A19E;// 0x06DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x06DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          MovingPadRightTimeline;                                   // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MovingPadMiddleTimeline_Roll_B5011B4641E7047AED551381C77CB187;// 0x06E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    MovingPadMiddleTimeline__Direction_B5011B4641E7047AED551381C77CB187;// 0x06EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x06ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          MovingPadMiddleTimeline;                                  // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MovingPadLeftTimeline_Roll_7250098F457D5110B923AAB5B870CA0B;// 0x06F8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    MovingPadLeftTimeline__Direction_7250098F457D5110B923AAB5B870CA0B;// 0x06FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x06FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          MovingPadLeftTimeline;                                    // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FDataTableRowHandle                         DatatableHandle;                                          // 0x0708(0x0010) (Edit, BlueprintVisible)
	TArray<struct FQTECommandStruct>                   CommandSequence;                                          // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class US3LevelSequencePlayer*                      IntroLevelSequencePlayer;                                 // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_SpawnableSequenceActor_C*>        RightPunchLevelSequencer;                                 // 0x0730(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_SpawnableSequenceActor_C*>        MiddlePunchLevelSequencer;                                // 0x0740(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_SpawnableSequenceActor_C*>        LeftPunchLevelSequencer;                                  // 0x0750(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                CommondsIndex;                                            // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CommondsLastIndex;                                        // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	Enum_QTETitleCommand                               Command;                                                  // 0x0768(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0769(0x0007) MISSED OFFSET
	class ABP_SpawnableSequenceActor_C*                CurrentLevelSequencer;                                    // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<Enum_QTETitlePlayList>                      Playlist;                                                 // 0x0778(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                PlaylistIndex;                                            // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x078C(0x0004) MISSED OFFSET
	TArray<struct FQTECommandCheckStruct>              CommandSequenceOneTurn;                                   // 0x0790(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                LivesLeft;                                                // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMissed;                                                  // 0x07A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x07A5(0x0003) MISSED OFFSET
	int                                                TotalLife;                                                // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMultiButtonsCommand;                                     // 0x07AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRightButtonPushed;                                       // 0x07AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMiddleButtonPushed;                                      // 0x07AE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLeftButtonPushed;                                        // 0x07AF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ForceFeedBackRef;                                         // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Combo;                                                    // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ComboScoreMax;                                            // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PadLeftRoll;                                              // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PadMiddleRoll;                                            // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PadRightRoll;                                             // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	Enum_QTETitlePlayList                              CachedCommand;                                            // 0x07CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x07CD(0x0003) MISSED OFFSET
	float                                              TimedOut;                                                 // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CommandButtons;                                           // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentScore;                                             // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HitScore;                                                 // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ComboScore;                                               // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MovingPadPlayRate;                                        // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingPadReverseRate;                                     // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStarted;                                                 // 0x07EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x07ED(0x0003) MISSED OFFSET
	struct FRotator                                    PadDefaultRoll;                                           // 0x07F0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              feint_speed_rate;                                         // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                hi_Score;                                                 // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                last_score;                                               // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class US3LevelSequencePlayer*                      life_down;                                                // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class US3LevelSequencePlayer*                      game_clear;                                               // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class US3LevelSequencePlayer*                      use_coin;                                                 // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUpdateHighScore;                                         // 0x0820(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0821(0x0007) MISSED OFFSET
	class ABP_S3SoundPlayer_C*                         BGM_Player;                                               // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugPrintCommand;                                       // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDebugAuto;                                              // 0x0831(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x0832(0x0002) MISSED OFFSET
	float                                              DebugAutoTimer;                                           // 0x0834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DebugAutoIndex;                                           // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x083C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData17[0x50];                                      // 0x083C(0x0050) UNKNOWN PROPERTY: MapProperty BP_Minigame_QTETitle.BP_Minigame_QTETitle_C.SequenceMap
	class AActor*                                      SequenceTarget;                                           // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                FlashCount;                                               // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCancel;                                                  // 0x089C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x089D(0x0003) MISSED OFFSET
	class USoundAtomCue*                               SE_Beep;                                                  // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPunchAnimation;                                          // 0x08A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x08A9(0x0003) MISSED OFFSET
	float                                              TimedOutDownValue;                                        // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTimedOutTime;                                          // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTimedOutTime;                                          // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RestartAddTimeValue;                                      // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     IntroSequenceOffset;                                      // 0x08BC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BaseSequenceOffset;                                       // 0x08C8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0xC];                                       // 0x08D4(0x000C) MISSED OFFSET
	struct FTransform                                  PadLeftTrans;                                             // 0x08E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        Pa;                                                       // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData21[0x8];                                       // 0x0918(0x0008) MISSED OFFSET
	struct FTransform                                  PadMiddleTrans;                                           // 0x0920(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  PadRightTrans;                                            // 0x0950(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                TimeOutCommandCount;                                      // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxTimeOutCommandCount;                                   // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TimeOutCurve;                                             // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RestartBackCount;                                         // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawTime;                                           // 0x0994(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Minigame_QTETitle.BP_Minigame_QTETitle_C");
		return ptr;
	}


	void CreateIconMaterial(class UMaterialBillboardComponent* Component, class UTexture* Texture);
	float GetTimeOutValue();
	void InitializePadTrans();
	void SetTime();
	void GetLevelSequence(TEnumAsByte<EQTETitleSequence> Type, class ULevelSequence** Sequence);
	void InitAsyncLoad(bool* dummy);
	void InitButtonIcon();
	void ResetScore(class UChildActorComponent* ChildComponent);
	void SetScoreNum(class UChildActorComponent* ChildActor, int Number, bool IsStage);
	void SetEnabledScore(bool bEnabled);
	void AllDestroySequenceActors();
	void SpawnSequenceActor(class ULevelSequence* InSequence, class AActor* AttachParentActor, const struct FName& AttachSocketName, class ABP_SpawnableSequenceActor_C** SpawnObj);
	void DebugDispLog();
	void DebugAutoPlay();
	void Load();
	void Save();
	void ItemGetCheck(int* item_count1);
	void FeintCommandCheck(const struct FQTECommandStruct& Param, bool* is_feint);
	void AddRightCommand();
	void AddMiddleCommand();
	void AddLeftCommand();
	void RefreshScores(class AWBP_QT2_Score2_C* Score, class UChildActorComponent* ChildComponent);
	void QTETitleFadeIn();
	void SetPlayRate(int Buttons, class ULevelSequencePlayer* SequencerRef);
	void InitializeBoxingSequencers();
	void PickUpRandomBoxingSequencer(TArray<class ABP_SpawnableSequenceActor_C*>* InputSequencerArray, class ABP_SpawnableSequenceActor_C** OutputSequencer);
	void ResetButtonUnPushed();
	void LoseCheck(int LifeLeft, bool* LostGame);
	void HideAllIcons();
	void ToggleIconRight(bool Hide);
	void ToggleIconMiddle(bool Hide);
	void ToggleIconLeft(bool Hide);
	void TransferNameToEnum(const struct FName& InputName, Enum_QTETitleCommand* Output);
	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	void UserConstructionScript();
	void MovingPadLeftTimeline__FinishedFunc();
	void MovingPadLeftTimeline__UpdateFunc();
	void MovingPadLeftTimeline__SE_Timing__EventFunc();
	void MovingPadLeftTimeline__Feint_Finish__EventFunc();
	void MovingPadLeftTimeline__ShowIcon__EventFunc();
	void MovingPadMiddleTimeline__FinishedFunc();
	void MovingPadMiddleTimeline__UpdateFunc();
	void MovingPadMiddleTimeline__SE_Timing__EventFunc();
	void MovingPadMiddleTimeline__Feint_Finish__EventFunc();
	void MovingPadMiddleTimeline__ShowIcon__EventFunc();
	void MovingPadRightTimeline__FinishedFunc();
	void MovingPadRightTimeline__UpdateFunc();
	void MovingPadRightTimeline__SE_Timing__EventFunc();
	void MovingPadRightTimeline__Feint_Finish__EventFunc();
	void MovingPadRightTimeline__ShowIcon__EventFunc();
	void UnknownFunc01();
	void ScoreFlashTimeline__FinishedFunc();
	void ScoreFlashTimeline__UpdateFunc();
	void ScoreFlashTimeline__test2__EventFunc();
	void ScoreFlashTimeline__test__EventFunc();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ReceiveTick(float* DeltaSeconds);
	void StartMiniGame();
	void PlayIntro();
	void GameStart();
	void GetCommand();
	void LeftPunchPushed();
	void MiddlePunchPushed();
	void RightPunchPushed();
	void StartPlayList();
	void ContinuePlayList();
	void EndMiniGame();
	void onFinishScreenFadeOut_Event_1();
	void TimeOutCheck();
	void WinMiniGame();
	void RightButtonPushed();
	void RightButtonReleased();
	void MiddleButtonPushed();
	void MiddleButtonReleased();
	void LeftButtonPushed();
	void LeftButtonReleased();
	void FaceButtonRPushed();
	void FaceButtonMPushed();
	void FaceButtonLPushed();
	void ShowMovingPadLeft(bool bHide);
	void PadLeftBack();
	void ReversePads();
	void ShowMovingPadMiddle(bool bHide);
	void PadMiddleBack();
	void ShowMovingPadRight(bool bHide);
	void PadRightBack();
	void PunchSucceed();
	void LoseMiniGame();
	void PadRightFlash();
	void PadMiddleFlash();
	void PadLeftFlash();
	void Light_Flash(bool PlayLumpOffSE);
	void LifeDownSequence();
	void ScoreFlash();
	void GameClearSequence();
	void Play_UseCoin();
	void Initialize();
	void RestartMiniGame();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature();
	void ResumeMiniGame(struct FString* ResumeKeyword);
	void OnTalkScriptEvent(int* EventNumber);
	void One_Play_End();
	void PunchFlashStop();
	void OnEndKihudaFlow();
	void UseCoinFinished();
	void CancelMiniGame();
	void OnFinishedFadeEndGame();
	void OnIntroFinished();
	void EventUseCoinUnBind();
	void LifeDownFinished_Miss();
	void GameClearFinished_2();
	void OnFinished_Event_00();
	void PadRightStopFlash();
	void PadMiddleStopFlash();
	void PadLeftStopFlash();
	void Event_ExecuteResult();
	void Event_EndMiniGame();
	void ExecuteUbergraph_BP_Minigame_QTETitle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
