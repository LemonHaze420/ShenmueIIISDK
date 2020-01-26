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

// Function BPW_ScreenFade.BPW_ScreenFade_C.GetFadeColor
struct UBPW_ScreenFade_C_GetFadeColor_Params
{
	bool                                               bIgnoreOpacity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorAndOpacity;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function BPW_ScreenFade.BPW_ScreenFade_C.SetFadeColor
struct UBPW_ScreenFade_C_SetFadeColor_Params
{
	struct FLinearColor                                FadeColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
