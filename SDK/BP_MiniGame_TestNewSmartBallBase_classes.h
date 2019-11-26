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

// BlueprintGeneratedClass BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C
// 0x02D6 (0x08E0 - 0x060A)
class ABP_MiniGame_TestNewSmartBallBase_C : public ABP_MiniGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x060A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class UInstancedStaticMeshComponent*               Instanced_DummyBall;                                      // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               FreeMoveBlockCollision;                                   // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInstancedStaticMeshComponent*               Instanced_UnderPusher;                                    // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInstancedStaticMeshComponent*               Instanced_DummyNails;                                     // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             PusherInfo;                                               // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             UpperRatatoRoot;                                          // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh_Under;                                               // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RootBase;                                                 // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             BallRespawnLocation;                                      // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameGetKihudaFlow_C*                BPC_MiniGameGetKihudaFlow;                                // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Gate1;                                                    // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Gate2;                                                    // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             GateRoot;                                                 // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh_Plate;                                               // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               GameArea;                                                 // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        UpperCollision;                                           // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box_WallHitArea4;                                         // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box_WallHitArea3;                                         // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box_WallHitArea2;                                         // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box_WallHitArea1;                                         // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        SquareLight;                                              // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene_BallRestartPoint;                                   // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box_Pusher;                                               // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box_Sub;                                                  // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameInputWaitTimer_C*               BPC_MiniGameInputWaitTimer;                               // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameStandaloneTalkScript_C*         BPC_MiniGameStandaloneTalkScript;                         // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             PushObjFromUnderRoot;                                     // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             UpperColRoot;                                             // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh_Pusher;                                              // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box_RailArea;                                             // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               OneSideCollision;                                         // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        SequenceTrans;                                            // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box_ForceMoveArea;                                        // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box_GameArea;                                             // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box_BallFallArea;                                         // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               CoverCollision;                                           // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               CurveRightCollision;                                      // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               CurveLeftCollision;                                       // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               PusherColoerCollision;                                    // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               UpCoverCollision;                                         // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene_Holes;                                              // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene_Nails;                                              // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh_Upper;                                               // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             BallSpawnPoint;                                           // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PushFromUnderTimeline_PushUp_6233F69A490E871EFA1EA2B36D64F3AA;// 0x0780(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PushFromUnderTimeline__Direction_6233F69A490E871EFA1EA2B36D64F3AA;// 0x0784(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0785(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PushFromUnderTimeline;                                    // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     PusherDefaultLocation;                                    // 0x0790(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentBallCount;                                         // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BallClass;                                                // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              Obstacles;                                                // 0x07A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              Holes;                                                    // 0x07B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              GameAreaBalls;                                            // 0x07C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              PushPower;                                                // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x07DC(0x0004) MISSED OFFSET
	TArray<class AActor*>                              OutOfRangeBalls;                                          // 0x07E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bDebugOutputLog;                                          // 0x07F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x07F1(0x0003) MISSED OFFSET
	struct FVector                                     PushObjFUBasePos;                                         // 0x07F4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              UpperAngle;                                               // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BingoNum;                                                 // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BitHoleIn;                                                // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bResetEndGame;                                            // 0x080C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x080D(0x0003) MISSED OFFSET
	class US3LevelSequencePlayer*                      StartLevelSequencePlayer;                                 // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_SB_TestNewPinball_C*>             RailAreaBallList;                                         // 0x0818(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                PushObjList;                                              // 0x0828(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              StartSequenceOffset;                                      // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpulseDistance;                                          // 0x083C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UChildActorComponent*>                ChildNailList;                                            // 0x0840(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentControlNailId;                                     // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugNailPos;                                            // 0x0854(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0855(0x0003) MISSED OFFSET
	class UDataTable*                                  NailDataTable;                                            // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceEndGame;                                            // 0x0860(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayPusherPullSound;                                    // 0x0861(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MiniGame_SmartBallRewardType>        GiftType;                                                 // 0x0862(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x0863(0x0005) MISSED OFFSET
	TArray<struct FName>                               GiftItemName;                                             // 0x0868(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ThresholdNum;                                             // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bChangeHoleColor;                                         // 0x087C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x087D(0x0003) MISSED OFFSET
	TArray<int>                                        ChangedBitList;                                           // 0x0880(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxBallCount;                                             // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckBallNum;                                            // 0x0894(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0895(0x0003) MISSED OFFSET
	int                                                MaxBallNum;                                               // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x089C(0x0004) MISSED OFFSET
	class ABP_SB_TestNewPinball_C*                     TeleportBall;                                             // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCheckBallOutArea;                                        // 0x08A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x08A9(0x0007) MISSED OFFSET
	class ABP_S3SoundPlayer_C*                         RefSEPullPlayer;                                          // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugCheck;                                              // 0x08B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x08B9(0x0003) MISSED OFFSET
	int                                                PlayCount;                                                // 0x08BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SuccessCount;                                             // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugInputTrue;                                          // 0x08C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x08C5(0x0003) MISSED OFFSET
	float                                              DebugInputPower;                                          // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugWaitTime;                                            // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BallStopJudgeSpeed;                                       // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x08D4(0x0004) MISSED OFFSET
	class UDataTable*                                  HoleDataTable;                                            // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_TestNewSmartBallBase.BP_MiniGame_TestNewSmartBallBase_C");
		return ptr;
	}


	void CreateDummyBalls(bool* bDummy);
	void OverlapOneSideCollision(class UObject* Object);
	void SetGameCollisionEnabled(bool Enabled);
	struct FVector GetSightCheckLocation();
	void SetVisibleDummyMesh(bool bNewVisibility);
	void CreateDummyNails();
	void DestroyGameActors();
	void CreateUnderPusher();
	void CreateHoles();
	void CreateNails();
	void SetOverlapCollisionEnabled(bool Enabled);
	void OutPutDebugData();
	void InitializeValue();
	void SetHoleColor(int Bit, const struct FLinearColor& Color, float Intensity);
	void GetMiniGameHelpName(struct FString* String);
	void AddItem(int* GiftNum);
	void TogglePusherSound(bool toggle);
	void CheckThroughBall();
	void DebugOutputNailDataCsv();
	void InitializeNailPos();
	void UpdateDebugNail();
	void AddImpluseFromBall(class ABP_SB_TestNewPinball_C* TargetBall, const struct FVector& Impluse);
	void GetBallsFromDistance(class ABP_SB_TestNewPinball_C* Ball, TArray<class ABP_SB_TestNewPinball_C*>* ReturnBalls);
	void UpdateBallOrder();
	void ItemGetCheck(int* ItemCount);
	bool CheckBingoBit(int Bit);
	void CheckHoleInBit();
	void CheckBingo(int* BingoNum);
	void CheckEnd(bool* End);
	void ForceGravityHole(float DeltaSeconds);
	void IsAllStoppedOutOfRangeBalls(bool* bStop);
	void IsAllGameAreaStoppedBalls(bool* bStop);
	void GetNotInHoleCount(int* bAllIn);
	void IsAllHoleIn(bool* bAllIn);
	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	void UserConstructionScript();
	void PushFromUnderTimeline__FinishedFunc();
	void PushFromUnderTimeline__UpdateFunc();
	void BndEvt__BallDeleteCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_Pusher_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__Box_GameAreaCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_GameAreaCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__Box_BallDeleteZone_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__Box_ForceMoveArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_ForceMoveArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__OneSideCollision_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_RailArea_K2Node_ComponentBoundEvent_43_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_RailArea_K2Node_ComponentBoundEvent_44_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__Box_WallHitArea1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_WallHitArea2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_WallHitArea3_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_WallHitArea1_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__Box_WallHitArea3_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__Box_WallHitArea2_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__Box_WallHitArea4_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_WallHitArea4_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__GameArea_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void StartMiniGame();
	void EndMiniGame();
	void WinMiniGame();
	void LoseMiniGame();
	void CallSubStartMiniGameEvents();
	void CallSubEndMiniGameEvents();
	void CallSubWinMiniGameEvents();
	void CallSubLoseMiniGameEvents();
	void EnterMiniGame(float EnterTime);
	void RestartMiniGame();
	void CallSubResatrtMiniGameEvents();
	void CallSubEnterMiniGameEvents();
	void FinalizeTalk();
	void CallSubFinalizeTalkMiniGameEvents();
	void OnFinishedFade();
	void DownStopper();
	void OnFinishedCoinSequence();
	void OnFinishedSequencePlayer();
	void Event_DebugCheckStart();
	void Event_DebugCheckRestrt(class ABP_MiniGameBase_C* SelfMiniGame);
	void BindInputControlEvents(class ABP_MiniGameInputBase_C* Input);
	void ReceiveBeginPlay();
	void UpdatePusherLocation(float Value);
	void SpawnBall(const struct FVector& WorldLocation);
	void ResumeMiniGame(const struct FString& ResumeKeyword);
	void SuspendMiniGame();
	void OnTalkScriptEvent(int EventNumber);
	void ReceiveTick(float DeltaSeconds);
	void PushFromUnder();
	void ResetEndGame();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_42_OnGameContinueDispatcher__DelegateSignature();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_43_OnGameFinishedDispatcher__DelegateSignature();
	void EndGame();
	void SpawnAllBalls();
	void OnEndKihudaFlow();
	void BindHoleInToCheckBingEvent();
	void Event_CheckBingo();
	void Event_EndMiniGame();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void CancelMiniGame();
	void StopPushUnderMove();
	void ExecuteUbergraph_BP_MiniGame_TestNewSmartBallBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
