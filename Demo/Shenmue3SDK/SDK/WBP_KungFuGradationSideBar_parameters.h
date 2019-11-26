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

// Function WBP_KungFuGradationSideBar.WBP_KungFuGradationSideBar_C.PlayMaxAnim
struct UWBP_KungFuGradationSideBar_C_PlayMaxAnim_Params
{
};

// Function WBP_KungFuGradationSideBar.WBP_KungFuGradationSideBar_C.SetRatio
struct UWBP_KungFuGradationSideBar_C_SetRatio_Params
{
	float                                              Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KungFuGradationSideBar.WBP_KungFuGradationSideBar_C.Ease
struct UWBP_KungFuGradationSideBar_C_Ease_Params
{
	float                                              InTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_KungFuGradationSideBar.WBP_KungFuGradationSideBar_C.Tick
struct UWBP_KungFuGradationSideBar_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KungFuGradationSideBar.WBP_KungFuGradationSideBar_C.Construct
struct UWBP_KungFuGradationSideBar_C_Construct_Params
{
};

// Function WBP_KungFuGradationSideBar.WBP_KungFuGradationSideBar_C.ExecuteUbergraph_WBP_KungFuGradationSideBar
struct UWBP_KungFuGradationSideBar_C_ExecuteUbergraph_WBP_KungFuGradationSideBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
