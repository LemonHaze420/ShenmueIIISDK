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

// BlueprintGeneratedClass BP_S3BattleStatsManager.BP_S3BattleStatsManager_C
// 0x000A (0x00DA - 0x00D0)
class UBP_S3BattleStatsManager_C : public US3BattleStatsManager
{
public:
	class UBattleAdviceData_C*                         AdviceData;                                               // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SoftLockLevelMode;                                        // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableDebugUI;                                            // 0x00D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3BattleStatsManager.BP_S3BattleStatsManager_C");
		return ptr;
	}


	void InitDefaultLevelProgression();
	void ReinitFixedLevel();
	void Debug_TestSkillProgression();
	bool IsSkillEquipable(const struct FName& SkillId);
	bool IsSkillLevelable(const struct FName& SkillItem);
	void GetDojoRankMax(TEnumAsByte<EDojoPlace> Dojo, ES3DojoRank* Rank);
	bool InitBlueprint();
	void SetLastAdviceData(class UBattleAdviceData_C* AdviceData);
	void GetLastAdviceData(class UBattleAdviceData_C** AdviceData);
	int GetDojoRankIndex(const struct FName& Dojo);
	void DojoRankNameToEnum(const struct FName& Name, ES3DojoRank* Rank);
	void DojoRankEnumToName(ES3DojoRank InRank, struct FName* OutRank);
	void GetDojoRankAsEnum(TEnumAsByte<EDojoPlace> Dojo, ES3DojoRank* Rank);
	void SetDojoRankAsEnum(TEnumAsByte<EDojoPlace> Dojo, ES3DojoRank Rank);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
