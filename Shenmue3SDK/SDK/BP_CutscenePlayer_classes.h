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

// BlueprintGeneratedClass BP_CutscenePlayer.BP_CutscenePlayer_C
// 0x0350 (0x0748 - 0x03F8)
class ABP_CutscenePlayer_C : public AS3CutscenePlayer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsPlayingFlag;                                            // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFinishingFlag;                                          // 0x0409(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseStartFade;                                            // 0x040A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseEndFade;                                              // 0x040B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartFadeOutTime;                                         // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartFadeInTime;                                          // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                StartFadeColor;                                           // 0x0414(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bUseEndFadeIn;                                            // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	float                                              EndFadeOutTime;                                           // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndFadeInTime;                                            // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                EndFadeColor;                                             // 0x0430(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bUseEndResumeCamera;                                      // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	float                                              EndResumeCameraTime;                                      // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEndSequence;                                            // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<float>                                      DebugCutStartTiming;                                      // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              EndResumeCameraBlendExp;                                  // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsCameraResumedFlag;                                      // 0x046C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsExecutedEndFadeOutFlag;                                 // 0x046D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x046E(0x0002) MISSED OFFSET
	struct FST_CutsceneReplaceActorInfo                PlayerReplaceInfo;                                        // 0x0470(0x0020) (Edit, BlueprintVisible)
	TArray<struct FST_CutsceneReplaceActorInfo>        OthersReplaceInfo;                                        // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsRequestedReplacePlayer;                                 // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayerReplacedFlag;                                     // 0x04A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x04A2(0x0006) MISSED OFFSET
	TArray<struct FST_CutsceneProgrammedAnimInfo>      ProgrammedEyeBlinkAnimInfos;                              // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FST_CutsceneProgrammedAnimInfo>      ProgrammedClipperAnimInfos;                               // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnStartSequence;                                          // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FName>                               ForceOnTargetLightTags;                                   // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AS3TimeSwitchPointLight*>             ForceOnTargetPointLights;                                 // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AS3TimeSwitchSpotLight*>              ForceOnTargetSpotLights;                                  // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsRestoredForceOnTargetLightsFlag;                        // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBGMFade;                                              // 0x0509(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x050A(0x0002) MISSED OFFSET
	float                                              BGMFadeOut;                                               // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BGMFadeIn;                                                // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0514(0x0004) MISSED OFFSET
	TArray<struct FName>                               PlayEndResetTarget;                                       // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FST_CutscenePlayEndResetData>        PlayEndResetDataList;                                     // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bUseHideNPC;                                              // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0539(0x0007) MISSED OFFSET
	class AActor*                                      HideNPCCenterActor;                                       // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              HideNPCRadius;                                            // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x054C(0x0004) MISSED OFFSET
	class ABP_SubtitlePlayer_C*                        SubtitlePlayer;                                           // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayedLevelSequenceFlag;                                // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOnFinishedFlag;                                         // 0x0559(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x055A(0x0006) MISSED OFFSET
	class UClass*                                      CameraShake;                                              // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      HiddenActorOnReplacePlayer;                               // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<struct FName>                               HideTargetActorTags;                                      // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              SpecifiedHideTargetActorList;                             // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bUseForceWeather;                                         // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWeatherType                                       ForceWeather;                                             // 0x0591(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseForceTimeOfDay;                                       // 0x0592(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x0593(0x0001) MISSED OFFSET
	float                                              ForceTimeOfDay;                                           // 0x0594(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class US3CutsceneSubtitleDataAsset*                SubtitleDataAsset;                                        // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDisabledReplacePlayerFlag;                              // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x05A1(0x0007) MISSED OFFSET
	class ABP_CutsceneForceTimeOfDayHolder_C*          ForceTimeOfDayHolder;                                     // 0x05A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class AS3CharaLightingSequencerActor*>      SpawnedCharaLightingActors;                               // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bTmpUseSkyForceTimeOfDay;                                 // 0x05C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x05C1(0x0003) MISSED OFFSET
	float                                              TmpSkyForceTimeOfDay;                                     // 0x05C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDispWorkInProgress;                                 // 0x05C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x05C9(0x0007) MISSED OFFSET
	class UUserWidget*                                 DebugWorkInProgressWidget;                                // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_ActorVisibleControl_C*                   HideNPCVisibleControl;                                    // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class US3PostProcessSettingsDataAsset*             PostProcessSettingsData;                                  // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<class UCameraComponent*, struct FPostProcessSettings> CameraDefaultPostProcessSettingsMap;                      // 0x05E8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsEnabledPostProcessFlag;                                 // 0x0638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseEventForceWeather;                                    // 0x0639(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWeatherType                                       EventForceWeatherValue;                                   // 0x063A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x5];                                       // 0x063B(0x0005) MISSED OFFSET
	struct FName                                       SpecifiedPostProcessTargetActorTag;                       // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class US3PostProcessSettingsDataAsset*             SpecifiedPostProcessSettingsData;                         // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseForceCloudDensity;                                    // 0x0650(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0651(0x0003) MISSED OFFSET
	float                                              ForceCloudDensity;                                        // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseForceMoonPosition;                                    // 0x0658(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0659(0x0003) MISSED OFFSET
	float                                              ForceMoonYawAngle;                                        // 0x065C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceMoonOrbit;                                           // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceMoonHeight;                                          // 0x0664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseEventForceMoonPosition;                               // 0x0668(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0669(0x0003) MISSED OFFSET
	float                                              EventForceMoonYawAngle;                                   // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EventForceMoonOrbit;                                      // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EventForceMoonHeight;                                     // 0x0674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ABP_CutsceneSkeletalMeshActor_C*>     ChangingClothesCharaList;                                 // 0x0678(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_SecondarySubtitlePlayer_C*               SecondarySubtitlePlayer;                                  // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_SensorGimmickLightTargetActor_C*         SpawnedSensorGimmickLightTargetActor;                     // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FST_CutsceneCharaMaterialData>       CharaMaterialDataList;                                    // 0x0698(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       ForceFeedbackTag;                                         // 0x06A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EEarringParttern                                   EearringPattern;                                          // 0x06B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableEarring;                                           // 0x06B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSetupTextureForceResidentFlag;                          // 0x06B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTextureStreamingCompletedFlag;                          // 0x06B3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x06B4(0x0004) MISSED OFFSET
	TArray<class USkeletalMeshComponent*>              TextureForceResidentTargetList;                           // 0x06B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       DisableTickTargetActorTag;                                // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               DisableTickTargetActorLevelNameList;                      // 0x06D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              DisableTickTargetActorList;                               // 0x06E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              HideNPCAdditionalAreaActorList;                           // 0x06F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class AStaticMeshActor*>                    ForceMipStreamingActors;                                  // 0x0700(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bFadeMuteSE;                                              // 0x0710(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x0711(0x0007) MISSED OFFSET
	struct FST_CutsceneForceFeedbackEventParameter     DummyForceFeedback;                                       // 0x0718(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_CutsceneForceMipStreaming               DummyForceMipStreaming;                                   // 0x0728(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_CutsceneSecondarySubtitleParameter      DummySecondarySubtitle;                                   // 0x0740(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CutscenePlayer.BP_CutscenePlayer_C");
		return ptr;
	}


	void CanSkip(bool* CAN);
	void VisibleWidget(class UClass* WidgetClass, bool Visible);
	bool IsReadyToPlayFirstSequence();
	void PlayFirstSequence();
	bool IsSubtitleUsedInCurrentVoiceLanguage(const struct FName& InTextLabel);
	void RestoreDisableTargetActorTick();
	void DisableTargetActorTick();
	void SetupDisableTickTargetActor();
	void UpdateLoadOther();
	void UpdateTextureForceResidentTargetStatus();
	void RestoreTextureForceResident();
	void SetupTextureForceResident();
	void ApplyEarringSetting();
	void SetupCharaMaterial();
	void SetEndFadeInfo(bool InIsUseEndFadeOut, float InEndFadeOutTime, const struct FLinearColor& InEndFadeColor);
	void FinalizeSensorGimmickLightTargetActor();
	void InitializeSensorGimmickLightTargetActor();
	void StopSecondarySubtitle();
	void ShowSecondarySubtitle(const struct FName& TextLabel);
	void FinalizeSecondarySubtitlePlayer();
	void CreateSecondarySubtitlePlayer();
	void OnCharaClothesChanged(const TScriptInterface<class US3ClothInterface>& InInterface, const struct FName& InCharaName);
	bool IsChangingClothes();
	bool IsLoadingOther();
	void RequestLoadOther();
	struct FTransform GetCharaReplaceActorTransform(const struct FName& CharaName);
	TArray<struct FName> GetReplaceableCharaNameList();
	void GetOthersReplaceActorInfo(int Index, struct FVector* Location, struct FRotator* Rotation, bool* Success);
	bool TmpIsEnabledChangeClothes(class ABP_CutsceneSkeletalMeshActor_C* InActor);
	void SetupChangeClothes();
	void FinalizeSky();
	void SetupSky();
	void DebugDispOtherInfo();
	bool IsSpecifiedPostProcessTarget(class UObject* InObject);
	void TmpGetReplacePlayerLocationAndRotation(struct FVector* Location, struct FRotator* Rotation);
	bool IsEnabledPostProcess();
	class UCameraComponent* GetCameraComponentFromActor(class AActor* InActor);
	void FinishPostProcess();
	void InitPostProcess();
	void ResetAllCameraPostProcess();
	void ApplyPostProcessToCamera(class UObject* CameraObject);
	class UCameraComponent* GetCameraComponentFromObject(class UObject* InObject);
	void GetStartFadeInfo(float* FadeOutTime, struct FLinearColor* FadeColor);
	bool GetIsFinishingFlag();
	void UpdateSubtitleStaticMeshActorText();
	void ChangedCamera_Impl(class UObject* CameraObject);
	void FinalizeHideNPC();
	void InitializeHideNPC();
	void DebugFinalizeWorkInProgress();
	void DebugInitializeWorkInProgress();
	void GetFinishingFlag(bool* flag);
	float TmpGetSkyForceTimeOfDayValue();
	void GetCharaLightingActors(TArray<class AS3CharaLightingSequencerActor*>* SpawnedCharaLightingActors);
	void FinalizeCharaLighting();
	void InitializeCharaLighting();
	TArray<class AActor*> GetPossessableActors();
	void MovePlayerToReplaceActor();
	void DisableReplacePlayer();
	void ShowSubtitleFromCharaIndex(const struct FName& CharaName, int Index);
	float GetForceTimeOfDayValue();
	bool IsUseForceTimeOfDay();
	bool IsUseForceWeather();
	void SetupSpecifiedHideTargetActors();
	bool IsSpecifiedHideTargetActor(class AActor* Candidate);
	void RestoreSpecifiedHideTargetActors();
	void HideSpecifiedHideTargetActors();
	void TmpGetNewReplaceActorRotation(const struct FST_CutsceneReplaceActorInfo& ReplaceActorInfo, struct FRotator* Rotation);
	void TmpIsUseOldReplaceOthers(class AActor* SourceActor, bool* IsUseOld);
	void TmpNewReplacePlayerLocationAndRotation(struct FVector* Location, struct FRotator* Rotation);
	void TmpIsUseOldReplacePlayer(bool* IsUseOld);
	bool IsHidePlayerInPlayingSequencer();
	bool IsEnabledGlobalStateChange();
	void ForceResetCloth();
	bool IsPlayedLevelSequence();
	bool IsShowingSubtitle();
	void ReleaseCutsceneSkeletalMeshActorAttachment();
	void SetCutsceneSkeletalMeshActorAttachment();
	void FinalizeSubtitlePlayer();
	void CreateSubtitlePlayer();
	void PlayEndReset();
	void AddPlayEndResetDataIfHasTag(class AActor* TargetActor);
	void InitPlayEndResetData();
	void ForceOnLights();
	void RestoreForceOnTargetLights();
	bool IsForceOnTargetLight(class AActor* Candidate);
	void SetupForceOnTargetLights();
	void DebugSkipToEnd();
	bool IsPlayingLevelSequence();
	void EndSequence();
	void PlaySequence();
	void SetPossessableActorsActive(bool IsActive);
	void CheckRequiredUpdateProgrammedAnim(float InPos, const struct FST_CutsceneProgrammedAnimInfo& Info, bool* IsRequiredUpdate, bool* isInRange, class US3AnimCutsceneInstance** AnimInstance);
	void UpdateProgrammedAnimState();
	void SetProgrammedAnimReferenced(int Index, bool NewReferenced, TArray<struct FST_CutsceneProgrammedAnimInfo>* Array);
	void ResetProgrammedAnim();
	void UpdateReplacePlayer();
	void IsValidPlayerReplaceActor(bool* IsValid);
	void UpdateReplaceActor();
	void GetOthersReplaceActorRotation(int Index, struct FRotator* Rotation);
	void GetReplaceActorRotation(const struct FST_CutsceneReplaceActorInfo& ReplaceActorInfo, struct FRotator* Rotation);
	void GetOthersReplaceActorLocation(int Index, struct FVector* Location);
	void GetReplaceActorLocation(const struct FST_CutsceneReplaceActorInfo& ReplaceActorInfo, struct FVector* Location);
	void StartResumeCamera(float BlendTime);
	void IsShouldResumeCamera(bool* bShouldResume);
	void GetSequenceRemainingTIme(float* RemainingTime);
	void UpdateEndFadeOut();
	void InitSequencePlay();
	void IsUseEndFadeIn(bool* IsUseFade);
	void IsUseStartFadeOut(bool* IsUseFade);
	void InitCutscene();
	void DebugUpdateHideSubtitle();
	void DebugSwitchHideSubtitle();
	bool IsFinishedLevelSequence();
	void ExitCutscene();
	void GetLength(float* Length);
	void ShowSubtitle(const struct FName& TextLabel, const struct FName& CharaName);
	void SetPlaybackPosition(float NewPosition);
	void GetPlaybackPosition(float* PlaybackPosition);
	void IsPlaying(bool* IsPlaying);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void Event_ShowSubtitle(const struct FName& TextLabel, const struct FName& CharacterName);
	void UpdateResumeCamera();
	void Event_ReplacePlayer();
	void BindOnFinishedLevelSequencePlayer();
	void UnbindOnFinishedLevelSequencePlayer();
	void OnFinishedLevelSequencePlayer(class ULevelSequencePlayer* LevelSequencePlayer);
	void Event_PlayCameraShake();
	void Event_StopCameraShake();
	void Event_ForceResetCloth();
	void Event_ShowSubtitleFromCharaIndex(const struct FName& CharacterName, int Index);
	void StartCutscene();
	void EndCutscene();
	void ChangedCamera(class UObject* CameraObject);
	void Event_ForceWeather();
	void Event_ForceMoonPosition();
	void Event_ShowSecondarySubtitle(const struct FName& TextLabel);
	void Event_StopSecondarySubtitle();
	void Event_PlayForceFeedback(const struct FName& ForceFeedbackID, bool bIgnoreTimeDilation);
	void Event_ForceMipStreaming(const struct FName& LevelName, const struct FName& ObjectName, bool Enable);
	void ExecuteUbergraph_BP_CutscenePlayer(int EntryPoint);
	void OnStartSequence__DelegateSignature();
	void OnEndSequence__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
