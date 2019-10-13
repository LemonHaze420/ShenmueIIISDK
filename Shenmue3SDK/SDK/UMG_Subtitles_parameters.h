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

// Function UMG_Subtitles.UMG_Subtitles_C.isLocalizeChina
struct UUMG_Subtitles_C_isLocalizeChina_Params
{
	bool                                               China;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_Subtitles.UMG_Subtitles_C.ForceAllDisp
struct UUMG_Subtitles_C_ForceAllDisp_Params
{
};

// Function UMG_Subtitles.UMG_Subtitles_C.SetPlayRate
struct UUMG_Subtitles_C_SetPlayRate_Params
{
	float                                              NewRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_Subtitles.UMG_Subtitles_C.SetIsVoice
struct UUMG_Subtitles_C_SetIsVoice_Params
{
	bool                                               IsVoice;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_Subtitles.UMG_Subtitles_C.CreateSubtitleWidgetInfo
struct UUMG_Subtitles_C_CreateSubtitleWidgetInfo_Params
{
	TArray<struct FString>                             TextArray;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FST_RubyInfo>                        RubyInfoArray;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              TotalTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalStringNum;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_Subtitles.UMG_Subtitles_C.UpdateDisplay
struct UUMG_Subtitles_C_UpdateDisplay_Params
{
	struct FString                                     Body0;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Body1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FST_RubyInfo                                RubyInfo0;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FST_RubyInfo                                RubyInfo1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                SubtitleColor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                OutlineColor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UMG_Subtitles.UMG_Subtitles_C.GetClipperElapsedTimeAlpha
struct UUMG_Subtitles_C_GetClipperElapsedTimeAlpha_Params
{
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_Subtitles.UMG_Subtitles_C.GetClipperTime
struct UUMG_Subtitles_C_GetClipperTime_Params
{
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_Subtitles.UMG_Subtitles_C.Construct
struct UUMG_Subtitles_C_Construct_Params
{
};

// Function UMG_Subtitles.UMG_Subtitles_C.Tick
struct UUMG_Subtitles_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_Subtitles.UMG_Subtitles_C.DrawSubtitles
struct UUMG_Subtitles_C_DrawSubtitles_Params
{
	TEnumAsByte<EN_TalkCharacterType>                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             TextArray;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FST_RubyInfo>                        RubyInfoArray;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UMG_Subtitles.UMG_Subtitles_C.Clear
struct UUMG_Subtitles_C_Clear_Params
{
};

// Function UMG_Subtitles.UMG_Subtitles_C.UpdateSubtitleFeedingDisplay
struct UUMG_Subtitles_C_UpdateSubtitleFeedingDisplay_Params
{
};

// Function UMG_Subtitles.UMG_Subtitles_C.SoundPlay
struct UUMG_Subtitles_C_SoundPlay_Params
{
};

// Function UMG_Subtitles.UMG_Subtitles_C.ExecuteUbergraph_UMG_Subtitles
struct UUMG_Subtitles_C_ExecuteUbergraph_UMG_Subtitles_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG_Subtitles.UMG_Subtitles_C.onPlayTalkSE__DelegateSignature
struct UUMG_Subtitles_C_onPlayTalkSE__DelegateSignature_Params
{
};

// Function UMG_Subtitles.UMG_Subtitles_C.onFinishWaitDestructor__DelegateSignature
struct UUMG_Subtitles_C_onFinishWaitDestructor__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
