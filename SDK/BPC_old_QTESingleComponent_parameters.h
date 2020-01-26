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

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.StopTimeCountSE
struct UBPC_old_QTESingleComponent_C_StopTimeCountSE_Params
{
};

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.PlayTimeCountSE
struct UBPC_old_QTESingleComponent_C_PlayTimeCountSE_Params
{
};

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.UpdateAnimationState
struct UBPC_old_QTESingleComponent_C_UpdateAnimationState_Params
{
};

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.IsInQTE
struct UBPC_old_QTESingleComponent_C_IsInQTE_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.GetInAnimationLength
struct UBPC_old_QTESingleComponent_C_GetInAnimationLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.IsPlayingIn
struct UBPC_old_QTESingleComponent_C_IsPlayingIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.SetTimeGaugeRate
struct UBPC_old_QTESingleComponent_C_SetTimeGaugeRate_Params
{
	float                                              Rate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.UpdateTime
struct UBPC_old_QTESingleComponent_C_UpdateTime_Params
{
	float                                              TickDeltaSeconds;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentDeltaSeconds;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.SetUseRealTime
struct UBPC_old_QTESingleComponent_C_SetUseRealTime_Params
{
	bool                                               UseRealTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.ClearResult
struct UBPC_old_QTESingleComponent_C_ClearResult_Params
{
};

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.InputFunction
struct UBPC_old_QTESingleComponent_C_InputFunction_Params
{
	struct FKey                                        InKey;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.InputEndFunction
struct UBPC_old_QTESingleComponent_C_InputEndFunction_Params
{
};

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.InputStartFunction
struct UBPC_old_QTESingleComponent_C_InputStartFunction_Params
{
	struct FName                                       SuccessAction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.EndFunction
struct UBPC_old_QTESingleComponent_C_EndFunction_Params
{
};

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.Prepare
struct UBPC_old_QTESingleComponent_C_Prepare_Params
{
};

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.GetButtonImage
struct UBPC_old_QTESingleComponent_C_GetButtonImage_Params
{
	struct FName                                       InputName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture2D;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.ReceiveTick
struct UBPC_old_QTESingleComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.ReceiveEndPlay
struct UBPC_old_QTESingleComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.ExecuteUbergraph_BPC_old_QTESingleComponent
struct UBPC_old_QTESingleComponent_C_ExecuteUbergraph_BPC_old_QTESingleComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.ButtonDown__DelegateSignature
struct UBPC_old_QTESingleComponent_C_ButtonDown__DelegateSignature_Params
{
	bool                                               Succeed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.End__DelegateSignature
struct UBPC_old_QTESingleComponent_C_End__DelegateSignature_Params
{
};

// Function BPC_old_QTESingleComponent.BPC_old_QTESingleComponent_C.Success__DelegateSignature
struct UBPC_old_QTESingleComponent_C_Success__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
