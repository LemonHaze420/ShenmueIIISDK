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

// Function BP_KF_BetMoney.BP_KF_BetMoney_C.UserConstructionScript
struct ABP_KF_BetMoney_C_UserConstructionScript_Params
{
};

// Function BP_KF_BetMoney.BP_KF_BetMoney_C.ReceiveTick
struct ABP_KF_BetMoney_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_KF_BetMoney.BP_KF_BetMoney_C.ExecuteUbergraph_BP_KF_BetMoney
struct ABP_KF_BetMoney_C_ExecuteUbergraph_BP_KF_BetMoney_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
