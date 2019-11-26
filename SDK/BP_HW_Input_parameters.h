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

// Function BP_HW_Input.BP_HW_Input_C.UserConstructionScript
struct ABP_HW_Input_C_UserConstructionScript_Params
{
};

// Function BP_HW_Input.BP_HW_Input_C.InpActEvt_MG_Top_K2Node_InputActionEvent_4
struct ABP_HW_Input_C_InpActEvt_MG_Top_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_HW_Input.BP_HW_Input_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_3
struct ABP_HW_Input_C_InpActEvt_MG_Bottom_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_HW_Input.BP_HW_Input_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_1
struct ABP_HW_Input_C_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HW_Input.BP_HW_Input_C.ExecuteUbergraph_BP_HW_Input
struct ABP_HW_Input_C_ExecuteUbergraph_BP_HW_Input_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
