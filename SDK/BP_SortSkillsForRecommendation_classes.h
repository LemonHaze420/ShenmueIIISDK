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

// BlueprintGeneratedClass BP_SortSkillsForRecommendation.BP_SortSkillsForRecommendation_C
// 0x0008 (0x0030 - 0x0028)
class UBP_SortSkillsForRecommendation_C : public USortNameCompare
{
public:
	class US3PlayerExpCollection*                      ExperienceMgr;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SortSkillsForRecommendation.BP_SortSkillsForRecommendation_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
