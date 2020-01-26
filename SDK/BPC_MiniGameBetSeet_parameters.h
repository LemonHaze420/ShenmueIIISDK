#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.GetRenderTarget
struct UBPC_MiniGameBetSeet_C_GetRenderTarget_Params
{
	class UTextureRenderTarget2D*                      RefRenderTarget;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.InitializeRenderTarget
struct UBPC_MiniGameBetSeet_C_InitializeRenderTarget_Params
{
	int                                                Width;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.ReceiveEndPlay
struct UBPC_MiniGameBetSeet_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.ReceiveBeginPlay
struct UBPC_MiniGameBetSeet_C_ReceiveBeginPlay_Params
{
};

// Function BPC_MiniGameBetSeet.BPC_MiniGameBetSeet_C.ExecuteUbergraph_BPC_MiniGameBetSeet
struct UBPC_MiniGameBetSeet_C_ExecuteUbergraph_BPC_MiniGameBetSeet_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
