#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_CutsceneManager.BP_CutsceneManager_C.SkipToEnd
struct ABP_CutsceneManager_C_SkipToEnd_Params
{
	bool                                               Debug;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishedUnloadCutsceneLevelWithBattleLevelStreaming
struct ABP_CutsceneManager_C_OnFinishedUnloadCutsceneLevelWithBattleLevelStreaming_Params
{
	struct FName                                       InId;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishedLoadCutsceneLevelWithBattleLevelStreaming
struct ABP_CutsceneManager_C_OnFinishedLoadCutsceneLevelWithBattleLevelStreaming_Params
{
	struct FName                                       InId;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.RequestUnloadCurrentCutsceneLevel
struct ABP_CutsceneManager_C_RequestUnloadCurrentCutsceneLevel_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.RequestLoadCurrentCutsceneLevel
struct ABP_CutsceneManager_C_RequestLoadCurrentCutsceneLevel_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugGetIsQTEForceSuccess
struct ABP_CutsceneManager_C_DebugGetIsQTEForceSuccess_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugSetIsQTEForceSuccess
struct ABP_CutsceneManager_C_DebugSetIsQTEForceSuccess_Params
{
	bool                                               bForceSuccess;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateFinishingFinishLoadingScreen
struct ABP_CutsceneManager_C_UpdateFinishingFinishLoadingScreen_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateFinishingWaitLevelStreamingLoadLevel
struct ABP_CutsceneManager_C_UpdateFinishingWaitLevelStreamingLoadLevel_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateFinishingUnloadLevel
struct ABP_CutsceneManager_C_UpdateFinishingUnloadLevel_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.SetupCurrentCutscenePlayerEndFadeInfo
struct ABP_CutsceneManager_C_SetupCurrentCutscenePlayerEndFadeInfo_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.ResumeGameTime
struct ABP_CutsceneManager_C_ResumeGameTime_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.StopGameTime
struct ABP_CutsceneManager_C_StopGameTime_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateStartingFinishLoadingScreen
struct ABP_CutsceneManager_C_UpdateStartingFinishLoadingScreen_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateStartingLoadOther
struct ABP_CutsceneManager_C_UpdateStartingLoadOther_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateStartingLoadLevel
struct ABP_CutsceneManager_C_UpdateStartingLoadLevel_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateStartingFadeOut
struct ABP_CutsceneManager_C_UpdateStartingFadeOut_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.GetRequiredUnloadLevelList
struct ABP_CutsceneManager_C_GetRequiredUnloadLevelList_Params
{
	struct FName                                       CutsceneId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.CheckLoadLevelTarget
struct ABP_CutsceneManager_C_CheckLoadLevelTarget_Params
{
	struct FName                                       InLevelName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.GetLastCutsceneCharaReplaceRotation
struct ABP_CutsceneManager_C_GetLastCutsceneCharaReplaceRotation_Params
{
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.GetLastCutsceneCharaReplaceLocation
struct ABP_CutsceneManager_C_GetLastCutsceneCharaReplaceLocation_Params
{
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.GetLastCutsceneCharaReplaceTransform
struct ABP_CutsceneManager_C_GetLastCutsceneCharaReplaceTransform_Params
{
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.DoesLastCutsceneCharaReplaceInfoExist
struct ABP_CutsceneManager_C_DoesLastCutsceneCharaReplaceInfoExist_Params
{
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateLastCutsceneCharaReplaceInfo
struct ABP_CutsceneManager_C_UpdateLastCutsceneCharaReplaceInfo_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.HideLoadingScreen
struct ABP_CutsceneManager_C_HideLoadingScreen_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.ShowLoadingScreen
struct ABP_CutsceneManager_C_ShowLoadingScreen_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishedLoadLevelAfterPlayerFinished
struct ABP_CutsceneManager_C_OnFinishedLoadLevelAfterPlayerFinished_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.OnCutscenePlayerStartSequence
struct ABP_CutsceneManager_C_OnCutscenePlayerStartSequence_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishLoadingScreen
struct ABP_CutsceneManager_C_OnFinishLoadingScreen_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.SetupFadeData
struct ABP_CutsceneManager_C_SetupFadeData_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.StartCutscene
struct ABP_CutsceneManager_C_StartCutscene_Params
{
	struct FName                                       CutsceneId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseFadeOut;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.IsUsingForceWeather
struct ABP_CutsceneManager_C_IsUsingForceWeather_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.GetRequiredLoadLevelList
struct ABP_CutsceneManager_C_GetRequiredLoadLevelList_Params
{
	struct FName                                       CutsceneId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.IsExistLevelData
struct ABP_CutsceneManager_C_IsExistLevelData_Params
{
	struct FName                                       CutsceneId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.ExecuteOnFinishedUnloadCutsceneLevel
struct ABP_CutsceneManager_C_ExecuteOnFinishedUnloadCutsceneLevel_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugGetUseAnotherShenfa
struct ABP_CutsceneManager_C_DebugGetUseAnotherShenfa_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugGetAnotherShenfaMesh
struct ABP_CutsceneManager_C_DebugGetAnotherShenfaMesh_Params
{
	class USkeletalMesh*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugSetAnotherShenfaMesh
struct ABP_CutsceneManager_C_DebugSetAnotherShenfaMesh_Params
{
	class USkeletalMesh*                               Mesh;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugSetupAnotherShenfa
struct ABP_CutsceneManager_C_DebugSetupAnotherShenfa_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugGetIsUseAnotherShenfa
struct ABP_CutsceneManager_C_DebugGetIsUseAnotherShenfa_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugSetIsUseAnotherShenfa
struct ABP_CutsceneManager_C_DebugSetIsUseAnotherShenfa_Params
{
	bool                                               bUse;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.TmpGetSkyForceTimeOfDayValue
struct ABP_CutsceneManager_C_TmpGetSkyForceTimeOfDayValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.GetForceTimeOfDayValue
struct ABP_CutsceneManager_C_GetForceTimeOfDayValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.IsUsingForceTimeOfDay
struct ABP_CutsceneManager_C_IsUsingForceTimeOfDay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugToggleDispSkeletalMeshInfo
struct ABP_CutsceneManager_C_DebugToggleDispSkeletalMeshInfo_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugIsFormalMesh
struct ABP_CutsceneManager_C_DebugIsFormalMesh_Params
{
	struct FString                                     MeshName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugIsFormalSkeleton
struct ABP_CutsceneManager_C_DebugIsFormalSkeleton_Params
{
	struct FString                                     SkeletonName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.DebugDispSkeletalMeshInfo
struct ABP_CutsceneManager_C_DebugDispSkeletalMeshInfo_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.DisableReplacePlayer
struct ABP_CutsceneManager_C_DisableReplacePlayer_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.UpdateLastCutsceneQTEResult
struct ABP_CutsceneManager_C_UpdateLastCutsceneQTEResult_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.getLevelData
struct ABP_CutsceneManager_C_getLevelData_Params
{
	struct FName                                       CutsceneId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3CutsceneLevelData*                        LevelData;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.ExecuteOnFinishedCutscenePlayer
struct ABP_CutsceneManager_C_ExecuteOnFinishedCutscenePlayer_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.ExecuteOnFinishedLoadCutsceneLevel
struct ABP_CutsceneManager_C_ExecuteOnFinishedLoadCutsceneLevel_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.GetCurrentCutscenePlayer
struct ABP_CutsceneManager_C_GetCurrentCutscenePlayer_Params
{
	class ABP_CutscenePlayer_C*                        CutscenePlayer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.GetCurrentCutscene
struct ABP_CutsceneManager_C_GetCurrentCutscene_Params
{
	struct FName                                       Cutscene;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.IsWaitingFinishFadeOut
struct ABP_CutsceneManager_C_IsWaitingFinishFadeOut_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.IsLoadCompleted
struct ABP_CutsceneManager_C_IsLoadCompleted_Params
{
	struct FName                                       CutsceneId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.FindCutscenePlayer
struct ABP_CutsceneManager_C_FindCutscenePlayer_Params
{
	struct FName                                       CutsceneId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isFound;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ABP_CutscenePlayer_C*                        FoundPlayer;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.SetPlayInfos
struct ABP_CutsceneManager_C_SetPlayInfos_Params
{
	TArray<struct FST_CutscenePlayInfo>                newParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.SetPlayInfo
struct ABP_CutsceneManager_C_SetPlayInfo_Params
{
	struct FName                                       CutsceneId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LoadLevels;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               InvisibleLevels;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.FindPlayInfo
struct ABP_CutsceneManager_C_FindPlayInfo_Params
{
	struct FName                                       CutsceneId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isFound;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.UserConstructionScript
struct ABP_CutsceneManager_C_UserConstructionScript_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.ReceiveTick
struct ABP_CutsceneManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.OnFinishedCutscenePlayer
struct ABP_CutsceneManager_C_OnFinishedCutscenePlayer_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.BindOnFinishedCutscenePlayerEvent
struct ABP_CutsceneManager_C_BindOnFinishedCutscenePlayerEvent_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.UnbindOnFinishedCutscenePlayerEvent
struct ABP_CutsceneManager_C_UnbindOnFinishedCutscenePlayerEvent_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.ReceiveBeginPlay
struct ABP_CutsceneManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_CutsceneManager.BP_CutsceneManager_C.ExecuteUbergraph_BP_CutsceneManager
struct ABP_CutsceneManager_C_ExecuteUbergraph_BP_CutsceneManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
