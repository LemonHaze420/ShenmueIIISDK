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

// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.GetDetectAction
struct ABP_CJ_KSmodlue_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.GetPriority
struct ABP_CJ_KSmodlue_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.SetForcedCancel
struct ABP_CJ_KSmodlue_C_SetForcedCancel_Params
{
};

// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.CheckGameTime
struct ABP_CJ_KSmodlue_C_CheckGameTime_Params
{
	bool                                               TimeOver;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.DetectEnable_Cancel
struct ABP_CJ_KSmodlue_C_DetectEnable_Cancel_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.MakeCurrentText
struct ABP_CJ_KSmodlue_C_MakeCurrentText_Params
{
};

// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.UserConstructionScript
struct ABP_CJ_KSmodlue_C_UserConstructionScript_Params
{
};

// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.InpActEvt_Interruption_K2Node_InputActionEvent_2
struct ABP_CJ_KSmodlue_C_InpActEvt_Interruption_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.ReceiveBeginPlay
struct ABP_CJ_KSmodlue_C_ReceiveBeginPlay_Params
{
};

// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.ReceiveTick
struct ABP_CJ_KSmodlue_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.KsSelEnd
struct ABP_CJ_KSmodlue_C_KsSelEnd_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.DecideDetectAction
struct ABP_CJ_KSmodlue_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.ForcedCancel
struct ABP_CJ_KSmodlue_C_ForcedCancel_Params
{
};

// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.ExecuteUbergraph_BP_CJ_KSmodlue
struct ABP_CJ_KSmodlue_C_ExecuteUbergraph_BP_CJ_KSmodlue_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.CancelNotification__DelegateSignature
struct ABP_CJ_KSmodlue_C_CancelNotification__DelegateSignature_Params
{
};

// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.TimeOverNotification__DelegateSignature
struct ABP_CJ_KSmodlue_C_TimeOverNotification__DelegateSignature_Params
{
};

// Function BP_CJ_KSmodlue.BP_CJ_KSmodlue_C.SelectEnd__DelegateSignature
struct ABP_CJ_KSmodlue_C_SelectEnd__DelegateSignature_Params
{
	struct FName                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
