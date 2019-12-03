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

// BlueprintGeneratedClass BP_MiniGameManager.BP_MiniGameManager_C
// 0x05E8 (0x09C8 - 0x03E0)
class ABP_MiniGameManager_C : public AS3MiniGameManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	class UBPC_Gift_C*                                 BPC_Gift;                                                 // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameTalkTemporaryStorage_C*         BPC_MiniGameTalkTemporaryStorage;                         // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameChooseSpawn_C*                  BPC_MiniGameChooseSpawn;                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_MiniGameBase_C*                          CurrentMiniGameActor;                                     // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_MiniGameBase_C*>                  AllMiniGameActors;                                        // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FString                                     CacheResumeKey;                                           // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      ControllActor;                                            // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FST_MiniGameList>                    GroupMiniGameActors;                                      // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	ES3MiniGameCategory                                SelectedMiniGameCategory;                                 // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0449(0x0007) MISSED OFFSET
	TArray<class ABP_MiniGameBase_C*>                  CachedMiniGameActors_1;                                   // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               PlayingBGM;                                               // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	struct FName                                       BGM_ID;                                                   // 0x0468(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_MiniGame_FishingManager_C*               FishingManager;                                           // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<int, int>                                     FortuneFlagMap;                                           // 0x0478(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       NUMBER_FORTUNE_NAME;                                      // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       COLOR_FORTUNE_NAME;                                       // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<TEnumAsByte<E_MiniGameGambleWinRate>, float>  KachoFugetsuNormalWinRateList;                            // 0x04D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<E_MiniGameGambleWinRate>, float>  UedeNormalWinRateList;                                    // 0x0528(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<E_MiniGameGambleWinRate>, float>  KachoFortuneWinRateList;                                  // 0x0578(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ForkNextValueKey;                                         // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnChangeMiniGameFlags;                                    // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TMap<TEnumAsByte<E_MiniGameCCBattlePlace>, TEnumAsByte<E_MiniGame_ForkJobResult>> CCBattleJobPlace;                                         // 0x05E8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CCBChallengeTargetKey;                                    // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CCBClearKey;                                              // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DayCountKey;                                              // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnClearCCB;                                               // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               StopBGM_ByEndMiniGame;                                    // 0x0678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0679(0x0007) MISSED OFFSET
	class USkeletalMesh*                               SpecialPlayerMesh;                                        // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     CCBGameDataKey;                                           // 0x0688(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CCBDailyAppearNumKey;                                     // 0x0698(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxAppearCCBContainerNum;                                 // 0x06A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x06AC(0x0004) MISSED OFFSET
	struct FString                                     ForkMovePlaceKey;                                         // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FS3BgmTable                                 BGM_Data;                                                 // 0x06C0(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAtomCueSheetLoaderComponent*                CueSheetLoader;                                           // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnChangeDay;                                              // 0x0728(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TMap<TEnumAsByte<E_MiniGameGambleWinRate>, float>  KachoFortuneHardWinRateList;                              // 0x0738(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<E_MiniGameGambleWinRate>, float>  KachoFugetsuEasyWinRateList;                              // 0x0788(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<E_MiniGameGambleWinRate>, float>  KachoFugetsuHardWinRateList;                              // 0x07D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<E_MiniGameGambleWinRate>, float>  KachoFugetsuHardestWinRateList;                           // 0x0828(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<E_MiniGameGambleWinRate>, float>  UedeEasyWinRateList;                                      // 0x0878(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<E_MiniGameGambleWinRate>, float>  UedeHardWinRateList;                                      // 0x08C8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<E_MiniGameGambleWinRate>, float>  UedeHardestWinRateList;                                   // 0x0918(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_MiniGameChoose_C*                        ChooseActor;                                              // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                FortuneCountFlagIndex;                                    // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OtoshidamaForceEndFlagIndex;                              // 0x0974(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<TEnumAsByte<E_MiniGameGambleWinRate>, float>  KachoFortuneHardestWinRateList;                           // 0x0978(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGameManager.BP_MiniGameManager_C");
		return ptr;
	}


	void AddFortuneCount();
	void STATIC_DisableCheckFishingSuspendTime();
	void STATIC_SetEnabledPlayFishing(bool bEnabled);
	void STATIC_GetEnabledPlayFishing(bool* bEnabled);
	void DestroyChooseActor();
	void STATIC_InitializeMiniGameProgress();
	void SetCurrentMiniGame(class ABP_MiniGameBase_C* MiniGame);
	void STATIC_GetForkMovePlaceFlag(int* OutValue);
	void ToggleForkCCBMovePlace();
	void GetForkNextProgress(TEnumAsByte<E_MiniGame_ForkJobResult> Job, int* OutValue);
	void GetDailyAppearCCBNum(int* OutValue);
	void STATIC_AddDailyAppearCCBNum(int AddNum);
	void STATIC_GetCCBGameData(TEnumAsByte<E_MiniGame_ForkJobResult> Job, TArray<int>* Data);
	void GetAvailableCCBGameDataNum(TEnumAsByte<E_MiniGame_ForkJobResult> Job, int IgnoreNum, bool* IsAvailable, int* Num);
	void GetCCBGameDataNum(TEnumAsByte<E_MiniGameCCBattlePlace> Place, int CabinetNumber, int* DataNum);
	void STATIC_SetCCBGameDataNum(TEnumAsByte<E_MiniGame_ForkJobResult> Job, int GameDataNum, int SetIndex, TArray<int>* DataList);
	void GetWinCount(ES3MiniGameCategory Category, TEnumAsByte<EMiniGamePurpose> Purpose, int* Count);
	void GetSpecialPlayerMesh(class USkeletalMesh** Mesh);
	void SetSpecialPlayerMesh(class USkeletalMesh* SpecialPlayerMesh, class USkeletalMesh** Mesh);
	void STATIC_StopBGM();
	bool STATIC_GetCCBTargetNumList(TEnumAsByte<E_MiniGameCCBattlePlace> Place, TArray<int>* OutValues);
	void STATIC_GetDayCount(int* Count);
	void UpdateDayCount(bool* Change);
	void STATIC_UpdateCCBattleResult(TEnumAsByte<E_MiniGameCCBattlePlace> CheckPlace, int ClearNumber, bool* Clear);
	void UpdateCCBattleSettings(TEnumAsByte<E_MiniGameCCBattlePlace> Place);
	void STATIC_AddMiniGameProgress(const struct FName& Key, int AddValue, ES3MiniGameCategory Category, int* Value);
	void AddForkNextProgress(TEnumAsByte<E_MiniGame_ForkJobResult> JobType, int AddValue);
	void STATIC_UpdateForkLiftResult();
	void UpdateWinRate();
	void GetMiniGameAllWinRate(TEnumAsByte<E_MiniGameGambleType> Type, bool Fortune, float* Min, float* Max, float* Current);
	int STATIC_GetGambleKifudaAccumulate();
	void AddGambleKifudaAccumulate(int AddValue);
	void STATIC_GetMiniGameWinRate(TEnumAsByte<E_MiniGameGambleType> Type, bool Fortune, TEnumAsByte<E_MiniGameGambleWinRate> RateType, float* Rate);
	void SetMiniGameWinRate(TEnumAsByte<E_MiniGameGambleType> Type, float Rate, bool Fotune, TEnumAsByte<E_MiniGameGambleWinRate> RateType);
	void STATIC_UpdateMiniGameGlobalFlag();
	void STATIC_UpdateFortuneProgress(bool IsNumberFortune, bool* IsEnabledFortune, int* FortuneNum);
	void STATIC_IsEnabledFortune(bool IsNumberFortune, bool* IsEnabled, int* FlagIndex, int* FortuneNum);
	void STATIC_PlayBGM(const struct FName& BGMID, bool* Play);
	void STATIC_StartFishingShopResult(TArray<struct FST_Fishing_ResultFishData>* result_fish_array);
	void InitializeFishing();
	void STATIC_FinalizeFishing();
	void CreateFishingManager(TArray<int>* RentalItemID);
	void STATIC_CheckBGM();
	void STATIC_GetMiniGameActorID(struct FName* ID);
	void STATIC_CheckFishing(bool Jump);
	void UpdateFortuneTellingFlag();
	void STATIC_GetMiniGameGachaID(struct FName* PlayGachaID);
	void GetCurrentMiniGameValueType(TEnumAsByte<EN_ValueType>* Type);
	void STATIC_ExecuteMiniGameResultEvent(TEnumAsByte<E_MiniGameResult> Result);
	void STATIC_CanvertMiniGameCategory(int Index, ES3MiniGameCategory* Category);
	void STATIC_FinalizeTalkMiniGame();
	void GetMiniGameControlledByMiniGame(class ABP_MiniGameBase_C** MiniGameBase, bool* bSuccess);
	void GetMiniGameControlledByActor(class AActor** Actor);
	void GetMinGamePrice(int* MinPrice, class ABP_MiniGameBase_C** Actor);
	void ResetValue();
	void STATIC_IsProcessingMiniGame(bool* bProcessing);
	void InitializeTalkMiniGame();
	void STATIC_SpawnMiniGameChooseActor(bool ManualCamera, class ABP_MiniGameChoose_C** ChooseActor);
	void UserConstructionScript();
	void STATIC_OnDestroyedChooseActor(class AActor* DestroyedActor);
	void STATIC_BindChooseActor(class ABP_MiniGameChoose_C* MiniGameChoose);
	void STATIC_OnChangedFlag(int ArrayIndex, int SetFlags);
	void BindGameInstanceFlagEvent();
	void UnbindGameInstanceFlagEvent();
	void OnCancelChooseMiniGame();
	void STATIC_OnChooseMiniGame(class AActor* ChooseActor);
	void ReceiveBeginPlay();
	void OnTalkStartEvent();
	void OnTalkEndEvent();
	void STATIC_OnScriptResumeMiniGame(const struct FString& ResumeKeydword);
	void STATIC_OnStartMiniGame(int MiniGameRuleIndex);
	void STATIC_TimeJump(float jumpTime);
	void STATIC_PlayFishingShopAC(int ResultRank);
	void ResetFishingTimeLimit();
	void FinishLoad();
	void OnEndMiniGame();
	void LoadedCueSheet();
	void STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void UpdateMiniGameWinRate();
	void ExecuteUbergraph_BP_MiniGameManager(int EntryPoint);
	void OnChangeDay__DelegateSignature();
	void OnClearCCB__DelegateSignature(TEnumAsByte<E_MiniGameCCBattlePlace> Place);
	void OnChangeMiniGameFlags__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
