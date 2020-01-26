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

// Function BP_TalkProcess_Look.BP_TalkProcess_Look_C.Activate
struct UBP_TalkProcess_Look_C_Activate_Params
{
};

// Function BP_TalkProcess_Look.BP_TalkProcess_Look_C.Update
struct UBP_TalkProcess_Look_C_Update_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkProcess_Look.BP_TalkProcess_Look_C.ExecuteUbergraph_BP_TalkProcess_Look
struct UBP_TalkProcess_Look_C_ExecuteUbergraph_BP_TalkProcess_Look_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
