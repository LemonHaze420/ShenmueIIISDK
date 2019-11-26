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

// Function BP_Lead_MotionDatabase.BP_Lead_MotionDatabase_C.GetTurnMotion
struct UBP_Lead_MotionDatabase_C_GetTurnMotion_Params
{
	float                                              InAngle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                OutMontage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lead_MotionDatabase.BP_Lead_MotionDatabase_C.GetWaveMotion
struct UBP_Lead_MotionDatabase_C_GetWaveMotion_Params
{
	float                                              InAngle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InDistanceSqr;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                OutMontage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
