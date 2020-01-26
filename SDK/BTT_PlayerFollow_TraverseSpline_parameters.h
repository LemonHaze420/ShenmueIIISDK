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

// Function BTT_PlayerFollow_TraverseSpline.BTT_PlayerFollow_TraverseSpline_C.Finish
struct UBTT_PlayerFollow_TraverseSpline_C_Finish_Params
{
	bool                                               Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayerFollow_TraverseSpline.BTT_PlayerFollow_TraverseSpline_C.IsPlayerInsideSpline
struct UBTT_PlayerFollow_TraverseSpline_C_IsPlayerInsideSpline_Params
{
	float                                              Buffer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BTT_PlayerFollow_TraverseSpline.BTT_PlayerFollow_TraverseSpline_C.ReceiveExecuteAI
struct UBTT_PlayerFollow_TraverseSpline_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayerFollow_TraverseSpline.BTT_PlayerFollow_TraverseSpline_C.ReceiveAbortAI
struct UBTT_PlayerFollow_TraverseSpline_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayerFollow_TraverseSpline.BTT_PlayerFollow_TraverseSpline_C.ReceiveTickAI
struct UBTT_PlayerFollow_TraverseSpline_C_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayerFollow_TraverseSpline.BTT_PlayerFollow_TraverseSpline_C.ExecuteUbergraph_BTT_PlayerFollow_TraverseSpline
struct UBTT_PlayerFollow_TraverseSpline_C_ExecuteUbergraph_BTT_PlayerFollow_TraverseSpline_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
