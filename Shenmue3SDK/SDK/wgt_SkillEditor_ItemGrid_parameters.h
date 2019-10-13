#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.SetSkillLibrary
struct Uwgt_SkillEditor_ItemGrid_C_SetSkillLibrary_Params
{
	class UBTL_CommandLibrary_C*                       SkillLibrary;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.GetSelectionItemLabel
struct Uwgt_SkillEditor_ItemGrid_C_GetSelectionItemLabel_Params
{
	struct FName                                       Label;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.UpdateWidgetFocusing
struct Uwgt_SkillEditor_ItemGrid_C_UpdateWidgetFocusing_Params
{
	int                                                ItemIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.SetFocus
struct Uwgt_SkillEditor_ItemGrid_C_SetFocus_Params
{
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.SelectItem(WidgetIndex)
struct Uwgt_SkillEditor_ItemGrid_C_SelectItem_WidgetIndex__Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.SelectItem(ItemIntID)
struct Uwgt_SkillEditor_ItemGrid_C_SelectItem_ItemIntID__Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.ClearSelection
struct Uwgt_SkillEditor_ItemGrid_C_ClearSelection_Params
{
};

// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.SetItems
struct Uwgt_SkillEditor_ItemGrid_C_SetItems_Params
{
	int                                                StartIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        AllItems;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.GetSelectionItemID
struct Uwgt_SkillEditor_ItemGrid_C_GetSelectionItemID_Params
{
	int                                                ItemIntID;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.GridLocationToWidgetIndex
struct Uwgt_SkillEditor_ItemGrid_C_GridLocationToWidgetIndex_Params
{
	int                                                X;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.MoveSelection
struct Uwgt_SkillEditor_ItemGrid_C_MoveSelection_Params
{
	TEnumAsByte<Een_skill_key_type>                    Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.WidgetIndexToGridLocation
struct Uwgt_SkillEditor_ItemGrid_C_WidgetIndexToGridLocation_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Column;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Row;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.GetGridItemCount
struct Uwgt_SkillEditor_ItemGrid_C_GetGridItemCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.Construct
struct Uwgt_SkillEditor_ItemGrid_C_Construct_Params
{
};

// Function wgt_SkillEditor_ItemGrid.wgt_SkillEditor_ItemGrid_C.ExecuteUbergraph_wgt_SkillEditor_ItemGrid
struct Uwgt_SkillEditor_ItemGrid_C_ExecuteUbergraph_wgt_SkillEditor_ItemGrid_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
