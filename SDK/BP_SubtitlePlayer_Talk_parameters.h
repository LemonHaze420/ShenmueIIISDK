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

// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.GetVoiceDuration
struct ABP_SubtitlePlayer_Talk_C_GetVoiceDuration_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.Play_HintTalk
struct ABP_SubtitlePlayer_Talk_C_Play_HintTalk_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               IsAutoStop;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.UserConstructionScript
struct ABP_SubtitlePlayer_Talk_C_UserConstructionScript_Params
{
};

// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.PlayVoice
struct ABP_SubtitlePlayer_Talk_C_PlayVoice_Params
{
	class UObject*                                     VoiceData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.OnPlaySound
struct ABP_SubtitlePlayer_Talk_C_OnPlaySound_Params
{
};

// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.Stop
struct ABP_SubtitlePlayer_Talk_C_Stop_Params
{
};

// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.ClearSubtitle
struct ABP_SubtitlePlayer_Talk_C_ClearSubtitle_Params
{
};

// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.Skip
struct ABP_SubtitlePlayer_Talk_C_Skip_Params
{
	class UTalkTask*                                   SkippedTask;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer_Talk.BP_SubtitlePlayer_Talk_C.ExecuteUbergraph_BP_SubtitlePlayer_Talk
struct ABP_SubtitlePlayer_Talk_C_ExecuteUbergraph_BP_SubtitlePlayer_Talk_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
