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

// Function BPC_S3GameInstanceDebug.BPC_S3GameInstanceDebug_C.ReceiveTick
struct UBPC_S3GameInstanceDebug_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_S3GameInstanceDebug.BPC_S3GameInstanceDebug_C.ReceiveBeginPlay
struct UBPC_S3GameInstanceDebug_C_ReceiveBeginPlay_Params
{
};

// Function BPC_S3GameInstanceDebug.BPC_S3GameInstanceDebug_C.ExecuteUbergraph_BPC_S3GameInstanceDebug
struct UBPC_S3GameInstanceDebug_C_ExecuteUbergraph_BPC_S3GameInstanceDebug_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
