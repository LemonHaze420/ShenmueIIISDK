#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPF_Skill.BPF_Skill_C.GetNonItemSkillName_FName
struct UBPF_Skill_C_GetNonItemSkillName_FName_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NameText;                                                 // (Parm, OutParm, ZeroConstructor)
	struct FString                                     GraphicText;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_Skill.BPF_Skill_C.BPF_GetSkillText_FName
struct UBPF_Skill_C_BPF_GetSkillText_FName_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	struct FST_SkillTextData                           TextData;                                                 // (Parm, OutParm)
};

// Function BPF_Skill.BPF_Skill_C.BPF_FilterOutUnequippableSkills_Name
struct UBPF_Skill_C_BPF_FilterOutUnequippableSkills_Name_Params
{
	class UBTL_CommandLibrary_C*                       CommandLibrary;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Skill.BPF_Skill_C.BPF_GetSkillText
struct UBPF_Skill_C_BPF_GetSkillText_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	struct FST_SkillTextData                           TextData;                                                 // (Parm, OutParm)
};

// Function BPF_Skill.BPF_Skill_C.BPF_SortSkillItemsForDisplay
struct UBPF_Skill_C_BPF_SortSkillItemsForDisplay_Params
{
	class UBTL_CommandLibrary_C*                       SkillLibrary;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3GameInstance*                             Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EquippableOnly;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        SortedInts;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_Skill.BPF_Skill_C.BPF_ConvertSkillNameListToIntList
struct UBPF_Skill_C_BPF_ConvertSkillNameListToIntList_Params
{
	TArray<struct FName>                               Names;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Ints;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Skill.BPF_Skill_C.GetNonItemSkillName_Int32
struct UBPF_Skill_C_GetNonItemSkillName_Int32_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     NameText;                                                 // (Parm, OutParm, ZeroConstructor)
	struct FString                                     GraphicText;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_Skill.BPF_Skill_C.BPF_SelectAutoSkillSetAsFallback
struct UBPF_Skill_C_BPF_SelectAutoSkillSetAsFallback_Params
{
	class UBTL_CommandLibrary_C*                       CommandLibrary;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Skill.BPF_Skill_C.BPF_ListLevelableSkills_int
struct UBPF_Skill_C_BPF_ListLevelableSkills_int_Params
{
	class UBTL_CommandLibrary_C*                       SkillLibrary;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        SkillItems;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_Skill.BPF_Skill_C.BPF_ListPlayerSkillItems_int
struct UBPF_Skill_C_BPF_ListPlayerSkillItems_int_Params
{
	class UBTL_CommandLibrary_C*                       SkillLibrary;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3GameInstance*                             Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EquippableOnly;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Sort;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Integers;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_Skill.BPF_Skill_C.BPF_ListPlayerSkillItems_Name
struct UBPF_Skill_C_BPF_ListPlayerSkillItems_Name_Params
{
	class UBTL_CommandLibrary_C*                       SkillLibrary;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3GameInstance*                             Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EquippableOnly;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Sort;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SortedList;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_Skill.BPF_Skill_C.BPF_ListLevelableSkills_Name
struct UBPF_Skill_C_BPF_ListLevelableSkills_Name_Params
{
	class UBTL_CommandLibrary_C*                       SkillLibrary;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SkillItems;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_Skill.BPF_Skill_C.BPF_CalcSelectedSkillsetName
struct UBPF_Skill_C_BPF_CalcSelectedSkillsetName_Params
{
	struct FText                                       TextData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Skill.BPF_Skill_C.BPF_IsSkillLevelable
struct UBPF_Skill_C_BPF_IsSkillLevelable_Params
{
	class UBTL_CommandLibrary_C*                       CommandLibrary;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SkillItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_Skill.BPF_Skill_C.BPF_IsSkillEquippable
struct UBPF_Skill_C_BPF_IsSkillEquippable_Params
{
	class UBTL_CommandLibrary_C*                       CommandLibrary;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SkillItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_Skill.BPF_Skill_C.BPF_GetManualSkillSetCount
struct UBPF_Skill_C_BPF_GetManualSkillSetCount_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_Skill.BPF_Skill_C.BPF_GetSelectedSkillSetIndex
struct UBPF_Skill_C_BPF_GetSelectedSkillSetIndex_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_Skill.BPF_Skill_C.BPF_GetLastSkillSetIndex
struct UBPF_Skill_C_BPF_GetLastSkillSetIndex_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPF_Skill.BPF_Skill_C.BPF_SelectAutoSkillSet
struct UBPF_Skill_C_BPF_SelectAutoSkillSet_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Skill.BPF_Skill_C.BPF_SelectSkillSet
struct UBPF_Skill_C_BPF_SelectSkillSet_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Skill.BPF_Skill_C.BPF_IsAutoSkillSetSelected
struct UBPF_Skill_C_BPF_IsAutoSkillSetSelected_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Returnalue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Skill.BPF_Skill_C.BPF_GetCurrentSkillList
struct UBPF_Skill_C_BPF_GetCurrentSkillList_Params
{
	class UBTL_CommandLibrary_C*                       CommandLibrary;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkillRecommendationType>              Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ItemLabels;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_Skill.BPF_Skill_C.BPF_EquipSkill
struct UBPF_Skill_C_BPF_EquipSkill_Params
{
	struct FName                                       SkillId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Skill.BPF_Skill_C.BPF_SelectRecommendedSkillList
struct UBPF_Skill_C_BPF_SelectRecommendedSkillList_Params
{
	class UBTL_CommandLibrary_C*                       CommandLibrary;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkillRecommendationType>              Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ItemLabels;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_Skill.BPF_Skill_C.BPF_ConvertItemIDToSkillID_Fast
struct UBPF_Skill_C_BPF_ConvertItemIDToSkillID_Fast_Params
{
	int                                                Int;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Skill.BPF_Skill_C.BPF_CanPlayerEquipSkill_Int
struct UBPF_Skill_C_BPF_CanPlayerEquipSkill_Int_Params
{
	class UBTL_CommandLibrary_C*                       CommandLibrary;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SkillId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanUse;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Skill.BPF_Skill_C.BPF_ConvertItemIDToSkillID
struct UBPF_Skill_C_BPF_ConvertItemIDToSkillID_Params
{
	int                                                Int;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
