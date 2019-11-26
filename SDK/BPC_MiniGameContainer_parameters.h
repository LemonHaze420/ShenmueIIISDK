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

// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.GetGameGamblePrice
struct UBPC_MiniGameContainer_C_GetGameGamblePrice_Params
{
	int                                                Price;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.IsGambleMiniGame
struct UBPC_MiniGameContainer_C_IsGambleMiniGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.GetGameGambleSuccessPrice
struct UBPC_MiniGameContainer_C_GetGameGambleSuccessPrice_Params
{
	int                                                Price;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.GetGameMaxPrice
struct UBPC_MiniGameContainer_C_GetGameMaxPrice_Params
{
	int                                                Price;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.ResetScriptOverrideMaxPlayCount
struct UBPC_MiniGameContainer_C_ResetScriptOverrideMaxPlayCount_Params
{
};

// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.GetGameMaxPlayCount
struct UBPC_MiniGameContainer_C_GetGameMaxPlayCount_Params
{
	int                                                MaxPlayCount;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.IsPlayMiniGame
struct UBPC_MiniGameContainer_C_IsPlayMiniGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.RemainingGamePlayCount
struct UBPC_MiniGameContainer_C_RemainingGamePlayCount_Params
{
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.IncrementGamePlayCount
struct UBPC_MiniGameContainer_C_IncrementGamePlayCount_Params
{
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.Initialize
struct UBPC_MiniGameContainer_C_Initialize_Params
{
};

// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.ResetScriptOverridePrice
struct UBPC_MiniGameContainer_C_ResetScriptOverridePrice_Params
{
};

// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.GetGamePrice
struct UBPC_MiniGameContainer_C_GetGamePrice_Params
{
	int                                                Price;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.ReceiveBeginPlay
struct UBPC_MiniGameContainer_C_ReceiveBeginPlay_Params
{
};

// Function BPC_MiniGameContainer.BPC_MiniGameContainer_C.ExecuteUbergraph_BPC_MiniGameContainer
struct UBPC_MiniGameContainer_C_ExecuteUbergraph_BPC_MiniGameContainer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
