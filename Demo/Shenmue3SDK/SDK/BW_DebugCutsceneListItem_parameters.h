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

// Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.StartCutscene
struct UBW_DebugCutsceneListItem_C_StartCutscene_Params
{
};

// Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.SetupLastSelectedDebugMenuCutsceneID
struct UBW_DebugCutsceneListItem_C_SetupLastSelectedDebugMenuCutsceneID_Params
{
};

// Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.GetCutsceneID
struct UBW_DebugCutsceneListItem_C_GetCutsceneID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.SetFocusToButton
struct UBW_DebugCutsceneListItem_C_SetFocusToButton_Params
{
};

// Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.GetCutsceneListLabel
struct UBW_DebugCutsceneListItem_C_GetCutsceneListLabel_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.Get_Description_Text
struct UBW_DebugCutsceneListItem_C_Get_Description_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.Get_MainButtonLabel_Text
struct UBW_DebugCutsceneListItem_C_Get_MainButtonLabel_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.Construct
struct UBW_DebugCutsceneListItem_C_Construct_Params
{
};

// Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugCutsceneListItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugCutsceneListItem.BW_DebugCutsceneListItem_C.ExecuteUbergraph_BW_DebugCutsceneListItem
struct UBW_DebugCutsceneListItem_C_ExecuteUbergraph_BW_DebugCutsceneListItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
