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

// Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.InitializeFontSize
struct UWBP_SecondarySubtitles_C_InitializeFontSize_Params
{
};

// Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.ClearSubtitleTextWidget
struct UWBP_SecondarySubtitles_C_ClearSubtitleTextWidget_Params
{
	class UTextBlock*                                  InTextWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.DrawSubtitleTextWidget
struct UWBP_SecondarySubtitles_C_DrawSubtitleTextWidget_Params
{
	class UTextBlock*                                  InTextWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.Clear
struct UWBP_SecondarySubtitles_C_Clear_Params
{
};

// Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.DrawSubtitles
struct UWBP_SecondarySubtitles_C_DrawSubtitles_Params
{
	TArray<struct FString>                             InTextArray;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.Construct
struct UWBP_SecondarySubtitles_C_Construct_Params
{
};

// Function WBP_SecondarySubtitles.WBP_SecondarySubtitles_C.ExecuteUbergraph_WBP_SecondarySubtitles
struct UWBP_SecondarySubtitles_C_ExecuteUbergraph_WBP_SecondarySubtitles_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
