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

// Function BP_TimeEventManager.BP_TimeEventManager_C.IsTimeHasComeFlag
struct ABP_TimeEventManager_C_IsTimeHasComeFlag_Params
{
	bool                                               flag;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimeEventManager.BP_TimeEventManager_C.MiniGameTimeInit
struct ABP_TimeEventManager_C_MiniGameTimeInit_Params
{
};

// Function BP_TimeEventManager.BP_TimeEventManager_C.MiniGameTimeCalcFlagOn
struct ABP_TimeEventManager_C_MiniGameTimeCalcFlagOn_Params
{
	float                                              TimeMax;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimeEventManager.BP_TimeEventManager_C.MiniGameTimeCalc
struct ABP_TimeEventManager_C_MiniGameTimeCalc_Params
{
};

// Function BP_TimeEventManager.BP_TimeEventManager_C.UserConstructionScript
struct ABP_TimeEventManager_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
