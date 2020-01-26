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

// Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.CSEvent_Enable
struct UBP_MainFlowCScontrol_C_CSEvent_Enable_Params
{
	struct FName                                       CutsceneName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseFade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.CallCS_Event
struct UBP_MainFlowCScontrol_C_CallCS_Event_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               End;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.OnStartCutScene
struct UBP_MainFlowCScontrol_C_OnStartCutScene_Params
{
};

// Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.OnEndCutscene
struct UBP_MainFlowCScontrol_C_OnEndCutscene_Params
{
};

// Function BP_MainFlowCScontrol.BP_MainFlowCScontrol_C.ExecuteUbergraph_BP_MainFlowCScontrol
struct UBP_MainFlowCScontrol_C_ExecuteUbergraph_BP_MainFlowCScontrol_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
