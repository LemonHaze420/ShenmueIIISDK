
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

// Function wgt_SkillEditorSkillSlot.wgt_SkillEditorSkillSlot_C.SetSelect
// (NetRequest, Native, Static, Protected, Delegate, NetServer, HasDefaults, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Select                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditorSkillSlot_C::STATIC_SetSelect(bool Select)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorSkillSlot.wgt_SkillEditorSkillSlot_C.SetSelect");

	Uwgt_SkillEditorSkillSlot_C_SetSelect_Params params;
	params.Select = Select;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorSkillSlot.wgt_SkillEditorSkillSlot_C.SetFocus
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           Focus                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwgt_SkillEditorSkillSlot_C::STATIC_SetFocus(bool Focus)
{
	static auto fn = UObject::FindObject<UFunction>("Function wgt_SkillEditorSkillSlot.wgt_SkillEditorSkillSlot_C.SetFocus");

	Uwgt_SkillEditorSkillSlot_C_SetFocus_Params params;
	params.Focus = Focus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wgt_SkillEditorSkillSlot.wgt_SkillEditorSkillSlot_C.SetText
// (NetRequest, Event, Static, NetMulticast, Private, Delegate, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void Uwgt_SkillEditorSkillSlot_C::STATIC_SetText(const struct FText& InText)
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
