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

// BlueprintGeneratedClass BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C
// 0x00B6 (0x06C0 - 0x060A)
class ABP_MiniGame_CCBattle_C : public ABP_MiniGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x060A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        ComingSoonMesh;                                           // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ArcadeMesh;                                               // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_CCBattleCabinet_C*                      BPC_CCBattleCabinet;                                      // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameStandaloneTalkScript_C*         BPC_MiniGameStandaloneTalkScript;                         // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ZoomCameraTimeLine_FOV_C9AE647047F4EB3B6105E18C240A38D2;  // 0x0638(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ZoomCameraTimeLine__Direction_C9AE647047F4EB3B6105E18C240A38D2;// 0x063C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x063D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ZoomCameraTimeLine;                                       // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3LevelSequencePlayer*                      use_coin;                                                 // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DEF_BGMID;                                                // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       USE_COIN_SEQUENCE_ID;                                     // 0x0658(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0660(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C.UseCoinSequence
	int                                                CabinetNumber;                                            // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_MiniGameCCBattlePlace>               Place;                                                    // 0x068C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabledOnStart;                                          // 0x068D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x068E(0x0002) MISSED OFFSET
	class UStaticMesh*                                 EnabledStaticMesh;                                        // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStateEnabled;                                            // 0x0698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0699(0x0007) MISSED OFFSET
	class UMaterial*                                   WaitingScreenMaterial;                                    // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    FighterTex;                                               // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWaitingEnd;                                              // 0x06B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x06B1(0x0003) MISSED OFFSET
	int                                                GameDataNumber;                                           // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  FighterDataTable;                                         // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_CCBattle.BP_MiniGame_CCBattle_C");
		return ptr;
	}


	void UpdateArcadeData();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void InitAsyncLoad(bool* dummy);
	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	void UserConstructionScript();
	void ZoomCameraTimeLine__FinishedFunc();
	void ZoomCameraTimeLine__UpdateFunc();
	void RestartMiniGame();
	void BGMPlay(int Index);
	void BGMStop(int Index);
	void WinMiniGame();
	void LoseMiniGame();
	void EndMiniGame();
	void BndEvt__BPC_CCBattleCabinet_K2Node_ComponentBoundEvent_1_OnGameClear__DelegateSignature();
	void BndEvt__BPC_CCBattleCabinet_K2Node_ComponentBoundEvent_2_OnGameOver__DelegateSignature();
	void ContainerAction(bool Enabled);
	void EndGameAfterWaiting(float WaitTime);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void StartMiniGame();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature();
	void ResumeMiniGame(const struct FString& ResumeKeyword);
	void OnTalkScriptEvent(int EventNumber);
	void CancelMiniGame();
	void OnFinishedFadeEndGame();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void StartGame();
	void ZoomCamera();
	void UnZoomCamera();
	void ExecuteUbergraph_BP_MiniGame_CCBattle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
