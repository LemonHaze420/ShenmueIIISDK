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

// Function BPC_SB_Score.BPC_SB_Score_C.GetScore
struct UBPC_SB_Score_C_GetScore_Params
{
	int                                                Score;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_SB_Score.BPC_SB_Score_C.AddScore
struct UBPC_SB_Score_C_AddScore_Params
{
};

// Function BPC_SB_Score.BPC_SB_Score_C.ExecuteUbergraph_BPC_SB_Score
struct UBPC_SB_Score_C_ExecuteUbergraph_BPC_SB_Score_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_SB_Score.BPC_SB_Score_C.OnAddScore__DelegateSignature
struct UBPC_SB_Score_C_OnAddScore__DelegateSignature_Params
{
	int                                                GiveScore;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
