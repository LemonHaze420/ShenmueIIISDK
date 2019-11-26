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

// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.StartAC
struct UBW_DebugAutoConversationItem_C_StartAC_Params
{
};

// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.SetFocusToButton
struct UBW_DebugAutoConversationItem_C_SetFocusToButton_Params
{
};

// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.GetCutsceneListLabel
struct UBW_DebugAutoConversationItem_C_GetCutsceneListLabel_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.Get_Description_Text
struct UBW_DebugAutoConversationItem_C_Get_Description_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.Get_MainButtonLabel_Text
struct UBW_DebugAutoConversationItem_C_Get_MainButtonLabel_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.Construct
struct UBW_DebugAutoConversationItem_C_Construct_Params
{
};

// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugAutoConversationItem_C_BndEvt__ItemButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugAutoConversationItem.BW_DebugAutoConversationItem_C.ExecuteUbergraph_BW_DebugAutoConversationItem
struct UBW_DebugAutoConversationItem_C_ExecuteUbergraph_BW_DebugAutoConversationItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
