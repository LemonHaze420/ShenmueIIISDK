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

// Function WBP_KS_Parts_Center.WBP_KS_Parts_Center_C.StopArrowAnim
struct UWBP_KS_Parts_Center_C_StopArrowAnim_Params
{
};

// Function WBP_KS_Parts_Center.WBP_KS_Parts_Center_C.VisibilityParts
struct UWBP_KS_Parts_Center_C_VisibilityParts_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KS_Parts_Center.WBP_KS_Parts_Center_C.StartArrowAnim
struct UWBP_KS_Parts_Center_C_StartArrowAnim_Params
{
};

// Function WBP_KS_Parts_Center.WBP_KS_Parts_Center_C.Construct
struct UWBP_KS_Parts_Center_C_Construct_Params
{
};

// Function WBP_KS_Parts_Center.WBP_KS_Parts_Center_C.ExecuteUbergraph_WBP_KS_Parts_Center
struct UWBP_KS_Parts_Center_C_ExecuteUbergraph_WBP_KS_Parts_Center_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
