
#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function wgt_SkillEditorSkillSlot.wgt_SkillEditorSkillSlot_C.SetSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Select                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditorSkillSlot_C::SetSelect(bool Select)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorSkillSlot.wgt_SkillEditorSkillSlot_C.SetSelect");

	Uwgt_SkillEditorSkillSlot_C_SetSelect_Params params;
	params.Select = Select;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorSkillSlot.wgt_SkillEditorSkillSlot_C.SetFocus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Focus                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditorSkillSlot_C::SetFocus(bool Focus)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorSkillSlot.wgt_SkillEditorSkillSlot_C.SetFocus");

	Uwgt_SkillEditorSkillSlot_C_SetFocus_Params params;
	params.Focus = Focus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorSkillSlot.wgt_SkillEditorSkillSlot_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void Uwgt_SkillEditorSkillSlot_C::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorSkillSlot.wgt_SkillEditorSkillSlot_C.SetText");

	Uwgt_SkillEditorSkillSlot_C_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
