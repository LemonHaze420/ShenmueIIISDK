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

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnClickedButtonQTEForceSuccess
struct UBW_DebugCutsceneList_C_OnClickedButtonQTEForceSuccess_Params
{
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnCheckStateChangedQTEForceSuccess
struct UBW_DebugCutsceneList_C_OnCheckStateChangedQTEForceSuccess_Params
{
	bool                                               IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.InitializeForQTEForceSuccess
struct UBW_DebugCutsceneList_C_InitializeForQTEForceSuccess_Params
{
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.SearchLastSelectedDebugMenuCutsceneItem
struct UBW_DebugCutsceneList_C_SearchLastSelectedDebugMenuCutsceneItem_Params
{
	class UBW_DebugCutsceneListItem_C*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnClickedButtonSwitchSort
struct UBW_DebugCutsceneList_C_OnClickedButtonSwitchSort_Params
{
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnCheckStateChangedSwitchSort
struct UBW_DebugCutsceneList_C_OnCheckStateChangedSwitchSort_Params
{
	bool                                               IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.ConvertCutsceneIDForIDSort
struct UBW_DebugCutsceneList_C_ConvertCutsceneIDForIDSort_Params
{
	struct FString                                     InCutsceneID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     ConvertedCutsceneID;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.InitializeForIDSort
struct UBW_DebugCutsceneList_C_InitializeForIDSort_Params
{
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.CheckGotoCategory
struct UBW_DebugCutsceneList_C_CheckGotoCategory_Params
{
	int                                                NewIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.UpdateFocus
struct UBW_DebugCutsceneList_C_UpdateFocus_Params
{
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnKeyDown
struct UBW_DebugCutsceneList_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.SetFocusToCategory
struct UBW_DebugCutsceneList_C_SetFocusToCategory_Params
{
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.SetFocusToItem
struct UBW_DebugCutsceneList_C_SetFocusToItem_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnPreviewKeyDown
struct UBW_DebugCutsceneList_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.UpdateCutsceneList
struct UBW_DebugCutsceneList_C_UpdateCutsceneList_Params
{
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.BuildCutsceneList
struct UBW_DebugCutsceneList_C_BuildCutsceneList_Params
{
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.Construct
struct UBW_DebugCutsceneList_C_Construct_Params
{
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.EventOnCategoryChanged
struct UBW_DebugCutsceneList_C_EventOnCategoryChanged_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnClickedButtonUseAnother
struct UBW_DebugCutsceneList_C_OnClickedButtonUseAnother_Params
{
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnCheckStateChangedUseAnother
struct UBW_DebugCutsceneList_C_OnCheckStateChangedUseAnother_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.SetupAnotherSkeletalMesh
struct UBW_DebugCutsceneList_C_SetupAnotherSkeletalMesh_Params
{
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.OnClickedButtonPlayLastSelected
struct UBW_DebugCutsceneList_C_OnClickedButtonPlayLastSelected_Params
{
};

// Function BW_DebugCutsceneList.BW_DebugCutsceneList_C.ExecuteUbergraph_BW_DebugCutsceneList
struct UBW_DebugCutsceneList_C_ExecuteUbergraph_BW_DebugCutsceneList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
