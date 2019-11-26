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

// Function BP_SkipController.BP_SkipController_C.GetCurentRate
struct ABP_SkipController_C_GetCurentRate_Params
{
	float                                              Rate;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkipController.BP_SkipController_C.SetGenericCall
struct ABP_SkipController_C_SetGenericCall_Params
{
	int                                                z_order;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkipController.BP_SkipController_C.CheckVisible
struct ABP_SkipController_C_CheckVisible_Params
{
	ES3PlayerBehavior                                  ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkipController.BP_SkipController_C.DisableSkipScene
struct ABP_SkipController_C_DisableSkipScene_Params
{
};

// Function BP_SkipController.BP_SkipController_C.EnableSkipScene
struct ABP_SkipController_C_EnableSkipScene_Params
{
};

// Function BP_SkipController.BP_SkipController_C.UserConstructionScript
struct ABP_SkipController_C_UserConstructionScript_Params
{
};

// Function BP_SkipController.BP_SkipController_C.InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_4
struct ABP_SkipController_C_InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SkipController.BP_SkipController_C.InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_3
struct ABP_SkipController_C_InpActEvt_MG_ButtonRightNoChange_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SkipController.BP_SkipController_C.ReceiveBeginPlay
struct ABP_SkipController_C_ReceiveBeginPlay_Params
{
};

// Function BP_SkipController.BP_SkipController_C.ReceiveEndPlay
struct ABP_SkipController_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkipController.BP_SkipController_C.ChangePlayerBehavior
struct ABP_SkipController_C_ChangePlayerBehavior_Params
{
	ES3PlayerBehavior                                  NewId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3PlayerBehavior                                  OldId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkipController.BP_SkipController_C.ReceiveTick
struct ABP_SkipController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkipController.BP_SkipController_C.ExecuteUbergraph_BP_SkipController
struct ABP_SkipController_C_ExecuteUbergraph_BP_SkipController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SkipController.BP_SkipController_C.OnSkip__DelegateSignature
struct ABP_SkipController_C_OnSkip__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
