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

// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.UpdateText
struct UUMG_SubTitleTextBase_C_UpdateText_Params
{
};

// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.HideText
struct UUMG_SubTitleTextBase_C_HideText_Params
{
};

// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetGlowTextBorder
struct UUMG_SubTitleTextBase_C_GetGlowTextBorder_Params
{
	class UBorder*                                     GlowTextBorder;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.ForceAllDisp
struct UUMG_SubTitleTextBase_C_ForceAllDisp_Params
{
};

// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.IsAll
struct UUMG_SubTitleTextBase_C_IsAll_Params
{
	bool                                               IsAll;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.SetText
struct UUMG_SubTitleTextBase_C_SetText_Params
{
	struct FString                                     Body;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_RubyInfo                                InRubyInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                InSubtitleColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                InOutlineColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetGlowTextBlock
struct UUMG_SubTitleTextBase_C_GetGlowTextBlock_Params
{
	class US3GlowTextBlock*                            GlowTextBlock;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetNowText
struct UUMG_SubTitleTextBase_C_GetNowText_Params
{
	class UTextBlock*                                  NowText;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetAllSizeText
struct UUMG_SubTitleTextBase_C_GetAllSizeText_Params
{
	class UTextBlock*                                  AllSize;                                                  // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.TickText
struct UUMG_SubTitleTextBase_C_TickText_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetRubySize
struct UUMG_SubTitleTextBase_C_GetRubySize_Params
{
	float                                              X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.CenteringTextAndRuby
struct UUMG_SubTitleTextBase_C_CenteringTextAndRuby_Params
{
	class UCanvasPanelSlot*                            DrawTextPanel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                DisplayTextSize;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.SetupRubyText
struct UUMG_SubTitleTextBase_C_SetupRubyText_Params
{
	TArray<struct FST_RubyPair>                        RubyData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FLinearColor                                InShadowColorAndOpacity;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GenerateMissingParts
struct UUMG_SubTitleTextBase_C_GenerateMissingParts_Params
{
	TArray<struct FST_RubyPair>                        TargetArray;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetDummyTextRubyBody
struct UUMG_SubTitleTextBase_C_GetDummyTextRubyBody_Params
{
	class UTextBlock*                                  Body;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetDummyTextBody
struct UUMG_SubTitleTextBase_C_GetDummyTextBody_Params
{
	class UTextBlock*                                  Body;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.GetRubyRootCanvas
struct UUMG_SubTitleTextBase_C_GetRubyRootCanvas_Params
{
	class UCanvasPanel*                                Canvas;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.Construct
struct UUMG_SubTitleTextBase_C_Construct_Params
{
};

// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.ExecuteUbergraph_UMG_SubTitleTextBase
struct UUMG_SubTitleTextBase_C_ExecuteUbergraph_UMG_SubTitleTextBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_SubTitleTextBase.UMG_SubTitleTextBase_C.onPlayTalkSE__DelegateSignature
struct UUMG_SubTitleTextBase_C_onPlayTalkSE__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
