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

// Function BPC_MIniGame_ST_GameScore.BPC_MIniGame_ST_GameScore_C.Reset
struct UBPC_MIniGame_ST_GameScore_C_Reset_Params
{
};

// Function BPC_MIniGame_ST_GameScore.BPC_MIniGame_ST_GameScore_C.IncrementSuccessCount
struct UBPC_MIniGame_ST_GameScore_C_IncrementSuccessCount_Params
{
};

// Function BPC_MIniGame_ST_GameScore.BPC_MIniGame_ST_GameScore_C.AddPoint
struct UBPC_MIniGame_ST_GameScore_C_AddPoint_Params
{
	int                                                Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Total;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MIniGame_ST_GameScore.BPC_MIniGame_ST_GameScore_C.ExecuteUbergraph_BPC_MIniGame_ST_GameScore
struct UBPC_MIniGame_ST_GameScore_C_ExecuteUbergraph_BPC_MIniGame_ST_GameScore_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
