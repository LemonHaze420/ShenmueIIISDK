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

// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.ButtonSelect
struct Uwgt_SkillEditor_SetPanel_C_ButtonSelect_Params
{
	bool                                               Select;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.SetButtonImage
struct Uwgt_SkillEditor_SetPanel_C_SetButtonImage_Params
{
	bool                                               Auto;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.GetSelectedSkillItem(Int)
struct Uwgt_SkillEditor_SetPanel_C_GetSelectedSkillItem_Int__Params
{
	int                                                ItemIntID;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.SetFocus
struct Uwgt_SkillEditor_SetPanel_C_SetFocus_Params
{
	bool                                               Focus;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.GetSelectedSkillItem(Name)
struct Uwgt_SkillEditor_SetPanel_C_GetSelectedSkillItem_Name__Params
{
	struct FName                                       ItemLabel;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.GetSelectedIndex
struct Uwgt_SkillEditor_SetPanel_C_GetSelectedIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.SetItemDisplayNames
struct Uwgt_SkillEditor_SetPanel_C_SetItemDisplayNames_Params
{
	TArray<struct FName>                               Skills;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.ClearSelection
struct Uwgt_SkillEditor_SetPanel_C_ClearSelection_Params
{
};

// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.MoveSelection
struct Uwgt_SkillEditor_SetPanel_C_MoveSelection_Params
{
	bool                                               Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.SelectSlot
struct Uwgt_SkillEditor_SetPanel_C_SelectSlot_Params
{
	int                                                SelectedSlotIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.PreConstruct
struct Uwgt_SkillEditor_SetPanel_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.Construct
struct Uwgt_SkillEditor_SetPanel_C_Construct_Params
{
};

// Function wgt_SkillEditor_SetPanel.wgt_SkillEditor_SetPanel_C.ExecuteUbergraph_wgt_SkillEditor_SetPanel
struct Uwgt_SkillEditor_SetPanel_C_ExecuteUbergraph_wgt_SkillEditor_SetPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
