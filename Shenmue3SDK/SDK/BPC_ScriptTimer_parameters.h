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

// Function BPC_ScriptTimer.BPC_ScriptTimer_C.ConvertTime
struct UBPC_ScriptTimer_C_ConvertTime_Params
{
	float                                              Minutes;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_ScriptTimer.BPC_ScriptTimer_C.UpdateGlobalFlag
struct UBPC_ScriptTimer_C_UpdateGlobalFlag_Params
{
};

// Function BPC_ScriptTimer.BPC_ScriptTimer_C.ReceiveBeginPlay
struct UBPC_ScriptTimer_C_ReceiveBeginPlay_Params
{
};

// Function BPC_ScriptTimer.BPC_ScriptTimer_C.BindGameTimeManager
struct UBPC_ScriptTimer_C_BindGameTimeManager_Params
{
};

// Function BPC_ScriptTimer.BPC_ScriptTimer_C.UnbindGameTimeManager
struct UBPC_ScriptTimer_C_UnbindGameTimeManager_Params
{
};

// Function BPC_ScriptTimer.BPC_ScriptTimer_C.OnUpdateNextDay
struct UBPC_ScriptTimer_C_OnUpdateNextDay_Params
{
};

// Function BPC_ScriptTimer.BPC_ScriptTimer_C.OnUpdateGameTime
struct UBPC_ScriptTimer_C_OnUpdateGameTime_Params
{
	float                                              UpdateTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_ScriptTimer.BPC_ScriptTimer_C.StopTimer
struct UBPC_ScriptTimer_C_StopTimer_Params
{
	int                                                GlobalFlagIndex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_ScriptTimer.BPC_ScriptTimer_C.StartTimer
struct UBPC_ScriptTimer_C_StartTimer_Params
{
	int                                                GlobalFlagIndex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_ScriptTimer.BPC_ScriptTimer_C.ExecuteUbergraph_BPC_ScriptTimer
struct UBPC_ScriptTimer_C_ExecuteUbergraph_BPC_ScriptTimer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
