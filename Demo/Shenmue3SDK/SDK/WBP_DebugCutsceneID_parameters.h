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

// Function WBP_DebugCutsceneID.WBP_DebugCutsceneID_C.Update
struct UWBP_DebugCutsceneID_C_Update_Params
{
};

// Function WBP_DebugCutsceneID.WBP_DebugCutsceneID_C.Construct
struct UWBP_DebugCutsceneID_C_Construct_Params
{
};

// Function WBP_DebugCutsceneID.WBP_DebugCutsceneID_C.Tick
struct UWBP_DebugCutsceneID_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_DebugCutsceneID.WBP_DebugCutsceneID_C.ExecuteUbergraph_WBP_DebugCutsceneID
struct UWBP_DebugCutsceneID_C_ExecuteUbergraph_WBP_DebugCutsceneID_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
