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

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.SetRowTrialSetting
struct ABP_UI_ConfigManagerBase_C_SetRowTrialSetting_Params
{
	class UBPW_UI_Config_Row_C*                        Row;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EN_ConfigParam>                        Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.ChangeLanguage
struct ABP_UI_ConfigManagerBase_C_ChangeLanguage_Params
{
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.SetCanUseLocal
struct ABP_UI_ConfigManagerBase_C_SetCanUseLocal_Params
{
	TEnumAsByte<EN_ConfigParam>                        ConfigParam;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.PushRightStick
struct ABP_UI_ConfigManagerBase_C_PushRightStick_Params
{
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.LeanRightStick
struct ABP_UI_ConfigManagerBase_C_LeanRightStick_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.IsSaveLoadWidgetVisible
struct ABP_UI_ConfigManagerBase_C_IsSaveLoadWidgetVisible_Params
{
	bool                                               newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CanDecideInput
struct ABP_UI_ConfigManagerBase_C_CanDecideInput_Params
{
	bool                                               CAN;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.IsPlaySound
struct ABP_UI_ConfigManagerBase_C_IsPlaySound_Params
{
	bool                                               Play;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.SetActionIconVisibility
struct ABP_UI_ConfigManagerBase_C_SetActionIconVisibility_Params
{
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CheckFocusConfig
struct ABP_UI_ConfigManagerBase_C_CheckFocusConfig_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CanInput
struct ABP_UI_ConfigManagerBase_C_CanInput_Params
{
	bool                                               CAN;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.PushCancelButton
struct ABP_UI_ConfigManagerBase_C_PushCancelButton_Params
{
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.PushDressDecide
struct ABP_UI_ConfigManagerBase_C_PushDressDecide_Params
{
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InputConfigUpDown
struct ABP_UI_ConfigManagerBase_C_InputConfigUpDown_Params
{
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.PushDown
struct ABP_UI_ConfigManagerBase_C_PushDown_Params
{
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.PushUp
struct ABP_UI_ConfigManagerBase_C_PushUp_Params
{
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.PushRight
struct ABP_UI_ConfigManagerBase_C_PushRight_Params
{
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.PushLeft
struct ABP_UI_ConfigManagerBase_C_PushLeft_Params
{
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.FinishDressMode
struct ABP_UI_ConfigManagerBase_C_FinishDressMode_Params
{
	bool                                               Apply;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CreateDressModeWidget
struct ABP_UI_ConfigManagerBase_C_CreateDressModeWidget_Params
{
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CreatePasswordWidget
struct ABP_UI_ConfigManagerBase_C_CreatePasswordWidget_Params
{
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CancelKeyConfigWidget
struct ABP_UI_ConfigManagerBase_C_CancelKeyConfigWidget_Params
{
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CancelPasswordWidget
struct ABP_UI_ConfigManagerBase_C_CancelPasswordWidget_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CancelDressWidget
struct ABP_UI_ConfigManagerBase_C_CancelDressWidget_Params
{
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.DestroyConfigManager
struct ABP_UI_ConfigManagerBase_C_DestroyConfigManager_Params
{
	bool                                               IsDestroy;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.SetConfigName
struct ABP_UI_ConfigManagerBase_C_SetConfigName_Params
{
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.UserConstructionScript
struct ABP_UI_ConfigManagerBase_C_UserConstructionScript_Params
{
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_18
struct ABP_UI_ConfigManagerBase_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_18_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_17
struct ABP_UI_ConfigManagerBase_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_17_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16
struct ABP_UI_ConfigManagerBase_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_15
struct ABP_UI_ConfigManagerBase_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_MenuPageLeft_K2Node_InputActionEvent_14
struct ABP_UI_ConfigManagerBase_C_InpActEvt_MenuPageLeft_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_MenuPageRight_K2Node_InputActionEvent_13
struct ABP_UI_ConfigManagerBase_C_InpActEvt_MenuPageRight_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_SearchRightButton_K2Node_InputActionEvent_12
struct ABP_UI_ConfigManagerBase_C_InpActEvt_SearchRightButton_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_SearchBottomButton_K2Node_InputActionEvent_11
struct ABP_UI_ConfigManagerBase_C_InpActEvt_SearchBottomButton_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_10
struct ABP_UI_ConfigManagerBase_C_InpActEvt_ResetCamera_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.ReceiveBeginPlay
struct ABP_UI_ConfigManagerBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.ReceiveEndPlay
struct ABP_UI_ConfigManagerBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.ChnageCloth
struct ABP_UI_ConfigManagerBase_C_ChnageCloth_Params
{
	bool                                               Apply;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.FinishFadeOut
struct ABP_UI_ConfigManagerBase_C_FinishFadeOut_Params
{
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.CloseDialog
struct ABP_UI_ConfigManagerBase_C_CloseDialog_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_1
struct ABP_UI_ConfigManagerBase_C_InpAxisEvt_MG_RightStickHorizontal_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33
struct ABP_UI_ConfigManagerBase_C_InpAxisEvt_MG_LeftStickVertical_K2Node_InputAxisEvent_33_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9
struct ABP_UI_ConfigManagerBase_C_InpAxisEvt_MG_LeftStickHorizontal_K2Node_InputAxisEvent_9_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManagerBase.BP_UI_ConfigManagerBase_C.ExecuteUbergraph_BP_UI_ConfigManagerBase
struct ABP_UI_ConfigManagerBase_C_ExecuteUbergraph_BP_UI_ConfigManagerBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
