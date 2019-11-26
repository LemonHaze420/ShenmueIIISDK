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

// BlueprintGeneratedClass BPF_Skill.BPF_Skill_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Skill_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Skill.BPF_Skill_C");
		return ptr;
	}


	void STATIC_GetNonItemSkillName_FName(const struct FName& ID, class UObject* __WorldContext, struct FString* NameText, struct FString* GraphicText);
	bool STATIC_BPF_GetSkillText_FName(const struct FName& Name, class UObject* __WorldContext, struct FST_SkillTextData* TextData);
	void STATIC_BPF_FilterOutUnequippableSkills_Name(class UBTL_CommandLibrary_C* CommandLibrary, class UObject* __WorldContext, TArray<struct FName>* Array);
	bool STATIC_BPF_GetSkillText(int Index, class UObject* __WorldContext, struct FST_SkillTextData* TextData);
	void STATIC_BPF_SortSkillItemsForDisplay(class UBTL_CommandLibrary_C* SkillLibrary, class US3GameInstance* Inventory, bool EquippableOnly, class UObject* __WorldContext, TArray<int>* SortedInts);
	void STATIC_BPF_ConvertSkillNameListToIntList(TArray<int> Ints, class UObject* __WorldContext, TArray<struct FName>* Names);
	void STATIC_GetNonItemSkillName_Int32(int ID, class UObject* __WorldContext, struct FString* NameText, struct FString* GraphicText);
	void STATIC_BPF_SelectAutoSkillSetAsFallback(class UBTL_CommandLibrary_C* CommandLibrary, class UObject* __WorldContext);
	void STATIC_BPF_ListLevelableSkills_int(class UBTL_CommandLibrary_C* SkillLibrary, class UObject* __WorldContext, TArray<int>* SkillItems);
	void STATIC_BPF_ListPlayerSkillItems_int(class UBTL_CommandLibrary_C* SkillLibrary, class US3GameInstance* Inventory, bool EquippableOnly, bool Sort, class UObject* __WorldContext, TArray<int>* Integers);
	void STATIC_BPF_ListPlayerSkillItems_Name(class UBTL_CommandLibrary_C* SkillLibrary, class US3GameInstance* Inventory, bool EquippableOnly, bool Sort, class UObject* __WorldContext, TArray<struct FName>* SortedList);
	void STATIC_BPF_ListLevelableSkills_Name(class UBTL_CommandLibrary_C* SkillLibrary, class UObject* __WorldContext, TArray<struct FName>* SkillItems);
	struct FText STATIC_BPF_CalcSelectedSkillsetName(const struct FText& TextData, class UObject* __WorldContext, int* Index);
	bool STATIC_BPF_IsSkillLevelable(class UBTL_CommandLibrary_C* CommandLibrary, const struct FName& SkillItem, class UObject* __WorldContext);
	bool STATIC_BPF_IsSkillEquippable(class UBTL_CommandLibrary_C* CommandLibrary, const struct FName& SkillItem, class UObject* __WorldContext);
	int STATIC_BPF_GetManualSkillSetCount(class UObject* __WorldContext);
	int STATIC_BPF_GetSelectedSkillSetIndex(class UObject* __WorldContext);
	int STATIC_BPF_GetLastSkillSetIndex(class UObject* __WorldContext);
	void STATIC_BPF_SelectAutoSkillSet(class UObject* __WorldContext);
	void STATIC_BPF_SelectSkillSet(int Index, class UObject* __WorldContext);
	void STATIC_BPF_IsAutoSkillSetSelected(class UObject* __WorldContext, bool* Returnalue);
	void STATIC_BPF_GetCurrentSkillList(class UBTL_CommandLibrary_C* CommandLibrary, TEnumAsByte<ESkillRecommendationType> Type, class UObject* __WorldContext, TArray<struct FName>* ItemLabels);
	void STATIC_BPF_EquipSkill(const struct FName& SkillId, int Index, class UObject* __WorldContext);
	void STATIC_BPF_SelectRecommendedSkillList(class UBTL_CommandLibrary_C* CommandLibrary, TEnumAsByte<ESkillRecommendationType> Type, class UObject* __WorldContext, TArray<struct FName>* ItemLabels);
	void STATIC_BPF_ConvertItemIDToSkillID_Fast(int Int, class UObject* __WorldContext, struct FName* Name);
	void STATIC_BPF_CanPlayerEquipSkill_Int(class UBTL_CommandLibrary_C* CommandLibrary, int SkillId, class UObject* __WorldContext, bool* CanUse);
	void STATIC_BPF_ConvertItemIDToSkillID(int Int, class UObject* __WorldContext, struct FName* Name);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
