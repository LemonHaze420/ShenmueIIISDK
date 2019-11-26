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

// Function BPC_MiniGameStandaloneTalkScript.BPC_MiniGameStandaloneTalkScript_C.ReceiveBeginPlay
struct UBPC_MiniGameStandaloneTalkScript_C_ReceiveBeginPlay_Params
{
};

// Function BPC_MiniGameStandaloneTalkScript.BPC_MiniGameStandaloneTalkScript_C.ReceiveEndPlay
struct UBPC_MiniGameStandaloneTalkScript_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameStandaloneTalkScript.BPC_MiniGameStandaloneTalkScript_C.ExecuteUbergraph_BPC_MiniGameStandaloneTalkScript
struct UBPC_MiniGameStandaloneTalkScript_C_ExecuteUbergraph_BPC_MiniGameStandaloneTalkScript_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
