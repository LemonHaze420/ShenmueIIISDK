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

// Function BPC_PlayerShove.BPC_PlayerShove_C.Update
struct UBPC_PlayerShove_C_Update_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_PlayerShove.BPC_PlayerShove_C.ReceiveBeginPlay
struct UBPC_PlayerShove_C_ReceiveBeginPlay_Params
{
};

// Function BPC_PlayerShove.BPC_PlayerShove_C.ExecuteUbergraph_BPC_PlayerShove
struct UBPC_PlayerShove_C_ExecuteUbergraph_BPC_PlayerShove_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
