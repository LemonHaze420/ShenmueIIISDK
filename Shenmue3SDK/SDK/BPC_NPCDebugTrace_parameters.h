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

// Function BPC_NPCDebugTrace.BPC_NPCDebugTrace_C.Trace
struct UBPC_NPCDebugTrace_C_Trace_Params
{
};

// Function BPC_NPCDebugTrace.BPC_NPCDebugTrace_C.ReceiveBeginPlay
struct UBPC_NPCDebugTrace_C_ReceiveBeginPlay_Params
{
};

// Function BPC_NPCDebugTrace.BPC_NPCDebugTrace_C.ReceiveTick
struct UBPC_NPCDebugTrace_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_NPCDebugTrace.BPC_NPCDebugTrace_C.ExecuteUbergraph_BPC_NPCDebugTrace
struct UBPC_NPCDebugTrace_C_ExecuteUbergraph_BPC_NPCDebugTrace_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
