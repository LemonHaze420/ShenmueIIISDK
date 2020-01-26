#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.CanSkip
struct ABP_CutscenePlayer_C_CanSkip_Params
{
	bool                                               CAN;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.VisibleWidget
struct ABP_CutscenePlayer_C_VisibleWidget_Params
{
	class UClass*                                      WidgetClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsReadyToPlayFirstSequence
struct ABP_CutscenePlayer_C_IsReadyToPlayFirstSequence_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.PlayFirstSequence
struct ABP_CutscenePlayer_C_PlayFirstSequence_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsSubtitleUsedInCurrentVoiceLanguage
struct ABP_CutscenePlayer_C_IsSubtitleUsedInCurrentVoiceLanguage_Params
{
	struct FName                                       InTextLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.RestoreDisableTargetActorTick
struct ABP_CutscenePlayer_C_RestoreDisableTargetActorTick_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.DisableTargetActorTick
struct ABP_CutscenePlayer_C_DisableTargetActorTick_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetupDisableTickTargetActor
struct ABP_CutscenePlayer_C_SetupDisableTickTargetActor_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateLoadOther
struct ABP_CutscenePlayer_C_UpdateLoadOther_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateTextureForceResidentTargetStatus
struct ABP_CutscenePlayer_C_UpdateTextureForceResidentTargetStatus_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.RestoreTextureForceResident
struct ABP_CutscenePlayer_C_RestoreTextureForceResident_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetupTextureForceResident
struct ABP_CutscenePlayer_C_SetupTextureForceResident_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ApplyEarringSetting
struct ABP_CutscenePlayer_C_ApplyEarringSetting_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetupCharaMaterial
struct ABP_CutscenePlayer_C_SetupCharaMaterial_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetEndFadeInfo
struct ABP_CutscenePlayer_C_SetEndFadeInfo_Params
{
	bool                                               InIsUseEndFadeOut;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InEndFadeOutTime;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InEndFadeColor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.FinalizeSensorGimmickLightTargetActor
struct ABP_CutscenePlayer_C_FinalizeSensorGimmickLightTargetActor_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.InitializeSensorGimmickLightTargetActor
struct ABP_CutscenePlayer_C_InitializeSensorGimmickLightTargetActor_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.StopSecondarySubtitle
struct ABP_CutscenePlayer_C_StopSecondarySubtitle_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ShowSecondarySubtitle
struct ABP_CutscenePlayer_C_ShowSecondarySubtitle_Params
{
	struct FName                                       TextLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.FinalizeSecondarySubtitlePlayer
struct ABP_CutscenePlayer_C_FinalizeSecondarySubtitlePlayer_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.CreateSecondarySubtitlePlayer
struct ABP_CutscenePlayer_C_CreateSecondarySubtitlePlayer_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.OnCharaClothesChanged
struct ABP_CutscenePlayer_C_OnCharaClothesChanged_Params
{
	TScriptInterface<class US3ClothInterface>          InInterface;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InCharaName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsChangingClothes
struct ABP_CutscenePlayer_C_IsChangingClothes_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsLoadingOther
struct ABP_CutscenePlayer_C_IsLoadingOther_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.RequestLoadOther
struct ABP_CutscenePlayer_C_RequestLoadOther_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetCharaReplaceActorTransform
struct ABP_CutscenePlayer_C_GetCharaReplaceActorTransform_Params
{
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetReplaceableCharaNameList
struct ABP_CutscenePlayer_C_GetReplaceableCharaNameList_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetOthersReplaceActorInfo
struct ABP_CutscenePlayer_C_GetOthersReplaceActorInfo_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.TmpIsEnabledChangeClothes
struct ABP_CutscenePlayer_C_TmpIsEnabledChangeClothes_Params
{
	class ABP_CutsceneSkeletalMeshActor_C*             InActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetupChangeClothes
struct ABP_CutscenePlayer_C_SetupChangeClothes_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.FinalizeSky
struct ABP_CutscenePlayer_C_FinalizeSky_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetupSky
struct ABP_CutscenePlayer_C_SetupSky_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.DebugDispOtherInfo
struct ABP_CutscenePlayer_C_DebugDispOtherInfo_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsSpecifiedPostProcessTarget
struct ABP_CutscenePlayer_C_IsSpecifiedPostProcessTarget_Params
{
	class UObject*                                     InObject;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.TmpGetReplacePlayerLocationAndRotation
struct ABP_CutscenePlayer_C_TmpGetReplacePlayerLocationAndRotation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsEnabledPostProcess
struct ABP_CutscenePlayer_C_IsEnabledPostProcess_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetCameraComponentFromActor
struct ABP_CutscenePlayer_C_GetCameraComponentFromActor_Params
{
	class AActor*                                      InActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.FinishPostProcess
struct ABP_CutscenePlayer_C_FinishPostProcess_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.InitPostProcess
struct ABP_CutscenePlayer_C_InitPostProcess_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ResetAllCameraPostProcess
struct ABP_CutscenePlayer_C_ResetAllCameraPostProcess_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ApplyPostProcessToCamera
struct ABP_CutscenePlayer_C_ApplyPostProcessToCamera_Params
{
	class UObject*                                     CameraObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetCameraComponentFromObject
struct ABP_CutscenePlayer_C_GetCameraComponentFromObject_Params
{
	class UObject*                                     InObject;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetStartFadeInfo
struct ABP_CutscenePlayer_C_GetStartFadeInfo_Params
{
	float                                              FadeOutTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FadeColor;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetIsFinishingFlag
struct ABP_CutscenePlayer_C_GetIsFinishingFlag_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateSubtitleStaticMeshActorText
struct ABP_CutscenePlayer_C_UpdateSubtitleStaticMeshActorText_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ChangedCamera_Impl
struct ABP_CutscenePlayer_C_ChangedCamera_Impl_Params
{
	class UObject*                                     CameraObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.FinalizeHideNPC
struct ABP_CutscenePlayer_C_FinalizeHideNPC_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.InitializeHideNPC
struct ABP_CutscenePlayer_C_InitializeHideNPC_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.DebugFinalizeWorkInProgress
struct ABP_CutscenePlayer_C_DebugFinalizeWorkInProgress_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.DebugInitializeWorkInProgress
struct ABP_CutscenePlayer_C_DebugInitializeWorkInProgress_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetFinishingFlag
struct ABP_CutscenePlayer_C_GetFinishingFlag_Params
{
	bool                                               flag;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.TmpGetSkyForceTimeOfDayValue
struct ABP_CutscenePlayer_C_TmpGetSkyForceTimeOfDayValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetCharaLightingActors
struct ABP_CutscenePlayer_C_GetCharaLightingActors_Params
{
	TArray<class AS3CharaLightingSequencerActor*>      SpawnedCharaLightingActors;                               // (Parm, OutParm, ZeroConstructor)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.FinalizeCharaLighting
struct ABP_CutscenePlayer_C_FinalizeCharaLighting_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.InitializeCharaLighting
struct ABP_CutscenePlayer_C_InitializeCharaLighting_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetPossessableActors
struct ABP_CutscenePlayer_C_GetPossessableActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.MovePlayerToReplaceActor
struct ABP_CutscenePlayer_C_MovePlayerToReplaceActor_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.DisableReplacePlayer
struct ABP_CutscenePlayer_C_DisableReplacePlayer_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ShowSubtitleFromCharaIndex
struct ABP_CutscenePlayer_C_ShowSubtitleFromCharaIndex_Params
{
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetForceTimeOfDayValue
struct ABP_CutscenePlayer_C_GetForceTimeOfDayValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsUseForceTimeOfDay
struct ABP_CutscenePlayer_C_IsUseForceTimeOfDay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsUseForceWeather
struct ABP_CutscenePlayer_C_IsUseForceWeather_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetupSpecifiedHideTargetActors
struct ABP_CutscenePlayer_C_SetupSpecifiedHideTargetActors_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsSpecifiedHideTargetActor
struct ABP_CutscenePlayer_C_IsSpecifiedHideTargetActor_Params
{
	class AActor*                                      Candidate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.RestoreSpecifiedHideTargetActors
struct ABP_CutscenePlayer_C_RestoreSpecifiedHideTargetActors_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.HideSpecifiedHideTargetActors
struct ABP_CutscenePlayer_C_HideSpecifiedHideTargetActors_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.TmpGetNewReplaceActorRotation
struct ABP_CutscenePlayer_C_TmpGetNewReplaceActorRotation_Params
{
	struct FST_CutsceneReplaceActorInfo                ReplaceActorInfo;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.TmpIsUseOldReplaceOthers
struct ABP_CutscenePlayer_C_TmpIsUseOldReplaceOthers_Params
{
	class AActor*                                      SourceActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUseOld;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.TmpNewReplacePlayerLocationAndRotation
struct ABP_CutscenePlayer_C_TmpNewReplacePlayerLocationAndRotation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.TmpIsUseOldReplacePlayer
struct ABP_CutscenePlayer_C_TmpIsUseOldReplacePlayer_Params
{
	bool                                               IsUseOld;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsHidePlayerInPlayingSequencer
struct ABP_CutscenePlayer_C_IsHidePlayerInPlayingSequencer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsEnabledGlobalStateChange
struct ABP_CutscenePlayer_C_IsEnabledGlobalStateChange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ForceResetCloth
struct ABP_CutscenePlayer_C_ForceResetCloth_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsPlayedLevelSequence
struct ABP_CutscenePlayer_C_IsPlayedLevelSequence_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsShowingSubtitle
struct ABP_CutscenePlayer_C_IsShowingSubtitle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ReleaseCutsceneSkeletalMeshActorAttachment
struct ABP_CutscenePlayer_C_ReleaseCutsceneSkeletalMeshActorAttachment_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetCutsceneSkeletalMeshActorAttachment
struct ABP_CutscenePlayer_C_SetCutsceneSkeletalMeshActorAttachment_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.FinalizeSubtitlePlayer
struct ABP_CutscenePlayer_C_FinalizeSubtitlePlayer_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.CreateSubtitlePlayer
struct ABP_CutscenePlayer_C_CreateSubtitlePlayer_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.PlayEndReset
struct ABP_CutscenePlayer_C_PlayEndReset_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.AddPlayEndResetDataIfHasTag
struct ABP_CutscenePlayer_C_AddPlayEndResetDataIfHasTag_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.InitPlayEndResetData
struct ABP_CutscenePlayer_C_InitPlayEndResetData_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ForceOnLights
struct ABP_CutscenePlayer_C_ForceOnLights_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.RestoreForceOnTargetLights
struct ABP_CutscenePlayer_C_RestoreForceOnTargetLights_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsForceOnTargetLight
struct ABP_CutscenePlayer_C_IsForceOnTargetLight_Params
{
	class AActor*                                      Candidate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetupForceOnTargetLights
struct ABP_CutscenePlayer_C_SetupForceOnTargetLights_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.DebugSkipToEnd
struct ABP_CutscenePlayer_C_DebugSkipToEnd_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsPlayingLevelSequence
struct ABP_CutscenePlayer_C_IsPlayingLevelSequence_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.EndSequence
struct ABP_CutscenePlayer_C_EndSequence_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.PlaySequence
struct ABP_CutscenePlayer_C_PlaySequence_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetPossessableActorsActive
struct ABP_CutscenePlayer_C_SetPossessableActorsActive_Params
{
	bool                                               IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.CheckRequiredUpdateProgrammedAnim
struct ABP_CutscenePlayer_C_CheckRequiredUpdateProgrammedAnim_Params
{
	float                                              InPos;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_CutsceneProgrammedAnimInfo              Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsRequiredUpdate;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               isInRange;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class US3AnimCutsceneInstance*                     AnimInstance;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateProgrammedAnimState
struct ABP_CutscenePlayer_C_UpdateProgrammedAnimState_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetProgrammedAnimReferenced
struct ABP_CutscenePlayer_C_SetProgrammedAnimReferenced_Params
{
	TArray<struct FST_CutsceneProgrammedAnimInfo>      Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewReferenced;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ResetProgrammedAnim
struct ABP_CutscenePlayer_C_ResetProgrammedAnim_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateReplacePlayer
struct ABP_CutscenePlayer_C_UpdateReplacePlayer_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsValidPlayerReplaceActor
struct ABP_CutscenePlayer_C_IsValidPlayerReplaceActor_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateReplaceActor
struct ABP_CutscenePlayer_C_UpdateReplaceActor_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetOthersReplaceActorRotation
struct ABP_CutscenePlayer_C_GetOthersReplaceActorRotation_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetReplaceActorRotation
struct ABP_CutscenePlayer_C_GetReplaceActorRotation_Params
{
	struct FST_CutsceneReplaceActorInfo                ReplaceActorInfo;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetOthersReplaceActorLocation
struct ABP_CutscenePlayer_C_GetOthersReplaceActorLocation_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetReplaceActorLocation
struct ABP_CutscenePlayer_C_GetReplaceActorLocation_Params
{
	struct FST_CutsceneReplaceActorInfo                ReplaceActorInfo;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.StartResumeCamera
struct ABP_CutscenePlayer_C_StartResumeCamera_Params
{
	float                                              BlendTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsShouldResumeCamera
struct ABP_CutscenePlayer_C_IsShouldResumeCamera_Params
{
	bool                                               bShouldResume;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetSequenceRemainingTIme
struct ABP_CutscenePlayer_C_GetSequenceRemainingTIme_Params
{
	float                                              RemainingTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateEndFadeOut
struct ABP_CutscenePlayer_C_UpdateEndFadeOut_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.InitSequencePlay
struct ABP_CutscenePlayer_C_InitSequencePlay_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsUseEndFadeIn
struct ABP_CutscenePlayer_C_IsUseEndFadeIn_Params
{
	bool                                               IsUseFade;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsUseStartFadeOut
struct ABP_CutscenePlayer_C_IsUseStartFadeOut_Params
{
	bool                                               IsUseFade;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.InitCutscene
struct ABP_CutscenePlayer_C_InitCutscene_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.DebugUpdateHideSubtitle
struct ABP_CutscenePlayer_C_DebugUpdateHideSubtitle_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.DebugSwitchHideSubtitle
struct ABP_CutscenePlayer_C_DebugSwitchHideSubtitle_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsFinishedLevelSequence
struct ABP_CutscenePlayer_C_IsFinishedLevelSequence_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ExitCutscene
struct ABP_CutscenePlayer_C_ExitCutscene_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetLength
struct ABP_CutscenePlayer_C_GetLength_Params
{
	float                                              Length;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ShowSubtitle
struct ABP_CutscenePlayer_C_ShowSubtitle_Params
{
	struct FName                                       TextLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.SetPlaybackPosition
struct ABP_CutscenePlayer_C_SetPlaybackPosition_Params
{
	float                                              NewPosition;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.GetPlaybackPosition
struct ABP_CutscenePlayer_C_GetPlaybackPosition_Params
{
	float                                              PlaybackPosition;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.IsPlaying
struct ABP_CutscenePlayer_C_IsPlaying_Params
{
	bool                                               IsPlaying;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.UserConstructionScript
struct ABP_CutscenePlayer_C_UserConstructionScript_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ReceiveBeginPlay
struct ABP_CutscenePlayer_C_ReceiveBeginPlay_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ReceiveTick
struct ABP_CutscenePlayer_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ShowSubtitle
struct ABP_CutscenePlayer_C_Event_ShowSubtitle_Params
{
	struct FName                                       TextLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharacterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.UpdateResumeCamera
struct ABP_CutscenePlayer_C_UpdateResumeCamera_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ReplacePlayer
struct ABP_CutscenePlayer_C_Event_ReplacePlayer_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.BindOnFinishedLevelSequencePlayer
struct ABP_CutscenePlayer_C_BindOnFinishedLevelSequencePlayer_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.UnbindOnFinishedLevelSequencePlayer
struct ABP_CutscenePlayer_C_UnbindOnFinishedLevelSequencePlayer_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.OnFinishedLevelSequencePlayer
struct ABP_CutscenePlayer_C_OnFinishedLevelSequencePlayer_Params
{
	class ULevelSequencePlayer*                        LevelSequencePlayer;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_PlayCameraShake
struct ABP_CutscenePlayer_C_Event_PlayCameraShake_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_StopCameraShake
struct ABP_CutscenePlayer_C_Event_StopCameraShake_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ForceResetCloth
struct ABP_CutscenePlayer_C_Event_ForceResetCloth_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ShowSubtitleFromCharaIndex
struct ABP_CutscenePlayer_C_Event_ShowSubtitleFromCharaIndex_Params
{
	struct FName                                       CharacterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.StartCutscene
struct ABP_CutscenePlayer_C_StartCutscene_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.EndCutscene
struct ABP_CutscenePlayer_C_EndCutscene_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ChangedCamera
struct ABP_CutscenePlayer_C_ChangedCamera_Params
{
	class UObject*                                     CameraObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ForceWeather
struct ABP_CutscenePlayer_C_Event_ForceWeather_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ForceMoonPosition
struct ABP_CutscenePlayer_C_Event_ForceMoonPosition_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ShowSecondarySubtitle
struct ABP_CutscenePlayer_C_Event_ShowSecondarySubtitle_Params
{
	struct FName                                       TextLabel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_StopSecondarySubtitle
struct ABP_CutscenePlayer_C_Event_StopSecondarySubtitle_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_PlayForceFeedback
struct ABP_CutscenePlayer_C_Event_PlayForceFeedback_Params
{
	struct FName                                       ForceFeedbackID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreTimeDilation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.Event_ForceMipStreaming
struct ABP_CutscenePlayer_C_Event_ForceMipStreaming_Params
{
	struct FName                                       LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.ExecuteUbergraph_BP_CutscenePlayer
struct ABP_CutscenePlayer_C_ExecuteUbergraph_BP_CutscenePlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.OnStartSequence__DelegateSignature
struct ABP_CutscenePlayer_C_OnStartSequence__DelegateSignature_Params
{
};

// Function BP_CutscenePlayer.BP_CutscenePlayer_C.OnEndSequence__DelegateSignature
struct ABP_CutscenePlayer_C_OnEndSequence__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
