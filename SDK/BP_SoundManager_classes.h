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

// BlueprintGeneratedClass BP_SoundManager.BP_SoundManager_C
// 0x0058 (0x0398 - 0x0340)
class ABP_SoundManager_C : public AS3SoundManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UAtomComponent*>                      ComponentArray;                                           // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ABP_S3AtomSoundTimer_C*>              TimerArray;                                               // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_S3AtomSound_C*>                   AtomSoundArray;                                           // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               ForbidPlay;                                               // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugOutput;                                              // 0x0381(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0382(0x0006) MISSED OFFSET
	TArray<class AS3SoundPlayer*>                      SystemPausePlayer;                                        // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SoundManager.BP_SoundManager_C");
		return ptr;
	}


	void STATIC_EndSystemPause();
	void BeginSystemPause();
	void ForbidStopAll();
	void SetTalkVolume_Impl(bool Reset);
	void STATIC_StopWithDestroy(const struct FName& ID, bool* Destroy);
	void EndCutscene_Impl();
	void STATIC_InitCutsceneSetting(class ABP_S3SoundPlayer_C* Player, class USoundAtomCue* Cue, const struct FName& ID, ESequenceSelectorType Type);
	void STATIC_ForceGC();
	void SetSelector(class ABP_S3SoundPlayer_C* Player, ESequenceSelectorType Selector);
	void STATIC_CreateNewPlayer(class USoundAtomCue* Sound, bool AutoDestroy, bool AutoPlay, class ABP_S3SoundPlayer_C** Player);
	void STATIC_DebugPrint();
	void SetSystemVolume(ES3SoundVolume Type);
	void CreatePlayerWithTransform(class USoundAtomCue* Sound, class USoundAttenuation* Attenuation, bool AutoDestroy, bool AutoPlay, const struct FTransform& Location, class ABP_S3SoundPlayer_C** Player);
	void StopAll();
	void STATIC_PlayFromSequencer_Impl(class USoundAtomCue* Cue, const struct FName& SoundId, ESequenceSelectorType Selector, float StartTime, bool OneShot, float Volume, float Pitch);
	void STATIC_PermitPlayAll();
	void GarbageCollection();
	void SetAtomSound(class ABP_S3AtomSound_C* Atom, bool Register);
	void STATIC_StopTimerSound(const struct FName& ID);
	void STATIC_SetTimerSound(class ABP_S3AtomSoundTimer_C* Timer, bool Register);
	void STATIC_CreatePlayer(class USoundAtomCue* Sound, bool AutoDestroy, bool AutoPlay, class ABP_S3SoundPlayer_C** Player);
	void STATIC_SetPlayer(class AS3SoundPlayer* Player, bool Register);
	void STATIC_PlayTimerSound(const struct FName& ID, const struct FS3SoundTimerParam& Param);
	void GetAvailableComponent(class UAtomComponent** Component);
	void Play_Impl(class USoundAtomCue* Cue);
	void STATIC_UserConstructionScript();
	void ReceiveBeginPlay();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_Play(class USoundAtomCue* Cue);
	void STATIC_PlayFromSequencer(class USoundAtomCue* Cue, const struct FName& SoundId, ESequenceSelectorType Selector, bool bOneShot, float StartTime, float Volume, float Pitch);
	void STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void STATIC_ChangeVolume(ES3SoundVolume Type);
	void StartFadeIn();
	void EndSequenser();
	void STATIC_SetTalkVolume(bool bReset);
	void BindFade();
	void STATIC_ChangePlayer(class APlayerController* PlayerController);
	void FinishFadeOut();
	void BeginPause();
	void EndPause();
	void STATIC_SetEnableFadePause(bool bEnable);
	void ExecuteUbergraph_BP_SoundManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
