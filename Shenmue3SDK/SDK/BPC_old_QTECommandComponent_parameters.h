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

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.StopTimeCountSE
struct UBPC_old_QTECommandComponent_C_StopTimeCountSE_Params
{
};

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.PlayTimeCountSE
struct UBPC_old_QTECommandComponent_C_PlayTimeCountSE_Params
{
};

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.GetInAnimationLength
struct UBPC_old_QTECommandComponent_C_GetInAnimationLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.Update
struct UBPC_old_QTECommandComponent_C_Update_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.SetUseRealTime
struct UBPC_old_QTECommandComponent_C_SetUseRealTime_Params
{
	bool                                               UseRealTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.IsInQTE
struct UBPC_old_QTECommandComponent_C_IsInQTE_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.GetInputSuccessKey
struct UBPC_old_QTECommandComponent_C_GetInputSuccessKey_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                SuccessKey;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.InstructionStartFunction
struct UBPC_old_QTECommandComponent_C_InstructionStartFunction_Params
{
	TArray<struct FName>                               SuccessAction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              InInputLimitTime;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.ClearResult
struct UBPC_old_QTECommandComponent_C_ClearResult_Params
{
};

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.InputFunction
struct UBPC_old_QTECommandComponent_C_InputFunction_Params
{
	struct FKey                                        InKey;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.InputEndFunction
struct UBPC_old_QTECommandComponent_C_InputEndFunction_Params
{
};

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.InputStartFunction
struct UBPC_old_QTECommandComponent_C_InputStartFunction_Params
{
};

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.EndFunction
struct UBPC_old_QTECommandComponent_C_EndFunction_Params
{
};

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.Prepare
struct UBPC_old_QTECommandComponent_C_Prepare_Params
{
};

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.GetButtonImage
struct UBPC_old_QTECommandComponent_C_GetButtonImage_Params
{
	struct FName                                       InputName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture2D;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.ReceiveTick
struct UBPC_old_QTECommandComponent_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.ReceiveEndPlay
struct UBPC_old_QTECommandComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.ExecuteUbergraph_BPC_old_QTECommandComponent
struct UBPC_old_QTECommandComponent_C_ExecuteUbergraph_BPC_old_QTECommandComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.ButtonDown__DelegateSignature
struct UBPC_old_QTECommandComponent_C_ButtonDown__DelegateSignature_Params
{
	bool                                               Succeed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.End__DelegateSignature
struct UBPC_old_QTECommandComponent_C_End__DelegateSignature_Params
{
};

// Function BPC_old_QTECommandComponent.BPC_old_QTECommandComponent_C.Success__DelegateSignature
struct UBPC_old_QTECommandComponent_C_Success__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
