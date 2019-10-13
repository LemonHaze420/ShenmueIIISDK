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

// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.InitLastButton
struct UBW_DebugAutoConversationList_C_InitLastButton_Params
{
};

// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.CheckGotoCategory
struct UBW_DebugAutoConversationList_C_CheckGotoCategory_Params
{
	int                                                NewIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.UpdateFocus
struct UBW_DebugAutoConversationList_C_UpdateFocus_Params
{
};

// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.OnKeyDown
struct UBW_DebugAutoConversationList_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.SetFocusToCategory
struct UBW_DebugAutoConversationList_C_SetFocusToCategory_Params
{
};

// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.SetFocusToItem
struct UBW_DebugAutoConversationList_C_SetFocusToItem_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.OnPreviewKeyDown
struct UBW_DebugAutoConversationList_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.UpdateCutsceneList
struct UBW_DebugAutoConversationList_C_UpdateCutsceneList_Params
{
};

// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.BuildCutsceneList
struct UBW_DebugAutoConversationList_C_BuildCutsceneList_Params
{
};

// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.Construct
struct UBW_DebugAutoConversationList_C_Construct_Params
{
};

// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.BndEvt__CheckBoxUseAnother_K2Node_ComponentBoundEvent_159_OnCheckBoxComponentStateChanged__DelegateSignature
struct UBW_DebugAutoConversationList_C_BndEvt__CheckBoxUseAnother_K2Node_ComponentBoundEvent_159_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.BndEvt__LastButton_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugAutoConversationList_C_BndEvt__LastButton_K2Node_ComponentBoundEvent_225_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.BndEvt__S3Button_2_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature
struct UBW_DebugAutoConversationList_C_BndEvt__S3Button_2_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BW_DebugAutoConversationList.BW_DebugAutoConversationList_C.ExecuteUbergraph_BW_DebugAutoConversationList
struct UBW_DebugAutoConversationList_C_ExecuteUbergraph_BW_DebugAutoConversationList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
