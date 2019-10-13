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

// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.MoveCamera
struct ABP_MiniGameChoose_Otoshidama_C_MoveCamera_Params
{
	class USceneComponent*                             Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.UserConstructionScript
struct ABP_MiniGameChoose_Otoshidama_C_UserConstructionScript_Params
{
};

// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_Right_K2Node_InputActionEvent_20
struct ABP_MiniGameChoose_Otoshidama_C_InpActEvt_MG_Right_K2Node_InputActionEvent_20_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_Left_K2Node_InputActionEvent_19
struct ABP_MiniGameChoose_Otoshidama_C_InpActEvt_MG_Left_K2Node_InputActionEvent_19_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_LeftStickLeft_K2Node_InputActionEvent_18
struct ABP_MiniGameChoose_Otoshidama_C_InpActEvt_MG_LeftStickLeft_K2Node_InputActionEvent_18_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_LeftStickRight_K2Node_InputActionEvent_17
struct ABP_MiniGameChoose_Otoshidama_C_InpActEvt_MG_LeftStickRight_K2Node_InputActionEvent_17_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_Top_K2Node_InputActionEvent_16
struct ABP_MiniGameChoose_Otoshidama_C_InpActEvt_MG_Top_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_Top_K2Node_InputActionEvent_15
struct ABP_MiniGameChoose_Otoshidama_C_InpActEvt_MG_Top_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_14
struct ABP_MiniGameChoose_Otoshidama_C_InpActEvt_MG_Bottom_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_Bottom_K2Node_InputActionEvent_13
struct ABP_MiniGameChoose_Otoshidama_C_InpActEvt_MG_Bottom_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_12
struct ABP_MiniGameChoose_Otoshidama_C_InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_11
struct ABP_MiniGameChoose_Otoshidama_C_InpActEvt_MG_ButtonLeft_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.Input Update
struct ABP_MiniGameChoose_Otoshidama_C_Input_Update_Params
{
};

// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_2
struct ABP_MiniGameChoose_Otoshidama_C_InpAxisEvt_MG_LeftTrigger_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.ReceiveTick
struct ABP_MiniGameChoose_Otoshidama_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.ReceiveBeginPlay
struct ABP_MiniGameChoose_Otoshidama_C_ReceiveBeginPlay_Params
{
};

// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.DecideDetectAction
struct ABP_MiniGameChoose_Otoshidama_C_DecideDetectAction_Params
{
	ES3ActionIconType*                                 Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.InitializeMoneyInfo
struct ABP_MiniGameChoose_Otoshidama_C_InitializeMoneyInfo_Params
{
};

// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.EndFadeOut
struct ABP_MiniGameChoose_Otoshidama_C_EndFadeOut_Params
{
};

// Function BP_MiniGameChoose_Otoshidama.BP_MiniGameChoose_Otoshidama_C.ExecuteUbergraph_BP_MiniGameChoose_Otoshidama
struct ABP_MiniGameChoose_Otoshidama_C_ExecuteUbergraph_BP_MiniGameChoose_Otoshidama_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
