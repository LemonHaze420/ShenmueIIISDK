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

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.StartTalkClipper
struct ABP_SubtitlePlayer_C_StartTalkClipper_Params
{
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ClipperData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.UpdateDelayPlayVoice
struct ABP_SubtitlePlayer_C_UpdateDelayPlayVoice_Params
{
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.RemoveDelayVoiceData
struct ABP_SubtitlePlayer_C_RemoveDelayVoiceData_Params
{
	class ABP_S3SoundPlayer_C*                         InSoundPlayer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.AddDelayVoiceData
struct ABP_SubtitlePlayer_C_AddDelayVoiceData_Params
{
	class ABP_S3SoundPlayer_C*                         InSoundPlayer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetLeavePreviousVoice
struct ABP_SubtitlePlayer_C_SetLeavePreviousVoice_Params
{
	bool                                               InLeave;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.UnbindOnSubVoiceAudioFinished
struct ABP_SubtitlePlayer_C_UnbindOnSubVoiceAudioFinished_Params
{
	class ABP_S3SoundPlayer_C*                         InSoundPlayer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.BindOnSubVoiceAudioFinished
struct ABP_SubtitlePlayer_C_BindOnSubVoiceAudioFinished_Params
{
	class ABP_S3SoundPlayer_C*                         InSoundPlayer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.OnSubVoiceAudioFinished
struct ABP_SubtitlePlayer_C_OnSubVoiceAudioFinished_Params
{
	class ABP_S3SoundPlayer_C*                         InSoundPlayer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.EndAllVoicePlaying
struct ABP_SubtitlePlayer_C_EndAllVoicePlaying_Params
{
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.EndSubVoicePlaying
struct ABP_SubtitlePlayer_C_EndSubVoicePlaying_Params
{
	class ABP_S3SoundPlayer_C*                         InSoundPlayer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ConvertCurrentVoicePlayerToSub
struct ABP_SubtitlePlayer_C_ConvertCurrentVoicePlayerToSub_Params
{
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetPlayTimeMin
struct ABP_SubtitlePlayer_C_SetPlayTimeMin_Params
{
	float                                              NewTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.CheckAutoStop
struct ABP_SubtitlePlayer_C_CheckAutoStop_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.IsVoicePlaying
struct ABP_SubtitlePlayer_C_IsVoicePlaying_Params
{
	bool                                               Playing;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetPlayVolume
struct ABP_SubtitlePlayer_C_SetPlayVolume_Params
{
	float                                              NewVolume;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.GetVoicePlayer
struct ABP_SubtitlePlayer_C_GetVoicePlayer_Params
{
	class ABP_S3SoundPlayer_C*                         VoicePlayer;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetCurrentPlayingTime
struct ABP_SubtitlePlayer_C_SetCurrentPlayingTime_Params
{
	float                                              CurrentPlayingTime;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetIsAutoStopFlag
struct ABP_SubtitlePlayer_C_SetIsAutoStopFlag_Params
{
	bool                                               bFlag;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetIsPlayingFlag
struct ABP_SubtitlePlayer_C_SetIsPlayingFlag_Params
{
	bool                                               bFlag;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.GetSubtitlesWidget
struct ABP_SubtitlePlayer_C_GetSubtitlesWidget_Params
{
	class UUMG_Subtitles_C*                            SubtitlesWidget;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.CalcPlayTimeMin
struct ABP_SubtitlePlayer_C_CalcPlayTimeMin_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.IsPlaying
struct ABP_SubtitlePlayer_C_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.GetSubtitleSpeakerID
struct ABP_SubtitlePlayer_C_GetSubtitleSpeakerID_Params
{
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.GetSubtitleChara
struct ABP_SubtitlePlayer_C_GetSubtitleChara_Params
{
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_TalkCharacterType>                  Chara;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.Stop
struct ABP_SubtitlePlayer_C_Stop_Params
{
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.Play
struct ABP_SubtitlePlayer_C_Play_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ES3TextPathType                                    Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAutoStop;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.EndVoicePlaying
struct ABP_SubtitlePlayer_C_EndVoicePlaying_Params
{
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.PlayVoice
struct ABP_SubtitlePlayer_C_PlayVoice_Params
{
	class UObject*                                     VoiceData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.CreateVoicePlayer
struct ABP_SubtitlePlayer_C_CreateVoicePlayer_Params
{
	class USoundAtomCue*                               Cue;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.SetSubtitlesWidgetVisible
struct ABP_SubtitlePlayer_C_SetSubtitlesWidgetVisible_Params
{
	bool                                               IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.FinalizeSubtitlesWidget
struct ABP_SubtitlePlayer_C_FinalizeSubtitlesWidget_Params
{
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.CreateSubtitlesWidget
struct ABP_SubtitlePlayer_C_CreateSubtitlesWidget_Params
{
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.UserConstructionScript
struct ABP_SubtitlePlayer_C_UserConstructionScript_Params
{
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ReceiveBeginPlay
struct ABP_SubtitlePlayer_C_ReceiveBeginPlay_Params
{
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ReceiveTick
struct ABP_SubtitlePlayer_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.BindOnVoiceAudioFinished
struct ABP_SubtitlePlayer_C_BindOnVoiceAudioFinished_Params
{
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.UnbindOnVoiceAudioFinished
struct ABP_SubtitlePlayer_C_UnbindOnVoiceAudioFinished_Params
{
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.OnVoiceAudioFinished
struct ABP_SubtitlePlayer_C_OnVoiceAudioFinished_Params
{
	class ABP_S3SoundPlayer_C*                         SoundPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.sePlay
struct ABP_SubtitlePlayer_C_sePlay_Params
{
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.bindSePlay
struct ABP_SubtitlePlayer_C_bindSePlay_Params
{
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ReceiveEndPlay
struct ABP_SubtitlePlayer_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.ExecuteUbergraph_BP_SubtitlePlayer
struct ABP_SubtitlePlayer_C_ExecuteUbergraph_BP_SubtitlePlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitlePlayer.BP_SubtitlePlayer_C.OnEndSubtitle__DelegateSignature
struct ABP_SubtitlePlayer_C_OnEndSubtitle__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
