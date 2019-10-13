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

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.GetPlaybackTime
struct ABP_S3SoundPlayer_C_GetPlaybackTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.StopForbid
struct ABP_S3SoundPlayer_C_StopForbid_Params
{
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.Stop
struct ABP_S3SoundPlayer_C_Stop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.StopOnly
struct ABP_S3SoundPlayer_C_StopOnly_Params
{
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.JudgeVolume
struct ABP_S3SoundPlayer_C_JudgeVolume_Params
{
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetSound
struct ABP_S3SoundPlayer_C_SetSound_Params
{
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetSoundPitch
struct ABP_S3SoundPlayer_C_SetSoundPitch_Params
{
	float                                              Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetAISAC
struct ABP_S3SoundPlayer_C_SetAISAC_Params
{
	struct FString                                     ControlName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              ControlValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetAttenuation
struct ABP_S3SoundPlayer_C_SetAttenuation_Params
{
	class USoundAttenuation*                           Attenuation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetSelector
struct ABP_S3SoundPlayer_C_SetSelector_Params
{
	struct FString                                     Selector;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetSoundVolume
struct ABP_S3SoundPlayer_C_SetSoundVolume_Params
{
	float                                              Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.GetSource
struct ABP_S3SoundPlayer_C_GetSource_Params
{
	class UObject*                                     Cue;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.GetSourceType
struct ABP_S3SoundPlayer_C_GetSourceType_Params
{
	TEnumAsByte<ESoundSourceType>                      Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.GetDuration
struct ABP_S3SoundPlayer_C_GetDuration_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Duration_sec_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.IsPlaying
struct ABP_S3SoundPlayer_C_IsPlaying_Params
{
	bool                                               isPlay;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetSource
struct ABP_S3SoundPlayer_C_SetSource_Params
{
	class UObject*                                     Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.EndCheck
struct ABP_S3SoundPlayer_C_EndCheck_Params
{
	bool                                               Destroy;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.Play
struct ABP_S3SoundPlayer_C_Play_Params
{
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.UserConstructionScript
struct ABP_S3SoundPlayer_C_UserConstructionScript_Params
{
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.ReceiveBeginPlay
struct ABP_S3SoundPlayer_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.ReceiveEndPlay
struct ABP_S3SoundPlayer_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.PermitPlay
struct ABP_S3SoundPlayer_C_PermitPlay_Params
{
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.StartReuse
struct ABP_S3SoundPlayer_C_StartReuse_Params
{
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetVoiceFlag
struct ABP_S3SoundPlayer_C_SetVoiceFlag_Params
{
	bool*                                              bNewFlag;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.SetSystemVolume
struct ABP_S3SoundPlayer_C_SetSystemVolume_Params
{
	float*                                             Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.AudioFinished
struct ABP_S3SoundPlayer_C_AudioFinished_Params
{
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.CriAudioFInished
struct ABP_S3SoundPlayer_C_CriAudioFInished_Params
{
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.BindFinishEvent
struct ABP_S3SoundPlayer_C_BindFinishEvent_Params
{
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.UnbindFinishEvent
struct ABP_S3SoundPlayer_C_UnbindFinishEvent_Params
{
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.Pause
struct ABP_S3SoundPlayer_C_Pause_Params
{
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.Restart
struct ABP_S3SoundPlayer_C_Restart_Params
{
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.ExecuteUbergraph_BP_S3SoundPlayer
struct ABP_S3SoundPlayer_C_ExecuteUbergraph_BP_S3SoundPlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3SoundPlayer.BP_S3SoundPlayer_C.OnAudioFinished__DelegateSignature
struct ABP_S3SoundPlayer_C_OnAudioFinished__DelegateSignature_Params
{
	class ABP_S3SoundPlayer_C*                         SoundPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
