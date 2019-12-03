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


	void STATIC_PauseLevelBGM(bool bRequest, class UObject* Requester);
	bool STATIC_ShouldBePaused();
	bool STATIC_GetHighestPriority(EBgmPriority* OutPriority);
	void STATIC_StopForceBGM();
	void STATIC_IsForceBGM(bool* Force);
	void STATIC_PlayForceBGM(class USoundAtomCue* Cue);
	void STATIC_PauseSimple();
	bool STATIC_Stop(const struct FName& ID);
	void STATIC_ResetVolume(class AActor* Executor);
	void GetCurrentVolume(float* Volume);
	void SetVolume(class AActor* Executor, float Volume);
	void STATIC_SetSystemVolume(float Volume);
	void StopWithDestroy(const struct FName& ID);
	void STATIC_RestartFromCutscene();
	void STATIC_RestartSimple();
	void STATIC_CanUpdatePlay(class ABP_S3BgmPlayer_C* Player, bool Pause, bool* CAN);
	void PauseFromCutscene();
	void STATIC_GetPlayingBgm(class USoundAtomCue** Sound);
	class AS3BgmPlayer* STATIC_PlayFromCue(class UObject* Cue, const struct FName& ID, EBgmPriority Priority, bool AutoDestroy, float StartTime);
	void STATIC_StopCutsceneBGM();
	void STATIC_GetPlayerByPriority(EBgmPriority Priority, class ABP_S3BgmPlayer_C** Player);
	void STATIC_PlayFromSequencer_Impl(class USoundAtomCue* Cue, const struct FName& SoundId, float StartTime, float Volume, float Pitch);
	void STATIC_GetPlayerById(const struct FName& ID, class ABP_S3BgmPlayer_C** Player, int* Index);
	void STATIC_PlayFromInfo(const struct FS3BgmAreaSourceInfo& SourceInfo);
	void STATIC_AddPlayer(class ABP_S3BgmPlayer_C* Player, float StartTime);
	void STATIC_UpdateBGM();
	void STATIC_ChangeBgm(class UObject* Sound, const struct FName& ID);
	void UserConstructionScript();
	void STATIC_ReceiveBeginPlay();
	void STATIC_OnBeginTouchArea(class AS3BgmArea* AreaActor);
	void STATIC_OnEndTouchArea(class AS3BgmArea* AreaActor);
	void STATIC_OnAreaBgmChanged(class AS3BgmArea* area);
	void PlayFromPlayer(class AS3BgmPlayer* BgmPlayer, float StartTime);
	void STATIC_Pause();
	void STATIC_Restart();
	void STATIC_PlayFromSequencer(class USoundAtomCue* Cue, const struct FName& SoundId, float StartTime, float Volume, float Pitch);
	void STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_StartFadeIn();
	void STATIC_StartFadeOut();
	void STATIC_SwitchController(class APlayerController* PlayerController);
	void STATIC_ShowEyecatch();
	void STATIC_HideEyecatch();
	void STATIC_ChangeSystemVolume(ES3SoundVolume Type);
	void STATIC_SetTalkVolume(bool bReset);
	void STATIC_ExecuteUbergraph_BP_S3BgmManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
