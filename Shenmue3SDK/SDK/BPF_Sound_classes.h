#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPF_Sound.BPF_Sound_C
// 0x0000 (0x0028 - 0x0028)
class UBPF_Sound_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPF_Sound.BPF_Sound_C");
		return ptr;
	}


	void STATIC_IsVoiceCue(class USoundAtomCue* Cue, class UObject* __WorldContext, bool* Voice);
	void STATIC_GetLanguageLabel(class UObject* __WorldContext, struct FString* Selector, struct FString* Label);
	void STATIC_GetVoiceVolume(class UObject* __WorldContext, float* Volume);
	void STATIC_GetBGMVolume(class UObject* __WorldContext, float* Volume);
	void STATIC_GetVolumeAdjustValue(class UObject* __WorldContext, float* Volume);
	void STATIC_GetSEVolume(class UObject* __WorldContext, float* Volume);
	void STATIC_GetWeatherLabel(class UObject* __WorldContext, struct FString* Selector, struct FString* Label);
	void STATIC_GetBGMbyID(const struct FName& InId, class UObject* __WorldContext, struct FS3BgmTable* Data);
	void STATIC_PlayCommonSound(ECommonSEType Type, class UObject* __WorldContext);
	void STATIC_PlaySoundWithVolume(class USoundAtomCue* Sound, float Volume, class UObject* __WorldContext);
	void STATIC_ChoiceTimeEventBGM(ES3DayTimeEvent CurrentEvent, class USoundAtomCue* CurrentCue, class USoundAtomCue* DefaultCue, class UObject* __WorldContext, TArray<struct FS3BgmChangeInfo>* InfoArray, class USoundAtomCue** Cue);
	void STATIC_PlaySoundAttachedComponent(class USoundAtomCue* Sound, class USceneComponent* Component, const struct FName& SocketName, class USoundAttenuation* Attenuation, bool AutoDestroy, class UObject* __WorldContext, class ABP_S3SoundPlayer_C** SoundPlayer);
	void STATIC_PlaySoundAttached(class USoundAtomCue* Sound, class AActor* Actor, class USoundAttenuation* Attenuation, bool AutoDestroy, class UObject* __WorldContext, class ABP_S3SoundPlayer_C** SoundPlayer);
	void STATIC_PlaySoundAtLocation(class USoundAtomCue* Sound, const struct FVector& Location, class USoundAttenuation* Attenuation, bool AutoDestroy, bool AutoPlay, class UObject* __WorldContext, class ABP_S3SoundPlayer_C** SoundPlayer);
	void STATIC_GetDuration(class USoundAtomCue* Cue, class UObject* __WorldContext, float* Duration, bool* Result);
	void STATIC_GetS3SoundManager(class UObject* __WorldContext, class ABP_SoundManager_C** BP_SoundManager);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
