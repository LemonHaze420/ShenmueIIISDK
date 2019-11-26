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

// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.MakeHiddenParam
struct ABP_UI_GeneralWindowManager_C_MakeHiddenParam_Params
{
	struct FST_GeneralWindow_Button                    InParam;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	struct FST_GeneralWindow_Button                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.HideInput
struct ABP_UI_GeneralWindowManager_C_HideInput_Params
{
	bool                                               bHide;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.JudgeButton
struct ABP_UI_GeneralWindowManager_C_JudgeButton_Params
{
	TEnumAsByte<EN_GeneralWindow_Button>               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.CloseWindow
struct ABP_UI_GeneralWindowManager_C_CloseWindow_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.SetButtonFlag
struct ABP_UI_GeneralWindowManager_C_SetButtonFlag_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.UserConstructionScript
struct ABP_UI_GeneralWindowManager_C_UserConstructionScript_Params
{
};

// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.InpActEvt_SearchTopButton_K2Node_InputActionEvent_8
struct ABP_UI_GeneralWindowManager_C_InpActEvt_SearchTopButton_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.InpActEvt_SearchLeftButton_K2Node_InputActionEvent_7
struct ABP_UI_GeneralWindowManager_C_InpActEvt_SearchLeftButton_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_6
struct ABP_UI_GeneralWindowManager_C_InpActEvt_SearchRightButton_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_5
struct ABP_UI_GeneralWindowManager_C_InpActEvt_SearchBottomButton_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.ReceiveBeginPlay
struct ABP_UI_GeneralWindowManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.ReceiveDestroyed
struct ABP_UI_GeneralWindowManager_C_ReceiveDestroyed_Params
{
};

// Function BP_UI_GeneralWindowManager.BP_UI_GeneralWindowManager_C.ExecuteUbergraph_BP_UI_GeneralWindowManager
struct ABP_UI_GeneralWindowManager_C_ExecuteUbergraph_BP_UI_GeneralWindowManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
