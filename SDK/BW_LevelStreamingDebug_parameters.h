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

// Function BW_LevelStreamingDebug.BW_LevelStreamingDebug_C.Construct
struct UBW_LevelStreamingDebug_C_Construct_Params
{
};

// Function BW_LevelStreamingDebug.BW_LevelStreamingDebug_C.Tick
struct UBW_LevelStreamingDebug_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BW_LevelStreamingDebug.BW_LevelStreamingDebug_C.UpdateLevelData
struct UBW_LevelStreamingDebug_C_UpdateLevelData_Params
{
};

// Function BW_LevelStreamingDebug.BW_LevelStreamingDebug_C.ExecuteUbergraph_BW_LevelStreamingDebug
struct UBW_LevelStreamingDebug_C_ExecuteUbergraph_BW_LevelStreamingDebug_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
