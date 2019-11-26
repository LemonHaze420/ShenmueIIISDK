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

// BlueprintGeneratedClass BP_SortSkillsForPractice.BP_SortSkillsForPractice_C
// 0x0000 (0x0030 - 0x0030)
class UBP_SortSkillsForPractice_C : public UBP_SortSkillsForRecommendation_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SortSkillsForPractice.BP_SortSkillsForPractice_C");
		return ptr;
	}


	bool Compare(const struct FName& A, const struct FName& B);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
