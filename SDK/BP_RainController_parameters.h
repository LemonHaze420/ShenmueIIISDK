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

// Function BP_RainController.BP_RainController_C.ToggleDebugDisplay
struct ABP_RainController_C_ToggleDebugDisplay_Params
{
};

// Function BP_RainController.BP_RainController_C.GetMaterialParams
struct ABP_RainController_C_GetMaterialParams_Params
{
	struct FS3RainParam                                RainParam;                                                // (Parm, OutParm)
};

// Function BP_RainController.BP_RainController_C.ResetMaterialParams
struct ABP_RainController_C_ResetMaterialParams_Params
{
};

// Function BP_RainController.BP_RainController_C.SetMaterialParams
struct ABP_RainController_C_SetMaterialParams_Params
{
	float                                              Strength1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strength2;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strength3;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OpacityMultiplier;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RainController.BP_RainController_C.UserConstructionScript
struct ABP_RainController_C_UserConstructionScript_Params
{
};

// Function BP_RainController.BP_RainController_C.InpActEvt_Ctrl_R_K2Node_InputKeyEvent_2
struct ABP_RainController_C_InpActEvt_Ctrl_R_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_RainController.BP_RainController_C.ReceiveBeginPlay
struct ABP_RainController_C_ReceiveBeginPlay_Params
{
};

// Function BP_RainController.BP_RainController_C.ReceiveTick
struct ABP_RainController_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RainController.BP_RainController_C.ToggleDisplay
struct ABP_RainController_C_ToggleDisplay_Params
{
};

// Function BP_RainController.BP_RainController_C.ExecuteUbergraph_BP_RainController
struct ABP_RainController_C_ExecuteUbergraph_BP_RainController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
