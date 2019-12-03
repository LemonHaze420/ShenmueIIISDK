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

// BlueprintGeneratedClass BP_SubtitlePlayer.BP_SubtitlePlayer_C
// 0x0088 (0x03B0 - 0x0328)
class ABP_SubtitlePlayer_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUMG_Subtitles_C*                            SubtitlesWidget;                                          // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         VoicePlayer;                                              // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsVoicePlayingFlag;                                       // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayingFlag;                                            // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAutoStopFlag;                                           // 0x034A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x034B(0x0001) MISSED OFFSET
	float                                              CurrentPlayingTime;                                       // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayTimeMin;                                              // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayIndex;                                                // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFemale;                                                 // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FullVoice;                                                // 0x0359(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x035A(0x0002) MISSED OFFSET
	float                                              PLAY_RATE;                                                // 0x035C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEndSubtitle;                                            // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class ABP_S3SoundPlayer_C*>                 SubVoicePlayerList;                                       // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bLeavePreviousVoice;                                      // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0381(0x0007) MISSED OFFSET
	TArray<struct FST_SubtitleDelayVoiceData>          DelayVoiceDataList;                                       // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FAccurateTime                               BackAccurateRealTime;                                     // 0x0398(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FName>                               IgnoreLabels;                                             // 0x03A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SubtitlePlayer.BP_SubtitlePlayer_C");
		return ptr;
	}


	void STATIC_StartTalkClipper(const struct FName& CharaName, struct FString* ClipperData);
	void STATIC_UpdateDelayPlayVoice();
	void RemoveDelayVoiceData(class ABP_S3SoundPlayer_C* InSoundPlayer);
	void STATIC_AddDelayVoiceData(class ABP_S3SoundPlayer_C* InSoundPlayer);
	void STATIC_SetLeavePreviousVoice(bool InLeave);
	void UnbindOnSubVoiceAudioFinished(class ABP_S3SoundPlayer_C* InSoundPlayer);
	void BindOnSubVoiceAudioFinished(class ABP_S3SoundPlayer_C* InSoundPlayer);
	void STATIC_OnSubVoiceAudioFinished(class ABP_S3SoundPlayer_C* InSoundPlayer);
	void STATIC_EndAllVoicePlaying();
	void STATIC_EndSubVoicePlaying(class ABP_S3SoundPlayer_C* InSoundPlayer);
	void STATIC_ConvertCurrentVoicePlayerToSub();
	void STATIC_SetPlayTimeMin(float NewTime);
	void CheckAutoStop(float DeltaTime);
	void STATIC_IsVoicePlaying(bool* Playing);
	void STATIC_SetPlayVolume(float NewVolume);
	void STATIC_GetVoicePlayer(class ABP_S3SoundPlayer_C** VoicePlayer);
	void STATIC_SetCurrentPlayingTime(float CurrentPlayingTime);
	void STATIC_SetIsAutoStopFlag(bool bFlag);
	void STATIC_SetIsPlayingFlag(bool bFlag);
	void STATIC_GetSubtitlesWidget(class UUMG_Subtitles_C** SubtitlesWidget);
	void CalcPlayTimeMin(const struct FString& Text);
	bool STATIC_IsPlaying();
	void STATIC_GetSubtitleSpeakerID(const struct FName& CharaName, struct FName* ID);
	void GetSubtitleChara(const struct FName& CharaName, TEnumAsByte<EN_TalkCharacterType>* Chara);
	void Stop();
	void STATIC_Play(const struct FName& Label, ES3TextPathType Type, const struct FName& CharaName, bool IsAutoStop);
	void EndVoicePlaying();
	void PlayVoice(class UObject* VoiceData);
	void STATIC_CreateVoicePlayer(class USoundAtomCue* Cue);
	void STATIC_SetSubtitlesWidgetVisible(bool IsVisible);
	void STATIC_FinalizeSubtitlesWidget();
	void CreateSubtitlesWidget();
	void STATIC_UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_BindOnVoiceAudioFinished();
	void STATIC_UnbindOnVoiceAudioFinished();
	void STATIC_OnVoiceAudioFinished(class ABP_S3SoundPlayer_C* SoundPlayer);
	void STATIC_sePlay();
	void STATIC_bindSePlay();
	void STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_SubtitlePlayer(int EntryPoint);
	void OnEndSubtitle__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
