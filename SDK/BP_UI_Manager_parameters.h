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

// Function BP_UI_Manager.BP_UI_Manager_C.GetPriority
struct ABP_UI_Manager_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_UI_Manager.BP_UI_Manager_C.GetDetectAction
struct ABP_UI_Manager_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_UI_Manager.BP_UI_Manager_C.SetRotateIconVisiblity
struct ABP_UI_Manager_C_SetRotateIconVisiblity_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_Manager.BP_UI_Manager_C.PlaySE
struct ABP_UI_Manager_C_PlaySE_Params
{
	TEnumAsByte<EN_ShopSE_List>                        SE;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_Manager.BP_UI_Manager_C.GetText
struct ABP_UI_Manager_C_GetText_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3TextPathType                                    Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OutString;                                                // (Parm, OutParm)
};

// Function BP_UI_Manager.BP_UI_Manager_C.PushUp_ItemList
struct ABP_UI_Manager_C_PushUp_ItemList_Params
{
	class UBPW_UI_BaseWindow_C*                        UI_Widget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_UI_Manager.BP_UI_Manager_C.PushDown_ItemList
struct ABP_UI_Manager_C_PushDown_ItemList_Params
{
	class UBPW_UI_BaseWindow_C*                        UI_Widget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_UI_Manager.BP_UI_Manager_C.PushLeft_ItemList
struct ABP_UI_Manager_C_PushLeft_ItemList_Params
{
	class UBPW_UI_BaseWindow_C*                        UI_Widget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_UI_Manager.BP_UI_Manager_C.PushRight_ItemList
struct ABP_UI_Manager_C_PushRight_ItemList_Params
{
	class UBPW_UI_BaseWindow_C*                        UI_Widget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_UI_Manager.BP_UI_Manager_C.MakeItemList
struct ABP_UI_Manager_C_MakeItemList_Params
{
	TArray<int>                                        ItemIDList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FST_ItemList>                        itemList;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_UI_Manager.BP_UI_Manager_C.IsRegistDetectAction
struct ABP_UI_Manager_C_IsRegistDetectAction_Params
{
	bool                                               Regist;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_Manager.BP_UI_Manager_C.UserConstructionScript
struct ABP_UI_Manager_C_UserConstructionScript_Params
{
};

// Function BP_UI_Manager.BP_UI_Manager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_8
struct ABP_UI_Manager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_Manager.BP_UI_Manager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_7
struct ABP_UI_Manager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_Manager.BP_UI_Manager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_6
struct ABP_UI_Manager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_Manager.BP_UI_Manager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_5
struct ABP_UI_Manager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_Manager.BP_UI_Manager_C.PushButton
struct ABP_UI_Manager_C_PushButton_Params
{
	TEnumAsByte<EN_UI_Button>                          newParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_Manager.BP_UI_Manager_C.InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_1
struct ABP_UI_Manager_C_InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_Manager.BP_UI_Manager_C.InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_2
struct ABP_UI_Manager_C_InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_Manager.BP_UI_Manager_C.InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_1
struct ABP_UI_Manager_C_InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_Manager.BP_UI_Manager_C.InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2
struct ABP_UI_Manager_C_InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_Manager.BP_UI_Manager_C.InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_4
struct ABP_UI_Manager_C_InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_4_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_Manager.BP_UI_Manager_C.InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_7
struct ABP_UI_Manager_C_InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_7_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_Manager.BP_UI_Manager_C.ReceiveBeginPlay
struct ABP_UI_Manager_C_ReceiveBeginPlay_Params
{
};

// Function BP_UI_Manager.BP_UI_Manager_C.ReceiveDestroyed
struct ABP_UI_Manager_C_ReceiveDestroyed_Params
{
};

// Function BP_UI_Manager.BP_UI_Manager_C.DecideDetectAction
struct ABP_UI_Manager_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_Manager.BP_UI_Manager_C.ExecuteUbergraph_BP_UI_Manager
struct ABP_UI_Manager_C_ExecuteUbergraph_BP_UI_Manager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
