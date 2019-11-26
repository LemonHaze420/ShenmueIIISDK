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

// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.UpdateClosestSplinePoint
struct UBTT_PlayerFollow_MoveToSpline_C_UpdateClosestSplinePoint_Params
{
};

// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.UpdateClosestSplineDistance
struct UBTT_PlayerFollow_MoveToSpline_C_UpdateClosestSplineDistance_Params
{
};

// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.StopPathing
struct UBTT_PlayerFollow_MoveToSpline_C_StopPathing_Params
{
};

// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.Finish
struct UBTT_PlayerFollow_MoveToSpline_C_Finish_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.IsPlayerInSpline
struct UBTT_PlayerFollow_MoveToSpline_C_IsPlayerInSpline_Params
{
	float                                              Buffer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.OnFail_227D29014046C8BB113903BF06DFD651
struct UBTT_PlayerFollow_MoveToSpline_C_OnFail_227D29014046C8BB113903BF06DFD651_Params
{
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.OnSuccess_227D29014046C8BB113903BF06DFD651
struct UBTT_PlayerFollow_MoveToSpline_C_OnSuccess_227D29014046C8BB113903BF06DFD651_Params
{
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.ReceiveAbortAI
struct UBTT_PlayerFollow_MoveToSpline_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.ReceiveTickAI
struct UBTT_PlayerFollow_MoveToSpline_C_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.WaitAndRepath
struct UBTT_PlayerFollow_MoveToSpline_C_WaitAndRepath_Params
{
};

// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.ReceiveExecuteAI
struct UBTT_PlayerFollow_MoveToSpline_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_PlayerFollow_MoveToSpline.BTT_PlayerFollow_MoveToSpline_C.ExecuteUbergraph_BTT_PlayerFollow_MoveToSpline
struct UBTT_PlayerFollow_MoveToSpline_C_ExecuteUbergraph_BTT_PlayerFollow_MoveToSpline_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
