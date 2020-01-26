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

// Function BPC_MiniGameScriptFlag.BPC_MiniGameScriptFlag_C.GetGlobalFlagMiniGameResultNum
struct UBPC_MiniGameScriptFlag_C_GetGlobalFlagMiniGameResultNum_Params
{
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameScriptFlag.BPC_MiniGameScriptFlag_C.SetGlobalFlagMiniGameResultNum
struct UBPC_MiniGameScriptFlag_C_SetGlobalFlagMiniGameResultNum_Params
{
	int                                                Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameScriptFlag.BPC_MiniGameScriptFlag_C.GetGlobalFlagMiniGameScore
struct UBPC_MiniGameScriptFlag_C_GetGlobalFlagMiniGameScore_Params
{
	int                                                Score;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGameScriptFlag.BPC_MiniGameScriptFlag_C.SetGlobalFlagMiniGameScore
struct UBPC_MiniGameScriptFlag_C_SetGlobalFlagMiniGameScore_Params
{
	int                                                Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
