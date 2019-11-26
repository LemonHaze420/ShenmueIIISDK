
#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPF_Skill.BPF_Skill_C.GetNonItemSkillName_FName
// (Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 NameText                       (Parm, OutParm, ZeroConstructor)
// struct FString                 GraphicText                    (Parm, OutParm, ZeroConstructor)

void UBPF_Skill_C::STATIC_GetNonItemSkillName_FName(const struct FName& ID, class UObject* __WorldContext, struct FString* NameText, struct FString* GraphicText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.GetNonItemSkillName_FName");

	UBPF_Skill_C_GetNonItemSkillName_FName_Params params;
	params.ID = ID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NameText != nullptr)
		*NameText = params.NameText;
	if (GraphicText != nullptr)
		*GraphicText = params.GraphicText;
}


// Function BPF_Skill.BPF_Skill_C.BPF_GetSkillText_FName
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// struct FST_SkillTextData       TextData                       (Parm, OutParm)

bool UBPF_Skill_C::STATIC_BPF_GetSkillText_FName(const struct FName& Name, class UObject* __WorldContext, struct FST_SkillTextData* TextData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_GetSkillText_FName");

	UBPF_Skill_C_BPF_GetSkillText_FName_Params params;
	params.Name = Name;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextData != nullptr)
		*TextData = params.TextData;

	return params.ReturnValue;
}


// Function BPF_Skill.BPF_Skill_C.BPF_FilterOutUnequippableSkills_Name
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBTL_CommandLibrary_C*   CommandLibrary                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Skill_C::STATIC_BPF_FilterOutUnequippableSkills_Name(class UBTL_CommandLibrary_C* CommandLibrary, class UObject* __WorldContext, TArray<struct FName>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_FilterOutUnequippableSkills_Name");

	UBPF_Skill_C_BPF_FilterOutUnequippableSkills_Name_Params params;
	params.CommandLibrary = CommandLibrary;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function BPF_Skill.BPF_Skill_C.BPF_GetSkillText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// struct FST_SkillTextData       TextData                       (Parm, OutParm)

bool UBPF_Skill_C::STATIC_BPF_GetSkillText(int Index, class UObject* __WorldContext, struct FST_SkillTextData* TextData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_GetSkillText");

	UBPF_Skill_C_BPF_GetSkillText_Params params;
	params.Index = Index;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextData != nullptr)
		*TextData = params.TextData;

	return params.ReturnValue;
}


// Function BPF_Skill.BPF_Skill_C.BPF_SortSkillItemsForDisplay
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBTL_CommandLibrary_C*   SkillLibrary                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3GameInstance*         Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EquippableOnly                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    SortedInts                     (Parm, OutParm, ZeroConstructor)

void UBPF_Skill_C::STATIC_BPF_SortSkillItemsForDisplay(class UBTL_CommandLibrary_C* SkillLibrary, class US3GameInstance* Inventory, bool EquippableOnly, class UObject* __WorldContext, TArray<int>* SortedInts)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_SortSkillItemsForDisplay");

	UBPF_Skill_C_BPF_SortSkillItemsForDisplay_Params params;
	params.SkillLibrary = SkillLibrary;
	params.Inventory = Inventory;
	params.EquippableOnly = EquippableOnly;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SortedInts != nullptr)
		*SortedInts = params.SortedInts;
}


// Function BPF_Skill.BPF_Skill_C.BPF_ConvertSkillNameListToIntList
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FName>           Names                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Ints                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Skill_C::STATIC_BPF_ConvertSkillNameListToIntList(TArray<int> Ints, class UObject* __WorldContext, TArray<struct FName>* Names)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_ConvertSkillNameListToIntList");

	UBPF_Skill_C_BPF_ConvertSkillNameListToIntList_Params params;
	params.Ints = Ints;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Names != nullptr)
		*Names = params.Names;
}


// Function BPF_Skill.BPF_Skill_C.GetNonItemSkillName_Int32
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 NameText                       (Parm, OutParm, ZeroConstructor)
// struct FString                 GraphicText                    (Parm, OutParm, ZeroConstructor)

void UBPF_Skill_C::STATIC_GetNonItemSkillName_Int32(int ID, class UObject* __WorldContext, struct FString* NameText, struct FString* GraphicText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.GetNonItemSkillName_Int32");

	UBPF_Skill_C_GetNonItemSkillName_Int32_Params params;
	params.ID = ID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NameText != nullptr)
		*NameText = params.NameText;
	if (GraphicText != nullptr)
		*GraphicText = params.GraphicText;
}


