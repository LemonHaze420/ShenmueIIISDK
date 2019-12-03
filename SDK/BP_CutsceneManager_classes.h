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


	void STATIC_SkipToEnd(bool DEBUG);
	void OnFinishedUnloadCutsceneLevelWithBattleLevelStreaming(const struct FName& InId);
	void STATIC_OnFinishedLoadCutsceneLevelWithBattleLevelStreaming(const struct FName& InId);
	void STATIC_RequestUnloadCurrentCutsceneLevel();
	void STATIC_RequestLoadCurrentCutsceneLevel();
	bool STATIC_DebugGetIsQTEForceSuccess();
	void DebugSetIsQTEForceSuccess(bool bForceSuccess);
	void UpdateFinishingFinishLoadingScreen();
	void UpdateFinishingWaitLevelStreamingLoadLevel();
	void UpdateFinishingUnloadLevel();
	void SetupCurrentCutscenePlayerEndFadeInfo();
	void ResumeGameTime();
	void STATIC_StopGameTime();
	void STATIC_UpdateStartingFinishLoadingScreen();
	void STATIC_UpdateStartingLoadOther();
	void STATIC_UpdateStartingLoadLevel();
	void UpdateStartingFadeOut();
	TArray<struct FName> GetRequiredUnloadLevelList(const struct FName& CutsceneId);
	bool STATIC_CheckLoadLevelTarget(const struct FName& InLevelName);
	struct FRotator GetLastCutsceneCharaReplaceRotation(const struct FName& CharaName);
	struct FVector GetLastCutsceneCharaReplaceLocation(const struct FName& CharaName);
	struct FTransform GetLastCutsceneCharaReplaceTransform(const struct FName& CharaName);
	bool STATIC_DoesLastCutsceneCharaReplaceInfoExist(const struct FName& CharaName);
	void UpdateLastCutsceneCharaReplaceInfo();
	void STATIC_HideLoadingScreen();
	void STATIC_ShowLoadingScreen();
	void STATIC_OnFinishedLoadLevelAfterPlayerFinished();
	void OnCutscenePlayerStartSequence();
	void STATIC_OnFinishLoadingScreen();
	void SetupFadeData();
	bool StartCutscene(const struct FName& CutsceneId, bool UseFadeOut);
	bool IsUsingForceWeather();
	TArray<struct FName> GetRequiredLoadLevelList(const struct FName& CutsceneId);
	bool IsExistLevelData(const struct FName& CutsceneId);
	void STATIC_ExecuteOnFinishedUnloadCutsceneLevel();
	bool STATIC_DebugGetUseAnotherShenfa();
	class USkeletalMesh* STATIC_DebugGetAnotherShenfaMesh();
	void STATIC_DebugSetAnotherShenfaMesh(class USkeletalMesh* Mesh);
	void STATIC_DebugSetupAnotherShenfa();
	bool STATIC_DebugGetIsUseAnotherShenfa();
	void STATIC_DebugSetIsUseAnotherShenfa(bool bUse);
	float STATIC_TmpGetSkyForceTimeOfDayValue();
	float STATIC_GetForceTimeOfDayValue();
	bool STATIC_IsUsingForceTimeOfDay();
	void STATIC_DebugToggleDispSkeletalMeshInfo();
	bool STATIC_DebugIsFormalMesh(const struct FString& MeshName);
	bool STATIC_DebugIsFormalSkeleton(const struct FString& SkeletonName);
	void STATIC_DebugDispSkeletalMeshInfo();
	void STATIC_DisableReplacePlayer();
	void STATIC_UpdateLastCutsceneQTEResult();
	void STATIC_getLevelData(const struct FName& CutsceneId, class US3CutsceneLevelData** LevelData);
	void ExecuteOnFinishedCutscenePlayer();
	void ExecuteOnFinishedLoadCutsceneLevel();
	void STATIC_GetCurrentCutscenePlayer(class ABP_CutscenePlayer_C** CutscenePlayer);
	void STATIC_GetCurrentCutscene(struct FName* Cutscene);
	bool STATIC_IsWaitingFinishFadeOut();
	bool STATIC_IsLoadCompleted(const struct FName& CutsceneId);
	void STATIC_FindCutscenePlayer(const struct FName& CutsceneId, bool* IsFound, class ABP_CutscenePlayer_C** FoundPlayer);
	void SetPlayInfos(TArray<struct FST_CutscenePlayInfo>* newParam);
	void SetPlayInfo(const struct FName& CutsceneId, TArray<struct FName>* LoadLevels, TArray<struct FName>* InvisibleLevels);
	void STATIC_FindPlayInfo(const struct FName& CutsceneId, bool* IsFound, int* Index);
	void STATIC_UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void STATIC_OnFinishedCutscenePlayer();
	void STATIC_BindOnFinishedCutscenePlayerEvent();
	void STATIC_UnbindOnFinishedCutscenePlayerEvent();
	void STATIC_ReceiveBeginPlay();
	void STATIC_ExecuteUbergraph_BP_CutsceneManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
