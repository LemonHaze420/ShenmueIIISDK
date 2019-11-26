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

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.UpdateAnimationState
struct UBPC_QTETimingComponent_C_UpdateAnimationState_Params
{
};

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.FinishQTE
struct UBPC_QTETimingComponent_C_FinishQTE_Params
{
};

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.AdjustActionAnimationTime
struct UBPC_QTETimingComponent_C_AdjustActionAnimationTime_Params
{
};

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.PlayActionAnimation
struct UBPC_QTETimingComponent_C_PlayActionAnimation_Params
{
};

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.StartCountInputLimitTime
struct UBPC_QTETimingComponent_C_StartCountInputLimitTime_Params
{
};

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.Update
struct UBPC_QTETimingComponent_C_Update_Params
{
};

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.GetActionAnimationLength
struct UBPC_QTETimingComponent_C_GetActionAnimationLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.SetSuccessInputLimitTimeLength
struct UBPC_QTETimingComponent_C_SetSuccessInputLimitTimeLength_Params
{
	float                                              InLength;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.DebugQTEForceSuccessUpdateInternal
struct UBPC_QTETimingComponent_C_DebugQTEForceSuccessUpdateInternal_Params
{
};

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.GetLengthBeforeCountInputLimitTime
struct UBPC_QTETimingComponent_C_GetLengthBeforeCountInputLimitTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.IsEarlyFailed
struct UBPC_QTETimingComponent_C_IsEarlyFailed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.SetupQTE
struct UBPC_QTETimingComponent_C_SetupQTE_Params
{
	struct FName                                       InSuccessAction;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InJustTimingStartRate;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InJustTimingEndRate;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.PlayInputFailedAnimation
struct UBPC_QTETimingComponent_C_PlayInputFailedAnimation_Params
{
};

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.PlayInputSuccessAnimation
struct UBPC_QTETimingComponent_C_PlayInputSuccessAnimation_Params
{
};

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.IsPlayingInAnimation
struct UBPC_QTETimingComponent_C_IsPlayingInAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.PlayTimeUpFailedAnimation
struct UBPC_QTETimingComponent_C_PlayTimeUpFailedAnimation_Params
{
};

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.PlayInAnimation
struct UBPC_QTETimingComponent_C_PlayInAnimation_Params
{
};

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.SetTimeGaugeRate
struct UBPC_QTETimingComponent_C_SetTimeGaugeRate_Params
{
	float                                              InGaugeRate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.ExecuteInputAction
struct UBPC_QTETimingComponent_C_ExecuteInputAction_Params
{
	struct FName                                       InInputAction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.Reset
struct UBPC_QTETimingComponent_C_Reset_Params
{
};

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.Finalize
struct UBPC_QTETimingComponent_C_Finalize_Params
{
};

// Function BPC_QTETimingComponent.BPC_QTETimingComponent_C.Initialize
struct UBPC_QTETimingComponent_C_Initialize_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
