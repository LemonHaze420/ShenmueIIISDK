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

// Function BPF_Sound.BPF_Sound_C.IsVoiceCue
struct UBPF_Sound_C_IsVoiceCue_Params
{
	class USoundAtomCue*                               Cue;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Voice;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Sound.BPF_Sound_C.GetLanguageLabel
struct UBPF_Sound_C_GetLanguageLabel_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Selector;                                                 // (Parm, OutParm, ZeroConstructor)
	struct FString                                     Label;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_Sound.BPF_Sound_C.GetVoiceVolume
struct UBPF_Sound_C_GetVoiceVolume_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Sound.BPF_Sound_C.GetBGMVolume
struct UBPF_Sound_C_GetBGMVolume_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Sound.BPF_Sound_C.GetVolumeAdjustValue
struct UBPF_Sound_C_GetVolumeAdjustValue_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Sound.BPF_Sound_C.GetSEVolume
struct UBPF_Sound_C_GetSEVolume_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Sound.BPF_Sound_C.GetWeatherLabel
struct UBPF_Sound_C_GetWeatherLabel_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Selector;                                                 // (Parm, OutParm, ZeroConstructor)
	struct FString                                     Label;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BPF_Sound.BPF_Sound_C.GetBGMbyID
struct UBPF_Sound_C_GetBGMbyID_Params
{
	struct FName                                       InId;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FS3BgmTable                                 Data;                                                     // (Parm, OutParm)
};

// Function BPF_Sound.BPF_Sound_C.PlayCommonSound
struct UBPF_Sound_C_PlayCommonSound_Params
{
	ECommonSEType                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Sound.BPF_Sound_C.PlaySoundWithVolume
struct UBPF_Sound_C_PlaySoundWithVolume_Params
{
	class USoundAtomCue*                               Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Sound.BPF_Sound_C.ChoiceTimeEventBGM
struct UBPF_Sound_C_ChoiceTimeEventBGM_Params
{
	ES3DayTimeEvent                                    CurrentEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               CurrentCue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               DefaultCue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FS3BgmChangeInfo>                    InfoArray;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               Cue;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Sound.BPF_Sound_C.PlaySoundAttachedComponent
struct UBPF_Sound_C_PlaySoundAttachedComponent_Params
{
	class USoundAtomCue*                               Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           Attenuation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AutoDestroy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         SoundPlayer;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Sound.BPF_Sound_C.PlaySoundAttached
struct UBPF_Sound_C_PlaySoundAttached_Params
{
	class USoundAtomCue*                               Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           Attenuation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AutoDestroy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         SoundPlayer;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Sound.BPF_Sound_C.PlaySoundAtLocation
struct UBPF_Sound_C_PlaySoundAtLocation_Params
{
	class USoundAtomCue*                               Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class USoundAttenuation*                           Attenuation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AutoDestroy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AutoPlay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         SoundPlayer;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Sound.BPF_Sound_C.GetDuration
struct UBPF_Sound_C_GetDuration_Params
{
	class USoundAtomCue*                               Cue;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPF_Sound.BPF_Sound_C.GetS3SoundManager
struct UBPF_Sound_C_GetS3SoundManager_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_SoundManager_C*                          BP_SoundManager;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
