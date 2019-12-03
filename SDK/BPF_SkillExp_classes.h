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

// BlueprintGeneratedClass BPF_SkillExp.BPF_SkillExp_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_SkillExp_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_SkillExp.BPF_SkillExp_C");
		return ptr;
	}


	bool STATIC_BPF_ShouldShowSkillAquisitionHint(class UObject* __WorldContext);
	bool BPF_HasPlayerMasteredAllSkills(class UObject* __WorldContext);
	int BPF_CountNonMasteredSkills(class UObject* __WorldContext);
	bool BPF_IsPlayerSkillMastered(const struct FName& SkillItem, class UObject* __WorldContext);
	void STATIC_BPF_GetPlayerSkillLevelData(const struct FName& SkillItem, class UObject* __WorldContext, int* OutLevel, float* OutNextRatio, int* SkillMinLevel, int* SkillMaxLevel);
	void STATIC_BPF_GetPlayerSkillLevelMax(const struct FName& Key, class UObject* __WorldContext, int* OutLevel);
	float STATIC_BPF_GetPlayerSkillLevelAsRatio(const struct FName& Key, class UObject* __WorldContext);
	void STATIC_BPF_GetPlayerSkillLevel(const struct FName& SkillItem, class UObject* __WorldContext, int* OutLevel);
	class US3PlayerExpCollection* STATIC_BPF_GetPlayerSkillStats(class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
