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

// Function BP_QTEComponent.BP_QTEComponent_C.StopTimeCountSE
struct UBP_QTEComponent_C_StopTimeCountSE_Params
{
};

// Function BP_QTEComponent.BP_QTEComponent_C.PlayTimeCountSE
struct UBP_QTEComponent_C_PlayTimeCountSE_Params
{
};

// Function BP_QTEComponent.BP_QTEComponent_C.UpdateTime
struct UBP_QTEComponent_C_UpdateTime_Params
{
	float                                              TickDeltaSeconds;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentDeltaSeconds;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QTEComponent.BP_QTEComponent_C.SetUseRealTime
struct UBP_QTEComponent_C_SetUseRealTime_Params
{
	bool                                               UseRealTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QTEComponent.BP_QTEComponent_C.ClearResult
struct UBP_QTEComponent_C_ClearResult_Params
{
};

// Function BP_QTEComponent.BP_QTEComponent_C.InputFunction
struct UBP_QTEComponent_C_InputFunction_Params
{
	struct FKey                                        InKey;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_QTEComponent.BP_QTEComponent_C.InputEndFunction
struct UBP_QTEComponent_C_InputEndFunction_Params
{
};

// Function BP_QTEComponent.BP_QTEComponent_C.InputStartFunction
struct UBP_QTEComponent_C_InputStartFunction_Params
{
	struct FName                                       SuccessAction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QTEComponent.BP_QTEComponent_C.EndFunction
struct UBP_QTEComponent_C_EndFunction_Params
{
};

// Function BP_QTEComponent.BP_QTEComponent_C.Prepare
struct UBP_QTEComponent_C_Prepare_Params
{
};

// Function BP_QTEComponent.BP_QTEComponent_C.GetButtonImage
struct UBP_QTEComponent_C_GetButtonImage_Params
{
	struct FName                                       InputName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture2D;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QTEComponent.BP_QTEComponent_C.PlaySE
struct UBP_QTEComponent_C_PlaySE_Params
{
};

// Function BP_QTEComponent.BP_QTEComponent_C.ReceiveTick
struct UBP_QTEComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QTEComponent.BP_QTEComponent_C.ReceiveEndPlay
struct UBP_QTEComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QTEComponent.BP_QTEComponent_C.ExecuteUbergraph_BP_QTEComponent
struct UBP_QTEComponent_C_ExecuteUbergraph_BP_QTEComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QTEComponent.BP_QTEComponent_C.ButtonDown__DelegateSignature
struct UBP_QTEComponent_C_ButtonDown__DelegateSignature_Params
{
	bool                                               Succeed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_QTEComponent.BP_QTEComponent_C.End__DelegateSignature
struct UBP_QTEComponent_C_End__DelegateSignature_Params
{
};

// Function BP_QTEComponent.BP_QTEComponent_C.Success__DelegateSignature
struct UBP_QTEComponent_C_Success__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
