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

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.GetPriority
struct ABP_BetMoneyManager_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.GetDetectAction
struct ABP_BetMoneyManager_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.GetPlayCount
struct ABP_BetMoneyManager_C_GetPlayCount_Params
{
	int                                                PlayCount;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.GetBetMoney
struct ABP_BetMoneyManager_C_GetBetMoney_Params
{
	int                                                BetMoney;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.UserConstructionScript
struct ABP_BetMoneyManager_C_UserConstructionScript_Params
{
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8
struct ABP_BetMoneyManager_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_7
struct ABP_BetMoneyManager_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_6
struct ABP_BetMoneyManager_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_5
struct ABP_BetMoneyManager_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ReceiveBeginPlay
struct ABP_BetMoneyManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ReceiveTick
struct ABP_BetMoneyManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
struct ABP_BetMoneyManager_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3
struct ABP_BetMoneyManager_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.DecideDetectAction
struct ABP_BetMoneyManager_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.EndBet
struct ABP_BetMoneyManager_C_EndBet_Params
{
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ExecuteUbergraph_BP_BetMoneyManager
struct ABP_BetMoneyManager_C_ExecuteUbergraph_BP_BetMoneyManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_PreDecideReturn__DelegateSignature
struct ABP_BetMoneyManager_C_ED_PreDecideReturn__DelegateSignature_Params
{
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_PreDecideBet__DelegateSignature
struct ABP_BetMoneyManager_C_ED_PreDecideBet__DelegateSignature_Params
{
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_PostDecideReturn__DelegateSignature
struct ABP_BetMoneyManager_C_ED_PostDecideReturn__DelegateSignature_Params
{
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_PostDecideBet__DelegateSignature
struct ABP_BetMoneyManager_C_ED_PostDecideBet__DelegateSignature_Params
{
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_DecideCancel__DelegateSignature
struct ABP_BetMoneyManager_C_ED_DecideCancel__DelegateSignature_Params
{
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_DecideMaxBet__DelegateSignature
struct ABP_BetMoneyManager_C_ED_DecideMaxBet__DelegateSignature_Params
{
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_DecideBetDown__DelegateSignature
struct ABP_BetMoneyManager_C_ED_DecideBetDown__DelegateSignature_Params
{
};

// Function BP_BetMoneyManager.BP_BetMoneyManager_C.ED_DecideBetUp__DelegateSignature
struct ABP_BetMoneyManager_C_ED_DecideBetUp__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
