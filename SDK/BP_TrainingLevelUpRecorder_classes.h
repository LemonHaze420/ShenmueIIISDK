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

// BlueprintGeneratedClass BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C
// 0x0045 (0x006D - 0x0028)
class UBP_TrainingLevelUpRecorder_C : public UObject
{
public:
	class US3BattleStatsManager*                       StatsManager;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FST_SparringResultLevelUpData               Player;                                                   // 0x0030(0x0014) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	struct FST_SparringResultLevelUpData               ATK;                                                      // 0x0044(0x0014) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	struct FST_SparringResultLevelUpData               VIT;                                                      // 0x0058(0x0014) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	bool                                               bRecordedInitial;                                         // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrainingLevelUpRecorder.BP_TrainingLevelUpRecorder_C");
		return ptr;
	}


	bool HasStatProgressChange(const struct FST_SparringResultLevelUpData& Data);
	bool HasRecordedProgressChange();
	void GetLevelUpData(struct FST_SparringResultLevelUpData* Player, struct FST_SparringResultLevelUpData* ATK, struct FST_SparringResultLevelUpData* VIT);
	bool HasRecordedStatLevelUp(const struct FST_SparringResultLevelUpData& Data);
	bool HasRecordedLevelUp();
	void UpdateStatData(class US3DerivedPlayerLevel* Stat, struct FST_SparringResultLevelUpData* Data);
	void RecordCurrentState();
	void GetInitialStatState(class US3DerivedPlayerLevel* Stat, struct FST_SparringResultLevelUpData* Data);
	void RecordInitialState();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
