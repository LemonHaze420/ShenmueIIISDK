#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_S3SoundPlayer.BP_S3SoundPlayer_C
// 0x0045 (0x039D - 0x0358)
class ABP_S3SoundPlayer_C : public AS3SoundPlayer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (Transient, DuplicateTransient)
	class UAtomComponent*                              audio_cri_;                                               // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             audio_ue_;                                                // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundAttenuation*                           Attenuation;                                              // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAudioFinished;                                          // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               StandByPlay;                                              // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopDestroy;                                              // 0x0391(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0392(0x0002) MISSED OFFSET
	float                                              SystemVolume;                                             // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OriginalVolume;                                           // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceDestroy;                                             // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3SoundPlayer.BP_S3SoundPlayer_C");
		return ptr;
	}


	float GetPlaybackTime();
	void StopForbid();
	bool Stop();
	void StopOnly();
	void JudgeVolume();
	void SetSound();
	void SetSoundPitch(float Pitch);
	void SetAISAC(const struct FString& ControlName, float ControlValue);
	void SetAttenuation(class USoundAttenuation* Attenuation);
	void SetSelector(const struct FString& Selector, const struct FString& Label);
	void SetSoundVolume(float Volume);
	void GetSource(class UObject** Cue);
	void GetSourceType(TEnumAsByte<ESoundSourceType>* Type);
	void GetDuration(bool* Result, float* Duration_sec_);
	void IsPlaying(bool* isPlay);
	void SetSource(class UObject* Sound);
	void EndCheck(bool* Destroy);
	void Play();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void PermitPlay();
	void StartReuse();
	void SetVoiceFlag(bool bNewFlag);
	void SetSystemVolume(float Volume);
	void AudioFinished();
	void CriAudioFInished();
	void BindFinishEvent();
	void UnbindFinishEvent();
	void Pause();
	void Restart();
	void ExecuteUbergraph_BP_S3SoundPlayer(int EntryPoint);
	void OnAudioFinished__DelegateSignature(class ABP_S3SoundPlayer_C* SoundPlayer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
