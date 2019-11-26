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

// BlueprintGeneratedClass BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C
// 0x01DE (0x07E8 - 0x060A)
class ABP_MiniGame_CC_Manager_C : public ABP_MiniGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x060A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             PlayerReturnLocation;                                     // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             PlayerSpawnPoint;                                         // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameText_C*                         BPC_MiniGameText;                                         // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameJobResult_C*                    BPC_MiniGameJobResult;                                    // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SearchFreeMode;                                           // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            BlockWallSpline;                                          // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             BlockWallRoot;                                            // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        SequencePlayPos;                                          // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SpawnPointRoot;                                           // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_QTEComponent_C*                          BP_QTEComponent;                                          // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ABP_MiniGame_CC_Chicken_C*>           ChickenList;                                              // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_MiniGame_CC_SpawnPoint_C*>        ChickenSpawnPointList;                                    // 0x0678(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_MiniGame_CC_Chicken_C*                   CurrentCatchChicken;                                      // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FKey                                        InputtedKey;                                              // 0x0690(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bQTESequence;                                             // 0x06A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x06A9(0x0007) MISSED OFFSET
	class ULevelSequence*                              StartSequence;                                            // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ULevelSequence*                              SuccessSequence;                                          // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ULevelSequence*                              FailedSequence;                                           // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FMG_CC_MoveData                             WalkMoveData;                                             // 0x06C8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FMG_CC_MoveData                             RunMoveData;                                              // 0x06D4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MoveDistanceFromCenter;                                   // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaitTime;                                                 // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxNotCatchTime;                                          // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CatchedCount;                                             // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInputQTE;                                                // 0x06F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInputPlayerMove;                                         // 0x06F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x06F2(0x0006) MISSED OFFSET
	class ABP_MiniGame_CC_Chicken_C*                   NextCatchChicken;                                         // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_MiniGame_CC_Player_C*                    RefPlayer;                                                // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              InputAxisForward;                                         // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputAxisRight;                                           // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayCatchMotion;                                         // 0x0710(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0711(0x0003) MISSED OFFSET
	float                                              StopMoveInterpSpeed;                                      // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LocoStateCount;                                           // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              QTEWaitTimeBase;                                          // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                QTEFailedCount;                                           // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              QTEWaitTime;                                              // 0x0724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FST_MiniGame_CC_DifficultyData>      QTE_DifficultyList;                                       // 0x0728(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxQTEButtonIndex;                                        // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugDisp;                                               // 0x073C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x073D(0x0003) MISSED OFFSET
	class UWBP_MiniGame_CC_C*                          RefWidget;                                                // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              RemainingGameTime;                                        // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxGameTime;                                              // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxChickenNum;                                            // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPause;                                                   // 0x0754(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0755(0x0003) MISSED OFFSET
	class ABP_SpawnableSequenceActor_C*                RefSequenceActor;                                         // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AnimalClass;                                              // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMG_CC_AnimalDataAsset*                      AnimalDataAsset;                                          // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  QTE_DifficultyData;                                       // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class USplineMeshComponent*>                BlockWallMeshs;                                           // 0x0778(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                QTEButtonIndex;                                           // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RewardMoney;                                              // 0x078C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  SuccessAnimalTex;                                         // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  BlancAnimalTex;                                           // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFinishedMiniGame;                                       // 0x07A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPartTimeJobMode;                                        // 0x07A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x07A2(0x0006) MISSED OFFSET
	class UDataTable*                                  PartTimeJob_QTE_DifficultyData;                           // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RuleFlagIndex;                                            // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x07B4(0x0004) MISSED OFFSET
	class UTexture2D*                                  GameTimerCenterTex;                                       // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       START_SEQUENCE_ID;                                        // 0x07C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SUCCESS_SEQUENCE_ID;                                      // 0x07C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FAILED_SEQUENCE_ID;                                       // 0x07D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FinishLoadClothesCC;                                      // 0x07D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x07D9(0x0003) MISSED OFFSET
	int                                                EasyReardMoney;                                           // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReplayFailedCommand;                                     // 0x07E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAbsolutelyChangeCommand;                                 // 0x07E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x07E2(0x0002) MISSED OFFSET
	int                                                BaseReawrdMoney;                                          // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_CC_Manager.BP_MiniGame_CC_Manager_C");
		return ptr;
	}


	void SetPlayerMotionSpeed(float PlayRate);
	int GetRewardUnitPrice();
	class UMeshComponent* GetClothMeshComponent();
	void InitAsyncLoad(bool* dummy);
	bool IsFirstPlayDuck();
	void SetNPCVisibleOnDuck(bool Visible);
	void GetMiniGameHelpName(struct FString* String);
	void GetQTEButtonIndex(int* Index);
	void EnableChickenFromPlayer();
	void GetSafeAngle(struct FRotator* newParam);
	void SetSequenceRate();
	void SpawnSequenceActor(class ULevelSequence* InSequence, class AActor* AttachParentActor, const struct FName& AttachSocketName, class ABP_SpawnableSequenceActor_C** SpawnObj);
	void PauseGame();
	void UpdateProgressTime(float DeltaSeconds);
	void ForceEndSequence();
	void SetQTEWaitTime();
	void InitializeValue();
	void UpdateQte(float DeltaSeconds);
	void ActivateCatch(class ABP_MiniGame_CC_Chicken_C* CCPawn, bool* CanPlay);
	void SpawnPlayer();
	void CheckEndGame(bool* End);
	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	void SpawnChicken();
	void PlaySequence(class ABP_MiniGame_CC_Chicken_C* CCPawn, bool* CanPlay);
	void UserConstructionScript();
	void StartMiniGame();
	void EndMiniGame();
	void OnFinishedFade();
	void WinMiniGame();
	void LoseMiniGame();
	void DrawMiniGame();
	void FinalizeTalk();
	void Event_StartMiniGame();
	void Event_EndResult();
	void ClothesChangedCC(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Event_InputStart();
	void Event_InputEnd();
	void BindFinishSequence();
	void InputQTE(const struct FKey& Input);
	void InputPlayerMoveForward(float AxisValue);
	void InputPlayerMoveRight(float AxisValue);
	void InputPlayerRunPressed();
	void InputPlayerRunReleased();
	void InputCameraRight(float Axis);
	void ChangeLocoState();
	void EndSequence();
	void ExecuteMiniGameResultEvent(TEnumAsByte<E_MiniGameResult> Result);
	void OnFinishedEvent_Sequence();
	void BndEvt__SearchFreeMode_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__SearchFreeMode_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void DestroyChicken();
	void ChangeGameTimeEvent(ES3DayTimeEvent EventType);
	void CancelMiniGame();
	void Event_EndMiniGame();
	void OnBeginOverlapWallCollision(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnEndOverlapWallCollision(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExecuteUbergraph_BP_MiniGame_CC_Manager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
