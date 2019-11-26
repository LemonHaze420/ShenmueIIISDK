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

// BlueprintGeneratedClass BP_SortSkillsForBattle.BP_SortSkillsForBattle_C
// 0x0050 (0x0080 - 0x0030)
class UBP_SortSkillsForBattle_C : public UBP_SortSkillsForRecommendation_C
{
public:
	TMap<struct FName, int>                            RankIndex;                                                // 0x0030(0x0050) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SortSkillsForBattle.BP_SortSkillsForBattle_C");
		return ptr;
	}


	bool Compare(const struct FName& A, const struct FName& B);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
