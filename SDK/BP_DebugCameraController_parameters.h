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

// Function BP_DebugCameraController.BP_DebugCameraController_C.UserConstructionScript
struct ABP_DebugCameraController_C_UserConstructionScript_Params
{
};

// Function BP_DebugCameraController.BP_DebugCameraController_C.ReceiveTick
struct ABP_DebugCameraController_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugCameraController.BP_DebugCameraController_C.ExecuteUbergraph_BP_DebugCameraController
struct ABP_DebugCameraController_C_ExecuteUbergraph_BP_DebugCameraController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
