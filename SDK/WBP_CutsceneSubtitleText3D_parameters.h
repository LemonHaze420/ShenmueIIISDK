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

// Function WBP_CutsceneSubtitleText3D.WBP_CutsceneSubtitleText3D_C.TestUpdateTextFromReplaceString
struct UWBP_CutsceneSubtitleText3D_C_TestUpdateTextFromReplaceString_Params
{
	TArray<struct FName>                               Labels;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_CutsceneSubtitleText3D.WBP_CutsceneSubtitleText3D_C.UpdateText
struct UWBP_CutsceneSubtitleText3D_C_UpdateText_Params
{
	TArray<struct FName>                               Labels;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
