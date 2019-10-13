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

// Function wgt_skiledit.wgt_skiledit_C.SetWazeSlotSwitchSel
struct Uwgt_skiledit_C_SetWazeSlotSwitchSel_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_skiledit.wgt_skiledit_C.SetWazePageSel
struct Uwgt_skiledit_C_SetWazePageSel_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_skiledit.wgt_skiledit_C.UpdatePageIcons
struct Uwgt_skiledit_C_UpdatePageIcons_Params
{
};

// Function wgt_skiledit.wgt_skiledit_C.UpdateDetailPanel
struct Uwgt_skiledit_C_UpdateDetailPanel_Params
{
};

// Function wgt_skiledit.wgt_skiledit_C.UpdateBookItem
struct Uwgt_skiledit_C_UpdateBookItem_Params
{
	int                                                ItemIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_skiledit.wgt_skiledit_C.OpenBookToItem(ItemIntID)
struct Uwgt_skiledit_C_OpenBookToItem_ItemIntID__Params
{
	int                                                ItemIntID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetIndexOnInvalid;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_skiledit.wgt_skiledit_C.UpdateSetSelection
struct Uwgt_skiledit_C_UpdateSetSelection_Params
{
};

// Function wgt_skiledit.wgt_skiledit_C.SetBookPage
struct Uwgt_skiledit_C_SetBookPage_Params
{
	int                                                InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Changed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_skiledit.wgt_skiledit_C.PushLR
struct Uwgt_skiledit_C_PushLR_Params
{
	int                                                AddPage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_skiledit.wgt_skiledit_C.InitPageIcon
struct Uwgt_skiledit_C_InitPageIcon_Params
{
};

// Function wgt_skiledit.wgt_skiledit_C.SetCurrentMode
struct Uwgt_skiledit_C_SetCurrentMode_Params
{
	TEnumAsByte<ESkillEditorInnnerModeType>            current_mode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_skiledit.wgt_skiledit_C.ExecDialog
struct Uwgt_skiledit_C_ExecDialog_Params
{
};

// Function wgt_skiledit.wgt_skiledit_C.InputSelectDirection
struct Uwgt_skiledit_C_InputSelectDirection_Params
{
	TEnumAsByte<Een_skill_key_type>                    Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsActionButton;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ItemIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_skiledit.wgt_skiledit_C.InputCancel
struct Uwgt_skiledit_C_InputCancel_Params
{
	bool                                               IsEnd;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_skiledit.wgt_skiledit_C.InputSelect
struct Uwgt_skiledit_C_InputSelect_Params
{
	int                                                ItemIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_skiledit.wgt_skiledit_C.PreConstruct
struct Uwgt_skiledit_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wgt_skiledit.wgt_skiledit_C.Destruct
struct Uwgt_skiledit_C_Destruct_Params
{
};

// Function wgt_skiledit.wgt_skiledit_C.Construct
struct Uwgt_skiledit_C_Construct_Params
{
};

// Function wgt_skiledit.wgt_skiledit_C.ExecuteUbergraph_wgt_skiledit
struct Uwgt_skiledit_C_ExecuteUbergraph_wgt_skiledit_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
