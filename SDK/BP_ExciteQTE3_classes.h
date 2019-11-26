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

// BlueprintGeneratedClass BP_ExciteQTE3.BP_ExciteQTE3_C
// 0x0196 (0x07A0 - 0x060A)
class ABP_ExciteQTE3_C : public ABP_MiniGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x060A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class UBPC_ObjectLoader_C*                         BPC_ObjectLoader;                                         // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameGetKihudaFlow_C*                BPC_MiniGameGetKihudaFlow;                                // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameStandaloneTalkScript_C*         BPC_MiniGameStandaloneTalkScript;                         // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ChildActor;                                               // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ExciteQTE_01_Temp;                                        // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3WidgetToRenderTargetComponent*            S3WidgetToRenderTarget;                                   // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _______2__Direction_CB3DEBB842DE3B170505139AF622A3AB;     // 0x0648(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0649(0x0007) MISSED OFFSET
	class UTimelineComponent*                          UnknownVar01;                                           // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _______1__Direction_FFBABF144E519BFC8B093F910B63891F;     // 0x0658(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0659(0x0007) MISSED OFFSET
	class UTimelineComponent*						   UnknownVar02;                                           // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              _______0_FOV_1FF4F8B6467771CCB64E9BB67983957A;            // 0x0668(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _______0__Direction_1FF4F8B6467771CCB64E9BB67983957A;     // 0x066C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x066D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          UnknownVar03;                                             // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BeepRate;                                                 // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BeepCount;                                                // 0x067C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HighScore;                                                // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastScore;                                                // 0x0684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GameSeed;                                                 // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentScore;                                             // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class US3LevelSequencePlayer*                      game_start;                                               // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class US3LevelSequencePlayer*                      use_coin;                                                 // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class US3LevelSequencePlayer*                      game_fail;                                                // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    FailFinished_Restart;                                     // 0x06A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ABP_S3SoundPlayer_C*                         RefBGMPlayer;                                             // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MISS_SEQUENCE_ID;                                         // 0x06C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       START_SEQUENCE_ID;                                        // 0x06C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x28];                                      // 0x06D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_ExciteQTE3.BP_ExciteQTE3_C.StartSequence
	unsigned char                                      UnknownData05[0x28];                                      // 0x06F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_ExciteQTE3.BP_ExciteQTE3_C.MissSequence
	bool                                               IsHighScore;                                              // 0x0720(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0721(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData07[0x28];                                      // 0x0721(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_ExciteQTE3.BP_ExciteQTE3_C.PS4Material
	unsigned char                                      UnknownData08[0x28];                                      // 0x0750(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_ExciteQTE3.BP_ExciteQTE3_C.PCMaterial
	unsigned char                                      UnknownData09[0x28];                                      // 0x0778(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_ExciteQTE3.BP_ExciteQTE3_C.KeyboardMaterial

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExciteQTE3.BP_ExciteQTE3_C");
		return ptr;
	}


	void MaterialInitialize();
	void InitAsyncLoad(bool* dummy);
	void FinalizeSoundPlayer();
	void EnableBGM(bool Condition);
	void InitializeSoundPlayer();
	void FinalizeGame(bool IsHighScore, int HighScore, int LastSocre);
	void PlayMultUp(int Mult);
	void Load();
	void Save(int hi_Score, int last_score);
	void ItemGetCheck(int* item_count1);
	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	void PlayLevelUp();
	void PlayGameOver();
	void PlayOneUp();
	void FinishGame();
	void PlayQTEFailure();
	void PlayQTESuccess();
	void ReplayBeep();
	void PlayQTEBeep(bool Condition);
	void UserConstructionScript();
	void UnknownFunc01();
	void Push_D_Right();
	void Push_D_Left();
	void Push_A();
	void Push_B();
	void Push_X();
	void Push_Y();
	void StartMiniGame();
	void EndMiniGame();
	void RestartMiniGame();
	void Push_D_Down();
	void Push_D_Up();
	void StartGame();
	void EndGame();
	void BeginGame();
	void Payment();
	void Play_Fail();
	void OnEndKihudaFlow();
	void GameStartFinished0();
	void UseCoinFinished0();
	void fail_finished0();
	void EventStopStartHighScore();
	void WinMiniGame();
	void LoseMiniGame();
	void Event_PlayBGM();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Zoom();
	void Unzoom();
	void EndFlashingHighScore();
	void MapBGMStop();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_0_OnGameContinueDispatcher__DelegateSignature();
	void BndEvt__BPC_MiniGameContinueConfirm_K2Node_ComponentBoundEvent_1_OnGameFinishedDispatcher__DelegateSignature();
	void ResumeMiniGame(const struct FString& ResumeKeyword);
	void OnTalkScriptEvent(int EventNumber);
	void CancelMiniGame();
	void OnFinishedFadeEndGame();
	void OnMaterialLoadEnd(const struct FString& LoadId, class UObject* LoadedObject);
	void ExecuteUbergraph_BP_ExciteQTE3(int EntryPoint);
	void FailFinished_Restart__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
