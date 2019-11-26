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

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.GetMiniGameValueType
struct ABP_MiniGameInputBase_C_GetMiniGameValueType_Params
{
	TEnumAsByte<EN_ValueType>                          Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.UserConstructionScript
struct ABP_MiniGameInputBase_C_UserConstructionScript_Params
{
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_20
struct ABP_MiniGameInputBase_C_InpActEvt_MG_Bottom_K2Node_InputActionEvent_20_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_19
struct ABP_MiniGameInputBase_C_InpActEvt_MG_ButtonBottom_K2Node_InputActionEvent_19_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_18
struct ABP_MiniGameInputBase_C_InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_18_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_17
struct ABP_MiniGameInputBase_C_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_17_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_16
struct ABP_MiniGameInputBase_C_InpActEvt_MG_ButtonTop_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_Left_K2Node_InputActionEvent_15
struct ABP_MiniGameInputBase_C_InpActEvt_MG_Left_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_Right_K2Node_InputActionEvent_14
struct ABP_MiniGameInputBase_C_InpActEvt_MG_Right_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_Top_K2Node_InputActionEvent_13
struct ABP_MiniGameInputBase_C_InpActEvt_MG_Top_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_MG_RightShoulder_K2Node_InputActionEvent_12
struct ABP_MiniGameInputBase_C_InpActEvt_MG_RightShoulder_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpActEvt_Interruption_K2Node_InputActionEvent_11
struct ABP_MiniGameInputBase_C_InpActEvt_Interruption_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.EndMiniGame
struct ABP_MiniGameInputBase_C_EndMiniGame_Params
{
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.WinMiniGame
struct ABP_MiniGameInputBase_C_WinMiniGame_Params
{
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.LoseMiniGame
struct ABP_MiniGameInputBase_C_LoseMiniGame_Params
{
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.DrawMiniGame
struct ABP_MiniGameInputBase_C_DrawMiniGame_Params
{
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.EnterMiniGame
struct ABP_MiniGameInputBase_C_EnterMiniGame_Params
{
	float                                              EnterTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.RestartMiniGame
struct ABP_MiniGameInputBase_C_RestartMiniGame_Params
{
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.FinalizeTalk
struct ABP_MiniGameInputBase_C_FinalizeTalk_Params
{
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.StartMiniGame
struct ABP_MiniGameInputBase_C_StartMiniGame_Params
{
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_17
struct ABP_MiniGameInputBase_C_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_17_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_18
struct ABP_MiniGameInputBase_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_18_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_27
struct ABP_MiniGameInputBase_C_InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_27_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_37
struct ABP_MiniGameInputBase_C_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_37_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_47
struct ABP_MiniGameInputBase_C_InpAxisEvt_MG_RightStickVertical_K2Node_InputAxisEvent_47_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_58
struct ABP_MiniGameInputBase_C_InpAxisEvt_MG_RightTrigger_K2Node_InputAxisEvent_58_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.EnabledMiniGameInput
struct ABP_MiniGameInputBase_C_EnabledMiniGameInput_Params
{
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.DisabledMiniGameInput
struct ABP_MiniGameInputBase_C_DisabledMiniGameInput_Params
{
};

// Function BP_MiniGameInputBase.BP_MiniGameInputBase_C.ExecuteUbergraph_BP_MiniGameInputBase
struct ABP_MiniGameInputBase_C_ExecuteUbergraph_BP_MiniGameInputBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
