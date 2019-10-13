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

// BlueprintGeneratedClass BP_StreetFightManager.BP_StreetFightManager_C
// 0x004C (0x0374 - 0x0328)
class ABP_StreetFightManager_C : public AS3StreetFightManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UBPC_MiniGameContainer_C*                    BPC_MiniGameContainer;                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_Gift_C*                                 BPC_MiniGameGift;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3StreetFightDataAsset*                     DataAsset;                                                // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TIME_INDEX;                                               // 0x0350(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ConsecutiveVictoryNum;                                    // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CompleteVictory;                                          // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	int                                                FIGHTER_INDEX;                                            // 0x035C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bActivate;                                                // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MainFlowActivate;                                         // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0362(0x0002) MISSED OFFSET
	int                                                CAMPION_INDEX;                                            // 0x0364(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ExhibitionMode;                                           // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	int                                                ExhibitionIndex;                                          // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EXHIBITION_INDEX;                                         // 0x0370(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_StreetFightManager.BP_StreetFightManager_C");
		return ptr;
	}


	void ChangeFlag_Impl(int Index, int flag);
	void Activate(int Mode);
	void RandomBox(int* NextIndex);
	void IsIgnoreStep(bool* Ignore);
	void CheckMainFlowBattle();
	struct FString GetNextFighter();
	void JudgeBattle(TEnumAsByte<Enum_StreetFightResult> Reselt);
	void UpdateFighter();
	void UpdateReward();
	void IsChampion(bool* Champion);
	void Reset();
	void UpdateEntryMoney();
	void GetReward(int* Value);
	void ConvertMinite(float Time, int* Minite);
	void UpdateCheckTime();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void FinishStreetFight(TEnumAsByte<Enum_StreetFightResult> Result);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void BeginTalk();
	void EndTalk();
	void ChangeFlag(int ArrayIndex, int SetFlags);
	void ExecuteUbergraph_BP_StreetFightManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
