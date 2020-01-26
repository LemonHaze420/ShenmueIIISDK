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

// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.UpdateAnimationState
struct UBPC_QTESimonComponent_C_UpdateAnimationState_Params
{
};

// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayStartForceFeedback
struct UBPC_QTESimonComponent_C_PlayStartForceFeedback_Params
{
};

// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.DebugQTEForceSuccessUpdateInternal
struct UBPC_QTESimonComponent_C_DebugQTEForceSuccessUpdateInternal_Params
{
};

// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.CanStartCountInputLimitTime
struct UBPC_QTESimonComponent_C_CanStartCountInputLimitTime_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.GetLengthBeforeCountInputLimitTime
struct UBPC_QTESimonComponent_C_GetLengthBeforeCountInputLimitTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.GetCurrentSuccessAction
struct UBPC_QTESimonComponent_C_GetCurrentSuccessAction_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayInputFailedAnimation
struct UBPC_QTESimonComponent_C_PlayInputFailedAnimation_Params
{
};

// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayInputSuccessAnimation
struct UBPC_QTESimonComponent_C_PlayInputSuccessAnimation_Params
{
};

// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.SetupQTE
struct UBPC_QTESimonComponent_C_SetupQTE_Params
{
	TArray<struct FName>                               InInputActions;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.IsPlayingInAnimation
struct UBPC_QTESimonComponent_C_IsPlayingInAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayTimeUpFailedAnimation
struct UBPC_QTESimonComponent_C_PlayTimeUpFailedAnimation_Params
{
};

// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.PlayInAnimation
struct UBPC_QTESimonComponent_C_PlayInAnimation_Params
{
};

// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.SetTimeGaugeRate
struct UBPC_QTESimonComponent_C_SetTimeGaugeRate_Params
{
	float                                              InGaugeRate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.ExecuteInputAction
struct UBPC_QTESimonComponent_C_ExecuteInputAction_Params
{
	struct FName                                       InInputAction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.Reset
struct UBPC_QTESimonComponent_C_Reset_Params
{
};

// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.Finalize
struct UBPC_QTESimonComponent_C_Finalize_Params
{
};

// Function BPC_QTESimonComponent.BPC_QTESimonComponent_C.Initialize
struct UBPC_QTESimonComponent_C_Initialize_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
