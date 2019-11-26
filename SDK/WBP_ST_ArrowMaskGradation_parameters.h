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

// Function WBP_ST_ArrowMaskGradation.WBP_ST_ArrowMaskGradation_C.SetMainImageSize
struct UWBP_ST_ArrowMaskGradation_C_SetMainImageSize_Params
{
	struct FVector2D                                   InSize;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function WBP_ST_ArrowMaskGradation.WBP_ST_ArrowMaskGradation_C.AddMainImagePos
struct UWBP_ST_ArrowMaskGradation_C_AddMainImagePos_Params
{
	struct FVector2D                                   Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function WBP_ST_ArrowMaskGradation.WBP_ST_ArrowMaskGradation_C.PreConstruct
struct UWBP_ST_ArrowMaskGradation_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ST_ArrowMaskGradation.WBP_ST_ArrowMaskGradation_C.ExecuteUbergraph_WBP_ST_ArrowMaskGradation
struct UWBP_ST_ArrowMaskGradation_C_ExecuteUbergraph_WBP_ST_ArrowMaskGradation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
