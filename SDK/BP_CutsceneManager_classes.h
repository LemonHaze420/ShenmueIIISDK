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

// BlueprintGeneratedClass BP_CutsceneManager.BP_CutsceneManager_C
// 0x00EB (0x049B - 0x03B0)
class ABP_CutsceneManager_C : public AS3CutsceneManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FST_CutscenePlayInfo>                PlayInfoList;                                             // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_MoveCutsceneRoot_C*                      MoveCutsceneRoot;                                         // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class US3CutsceneLevelDataAsset*                   LevelDataAsset;                                           // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDisabledReplacePlayerFlag;                              // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugIsDispSkeltalMeshInfo;                               // 0x03E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugIsUseAnotherShenfa;                                  // 0x03E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x03E3(0x0005) MISSED OFFSET
	class USkeletalMesh*                               DebugAnotherShenfaMesh;                                   // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWBP_DebugCutsceneID_C*                      DebugCutsceneIDWidget;                                    // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsStopGameTimeFlag;                                       // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	struct FST_CutsceneFadeData                        CurrentFadeData;                                          // 0x03FC(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsShowLoadingScreenFlag;                                  // 0x043C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsWaitingFinishLoadingScreenFlag;                         // 0x043D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsWaitingLoadLevelAfterPlayerFinishedFlag;                // 0x043E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x043F(0x0001) MISSED OFFSET
	TMap<struct FName, struct FTransform>              LastCutsceneCharaReplaceTransformMap;                     // 0x0440(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class US3CutsceneLevelData*                        CurrentCutsceneLevelData;                                 // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_CutsceneManagerState>               CurrentState;                                             // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugIsQTEForceSuccess;                                   // 0x0499(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsUseBattleLevelStreamingFlag;                            // 0x049A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CutsceneManager.BP_CutsceneManager_C");
		return ptr;
	}


	void SkipToEnd(bool Debug);
	void OnFinishedUnloadCutsceneLevelWithBattleLevelStreaming(const struct FName& InId);
	void OnFinishedLoadCutsceneLevelWithBattleLevelStreaming(const struct FName& InId);
	void RequestUnloadCurrentCutsceneLevel();
	void RequestLoadCurrentCutsceneLevel();
	bool DebugGetIsQTEForceSuccess();
	void DebugSetIsQTEForceSuccess(bool bForceSuccess);
	void UpdateFinishingFinishLoadingScreen();
	void UpdateFinishingWaitLevelStreamingLoadLevel();
	void UpdateFinishingUnloadLevel();
	void SetupCurrentCutscenePlayerEndFadeInfo();
	void ResumeGameTime();
	void StopGameTime();
	void UpdateStartingFinishLoadingScreen();
	void UpdateStartingLoadOther();
	void UpdateStartingLoadLevel();
	void UpdateStartingFadeOut();
	TArray<struct FName> GetRequiredUnloadLevelList(const struct FName& CutsceneId);
	bool CheckLoadLevelTarget(const struct FName& InLevelName);
	struct FRotator GetLastCutsceneCharaReplaceRotation(const struct FName& CharaName);
	struct FVector GetLastCutsceneCharaReplaceLocation(const struct FName& CharaName);
	struct FTransform GetLastCutsceneCharaReplaceTransform(const struct FName& CharaName);
	bool DoesLastCutsceneCharaReplaceInfoExist(const struct FName& CharaName);
	void UpdateLastCutsceneCharaReplaceInfo();
	void HideLoadingScreen();
	void ShowLoadingScreen();
	void OnFinishedLoadLevelAfterPlayerFinished();
	void OnCutscenePlayerStartSequence();
	void OnFinishLoadingScreen();
	void SetupFadeData();
	bool StartCutscene(const struct FName& CutsceneId, bool UseFadeOut);
	bool IsUsingForceWeather();
	TArray<struct FName> GetRequiredLoadLevelList(const struct FName& CutsceneId);
	bool IsExistLevelData(const struct FName& CutsceneId);
	void ExecuteOnFinishedUnloadCutsceneLevel();
	bool DebugGetUseAnotherShenfa();
	class USkeletalMesh* DebugGetAnotherShenfaMesh();
	void DebugSetAnotherShenfaMesh(class USkeletalMesh* Mesh);
	void DebugSetupAnotherShenfa();
	bool DebugGetIsUseAnotherShenfa();
	void DebugSetIsUseAnotherShenfa(bool bUse);
	float TmpGetSkyForceTimeOfDayValue();
	float GetForceTimeOfDayValue();
	bool IsUsingForceTimeOfDay();
	void DebugToggleDispSkeletalMeshInfo();
	bool DebugIsFormalMesh(const struct FString& MeshName);
	bool DebugIsFormalSkeleton(const struct FString& SkeletonName);
	void DebugDispSkeletalMeshInfo();
	void DisableReplacePlayer();
	void UpdateLastCutsceneQTEResult();
	void getLevelData(const struct FName& CutsceneId, class US3CutsceneLevelData** LevelData);
	void ExecuteOnFinishedCutscenePlayer();
	void ExecuteOnFinishedLoadCutsceneLevel();
	void GetCurrentCutscenePlayer(class ABP_CutscenePlayer_C** CutscenePlayer);
	void GetCurrentCutscene(struct FName* Cutscene);
	bool IsWaitingFinishFadeOut();
	bool IsLoadCompleted(const struct FName& CutsceneId);
	void FindCutscenePlayer(const struct FName& CutsceneId, bool* isFound, class ABP_CutscenePlayer_C** FoundPlayer);
	void SetPlayInfos(TArray<struct FST_CutscenePlayInfo>* newParam);
	void SetPlayInfo(const struct FName& CutsceneId, TArray<struct FName>* LoadLevels, TArray<struct FName>* InvisibleLevels);
	void FindPlayInfo(const struct FName& CutsceneId, bool* isFound, int* Index);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void OnFinishedCutscenePlayer();
	void BindOnFinishedCutscenePlayerEvent();
	void UnbindOnFinishedCutscenePlayerEvent();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CutsceneManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
