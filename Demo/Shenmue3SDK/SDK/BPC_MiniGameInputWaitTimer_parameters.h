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

// Function BPC_MiniGameInputWaitTimer.BPC_MiniGameInputWaitTimer_C.End
struct UBPC_MiniGameInputWaitTimer_C_End_Params
{
};

// Function BPC_MiniGameInputWaitTimer.BPC_MiniGameInputWaitTimer_C.Start
struct UBPC_MiniGameInputWaitTimer_C_Start_Params
{
};

// Function BPC_MiniGameInputWaitTimer.BPC_MiniGameInputWaitTimer_C.CheckLimitTime
struct UBPC_MiniGameInputWaitTimer_C_CheckLimitTime_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_MiniGameInputWaitTimer.BPC_MiniGameInputWaitTimer_C.SetLimitTime
struct UBPC_MiniGameInputWaitTimer_C_SetLimitTime_Params
{
	float                                              limit_time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameInputWaitTimer.BPC_MiniGameInputWaitTimer_C.ReceiveBeginPlay
struct UBPC_MiniGameInputWaitTimer_C_ReceiveBeginPlay_Params
{
};

// Function BPC_MiniGameInputWaitTimer.BPC_MiniGameInputWaitTimer_C.ReceiveTick
struct UBPC_MiniGameInputWaitTimer_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameInputWaitTimer.BPC_MiniGameInputWaitTimer_C.ExecuteUbergraph_BPC_MiniGameInputWaitTimer
struct UBPC_MiniGameInputWaitTimer_C_ExecuteUbergraph_BPC_MiniGameInputWaitTimer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
