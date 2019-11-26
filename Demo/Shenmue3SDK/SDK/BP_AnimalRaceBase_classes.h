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

// BlueprintGeneratedClass BP_AnimalRaceBase.BP_AnimalRaceBase_C
// 0x02AF (0x08B8 - 0x0609)
class ABP_AnimalRaceBase_C : public ABP_MiniGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0609(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class UBPC_MiniGameText_C*                         BPC_MiniGameText;                                         // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        SignBoard;                                                // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameBetSeet_C*                      BPC_MiniGameBetSeet;                                      // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            OpeningCameraSpline;                                      // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               camera_move_collision;                                    // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            MoveSpline4;                                              // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            MoveSpline3;                                              // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            MoveSpline2;                                              // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            MoveSpline1;                                              // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SplineRoot;                                               // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameInputWaitTimer_C*               BPC_MiniGameInputWaitTimer;                               // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameGamble_C*                       BPC_MiniGameGamble;                                       // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               support2;                                                 // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               support1;                                                 // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             support_scene;                                            // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               wall01;                                                   // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               wall05;                                                   // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               wall04;                                                   // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               wall03;                                                   // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               wall02;                                                   // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             wall_scene;                                               // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Select_Camera;                                            // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CameraStartPoint;                                         // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CameraEndPoint;                                           // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        animal4;                                                  // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        animal3;                                                  // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        animal2;                                                  // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        animal1;                                                  // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Animals_Scene;                                            // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Goal_collision;                                           // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        base_mesh;                                                // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CountDown___Track_0_85520EF54B069EF9E6125EB41313AADD;     // 0x0710(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CountDown__Direction_85520EF54B069EF9E6125EB41313AADD;    // 0x0714(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0715(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CountDown;                                                // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ABP_AR_Animal_Base_C*>                animals;                                                  // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FVector>                             init_location;                                            // 0x0730(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        goal_oder_index;                                          // 0x0740(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<E_AR_GameState>                        game_state;                                               // 0x0750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0751(0x0003) MISSED OFFSET
	int                                                select_index;                                             // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_support;                                               // 0x0758(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0759(0x0007) MISSED OFFSET
	class ABP_S3actionSelect_C*                        Selector;                                                 // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                support_index;                                            // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_game_end;                                              // 0x076C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x076D(0x0003) MISSED OFFSET
	class UClass*                                      create_animal;                                            // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class US3LevelSequencePlayer*                      game_start;                                               // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     target_select_camera;                                     // 0x0780(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x078C(0x0004) MISSED OFFSET
	TArray<struct FST_AR_AnimalInfo>                   animal_info;                                              // 0x0790(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               name_list;                                                // 0x07A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWBP_AR_Support_C*                           support_widget;                                           // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bGameSuccess;                                             // 0x07B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x07B9(0x0003) MISSED OFFSET
	int                                                EVENT_TALK_SUCCESS;                                       // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EVENT_TALK_FAILURE;                                       // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x07C4(0x0004) MISSED OFFSET
	class UWBP_AR_CountDown_C*                         count_down;                                               // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               is_result_check_end;                                      // 0x07D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCameraMove;                                              // 0x07D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSpline;                                               // 0x07D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x5];                                       // 0x07D3(0x0005) MISSED OFFSET
	class ABP_MiniGameChooseSelectTriangle_C*          RefSelectTriangle;                                        // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              SuspendedTime;                                            // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSplineCamera;                                         // 0x07E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsGrassStage;                                             // 0x07E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x07E6(0x0002) MISSED OFFSET
	class UDataTable*                                  SettingData;                                              // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsGiftType;                                               // 0x07F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x07F1(0x0007) MISSED OFFSET
	struct FName                                       GiftName;                                                 // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_padSwitch>                          CurrentButtonType;                                        // 0x0800(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0801(0x0003) MISSED OFFSET
	float                                              RandomWaitTime;                                           // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SuccessCountKey;                                          // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FailedCountKey;                                           // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsControlledWin;                                          // 0x0818(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsControlledLose;                                         // 0x0819(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x6];                                       // 0x081A(0x0006) MISSED OFFSET
	TArray<int>                                        TableIndexTestList;                                       // 0x0820(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<EBattleDifficulty>, struct FName> DifficultyNameMap;                                        // 0x0830(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       PlayCountKey;                                             // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        RateTestCountList;                                        // 0x0888(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                RateTestTotalCount;                                       // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFortuneEnabled;                                         // 0x089C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x089D(0x0003) MISSED OFFSET
	TArray<float>                                      FreeStartTimeList;                                        // 0x08A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ChangeHeightValue;                                        // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StopCameraDistance;                                       // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimalRaceBase.BP_AnimalRaceBase_C");
		return ptr;
	}


	struct FVector GetAnimalCameraPos(int IndexNum);
	void GetAnimalDelayTime(int Index, float* Value);
	void GetFortuneGrade(int* GradeNum);
	void CheckAnimalWallCollision(class AActor* CheckActor, class UActorComponent* CheckComponent, int CheckAnimalIndex, bool IsRight, bool IsBeginOverlap);
	void UpdatePlayCount(bool IsToad, bool* bForceUseHighTable, int* Count);
	void SetCollisionEnabled(bool Enabled);
	void InitializeOnBeginPlay();
	void InitializeAnimalData();
	void GetMiniGameBGMID(struct FName* ID);
	void TestFunc();
	void SetAnimalCondition();
	void ChangeSpeedFromCache();
	void UpdateResultCache(bool ResultSuccess);
	void ResetQTEInfo();
	void UpdateQte();
	void IsToadRace(bool* bToad);
	void SetFortuneResult();
	void SetBoardInfo();
	void GetMiniGameHelpName(struct FString* String);
	void SetAnimalCrySEVolume(float CrySEVolume);
	void SetAnimalSE(class ABP_AR_Animal_Base_C* Animal, int Index);
	void UpdateOpeningCamera(float DeltaSeconds);
	void UpdateBetAnimalUI();
	void UpdateCamera();
	void GetRewardMoney(int* Money);
	void set_Select_Point_Location(int Index);
	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	void UserConstructionScript();
	void CountDown__FinishedFunc();
	void CountDown__UpdateFunc();
	void ResultCheck();
	void RaceTick();
	void GameStartFinished(class ULevelSequencePlayer* LevelSequencePlayer);
	void Bet_Tick();
	void Result_Tick();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature();
	void ResumeMiniGame(struct FString* ResumeKeyword);
	void OnTalkScriptEvent(int* EventNumber);
	void StartMiniGame();
	void EndMiniGame();
	void RestartMiniGame();
	void WinMiniGame();
	void LoseMiniGame();
	void DrawMiniGame();
	void AnimalRace_End(bool is_success);
	void CancelMiniGame();
	void StartGameFadeOutFinish();
	void WinGameFadeOutFinish();
	void LoseGameFadeOutFinish();
	void CancelFadeEnd();
	void Back_Pushed();
	void Action_Pushed();
	void Up_Pushed();
	void Down_Pushed();
	void Bet_Left_Pushed();
	void Bet_Right_Pushed();
	void Race_Up_Pushed();
	void Race_Down_Pushed();
	void Race_Right_Pushed();
	void Race_Left_Pushed();
	void Right_Pushed();
	void Left_Pushed();
	void CountDownFinished();
	void Add_Push_Count(TEnumAsByte<EN_padSwitch> ButtonType);
	void count_max();
	void Input_Update();
	void EventCountChange(int Count);
	void Event_StopCountDown();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__camera_move_collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__wall01_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__wall02_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__wall03_K2Node_ComponentBoundEvent_7_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__wall04_K2Node_ComponentBoundEvent_8_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__wall05_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__wall01_K2Node_ComponentBoundEvent_11_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__wall02_K2Node_ComponentBoundEvent_12_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__wall03_K2Node_ComponentBoundEvent_13_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__wall04_K2Node_ComponentBoundEvent_15_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__wall05_K2Node_ComponentBoundEvent_16_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__support1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__support2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ResetSupport1();
	void ResetSupport2();
	void Game_Start();
	void Game_End();
	void BndEvt__camera_move_collision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Pre_Game_End();
	void Set_Animal_Tick_Enable(bool bEnabled);
	void Event_EndMiniGame();
	void Event_ChearAnimal();
	void Event_EndCheer();
	void ConsumeGamblePrice();
	void ExecuteUbergraph_BP_AnimalRaceBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
