#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function wgt_SkillEditorSkillSlot.wgt_SkillEditorSkillSlot_C.SetSelect
struct Uwgt_SkillEditorSkillSlot_C_SetSelect_Params
{
	bool                                               Select;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditorSkillSlot.wgt_SkillEditorSkillSlot_C.SetFocus
struct Uwgt_SkillEditorSkillSlot_C_SetFocus_Params
{
	bool                                               Focus;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditorSkillSlot.wgt_SkillEditorSkillSlot_C.SetText
struct Uwgt_SkillEditorSkillSlot_C_SetText_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
