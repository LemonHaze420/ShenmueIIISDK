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

// Function BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C.ReceiveBeginPlay
struct UBPC_ScriptTimeOverChecker_C_ReceiveBeginPlay_Params
{
};

// Function BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C.StopTimeOverCheck
struct UBPC_ScriptTimeOverChecker_C_StopTimeOverCheck_Params
{
};

// Function BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C.StartTimeOverCheck
struct UBPC_ScriptTimeOverChecker_C_StartTimeOverCheck_Params
{
	float                                              GameStopTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C.ReceiveTick
struct UBPC_ScriptTimeOverChecker_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C.OnEndTalk
struct UBPC_ScriptTimeOverChecker_C_OnEndTalk_Params
{
};

// Function BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C.ExecuteUbergraph_BPC_ScriptTimeOverChecker
struct UBPC_ScriptTimeOverChecker_C_ExecuteUbergraph_BPC_ScriptTimeOverChecker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_ScriptTimeOverChecker.BPC_ScriptTimeOverChecker_C.OnGameTimeOverDispatcher__DelegateSignature
struct UBPC_ScriptTimeOverChecker_C_OnGameTimeOverDispatcher__DelegateSignature_Params
{
	float                                              GameStopTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
