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

// BlueprintGeneratedClass BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C
// 0x025E (0x0868 - 0x060A)
class ABP_WhackMoleMiniGame_C : public ABP_MiniGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x060A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        DummyHammer;                                              // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DummyHammerRoot;                                          // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameGetKihudaFlow_C*                BPC_MiniGameGetKihudaFlow;                                // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        RenderStage;                                              // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh_re;                                          // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameStandaloneTalkScript_C*         BPC_MiniGameStandaloneTalkScript;                         // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        SequenceTrans;                                            // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        RenderScore3;                                             // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        RenderScore2;                                             // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        RenderScore1;                                             // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ScoreRenderRoot;                                          // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        BigMoleR;                                                 // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        BigMoleL;                                                 // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        MoleY;                                                    // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        MoleX;                                                    // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        MoleB;                                                    // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        MoleA;                                                    // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CameraPos;                                                // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LookPos;                                                  // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             MeshRotateRoot;                                           // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Hammer;                                                   // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WhackAMole;                                               // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             MeshPosRoot;                                              // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CenterPos;                                                // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_FlashHighScore__Direction_C3FCFBA8425929BF4447AF842E29B614;// 0x06E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x06E1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_FlashHighScore;                                        // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_FlashScore1__Direction_874B4B6445D6967C83AC91BFE282DD19;// 0x06F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x06F1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          TL_FlashScore1;                                           // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FieldOfViewTimeLine_CameraFOV_46D4473041C5C17179F33FB141B47137;// 0x0700(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FieldOfViewTimeLine__Direction_46D4473041C5C17179F33FB141B47137;// 0x0704(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0705(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FieldOfViewTimeLine;                                      // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ABP_MiniGameMole_C*>                  MoleList;                                                 // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABP_MiniGameMole_C*>                  BigMoleList;                                              // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               bPlayMiniGame;                                            // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MiniGameWhackMoleCommand>            CurrentCommand;                                           // 0x0731(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MiniGameWhackMoleCommand>            PreCommand;                                               // 0x0732(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MiniGameWhackMoleCommand>            PrePreCommand;                                            // 0x0733(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AppearCount;                                              // 0x0734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentTime;                                              // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AppearMoleId;                                             // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentScore;                                             // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTime;                                                  // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerMeshPos;                                            // 0x0748(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpSpeed;                                              // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckWhack;                                              // 0x0758(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0759(0x0007) MISSED OFFSET
	class ABP_MiniGameMole_C*                          RefNowTargetMole;                                         // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledInput;                                            // 0x0768(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0769(0x0003) MISSED OFFSET
	float                                              CurrentMeshHandRotY;                                      // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinMeshHandRotY;                                          // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxMeshHandRotY;                                          // 0x0774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PurePlayerMeshPos;                                        // 0x0778(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OffsetPlayerMeshPos;                                      // 0x0784(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PrePurePlayerMeshPos;                                     // 0x0790(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              RotateInterpSpeed;                                        // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinWhackAnimRate;                                         // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxWhackAnimRate;                                         // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WhackAnimRate;                                            // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHitMole;                                                 // 0x07AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x07AD(0x0003) MISSED OFFSET
	int                                                CurrentRoundNum;                                          // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxRoundNum;                                              // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndWaitTime;                                              // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHitMoleIsBig;                                            // 0x07BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x07BD(0x0003) MISSED OFFSET
	float                                              WhackAnimHandNeckRate;                                    // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEndMiniGame;                                             // 0x07C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x07C5(0x0003) MISSED OFFSET
	int                                                HighScore;                                                // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x07CC(0x0004) MISSED OFFSET
	class UMG_WMData*                                  MoleDataAsset;                                            // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InputInterval;                                            // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseInputInterval;                                        // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledStickInput;                                       // 0x07E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x07E1(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<E_MiniGameWhackMoleCommand>>    InputCommandList;                                         // 0x07E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<E_MiniGameWhackMoleCommand>            CurrentInputCommand;                                      // 0x07F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x07F9(0x0003) MISSED OFFSET
	float                                              InputRightValue;                                          // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class US3LevelSequencePlayer*                      StartLevelSequencePlayer;                                 // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlashScoreEndTime;                                        // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x080C(0x0004) MISSED OFFSET
	class UABP_MiniGame_WM_Ryo_re_C*                   RefAnimIns;                                               // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_S3SoundPlayer_C*>                 RefBGMPlayerList;                                         // 0x0818(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class USoundAtomCue*>                       BGMCueList;                                               // 0x0828(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundAtomCue*                               HitSECue;                                                 // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastScore;                                                // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCancel;                                                  // 0x0844(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHighScore;                                              // 0x0845(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x0846(0x0002) MISSED OFFSET
	int                                                MAX_SCORE;                                                // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSuddenDeathMode;                                         // 0x084C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x084D(0x0003) MISSED OFFSET
	class UMG_WMData*                                  SuddenDeathMoleDataAsset;                                 // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseMoleAppearWaitTime;                                   // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinMoleAppearWaitTime;                                    // 0x085C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SuddenDeathTimeLimitMoleNum;                              // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SuddenDeathMoleCount;                                     // 0x0864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WhackMoleMiniGame.BP_WhackMoleMiniGame_C");
		return ptr;
	}


	void UpdateSuddenDeathMole();
	void GetMoleAppearWaitTime(float* Time);
	void SetDummyHammerRandomRot();
	void SetLastScore();
	class UMeshComponent* GetClothMeshComponent();
	void SetRenderScore(class UChildActorComponent* ScoreChildActor, int Score, bool IsStage);
	void SetRenderScoreEnabled(bool bEnabled);
	void SetMoleTickEnabled(bool bEnabled);
	void StopRoundBGM();
	void SetHighScore();
	void PlayRoundBGM();
	void CheckHighScore(bool* HighScore);
	void LoadScore();
	void SaveHighScore();
	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	void UpdateInputCommand();
	void UpdateInputInterval(float DeltaSeconds);
	void UpdateMoleAppearFromData(class UMG_WMData* MoleData, int RoundNum, bool* End);
	void IsCameraPosMove(bool* Move);
	void UpdateCamera(float DeltaSeconds);
	void InitializeValue();
	void CanNextRound(bool* Next);
	void GetMaxTime(class UMG_WMData* Data, int RoundNum, float* Time);
	void UpdateWhackAnim(float DeltaSeconds);
	void GetUnAdjustedPos(const struct FVector& Input, struct FVector* pos);
	void GetAdjustedPos(const struct FVector& Input, struct FVector* pos);
	void IsAppearMole(TArray<class ABP_MiniGameMole_C*>* MoleList, bool* Enabled);
	void CheckMoleWhack();
	void InterpPlayerMeshPos(float DeltaSeconds);
	void SetPlayerMeshPos(const struct FVector& NewPos);
	void AddScorePoint(int AddScore);
	void EndCheck(bool* EndGame);
	void InputAction(bool* Enable);
	void UserConstructionScript();
	void FieldOfViewTimeLine__FinishedFunc();
	void FieldOfViewTimeLine__UpdateFunc();
	void TL_FlashScore1__FinishedFunc();
	void TL_FlashScore1__UpdateFunc();
	void TL_FlashScore1__FlashOff__EventFunc();
	void TL_FlashScore1__FlashOn__EventFunc();
	void TL_FlashHighScore__FinishedFunc();
	void TL_FlashHighScore__UpdateFunc();
	void TL_FlashHighScore__FlashOff__EventFunc();
	void TL_FlashHighScore__FlashOn__EventFunc();
	void InputAButton();
	void InputBButton();
	void InputXButton();
	void InputYButton();
	void InputLeftStick(float Value);
	void UpInterpSpeed();
	void DownInterpSpeed();
	void InputRightStick(float Value);
	void InputLeftUp();
	void InputRightDown();
	void OnFinishedFade();
	void EndMiniGame();
	void StartMiniGame();
	void WinMiniGame();
	void LoseMiniGame();
	void DrawMiniGame();
	void FinalizeTalk();
	void CustomEvent();
	void CustomEvent_2(const struct FString& ResumeKeyword);
	void CustomEvent_3(int EventNumber);
	void RestartMiniGame();
	void OnFinishedCoinSequence();
	void OnFinishedStart();
	void Event_EndMiniGame();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void WhackMole();
	void FlashScore1();
	void StartRound(int RoundNum);
	void EnableScore1();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_42_OnGameContinueDispatcher__DelegateSignature();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_43_OnGameFinishedDispatcher__DelegateSignature();
	void ResumeMiniGame(const struct FString& ResumeKeyword);
	void OnTalkScriptEvent(int EventNumber);
	void EndGame();
	void OnEndKihudaFlow();
	void ChangedClothes(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName);
	void PlayFlashHighScore();
	void WhackMoleMiss();
	void ExecuteUbergraph_BP_WhackMoleMiniGame(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
