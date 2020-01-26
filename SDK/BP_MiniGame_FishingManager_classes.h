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

// BlueprintGeneratedClass BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C
// 0x01B0 (0x04D8 - 0x0328)
class ABP_MiniGame_FishingManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UBPC_ObjectLoader_C*                         BPC_ObjectLoader;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameText_C*                         BPC_MiniGameText;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              limitTime;                                                // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	TArray<int>                                        RentalItemID;                                             // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	ES3Where                                           AreaId;                                                   // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCheckSuspendTime;                                        // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0362(0x0002) MISSED OFFSET
	struct FVector                                     SavePlayerPos;                                            // 0x0364(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                AfterResultSubStep;                                       // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	class ABP_SpawnableSequenceActor_C*                SActor_Action;                                            // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ULevelSequence*                              LevelSeq_Action;                                          // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWBP_Fishing_ShopResult_C*                   wbp_shop_result;                                          // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FST_Fishing_ResultFishData>          result_fish_array;                                        // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FST_Fishing_ShopData                        NowShopData;                                              // 0x03A0(0x0014) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsUpdateResult;                                           // 0x03B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	float                                              LimitAddTime;                                             // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	struct FName                                       EyeCatchName;                                             // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FST_GeneralWindowParam                      DialogData;                                               // 0x03C8(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsDialogInputWait;                                        // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	float                                              DialogSuspendTime;                                        // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DialogLimitTime;                                          // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	struct FName                                       RentalEndTextLabel;                                       // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     ACLoadID;                                                 // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       FishingRentalIDKey;                                       // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       FishingRentalLimitTime;                                   // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LimitMaxTime;                                             // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PopLogUIZOrder;                                           // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SaveNPCLeadPos;                                           // 0x0468(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                ResetTimerFlagNum;                                        // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<ES3Where, class UDataTable*>                  ShopDataTableMap;                                         // 0x0478(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bEnabledPlayFishing;                                      // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	class ABP_ActorVisibleControl_C*                   RefVisibleControlActor;                                   // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_FishingManager.BP_MiniGame_FishingManager_C");
		return ptr;
	}


	void DisableCheckSuspendTime();
	void SetEnabledPlayFishing(bool bEnabledPlayFishing);
	void GetEnabledPlayFishing(bool* bEnabled);
	void UpdateLimitTIme();
	void ResetRentalData();
	void InitializeRentalData();
	void SetEnabledPlayerControl(bool Condition);
	void CreateReatalEndPop();
	void ResetTimeLimit();
	void StartUpdateResult(TArray<struct FST_Fishing_ResultFishData>* result_fish_array);
	void SetResultFishArray(TArray<struct FST_Fishing_ResultFishData>* result_fish_array);
	void SetNowShopData();
	void SpawnSequenceActor(class ULevelSequence* Sequence, class AActor* AttachParent, class ABP_SpawnableSequenceActor_C** SpawnObj);
	void GetSellPosition(struct FVector* pos);
	void GetResultRank(int* Rank);
	void CreateShopResult();
	void UpdateShopResult();
	void IsPlayingFishing(bool* IsFishing);
	void LoadFishingACScript(int ShopIndex, int ResultRank, bool* Success);
	void GetCurrentShopID(int* shop_id);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ResetToolsData();
	void Event_JumpToShopResult();
	void OnEndJumpToShop(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnEndJumpToSavePos(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReturnFishingTools(bool UseDialog);
	void DialogInputTimeOut();
	void EndFishing();
	void PlayShopAC(int ResultRank);
	void OnInputButton(class AActor* Actor);
	void OnLoadACScript(const struct FString& LoadId, class UObject* LoadedObject);
	void FlagChanged(int ArrayIndex, int SetFlags);
	void OnFinishedSequence(class ULevelSequencePlayer* LevelSequencePlayer);
	void ExecuteUbergraph_BP_MiniGame_FishingManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
