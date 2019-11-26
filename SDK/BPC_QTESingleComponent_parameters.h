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

// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.UpdateAnimationState
struct UBPC_QTESingleComponent_C_UpdateAnimationState_Params
{
};

// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.DebugQTEForceSuccessUpdateInternal
struct UBPC_QTESingleComponent_C_DebugQTEForceSuccessUpdateInternal_Params
{
};

// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.GetLengthBeforeCountInputLimitTime
struct UBPC_QTESingleComponent_C_GetLengthBeforeCountInputLimitTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.SetupQTE
struct UBPC_QTESingleComponent_C_SetupQTE_Params
{
	struct FName                                       InSuccessAction;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.PlayInputFailedAnimation
struct UBPC_QTESingleComponent_C_PlayInputFailedAnimation_Params
{
};

// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.PlayInputSuccessAnimation
struct UBPC_QTESingleComponent_C_PlayInputSuccessAnimation_Params
{
};

// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.IsPlayingInAnimation
struct UBPC_QTESingleComponent_C_IsPlayingInAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.PlayTimeUpFailedAnimation
struct UBPC_QTESingleComponent_C_PlayTimeUpFailedAnimation_Params
{
};

// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.PlayInAnimation
struct UBPC_QTESingleComponent_C_PlayInAnimation_Params
{
};

// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.SetTimeGaugeRate
struct UBPC_QTESingleComponent_C_SetTimeGaugeRate_Params
{
	float                                              InGaugeRate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.ExecuteInputAction
struct UBPC_QTESingleComponent_C_ExecuteInputAction_Params
{
	struct FName                                       InInputAction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.Finalize
struct UBPC_QTESingleComponent_C_Finalize_Params
{
};

// Function BPC_QTESingleComponent.BPC_QTESingleComponent_C.Initialize
struct UBPC_QTESingleComponent_C_Initialize_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
