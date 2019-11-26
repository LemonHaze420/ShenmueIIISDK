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

// Function BP_SubtitlePlayer_DebugTextData.BP_SubtitlePlayer_DebugTextData_C.UserConstructionScript
struct ABP_SubtitlePlayer_DebugTextData_C_UserConstructionScript_Params
{
};

// Function BP_SubtitlePlayer_DebugTextData.BP_SubtitlePlayer_DebugTextData_C.Play
struct ABP_SubtitlePlayer_DebugTextData_C_Play_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3TextPathType                                    Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAutoStop;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer_DebugTextData.BP_SubtitlePlayer_DebugTextData_C.ExecuteUbergraph_BP_SubtitlePlayer_DebugTextData
struct ABP_SubtitlePlayer_DebugTextData_C_ExecuteUbergraph_BP_SubtitlePlayer_DebugTextData_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
