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

// Function BP_AR_Input.BP_AR_Input_C.UserConstructionScript
struct ABP_AR_Input_C_UserConstructionScript_Params
{
};

// Function BP_AR_Input.BP_AR_Input_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_24
struct ABP_AR_Input_C_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_24_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_AR_Input.BP_AR_Input_C.InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_23
struct ABP_AR_Input_C_InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_23_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_AR_Input.BP_AR_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_22
struct ABP_AR_Input_C_InpActEvt_MG_Right_K2Node_InputActionEvent_22_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_AR_Input.BP_AR_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_21
struct ABP_AR_Input_C_InpActEvt_MG_Left_K2Node_InputActionEvent_21_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_AR_Input.BP_AR_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_20
struct ABP_AR_Input_C_InpActEvt_MG_Top_K2Node_InputActionEvent_20_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_AR_Input.BP_AR_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_19
struct ABP_AR_Input_C_InpActEvt_MG_Bottom_K2Node_InputActionEvent_19_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_AR_Input.BP_AR_Input_C.InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_18
struct ABP_AR_Input_C_InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_18_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_AR_Input.BP_AR_Input_C.InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_17
struct ABP_AR_Input_C_InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_17_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_AR_Input.BP_AR_Input_C.InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_16
struct ABP_AR_Input_C_InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_AR_Input.BP_AR_Input_C.InpActEvt_MG_ButtonBottomNoChange_K2Node_InputActionEvent_15
struct ABP_AR_Input_C_InpActEvt_MG_ButtonBottomNoChange_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_AR_Input.BP_AR_Input_C.InpActEvt_MG_LeftStickLeft_K2Node_InputActionEvent_14
struct ABP_AR_Input_C_InpActEvt_MG_LeftStickLeft_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_AR_Input.BP_AR_Input_C.InpActEvt_MG_LeftStickRight_K2Node_InputActionEvent_13
struct ABP_AR_Input_C_InpActEvt_MG_LeftStickRight_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_AR_Input.BP_AR_Input_C.Push Support
struct ABP_AR_Input_C_Push_Support_Params
{
	TEnumAsByte<EN_padSwitch>                          ButtonType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Input.BP_AR_Input_C.ReceiveTick
struct ABP_AR_Input_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AR_Input.BP_AR_Input_C.ExecuteUbergraph_BP_AR_Input
struct ABP_AR_Input_C_ExecuteUbergraph_BP_AR_Input_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
