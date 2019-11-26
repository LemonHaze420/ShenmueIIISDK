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

// Function BP_DrivePoint.BP_DrivePoint_C.UserConstructionScript
struct ABP_DrivePoint_C_UserConstructionScript_Params
{
};

// Function BP_DrivePoint.BP_DrivePoint_C.ReceiveTick
struct ABP_DrivePoint_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DrivePoint.BP_DrivePoint_C.ExecuteUbergraph_BP_DrivePoint
struct ABP_DrivePoint_C_ExecuteUbergraph_BP_DrivePoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
