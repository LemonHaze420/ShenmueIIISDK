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

// Function WBP_EventAttention.WBP_EventAttention_C.PlayFadeArrowAnim
struct UWBP_EventAttention_C_PlayFadeArrowAnim_Params
{
};

// Function WBP_EventAttention.WBP_EventAttention_C.ForceEnabledDirectionArrow
struct UWBP_EventAttention_C_ForceEnabledDirectionArrow_Params
{
};

// Function WBP_EventAttention.WBP_EventAttention_C.ReverseArrow
struct UWBP_EventAttention_C_ReverseArrow_Params
{
};

// Function WBP_EventAttention.WBP_EventAttention_C.SetCenterCursorVisible
struct UWBP_EventAttention_C_SetCenterCursorVisible_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_EventAttention.WBP_EventAttention_C.SetArrowAlpha
struct UWBP_EventAttention_C_SetArrowAlpha_Params
{
	float                                              BaseAlpha;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ZoomAlpha;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_EventAttention.WBP_EventAttention_C.SetArrowPosition
struct UWBP_EventAttention_C_SetArrowPosition_Params
{
	float                                              OffsetRate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_EventAttention.WBP_EventAttention_C.UpdateVisible
struct UWBP_EventAttention_C_UpdateVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_EventAttention.WBP_EventAttention_C.UpdateDirectionArrow
struct UWBP_EventAttention_C_UpdateDirectionArrow_Params
{
	TArray<struct FName>                               VisibleArrowName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_EventAttention.WBP_EventAttention_C.PreConstruct
struct UWBP_EventAttention_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_EventAttention.WBP_EventAttention_C.Construct
struct UWBP_EventAttention_C_Construct_Params
{
};

// Function WBP_EventAttention.WBP_EventAttention_C.ExecuteUbergraph_WBP_EventAttention
struct UWBP_EventAttention_C_ExecuteUbergraph_WBP_EventAttention_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
