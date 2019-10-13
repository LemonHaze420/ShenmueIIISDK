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

// Function WBP_MiniGameCommon.WBP_MiniGameCommon_C.SetIconImageSize
struct UWBP_MiniGameCommon_C_SetIconImageSize_Params
{
	struct FVector2D                                   DesiredSize;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function WBP_MiniGameCommon.WBP_MiniGameCommon_C.SetVisibleButtonIcon
struct UWBP_MiniGameCommon_C_SetVisibleButtonIcon_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameCommon.WBP_MiniGameCommon_C.Construct
struct UWBP_MiniGameCommon_C_Construct_Params
{
};

// Function WBP_MiniGameCommon.WBP_MiniGameCommon_C.Tick
struct UWBP_MiniGameCommon_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MiniGameCommon.WBP_MiniGameCommon_C.ExecuteUbergraph_WBP_MiniGameCommon
struct UWBP_MiniGameCommon_C_ExecuteUbergraph_WBP_MiniGameCommon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
