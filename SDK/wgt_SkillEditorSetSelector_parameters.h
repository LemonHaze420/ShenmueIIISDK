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

// Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.AlertSet
struct Uwgt_SkillEditorSetSelector_C_AlertSet_Params
{
};

// Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.SetTitleText
struct Uwgt_SkillEditorSetSelector_C_SetTitleText_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.PlayArrowAnim
struct Uwgt_SkillEditorSetSelector_C_PlayArrowAnim_Params
{
	bool                                               Play;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.SetButtonImage
struct Uwgt_SkillEditorSetSelector_C_SetButtonImage_Params
{
	bool                                               Auto;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.SetSkillSetIndex
struct Uwgt_SkillEditorSetSelector_C_SetSkillSetIndex_Params
{
	struct FText                                       SkillSetText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.Construct
struct Uwgt_SkillEditorSetSelector_C_Construct_Params
{
};

// Function wgt_SkillEditorSetSelector.wgt_SkillEditorSetSelector_C.ExecuteUbergraph_wgt_SkillEditorSetSelector
struct Uwgt_SkillEditorSetSelector_C_ExecuteUbergraph_wgt_SkillEditorSetSelector_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
