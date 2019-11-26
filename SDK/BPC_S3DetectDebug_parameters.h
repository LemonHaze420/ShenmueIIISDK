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

// Function BPC_S3DetectDebug.BPC_S3DetectDebug_C.PrintLog
struct UBPC_S3DetectDebug_C_PrintLog_Params
{
};

// Function BPC_S3DetectDebug.BPC_S3DetectDebug_C.ReceiveBeginPlay
struct UBPC_S3DetectDebug_C_ReceiveBeginPlay_Params
{
};

// Function BPC_S3DetectDebug.BPC_S3DetectDebug_C.ReceiveTick
struct UBPC_S3DetectDebug_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3DetectDebug.BPC_S3DetectDebug_C.ExecuteUbergraph_BPC_S3DetectDebug
struct UBPC_S3DetectDebug_C_ExecuteUbergraph_BPC_S3DetectDebug_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
