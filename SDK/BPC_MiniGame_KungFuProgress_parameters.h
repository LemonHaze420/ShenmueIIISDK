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

// Function BPC_MiniGame_KungFuProgress.BPC_MiniGame_KungFuProgress_C.MakeExperienceMultiplier
struct UBPC_MiniGame_KungFuProgress_C_MakeExperienceMultiplier_Params
{
	TEnumAsByte<E_MiniGame_KungFuType>                 Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Ramp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPC_MiniGame_KungFuProgress.BPC_MiniGame_KungFuProgress_C.SetKungFuProgress
struct UBPC_MiniGame_KungFuProgress_C_SetKungFuProgress_Params
{
	TEnumAsByte<E_MiniGame_KungFuType>                 Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGame_KungFuProgress.BPC_MiniGame_KungFuProgress_C.GetKungFuProgress
struct UBPC_MiniGame_KungFuProgress_C_GetKungFuProgress_Params
{
	TEnumAsByte<E_MiniGame_KungFuType>                 Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ProgressNum;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPC_MiniGame_KungFuProgress.BPC_MiniGame_KungFuProgress_C.AddKungFuProgress
struct UBPC_MiniGame_KungFuProgress_C_AddKungFuProgress_Params
{
	TEnumAsByte<E_MiniGame_KungFuType>                 Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScoreRatio;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
