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

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.GetPriority
struct ABP_S3BetMoneyManager_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.GetDetectAction
struct ABP_S3BetMoneyManager_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.CalcPrice
struct ABP_S3BetMoneyManager_C_CalcPrice_Params
{
	int                                                Price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.PressButton
struct ABP_S3BetMoneyManager_C_PressButton_Params
{
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.UpdCurrentNum
struct ABP_S3BetMoneyManager_C_UpdCurrentNum_Params
{
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.AllDestroy
struct ABP_S3BetMoneyManager_C_AllDestroy_Params
{
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.ReturnStatus
struct ABP_S3BetMoneyManager_C_ReturnStatus_Params
{
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.ChangeStatus
struct ABP_S3BetMoneyManager_C_ChangeStatus_Params
{
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.UserConstructionScript
struct ABP_S3BetMoneyManager_C_UserConstructionScript_Params
{
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16
struct ABP_S3BetMoneyManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15
struct ABP_S3BetMoneyManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_14
struct ABP_S3BetMoneyManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_13
struct ABP_S3BetMoneyManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_12
struct ABP_S3BetMoneyManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_11
struct ABP_S3BetMoneyManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_10
struct ABP_S3BetMoneyManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_9
struct ABP_S3BetMoneyManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.ReceiveBeginPlay
struct ABP_S3BetMoneyManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.ReceiveTick
struct ABP_S3BetMoneyManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.DecideDetectAction
struct ABP_S3BetMoneyManager_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.PushAnimFinish
struct ABP_S3BetMoneyManager_C_PushAnimFinish_Params
{
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.Dialog_Cancel
struct ABP_S3BetMoneyManager_C_Dialog_Cancel_Params
{
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.Dialog_Decide
struct ABP_S3BetMoneyManager_C_Dialog_Decide_Params
{
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.o
struct ABP_S3BetMoneyManager_C_o_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.ExecuteUbergraph_BP_S3BetMoneyManager
struct ABP_S3BetMoneyManager_C_ExecuteUbergraph_BP_S3BetMoneyManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.buyEnd__DelegateSignature
struct ABP_S3BetMoneyManager_C_buyEnd__DelegateSignature_Params
{
};

// Function BP_S3BetMoneyManager.BP_S3BetMoneyManager_C.noBuyEnd__DelegateSignature
struct ABP_S3BetMoneyManager_C_noBuyEnd__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