// Function BPF_Skill.BPF_Skill_C.BPF_SelectAutoSkillSetAsFallback
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBTL_CommandLibrary_C*   CommandLibrary                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Skill_C::STATIC_BPF_SelectAutoSkillSetAsFallback(class UBTL_CommandLibrary_C* CommandLibrary, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_SelectAutoSkillSetAsFallback");

	UBPF_Skill_C_BPF_SelectAutoSkillSetAsFallback_Params params;
	params.CommandLibrary = CommandLibrary;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_Skill.BPF_Skill_C.BPF_ListLevelableSkills_int
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBTL_CommandLibrary_C*   SkillLibrary                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    SkillItems                     (Parm, OutParm, ZeroConstructor)

void UBPF_Skill_C::STATIC_BPF_ListLevelableSkills_int(class UBTL_CommandLibrary_C* SkillLibrary, class UObject* __WorldContext, TArray<int>* SkillItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_ListLevelableSkills_int");

	UBPF_Skill_C_BPF_ListLevelableSkills_int_Params params;
	params.SkillLibrary = SkillLibrary;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkillItems != nullptr)
		*SkillItems = params.SkillItems;
}


// Function BPF_Skill.BPF_Skill_C.BPF_ListPlayerSkillItems_int
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBTL_CommandLibrary_C*   SkillLibrary                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3GameInstance*         Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EquippableOnly                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Sort                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Integers                       (Parm, OutParm, ZeroConstructor)

void UBPF_Skill_C::STATIC_BPF_ListPlayerSkillItems_int(class UBTL_CommandLibrary_C* SkillLibrary, class US3GameInstance* Inventory, bool EquippableOnly, bool Sort, class UObject* __WorldContext, TArray<int>* Integers)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_ListPlayerSkillItems_int");

	UBPF_Skill_C_BPF_ListPlayerSkillItems_int_Params params;
	params.SkillLibrary = SkillLibrary;
	params.Inventory = Inventory;
	params.EquippableOnly = EquippableOnly;
	params.Sort = Sort;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Integers != nullptr)
		*Integers = params.Integers;
}


// Function BPF_Skill.BPF_Skill_C.BPF_ListPlayerSkillItems_Name
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBTL_CommandLibrary_C*   SkillLibrary                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class US3GameInstance*         Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EquippableOnly                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Sort                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           SortedList                     (Parm, OutParm, ZeroConstructor)

void UBPF_Skill_C::STATIC_BPF_ListPlayerSkillItems_Name(class UBTL_CommandLibrary_C* SkillLibrary, class US3GameInstance* Inventory, bool EquippableOnly, bool Sort, class UObject* __WorldContext, TArray<struct FName>* SortedList)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_ListPlayerSkillItems_Name");

	UBPF_Skill_C_BPF_ListPlayerSkillItems_Name_Params params;
	params.SkillLibrary = SkillLibrary;
	params.Inventory = Inventory;
	params.EquippableOnly = EquippableOnly;
	params.Sort = Sort;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SortedList != nullptr)
		*SortedList = params.SortedList;
}


// Function BPF_Skill.BPF_Skill_C.BPF_ListLevelableSkills_Name
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBTL_CommandLibrary_C*   SkillLibrary                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           SkillItems                     (Parm, OutParm, ZeroConstructor)

void UBPF_Skill_C::STATIC_BPF_ListLevelableSkills_Name(class UBTL_CommandLibrary_C* SkillLibrary, class UObject* __WorldContext, TArray<struct FName>* SkillItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_ListLevelableSkills_Name");

	UBPF_Skill_C_BPF_ListLevelableSkills_Name_Params params;
	params.SkillLibrary = SkillLibrary;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkillItems != nullptr)
		*SkillItems = params.SkillItems;
}


// Function BPF_Skill.BPF_Skill_C.BPF_CalcSelectedSkillsetName
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   TextData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

struct FText UBPF_Skill_C::STATIC_BPF_CalcSelectedSkillsetName(const struct FText& TextData, class UObject* __WorldContext, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_CalcSelectedSkillsetName");

	UBPF_Skill_C_BPF_CalcSelectedSkillsetName_Params params;
	params.TextData = TextData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

	return params.ReturnValue;
}


