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

// BlueprintGeneratedClass BP_MiniGame_Gacha.BP_MiniGame_Gacha_C
// 0x01DA (0x07E4 - 0x060A)
class ABP_MiniGame_Gacha_C : public ABP_MiniGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x060A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class UArrowComponent*                             PlayerTeleportLocation;                                   // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameStandaloneTalkScript_C*         BPC_MiniGameStandaloneTalkScript;                         // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ChildActorReplaceMachine;                                 // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             GameStartPlayerLocation;                                  // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0638(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.LevelSeq_Action
	unsigned char                                      UnknownData02[0x28];                                      // 0x0660(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.LevelSeq_Intro
	unsigned char                                      UnknownData03[0x28];                                      // 0x0688(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.LevelSeq_PreAction
	unsigned char                                      UnknownData04[0x28];                                      // 0x06B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_MiniGame_Gacha.BP_MiniGame_Gacha_C.LevelSeq_Thinking
	int                                                EVENT_GAME_CONTINUE;                                      // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GachaSeed;                                                // 0x06DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_SpawnableSequenceActor_C*                SActor_Action;                                            // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_SpawnableSequenceActor_C*                SActor_Intro;                                             // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_SpawnableSequenceActor_C*                SActor_PreAction;                                         // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          GachaMachineMaterial;                                     // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Replace_MachineName;                                      // 0x0700(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          GachaCapsuleMaterial;                                     // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     Replace_CapsuleName;                                      // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     Replace_RewardName;                                       // 0x0728(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       GachaId;                                                  // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RewardItemId;                                             // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_PlayerShowObject_C*                      PlayerShowObject;                                         // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  RandomCapsuleMaterials;                                   // 0x0750(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AStaticMeshActor*                            ReplaceCapsuleMeshActor;                                  // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AStaticMeshActor*                            ReplaceRewardMeshActor;                                   // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              RewardItemScale;                                          // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseAutoScale;                                             // 0x0774(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0775(0x0003) MISSED OFFSET
	float                                              AutoScaleBaseSize;                                        // 0x0778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TmpLocation;                                              // 0x077C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TmpRotation;                                              // 0x0788(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0794(0x0004) MISSED OFFSET
	class AStaticMeshActor*                            ReplaceMassCapsuleMeshActor;                              // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     Replace_MassCapsuleName;                                  // 0x07A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsContinue;                                               // 0x07B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEventStart;                                             // 0x07B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEndCall;                                                // 0x07B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x07B3(0x0005) MISSED OFFSET
	class UMaterialInterface*                          GachaInfoMaterial;                                        // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  GachaItemTable;                                           // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEndMiniGameForLinkDispacher;                            // 0x07C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsLoadedRewardMesh;                                       // 0x07D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x07D9(0x0003) MISSED OFFSET
	float                                              OffsetScale;                                              // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayCount;                                                // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_Gacha.BP_MiniGame_Gacha_C");
		return ptr;
	}


	void GetGachaID(struct FName* GachaId);
	void STATIC_LotteryGacha();
	void STATIC_GetGachaMaterialByPrice(class UMaterialInterface** Material);
	bool STATIC_IsTalking();
	void SettingPlayerShowObject(bool ArgIsNext);
	void STATIC_DispCSCapsuleMass(bool ArgDisp);
	void DispCapsuleMass(bool ArgDisp);
	void STATIC_DestroyReplaceActors();
	void SpawnReplaceActors();
	void SetupRandomCapsuleMaterial();
	void STATIC_RemoveAllSceneActors();
	void AllStopScenePlayer();
	void CreateSequenceActors();
	void STATIC_SpawnSequenceActor(class ULevelSequence* InSequence, class AActor* AttachParentActor, const struct FName& AttachSocketName, class ABP_SpawnableSequenceActor_C** SpawnObj);
	class ABP_MiniGameInputBase_C* STATIC_SpawnInputControlActor();
	void STATIC_UserConstructionScript();
	void STATIC_OnNotifyEnd_0EE0A467474F13C67ED75B980A09A9AB(const struct FName& NotifyName);
	void STATIC_OnNotifyBegin_0EE0A467474F13C67ED75B980A09A9AB(const struct FName& NotifyName);
	void STATIC_OnInterrupted_0EE0A467474F13C67ED75B980A09A9AB(const struct FName& NotifyName);
	void STATIC_OnBlendOut_0EE0A467474F13C67ED75B980A09A9AB(const struct FName& NotifyName);
	void STATIC_OnCompleted_0EE0A467474F13C67ED75B980A09A9AB(const struct FName& NotifyName);
	void STATIC_OnLoaded_FFFA5DCD4EBEA9EE7B67F491D7F3128F(class UObject* Loaded);
	void OnStoped_Intro();
	void FinalizeTalk();
	void OnTalkStart(class US3TalkComponent* TalkComponent);
	void STATIC_OnTalkFinished(class US3TalkComponent* TalkComponent, bool interrupted);
	void Screen_Player();
	void Screen_NPC();
	void GachaThinkingGameContinue();
	void GachaAction();
	void OnTalkScriptEvent(int EventNumber);
	void ResumeMiniGame(const struct FString& ResumeKeyword);
	void OnStopedPreAction();
	void OnStoped_Action();
	void STATIC_ConsumeMoney(float WaitTime);
	void GachaRewardWathing();
	void EnterMiniGame(float EnterTime);
	void GachaGameContinue();
	void DrawMiniGame();
	void ReceiveBeginPlay();
	void LoseMiniGame();
	void WinMiniGame();
	void EndMiniGame();
	void StartMiniGame();
	void STATIC_OnFinishedPopup(int PopupId);
	void DecideDetectAction(ES3ActionIconType Type);
	void LoadMesh();
	void SuspendMiniGame();
	void STATIC_ExecuteUbergraph_BP_MiniGame_Gacha(int EntryPoint);
	void OnEndMiniGameForLinkDispacher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
