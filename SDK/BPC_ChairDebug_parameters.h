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

// Function BPC_ChairDebug.BPC_ChairDebug_C.AppendBaseText
struct UBPC_ChairDebug_C_AppendBaseText_Params
{
	struct FString                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BPC_ChairDebug.BPC_ChairDebug_C.DrawDebugText
struct UBPC_ChairDebug_C_DrawDebugText_Params
{
};

// Function BPC_ChairDebug.BPC_ChairDebug_C.ReceiveBeginPlay
struct UBPC_ChairDebug_C_ReceiveBeginPlay_Params
{
};

// Function BPC_ChairDebug.BPC_ChairDebug_C.ReceiveTick
struct UBPC_ChairDebug_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_ChairDebug.BPC_ChairDebug_C.ExecuteUbergraph_BPC_ChairDebug
struct UBPC_ChairDebug_C_ExecuteUbergraph_BPC_ChairDebug_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
