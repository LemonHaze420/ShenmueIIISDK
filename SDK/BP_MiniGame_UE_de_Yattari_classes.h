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

// BlueprintGeneratedClass BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C
// 0x01B6 (0x07C0 - 0x060A)
class ABP_MiniGame_UE_de_Yattari_C : public ABP_MiniGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x060A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class UBPC_MiniGameInputWaitTimer_C*               BPC_MiniGameInputWaitTimer;                               // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        SignBoard;                                                // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameBetSeet_C*                      BPC_MiniGameBetSeet;                                      // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box13;                                                    // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box12;                                                    // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box11;                                                    // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box10;                                                    // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box8;                                                     // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box6;                                                     // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box7;                                                     // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             AroundCollisionRoot;                                      // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RyoDiceSpawnPos;                                          // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             BeforeRyoThrowCameraPos;                                  // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             BeforeNPCThrowCameraPos;                                  // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DiceSpawnPos;                                             // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameGamble_C*                       BPC_MiniGameGamble;                                       // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Bowl;                                                     // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MaxCount;                                                 // 0x06A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentCount;                                             // 0x06AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BaseCameraPos;                                            // 0x06B0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MiniGameUDYFlow>                     CurrentFlow;                                              // 0x06BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06BD(0x0003) MISSED OFFSET
	TArray<class ABP_MiniGame_UDYDice_C*>              RefDiceList;                                              // 0x06C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                RyoDiceNum;                                               // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OpponentDiceNum;                                          // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCameraZoom;                                              // 0x06D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x06D9(0x0003) MISSED OFFSET
	float                                              WinRate;                                                  // 0x06DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bThrowDice;                                               // 0x06E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInitializeThrowIdle;                                     // 0x06E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceMoveDice;                                           // 0x06E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x06E3(0x0005) MISSED OFFSET
	class UWBP_MiniGame_Ue_de_Yattari_C*               RefWidget;                                                // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UBoxComponent*>                       AroundCollisionList;                                      // 0x06F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDoCancelGame;                                            // 0x0700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanCancelMiniGame;                                       // 0x0701(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0702(0x0006) MISSED OFFSET
	class ABP_S3SoundPlayer_C*                         RefSEHandPlayer;                                          // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsChinaMainland;                                          // 0x0710(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDebugChinaMainland;                                     // 0x0711(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0712(0x0006) MISSED OFFSET
	class UWBP_MiniGame_Ue_de_Yattari_CNFlow_C*        RefCNflowWidget;                                          // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FName                                       CN_BackImageID;                                           // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CN_FreaImageID;                                           // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CN_EffectImageID;                                         // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CAMERA_ZOOM_TARGET_POS_LENGTH;                            // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CAMERA_ZOOM_INTERP_SPEED;                                 // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RYO_CAMERA_POS_LENGTH;                                    // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RYO_CAMERA_INTERP_SPEED;                                  // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x28];                                      // 0x0748(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.CNBackImage
	unsigned char                                      UnknownData07[0x28];                                      // 0x0770(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.CNFreaImage
	unsigned char                                      UnknownData08[0x28];                                      // 0x0798(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C.CNEffectImage

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_UE_de_Yattari.BP_MiniGame_UE_de_Yattari_C");
		return ptr;
	}


	void SetCNWidgetTexture();
	void STATIC_InitAsyncLoad(bool* dummy);
	void GetDiceTwoNum(int SumNum, int* Num1, int* Num2);
	TArray<struct FS3DetectActionParam> GetDetectAction();
	class UMeshComponent* STATIC_GetClothMeshComponent();
	void DecideDiceNum(bool RyoWin);
	void STATIC_SetBoardInfo();
	void STATIC_SetEnableAroundCollision(bool Enable);
	void GetDiceNumRandom(int Min, int Max, int* DiceNum);
	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	void ThrowDiceFromTotalNum(int TotalNum);
	void ResetCamera();
	void CameraUpdate(float DeltaSeconds);
	void STATIC_GetDiceNum(int* DiceNum);
	void DestroyDice();
	void STATIC_IsStopDice(bool* Stop);
	void STATIC_UserConstructionScript();
	void WinMiniGame();
	void LoseMiniGame();
	void DrawMiniGame();
	void StartMiniGame();
	void EndMiniGame();
	void FinalizeTalk();
	void STATIC_OnFinishedFade();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void STATIC_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature();
	void STATIC_BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature();
	void STATIC_ResetFlowDoOnce();
	void STATIC_NPCDiceThrow();
	void STATIC_PlayerDiceThrow();
	void STATIC_InputButtonRight();
	void STATIC_InitThrowIdle();
	void BndEvt__Bowl_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void STATIC_EnableForwardAndBackCollision();
	void STATIC_StartForceMoveDice();
	void Event_EndMiniGame();
	void STATIC_OnTalkScriptEvent(int EventNumber);
	void STATIC_ResumeMiniGame(const struct FString& ResumeKeyword);
	void CancelMiniGame();
	void STATIC_ResetCancelDoOnce();
	void STATIC_DelayedInitialize();
	void STATIC_OpponentResult();
	void STATIC_RyoResult();
	void ExecuteUbergraph_BP_MiniGame_UE_de_Yattari(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
