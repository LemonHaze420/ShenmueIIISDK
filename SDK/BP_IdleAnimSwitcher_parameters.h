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

// Function BP_IdleAnimSwitcher.BP_IdleAnimSwitcher_C.EndIdle
struct UBP_IdleAnimSwitcher_C_EndIdle_Params
{
	int                                                IdleVariation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_IdleAnimSwitcher.BP_IdleAnimSwitcher_C.UpdateIdle
struct UBP_IdleAnimSwitcher_C_UpdateIdle_Params
{
	int                                                IdleVariation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IdleAnimSwitcher.BP_IdleAnimSwitcher_C.StartIdle
struct UBP_IdleAnimSwitcher_C_StartIdle_Params
{
	int                                                IdleVariation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
