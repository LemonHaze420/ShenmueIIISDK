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

// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.OverrideGachaPrice
struct ABP_MiniGameChoose_Gacha_C_OverrideGachaPrice_Params
{
};

// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.UserConstructionScript
struct ABP_MiniGameChoose_Gacha_C_UserConstructionScript_Params
{
};

// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.InpActEvt_MG_Right_K2Node_InputActionEvent_8
struct ABP_MiniGameChoose_Gacha_C_InpActEvt_MG_Right_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.InpActEvt_MG_Left_K2Node_InputActionEvent_7
struct ABP_MiniGameChoose_Gacha_C_InpActEvt_MG_Left_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.InpActEvt_MG_LeftStickLeft_K2Node_InputActionEvent_6
struct ABP_MiniGameChoose_Gacha_C_InpActEvt_MG_LeftStickLeft_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.InpActEvt_MG_LeftStickRight_K2Node_InputActionEvent_5
struct ABP_MiniGameChoose_Gacha_C_InpActEvt_MG_LeftStickRight_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.ReceiveBeginPlay
struct ABP_MiniGameChoose_Gacha_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.DecideDetectAction
struct ABP_MiniGameChoose_Gacha_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.ReceiveTick
struct ABP_MiniGameChoose_Gacha_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.ReceiveEndPlay
struct ABP_MiniGameChoose_Gacha_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameChoose_Gacha.BP_MiniGameChoose_Gacha_C.ExecuteUbergraph_BP_MiniGameChoose_Gacha
struct ABP_MiniGameChoose_Gacha_C_ExecuteUbergraph_BP_MiniGameChoose_Gacha_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
