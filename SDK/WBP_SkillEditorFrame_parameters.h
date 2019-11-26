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

// Function WBP_SkillEditorFrame.WBP_SkillEditorFrame_C.SetBackColor
struct UWBP_SkillEditorFrame_C_SetBackColor_Params
{
	bool                                               IsSelect;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SkillEditorFrame.WBP_SkillEditorFrame_C.GetVisibility_Background
struct UWBP_SkillEditorFrame_C_GetVisibility_Background_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_SkillEditorFrame.WBP_SkillEditorFrame_C.GetVisibility_FrameLine
struct UWBP_SkillEditorFrame_C_GetVisibility_FrameLine_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_SkillEditorFrame.WBP_SkillEditorFrame_C.PreConstruct
struct UWBP_SkillEditorFrame_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SkillEditorFrame.WBP_SkillEditorFrame_C.ExecuteUbergraph_WBP_SkillEditorFrame
struct UWBP_SkillEditorFrame_C_ExecuteUbergraph_WBP_SkillEditorFrame_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
