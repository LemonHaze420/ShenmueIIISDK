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

// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.UpdateAnimationState
struct UBPC_QTESelectComponent_C_UpdateAnimationState_Params
{
};

// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.DebugQTEForceSuccessUpdateInternal
struct UBPC_QTESelectComponent_C_DebugQTEForceSuccessUpdateInternal_Params
{
};

// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.GetLengthBeforeCountInputLimitTime
struct UBPC_QTESelectComponent_C_GetLengthBeforeCountInputLimitTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.IsInputedOther
struct UBPC_QTESelectComponent_C_IsInputedOther_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.SetupQTE
struct UBPC_QTESelectComponent_C_SetupQTE_Params
{
	struct FName                                       InLeftAction;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InRightAction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InSuccessAction;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.PlayInputFailedAnimation
struct UBPC_QTESelectComponent_C_PlayInputFailedAnimation_Params
{
};

// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.PlayInputSuccessAnimation
struct UBPC_QTESelectComponent_C_PlayInputSuccessAnimation_Params
{
	bool                                               InRight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.IsPlayingInAnimation
struct UBPC_QTESelectComponent_C_IsPlayingInAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.PlayTimeUpFailedAnimation
struct UBPC_QTESelectComponent_C_PlayTimeUpFailedAnimation_Params
{
};

// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.PlayInAnimation
struct UBPC_QTESelectComponent_C_PlayInAnimation_Params
{
};

// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.SetTimeGaugeRate
struct UBPC_QTESelectComponent_C_SetTimeGaugeRate_Params
{
	float*                                             InGaugeRate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.ExecuteInputAction
struct UBPC_QTESelectComponent_C_ExecuteInputAction_Params
{
	struct FName*                                      InInputAction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.Reset
struct UBPC_QTESelectComponent_C_Reset_Params
{
};

// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.Finalize
struct UBPC_QTESelectComponent_C_Finalize_Params
{
};

// Function BPC_QTESelectComponent.BPC_QTESelectComponent_C.Initialize
struct UBPC_QTESelectComponent_C_Initialize_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
