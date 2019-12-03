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
	void STATIC_ReinitFixedLevel();
	void STATIC_Debug_TestSkillProgression();
	bool STATIC_IsSkillEquipable(const struct FName& SkillId);
	bool IsSkillLevelable(const struct FName& SkillItem);
	void STATIC_GetDojoRankMax(TEnumAsByte<EDojoPlace> Dojo, ES3DojoRank* Rank);
	bool InitBlueprint();
	void SetLastAdviceData(class UBattleAdviceData_C* AdviceData);
	void GetLastAdviceData(class UBattleAdviceData_C** AdviceData);
	int STATIC_GetDojoRankIndex(const struct FName& Dojo);
	void STATIC_DojoRankNameToEnum(const struct FName& Name, ES3DojoRank* Rank);
	void STATIC_DojoRankEnumToName(ES3DojoRank InRank, struct FName* OutRank);
	void GetDojoRankAsEnum(TEnumAsByte<EDojoPlace> Dojo, ES3DojoRank* Rank);
	void SetDojoRankAsEnum(TEnumAsByte<EDojoPlace> Dojo, ES3DojoRank Rank);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
