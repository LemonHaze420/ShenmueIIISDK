#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_S3BgmManager.BP_S3BgmManager_C
// 0x0048 (0x0378 - 0x0330)
class ABP_S3BgmManager_C : public AS3BgmManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_S3BgmPlayer_C*                           CurrentBgmPlayer;                                         // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_S3BgmPlayer_C*>                   PlayerArray;                                              // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               CutscenePause;                                            // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FadePause;                                                // 0x0359(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EyecatchPause;                                            // 0x035A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ManualPause;                                              // 0x035B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	TArray<struct FST_BgmVolumeInfo>                   VolumeActors;                                             // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class URequestCounter_C*                           LevelBGMPauseRequesters;                                  // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3BgmManager.BP_S3BgmManager_C");
		return ptr;
	}


	void PauseLevelBGM(bool bRequest, class UObject* Requester);
	bool ShouldBePaused();
	bool GetHighestPriority(EBgmPriority* OutPriority);
	void StopForceBGM();
	void IsForceBGM(bool* Force);
	void PlayForceBGM(class USoundAtomCue* Cue);
	void PauseSimple();
	bool Stop(const struct FName& ID);
	void ResetVolume(class AActor* Executor);
	void GetCurrentVolume(float* Volume);
	void SetVolume(class AActor* Executor, float Volume);
	void SetSystemVolume(float Volume);
	void StopWithDestroy(const struct FName& ID);
	void RestartFromCutscene();
	void RestartSimple();
	void CanUpdatePlay(class ABP_S3BgmPlayer_C* Player, bool Pause, bool* CAN);
	void PauseFromCutscene();
	void GetPlayingBgm(class USoundAtomCue** Sound);
	class AS3BgmPlayer* PlayFromCue(class UObject* Cue, const struct FName& ID, EBgmPriority Priority, bool AutoDestroy, float StartTime);
	void StopCutsceneBGM();
	void GetPlayerByPriority(EBgmPriority Priority, class ABP_S3BgmPlayer_C** Player);
	void PlayFromSequencer_Impl(class USoundAtomCue* Cue, const struct FName& SoundId, float StartTime, float Volume, float Pitch);
	void GetPlayerById(const struct FName& ID, class ABP_S3BgmPlayer_C** Player, int* Index);
	void PlayFromInfo(const struct FS3BgmAreaSourceInfo& SourceInfo);
	void AddPlayer(class ABP_S3BgmPlayer_C* Player, float StartTime);
	void UpdateBGM();
	void ChangeBgm(class UObject* Sound, const struct FName& ID);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnBeginTouchArea(class AS3BgmArea* AreaActor);
	void OnEndTouchArea(class AS3BgmArea* AreaActor);
	void OnAreaBgmChanged(class AS3BgmArea* area);
	void PlayFromPlayer(class AS3BgmPlayer* BgmPlayer, float StartTime);
	void Pause();
	void Restart();
	void PlayFromSequencer(class USoundAtomCue* Cue, const struct FName& SoundId, float StartTime, float Volume, float Pitch);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void StartFadeIn();
	void StartFadeOut();
	void SwitchController(class APlayerController* PlayerController);
	void ShowEyecatch();
	void HideEyecatch();
	void ChangeSystemVolume(ES3SoundVolume Type);
	void SetTalkVolume(bool bReset);
	void ExecuteUbergraph_BP_S3BgmManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
