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

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.UpdateAnimationState
struct UBPC_QTEBaseComponent_C_UpdateAnimationState_Params
{
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.DebugQTEForceSetResultSuccess
struct UBPC_QTEBaseComponent_C_DebugQTEForceSetResultSuccess_Params
{
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayStartForceFeedback
struct UBPC_QTEBaseComponent_C_PlayStartForceFeedback_Params
{
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetQTEForceFeedbackTag
struct UBPC_QTEBaseComponent_C_GetQTEForceFeedbackTag_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetQTEForceFeedbackTag
struct UBPC_QTEBaseComponent_C_SetQTEForceFeedbackTag_Params
{
	struct FName                                       InTag;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInputFailedForceFeedback
struct UBPC_QTEBaseComponent_C_PlayInputFailedForceFeedback_Params
{
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInputSuccessForceFeedback
struct UBPC_QTEBaseComponent_C_PlayInputSuccessForceFeedback_Params
{
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetCurrentInputTime
struct UBPC_QTEBaseComponent_C_GetCurrentInputTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.DebugQTEForceSuccessUpdateInternal
struct UBPC_QTEBaseComponent_C_DebugQTEForceSuccessUpdateInternal_Params
{
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.DebugQTEForceSuccessUpdate
struct UBPC_QTEBaseComponent_C_DebugQTEForceSuccessUpdate_Params
{
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.StartCountInputLimitTime
struct UBPC_QTEBaseComponent_C_StartCountInputLimitTime_Params
{
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.CanStartCountInputLimitTime
struct UBPC_QTEBaseComponent_C_CanStartCountInputLimitTime_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetLengthBeforeCountInputLimitTime
struct UBPC_QTEBaseComponent_C_GetLengthBeforeCountInputLimitTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.IsPlayingInAnimation
struct UBPC_QTEBaseComponent_C_IsPlayingInAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayTimeUpFailedAnimation
struct UBPC_QTEBaseComponent_C_PlayTimeUpFailedAnimation_Params
{
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInAnimation
struct UBPC_QTEBaseComponent_C_PlayInAnimation_Params
{
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.StopTimeCountSE
struct UBPC_QTEBaseComponent_C_StopTimeCountSE_Params
{
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayTimeCountSE
struct UBPC_QTEBaseComponent_C_PlayTimeCountSE_Params
{
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInputFailedSE
struct UBPC_QTEBaseComponent_C_PlayInputFailedSE_Params
{
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayInputSuccessSE
struct UBPC_QTEBaseComponent_C_PlayInputSuccessSE_Params
{
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.PlayStartSE
struct UBPC_QTEBaseComponent_C_PlayStartSE_Params
{
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetTimeGaugeRate
struct UBPC_QTEBaseComponent_C_SetTimeGaugeRate_Params
{
	float                                              InGaugeRate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetCurrentInputTimeRate
struct UBPC_QTEBaseComponent_C_GetCurrentInputTimeRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetInputLimitTime
struct UBPC_QTEBaseComponent_C_SetInputLimitTime_Params
{
	float                                              InLimitTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.ExecuteInputAction
struct UBPC_QTEBaseComponent_C_ExecuteInputAction_Params
{
	struct FName                                       InInputAction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.InputQTE
struct UBPC_QTEBaseComponent_C_InputQTE_Params
{
	struct FName                                       InInputAction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetExecuteTargetInputActions
struct UBPC_QTEBaseComponent_C_SetExecuteTargetInputActions_Params
{
	TArray<struct FName>                               NewInputActions;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.SetResult
struct UBPC_QTEBaseComponent_C_SetResult_Params
{
	bool                                               NewResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.GetResult
struct UBPC_QTEBaseComponent_C_GetResult_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.IsInQTE
struct UBPC_QTEBaseComponent_C_IsInQTE_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.IsQTEStarted
struct UBPC_QTEBaseComponent_C_IsQTEStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.Update
struct UBPC_QTEBaseComponent_C_Update_Params
{
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.Reset
struct UBPC_QTEBaseComponent_C_Reset_Params
{
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.FinishQTE
struct UBPC_QTEBaseComponent_C_FinishQTE_Params
{
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.StartQTE
struct UBPC_QTEBaseComponent_C_StartQTE_Params
{
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.Finalize
struct UBPC_QTEBaseComponent_C_Finalize_Params
{
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.Initialize
struct UBPC_QTEBaseComponent_C_Initialize_Params
{
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.ReceiveEndPlay
struct UBPC_QTEBaseComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_QTEBaseComponent.BPC_QTEBaseComponent_C.ExecuteUbergraph_BPC_QTEBaseComponent
struct UBPC_QTEBaseComponent_C_ExecuteUbergraph_BPC_QTEBaseComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
