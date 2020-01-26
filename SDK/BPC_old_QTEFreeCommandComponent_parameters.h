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

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.StopTimeCountSE
struct UBPC_old_QTEFreeCommandComponent_C_StopTimeCountSE_Params
{
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.PlayTimeCountSE
struct UBPC_old_QTEFreeCommandComponent_C_PlayTimeCountSE_Params
{
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetMaxOutAnimationLength
struct UBPC_old_QTEFreeCommandComponent_C_GetMaxOutAnimationLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetInAnimationLength
struct UBPC_old_QTEFreeCommandComponent_C_GetInAnimationLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.InputEndSuccess
struct UBPC_old_QTEFreeCommandComponent_C_InputEndSuccess_Params
{
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.SetInputInterval
struct UBPC_old_QTEFreeCommandComponent_C_SetInputInterval_Params
{
	float                                              Interval;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.PlayOutOk
struct UBPC_old_QTEFreeCommandComponent_C_PlayOutOk_Params
{
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetActionNameFromKey
struct UBPC_old_QTEFreeCommandComponent_C_GetActionNameFromKey_Params
{
	struct FKey                                        InKey;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       ActionName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.UpdateInputTimer
struct UBPC_old_QTEFreeCommandComponent_C_UpdateInputTimer_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.SetUseRealTime
struct UBPC_old_QTEFreeCommandComponent_C_SetUseRealTime_Params
{
	bool                                               UseRealTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.CheckCommandSucceable
struct UBPC_old_QTEFreeCommandComponent_C_CheckCommandSucceable_Params
{
	struct FST_old_BattleQTEExperimentFreeCommand      FreeCommand;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Successable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.CheckCurrentInput
struct UBPC_old_QTEFreeCommandComponent_C_CheckCurrentInput_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetResultCommand
struct UBPC_old_QTEFreeCommandComponent_C_GetResultCommand_Params
{
	struct FST_old_BattleQTEExperimentFreeCommand      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.IsInQTE
struct UBPC_old_QTEFreeCommandComponent_C_IsInQTE_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetInputSuccessKey
struct UBPC_old_QTEFreeCommandComponent_C_GetInputSuccessKey_Params
{
	struct FName                                       Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                SuccessKey;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.ClearResult
struct UBPC_old_QTEFreeCommandComponent_C_ClearResult_Params
{
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.InputFunction
struct UBPC_old_QTEFreeCommandComponent_C_InputFunction_Params
{
	struct FKey                                        InKey;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.InputEndFunction
struct UBPC_old_QTEFreeCommandComponent_C_InputEndFunction_Params
{
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.InputStartFunction
struct UBPC_old_QTEFreeCommandComponent_C_InputStartFunction_Params
{
	TArray<struct FST_old_BattleQTEExperimentFreeCommand> CommandList;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              InInputLimitTime;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.EndFunction
struct UBPC_old_QTEFreeCommandComponent_C_EndFunction_Params
{
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.Prepare
struct UBPC_old_QTEFreeCommandComponent_C_Prepare_Params
{
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.GetButtonImage
struct UBPC_old_QTEFreeCommandComponent_C_GetButtonImage_Params
{
	struct FName                                       InputName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture2D;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.ReceiveTick
struct UBPC_old_QTEFreeCommandComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.ReceiveEndPlay
struct UBPC_old_QTEFreeCommandComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.ExecuteUbergraph_BPC_old_QTEFreeCommandComponent
struct UBPC_old_QTEFreeCommandComponent_C_ExecuteUbergraph_BPC_old_QTEFreeCommandComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.ButtonDown__DelegateSignature
struct UBPC_old_QTEFreeCommandComponent_C_ButtonDown__DelegateSignature_Params
{
	bool                                               Succeed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.End__DelegateSignature
struct UBPC_old_QTEFreeCommandComponent_C_End__DelegateSignature_Params
{
};

// Function BPC_old_QTEFreeCommandComponent.BPC_old_QTEFreeCommandComponent_C.Success__DelegateSignature
struct UBPC_old_QTEFreeCommandComponent_C_Success__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