// Function BPF_Skill.BPF_Skill_C.BPF_IsSkillLevelable
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBTL_CommandLibrary_C*   CommandLibrary                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SkillItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_Skill_C::STATIC_BPF_IsSkillLevelable(class UBTL_CommandLibrary_C* CommandLibrary, const struct FName& SkillItem, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_IsSkillLevelable");

	UBPF_Skill_C_BPF_IsSkillLevelable_Params params;
	params.CommandLibrary = CommandLibrary;
	params.SkillItem = SkillItem;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_Skill.BPF_Skill_C.BPF_IsSkillEquippable
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBTL_CommandLibrary_C*   CommandLibrary                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SkillItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBPF_Skill_C::STATIC_BPF_IsSkillEquippable(class UBTL_CommandLibrary_C* CommandLibrary, const struct FName& SkillItem, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_IsSkillEquippable");

	UBPF_Skill_C_BPF_IsSkillEquippable_Params params;
	params.CommandLibrary = CommandLibrary;
	params.SkillItem = SkillItem;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_Skill.BPF_Skill_C.BPF_GetManualSkillSetCount
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBPF_Skill_C::STATIC_BPF_GetManualSkillSetCount(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_GetManualSkillSetCount");

	UBPF_Skill_C_BPF_GetManualSkillSetCount_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_Skill.BPF_Skill_C.BPF_GetSelectedSkillSetIndex
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBPF_Skill_C::STATIC_BPF_GetSelectedSkillSetIndex(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_GetSelectedSkillSetIndex");

	UBPF_Skill_C_BPF_GetSelectedSkillSetIndex_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_Skill.BPF_Skill_C.BPF_GetLastSkillSetIndex
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBPF_Skill_C::STATIC_BPF_GetLastSkillSetIndex(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_GetLastSkillSetIndex");

	UBPF_Skill_C_BPF_GetLastSkillSetIndex_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPF_Skill.BPF_Skill_C.BPF_SelectAutoSkillSet
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Skill_C::STATIC_BPF_SelectAutoSkillSet(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_SelectAutoSkillSet");

	UBPF_Skill_C_BPF_SelectAutoSkillSet_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_Skill.BPF_Skill_C.BPF_SelectSkillSet
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Skill_C::STATIC_BPF_SelectSkillSet(int Index, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_SelectSkillSet");

	UBPF_Skill_C_BPF_SelectSkillSet_Params params;
	params.Index = Index;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_Skill.BPF_Skill_C.BPF_IsAutoSkillSetSelected
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Returnalue                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Skill_C::STATIC_BPF_IsAutoSkillSetSelected(class UObject* __WorldContext, bool* Returnalue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_IsAutoSkillSetSelected");

	UBPF_Skill_C_BPF_IsAutoSkillSetSelected_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Returnalue != nullptr)
		*Returnalue = params.Returnalue;
}


// Function BPF_Skill.BPF_Skill_C.BPF_GetCurrentSkillList
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBTL_CommandLibrary_C*   CommandLibrary                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESkillRecommendationType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ItemLabels                     (Parm, OutParm, ZeroConstructor)

void UBPF_Skill_C::STATIC_BPF_GetCurrentSkillList(class UBTL_CommandLibrary_C* CommandLibrary, TEnumAsByte<ESkillRecommendationType> Type, class UObject* __WorldContext, TArray<struct FName>* ItemLabels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_GetCurrentSkillList");

	UBPF_Skill_C_BPF_GetCurrentSkillList_Params params;
	params.CommandLibrary = CommandLibrary;
	params.Type = Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLabels != nullptr)
		*ItemLabels = params.ItemLabels;
}


// Function BPF_Skill.BPF_Skill_C.BPF_EquipSkill
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SkillId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPF_Skill_C::STATIC_BPF_EquipSkill(const struct FName& SkillId, int Index, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_EquipSkill");

	UBPF_Skill_C_BPF_EquipSkill_Params params;
	params.SkillId = SkillId;
	params.Index = Index;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPF_Skill.BPF_Skill_C.BPF_SelectRecommendedSkillList
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBTL_CommandLibrary_C*   CommandLibrary                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESkillRecommendationType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           ItemLabels                     (Parm, OutParm, ZeroConstructor)

void UBPF_Skill_C::STATIC_BPF_SelectRecommendedSkillList(class UBTL_CommandLibrary_C* CommandLibrary, TEnumAsByte<ESkillRecommendationType> Type, class UObject* __WorldContext, TArray<struct FName>* ItemLabels)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_SelectRecommendedSkillList");

	UBPF_Skill_C_BPF_SelectRecommendedSkillList_Params params;
	params.CommandLibrary = CommandLibrary;
	params.Type = Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLabels != nullptr)
		*ItemLabels = params.ItemLabels;
}


// Function BPF_Skill.BPF_Skill_C.BPF_ConvertItemIDToSkillID_Fast
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Int                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Skill_C::STATIC_BPF_ConvertItemIDToSkillID_Fast(int Int, class UObject* __WorldContext, struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_ConvertItemIDToSkillID_Fast");

	UBPF_Skill_C_BPF_ConvertItemIDToSkillID_Fast_Params params;
	params.Int = Int;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BPF_Skill.BPF_Skill_C.BPF_CanPlayerEquipSkill_Int
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBTL_CommandLibrary_C*   CommandLibrary                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SkillId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Skill_C::STATIC_BPF_CanPlayerEquipSkill_Int(class UBTL_CommandLibrary_C* CommandLibrary, int SkillId, class UObject* __WorldContext, bool* CanUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_CanPlayerEquipSkill_Int");

	UBPF_Skill_C_BPF_CanPlayerEquipSkill_Int_Params params;
	params.CommandLibrary = CommandLibrary;
	params.SkillId = SkillId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanUse != nullptr)
		*CanUse = params.CanUse;
}


// Function BPF_Skill.BPF_Skill_C.BPF_ConvertItemIDToSkillID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Int                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPF_Skill_C::STATIC_BPF_ConvertItemIDToSkillID(int Int, class UObject* __WorldContext, struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPF_Skill.BPF_Skill_C.BPF_ConvertItemIDToSkillID");

	UBPF_Skill_C_BPF_ConvertItemIDToSkillID_Params params;
	params.Int = Int;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
