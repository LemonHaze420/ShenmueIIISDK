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

// Function BP_CJ_Input.BP_CJ_Input_C.ExecPrecedeInput
struct ABP_CJ_Input_C_ExecPrecedeInput_Params
{
	bool                                               exec;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CJ_Input.BP_CJ_Input_C.InitSet
struct ABP_CJ_Input_C_InitSet_Params
{
	class ABP_MiniGame_ChawanJin_C*                    Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CJ_Input.BP_CJ_Input_C.UserConstructionScript
struct ABP_CJ_Input_C_UserConstructionScript_Params
{
};

// Function BP_CJ_Input.BP_CJ_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_12
struct ABP_CJ_Input_C_InpActEvt_MG_Bottom_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_CJ_Input.BP_CJ_Input_C.InpActEvt_MG_Left_K2Node_InputActionEvent_11
struct ABP_CJ_Input_C_InpActEvt_MG_Left_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_CJ_Input.BP_CJ_Input_C.InpActEvt_MG_Right_K2Node_InputActionEvent_10
struct ABP_CJ_Input_C_InpActEvt_MG_Right_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_CJ_Input.BP_CJ_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_9
struct ABP_CJ_Input_C_InpActEvt_MG_Top_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_CJ_Input.BP_CJ_Input_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_8
struct ABP_CJ_Input_C_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_CJ_Input.BP_CJ_Input_C.InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_7
struct ABP_CJ_Input_C_InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_CJ_Input.BP_CJ_Input_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_5
struct ABP_CJ_Input_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_5_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CJ_Input.BP_CJ_Input_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_6
struct ABP_CJ_Input_C_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_6_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CJ_Input.BP_CJ_Input_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_1
struct ABP_CJ_Input_C_InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CJ_Input.BP_CJ_Input_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_2
struct ABP_CJ_Input_C_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CJ_Input.BP_CJ_Input_C.ReceiveBeginPlay
struct ABP_CJ_Input_C_ReceiveBeginPlay_Params
{
};

// Function BP_CJ_Input.BP_CJ_Input_C.ReceiveTick
struct ABP_CJ_Input_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CJ_Input.BP_CJ_Input_C.ExecuteUbergraph_BP_CJ_Input
struct ABP_CJ_Input_C_ExecuteUbergraph_BP_CJ_Input_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CJ_Input.BP_CJ_Input_C.ChangePos__DelegateSignature
struct ABP_CJ_Input_C_ChangePos__DelegateSignature_Params
{
	struct FName                                       Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
