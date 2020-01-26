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

// Function UMG_SubTitleText.UMG_SubTitleText_C.GetGlowTextBorder
struct UUMG_SubTitleText_C_GetGlowTextBorder_Params
{
	class UBorder*                                     GlowTextBorder;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_SubTitleText.UMG_SubTitleText_C.GetGlowTextBlock
struct UUMG_SubTitleText_C_GetGlowTextBlock_Params
{
	class US3GlowTextBlock*                            GlowTextBlock;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_SubTitleText.UMG_SubTitleText_C.GetNowText
struct UUMG_SubTitleText_C_GetNowText_Params
{
	class UTextBlock*                                  NowText;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_SubTitleText.UMG_SubTitleText_C.GetAllSizeText
struct UUMG_SubTitleText_C_GetAllSizeText_Params
{
	class UTextBlock*                                  AllSize;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_SubTitleText.UMG_SubTitleText_C.GetRubyRootCanvas
struct UUMG_SubTitleText_C_GetRubyRootCanvas_Params
{
	class UCanvasPanel*                                Canvas;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_SubTitleText.UMG_SubTitleText_C.GetDummyTextBody
struct UUMG_SubTitleText_C_GetDummyTextBody_Params
{
	class UTextBlock*                                  Body;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_SubTitleText.UMG_SubTitleText_C.GetDummyTextRubyBody
struct UUMG_SubTitleText_C_GetDummyTextRubyBody_Params
{
	class UTextBlock*                                  Body;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_SubTitleText.UMG_SubTitleText_C.Construct
struct UUMG_SubTitleText_C_Construct_Params
{
};

// Function UMG_SubTitleText.UMG_SubTitleText_C.SetText
struct UUMG_SubTitleText_C_SetText_Params
{
	struct FString                                     Body;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_RubyInfo                                InRubyInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                InSubtitleColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                InOutlineColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UMG_SubTitleText.UMG_SubTitleText_C.ExecuteUbergraph_UMG_SubTitleText
struct UUMG_SubTitleText_C_ExecuteUbergraph_UMG_SubTitleText_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
