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

// BlueprintGeneratedClass BP_RewardManager.BP_RewardManager_C
// 0x0198 (0x04C0 - 0x0328)
class ABP_RewardManager_C : public AS3RewardManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnChangeReward;                                           // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               CustomPreset;                                             // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	TMap<ES3RewardType, struct FST_RewardInfo>         CacheRewardMap;                                           // 0x0350(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<ES3RewardType, ES3RewardCategory>             KS_RewardBindMap;                                         // 0x03A0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<ES3RewardType, ES3RewardCategory>             SB_RewardBindMap;                                         // 0x03F0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	int                                                ROD_AND_LURE_USER_INDEX;                                  // 0x0440(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	TArray<struct FName>                               DialogGetItems;                                           // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UDataTable*                                  BackerTable;                                              // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstCheck;                                               // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	class UBP_S3GameInstance_C*                        GameInstance;                                             // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, struct FST_RewardEventItemInfo> EventAddItem;                                             // 0x0470(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RewardManager.BP_RewardManager_C");
		return ptr;
	}


	void InitialPassword();
	void ConvertType(const struct FST_RewardPresetInfo& Info, ES3RewardType* Type);
	void IsInstalledContent(ES3RewardType Type, bool* Installed);
	void SetEndRollPassword(const struct FName& ID, bool* Success);
	void RandomCapsulToy(struct FName* ItemId);
	void IsBonusPack(ES3RewardType Type, bool* Bonus);
	void STATIC_GetEmaMateiral();
	void ConvertCategory(ES3RewardType Type, ES3RewardCategory* Category);
	void DebugResetPassword();
	void STATIC_AddRewardItem(ES3RewardType Type, const struct FName& InItemId, int Num, struct FName* O);
	void STATIC_CheckRewardItem(const struct FName& PresetId, bool* exec);
	void SetRodAndLureFlag();
	void STATIC_CheckShowFlag(struct FST_RewardInfo* Info, bool* Show);
	void STATIC_ShowNotice(ES3RewardType Type);
	void STATIC_GetActivateRewards(TArray<ES3RewardType>* Rewards);
	void IsActivate(ES3RewardType Type, bool* Activate);
	void ConvertTypeArray(struct FST_RewardPresetInfo* Info, TArray<ES3RewardType>* Types);
	void STATIC_MakePresetArray(const struct FName& ID, TArray<ES3RewardType>* Array, TArray<ES3RewardType>* NewArray);
	void STATIC_CheckDownloadFile();
	void SetPresetId(const struct FName& PresetId);
	void STATIC_SetDebugUpdateParam(const struct FString& ParamName, bool flag);
	void STATIC_GetUserName(struct FString* UserName);
	void STATIC_GetFudaMateiral();
	void GetHanamojiMaterial();
	void GetDebugRewardPresetId(struct FName* ID);
	void GetEndCreditType(TEnumAsByte<EN_EndCreditType>* Type);
	void STATIC_GetDreamsComeTrueType(TEnumAsByte<EN_DreamsComeTrue>* Type);
	void SetPassword(const struct FName& ID, TEnumAsByte<EN_PasswordResult>* Result);
	void STATIC_UserConstructionScript();
	void STATIC_FlagChange(int ArrayIndex, int SetFlags);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ShowItemDialog();
	void STATIC_ChangePlayerBehavior(ES3PlayerBehavior NewId, ES3PlayerBehavior OldId);
	void PushDecide(class AActor* Actor);
	void ReceiveBeginPlay();
	void CheckFreerun();
	void FinishedDLC();
	void STATIC_ChangedItemNum(const struct FName& ItemId, int NewNum, int OldNum);
	void STATIC_ExecuteUbergraph_BP_RewardManager(int EntryPoint);
	void STATIC_OnChangeReward__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
