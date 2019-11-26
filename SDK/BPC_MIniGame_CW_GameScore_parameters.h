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

// Function BPC_MIniGame_CW_GameScore.BPC_MIniGame_CW_GameScore_C.GetRewardPrice
struct UBPC_MIniGame_CW_GameScore_C_GetRewardPrice_Params
{
	int                                                WoodNumber;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Price;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MIniGame_CW_GameScore.BPC_MIniGame_CW_GameScore_C.ExecuteUbergraph_BPC_MIniGame_CW_GameScore
struct UBPC_MIniGame_CW_GameScore_C_ExecuteUbergraph_BPC_MIniGame_CW_GameScore_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
