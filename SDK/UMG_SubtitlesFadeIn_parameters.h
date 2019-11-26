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

// Function UMG_SubtitlesFadeIn.UMG_SubtitlesFadeIn_C.ShowTextOnly
struct UUMG_SubtitlesFadeIn_C_ShowTextOnly_Params
{
	TArray<struct FString>                             TextArray;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Eternity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_SubtitlesFadeIn.UMG_SubtitlesFadeIn_C.Construct
struct UUMG_SubtitlesFadeIn_C_Construct_Params
{
};

// Function UMG_SubtitlesFadeIn.UMG_SubtitlesFadeIn_C.PlayFadeOut
struct UUMG_SubtitlesFadeIn_C_PlayFadeOut_Params
{
};

// Function UMG_SubtitlesFadeIn.UMG_SubtitlesFadeIn_C.ExecuteUbergraph_UMG_SubtitlesFadeIn
struct UUMG_SubtitlesFadeIn_C_ExecuteUbergraph_UMG_SubtitlesFadeIn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
