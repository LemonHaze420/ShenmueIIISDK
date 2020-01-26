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

// Function BP_DLC_TrophyControl.BP_DLC_TrophyControl_C.CheckCurrentFlag
struct ABP_DLC_TrophyControl_C_CheckCurrentFlag_Params
{
	bool                                               Enable;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DLC_TrophyControl.BP_DLC_TrophyControl_C.UserConstructionScript
struct ABP_DLC_TrophyControl_C_UserConstructionScript_Params
{
};

// Function BP_DLC_TrophyControl.BP_DLC_TrophyControl_C.EvtFlagChange
struct ABP_DLC_TrophyControl_C_EvtFlagChange_Params
{
	int                                                ArrayIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SetFlags;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DLC_TrophyControl.BP_DLC_TrophyControl_C.ReceiveBeginPlay
struct ABP_DLC_TrophyControl_C_ReceiveBeginPlay_Params
{
};

// Function BP_DLC_TrophyControl.BP_DLC_TrophyControl_C.ExecuteUbergraph_BP_DLC_TrophyControl
struct ABP_DLC_TrophyControl_C_ExecuteUbergraph_BP_DLC_TrophyControl_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
