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

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.GetPriority
struct ABP_UI_ConfigManager_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.GetDetectAction
struct ABP_UI_ConfigManager_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.CanDecideInput
struct ABP_UI_ConfigManager_C_CanDecideInput_Params
{
	bool                                               CAN;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.CancelPasswordWidget
struct ABP_UI_ConfigManager_C_CancelPasswordWidget_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.CheckFocusConfig
struct ABP_UI_ConfigManager_C_CheckFocusConfig_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.CanInput
struct ABP_UI_ConfigManager_C_CanInput_Params
{
	bool                                               CAN;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.UserConstructionScript
struct ABP_UI_ConfigManager_C_UserConstructionScript_Params
{
};

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.DecideDetectAction
struct ABP_UI_ConfigManager_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.CreateDressModeWidget
struct ABP_UI_ConfigManager_C_CreateDressModeWidget_Params
{
};

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.CreatePasswordWidget
struct ABP_UI_ConfigManager_C_CreatePasswordWidget_Params
{
};

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.FinishDressMode
struct ABP_UI_ConfigManager_C_FinishDressMode_Params
{
	bool                                               Apply;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.CancelDressWidget
struct ABP_UI_ConfigManager_C_CancelDressWidget_Params
{
};

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.PushRight
struct ABP_UI_ConfigManager_C_PushRight_Params
{
};

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.PushLeft
struct ABP_UI_ConfigManager_C_PushLeft_Params
{
};

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.FinishFadeIn
struct ABP_UI_ConfigManager_C_FinishFadeIn_Params
{
};

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.PushUp
struct ABP_UI_ConfigManager_C_PushUp_Params
{
};

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.PushDown
struct ABP_UI_ConfigManager_C_PushDown_Params
{
};

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.PushDressDecide
struct ABP_UI_ConfigManager_C_PushDressDecide_Params
{
};

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.PushCancelButton
struct ABP_UI_ConfigManager_C_PushCancelButton_Params
{
};

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.LeanRightStick
struct ABP_UI_ConfigManager_C_LeanRightStick_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.PushRightStick
struct ABP_UI_ConfigManager_C_PushRightStick_Params
{
};

// Function BP_UI_ConfigManager.BP_UI_ConfigManager_C.ExecuteUbergraph_BP_UI_ConfigManager
struct ABP_UI_ConfigManager_C_ExecuteUbergraph_BP_UI_ConfigManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
