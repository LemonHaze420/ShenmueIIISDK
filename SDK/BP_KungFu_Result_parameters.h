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

// Function BP_KungFu_Result.BP_KungFu_Result_C.ConstructWidget
struct ABP_KungFu_Result_C_ConstructWidget_Params
{
};

// Function BP_KungFu_Result.BP_KungFu_Result_C.UserConstructionScript
struct ABP_KungFu_Result_C_UserConstructionScript_Params
{
};

// Function BP_KungFu_Result.BP_KungFu_Result_C.InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2
struct ABP_KungFu_Result_C_InpActEvt_MG_ButtonRight_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_KungFu_Result.BP_KungFu_Result_C.ReceiveEndPlay
struct ABP_KungFu_Result_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KungFu_Result.BP_KungFu_Result_C.OnWidgetAnimationFinished
struct ABP_KungFu_Result_C_OnWidgetAnimationFinished_Params
{
};

// Function BP_KungFu_Result.BP_KungFu_Result_C.StartClose
struct ABP_KungFu_Result_C_StartClose_Params
{
};

// Function BP_KungFu_Result.BP_KungFu_Result_C.ReceiveBeginPlay
struct ABP_KungFu_Result_C_ReceiveBeginPlay_Params
{
};

// Function BP_KungFu_Result.BP_KungFu_Result_C.StartInputWait
struct ABP_KungFu_Result_C_StartInputWait_Params
{
};

// Function BP_KungFu_Result.BP_KungFu_Result_C.ExecuteUbergraph_BP_KungFu_Result
struct ABP_KungFu_Result_C_ExecuteUbergraph_BP_KungFu_Result_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KungFu_Result.BP_KungFu_Result_C.OnClose__DelegateSignature
struct ABP_KungFu_Result_C_OnClose__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
