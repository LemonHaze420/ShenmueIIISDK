#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_S3BgmManager.BP_S3BgmManager_C.ShouldBePaused
struct ABP_S3BgmManager_C_ShouldBePaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.GetHighestPriority
struct ABP_S3BgmManager_C_GetHighestPriority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	EBgmPriority                                       OutPriority;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.StopForceBGM
struct ABP_S3BgmManager_C_StopForceBGM_Params
{
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.IsForceBGM
struct ABP_S3BgmManager_C_IsForceBGM_Params
{
	bool                                               Force;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.PlayForceBGM
struct ABP_S3BgmManager_C_PlayForceBGM_Params
{
	class USoundAtomCue*                               Cue;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.PauseSimple
struct ABP_S3BgmManager_C_PauseSimple_Params
{
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.Stop
struct ABP_S3BgmManager_C_Stop_Params
{
	struct FName*                                      ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.ResetVolume
struct ABP_S3BgmManager_C_ResetVolume_Params
{
	class AActor*                                      Executor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.GetCurrentVolume
struct ABP_S3BgmManager_C_GetCurrentVolume_Params
{
	float                                              Volume;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.SetVolume
struct ABP_S3BgmManager_C_SetVolume_Params
{
	class AActor*                                      Executor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.SetSystemVolume
struct ABP_S3BgmManager_C_SetSystemVolume_Params
{
	float                                              Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.StopWithDestroy
struct ABP_S3BgmManager_C_StopWithDestroy_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.RestartFromCutscene
struct ABP_S3BgmManager_C_RestartFromCutscene_Params
{
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.RestartSimple
struct ABP_S3BgmManager_C_RestartSimple_Params
{
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.CanUpdatePlay
struct ABP_S3BgmManager_C_CanUpdatePlay_Params
{
	class ABP_S3BgmPlayer_C*                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Pause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CAN;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.PauseFromCutscene
struct ABP_S3BgmManager_C_PauseFromCutscene_Params
{
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.GetPlayingBgm
struct ABP_S3BgmManager_C_GetPlayingBgm_Params
{
	class USoundAtomCue*                               Sound;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.PlayFromCue
struct ABP_S3BgmManager_C_PlayFromCue_Params
{
	class UObject**                                    Cue;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EBgmPriority*                                      Priority;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              AutoDestroy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AS3BgmPlayer*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.StopCutsceneBGM
struct ABP_S3BgmManager_C_StopCutsceneBGM_Params
{
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.GetPlayerByPriority
struct ABP_S3BgmManager_C_GetPlayerByPriority_Params
{
	EBgmPriority                                       Priority;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3BgmPlayer_C*                           Player;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.PlayFromSequencer_Impl
struct ABP_S3BgmManager_C_PlayFromSequencer_Impl_Params
{
	class USoundAtomCue*                               Cue;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.GetPlayerById
struct ABP_S3BgmManager_C_GetPlayerById_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3BgmPlayer_C*                           Player;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.PlayFromInfo
struct ABP_S3BgmManager_C_PlayFromInfo_Params
{
	struct FS3BgmAreaSourceInfo                        SourceInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.AddPlayer
struct ABP_S3BgmManager_C_AddPlayer_Params
{
	class ABP_S3BgmPlayer_C*                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.UpdateBGM
struct ABP_S3BgmManager_C_UpdateBGM_Params
{
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.ChangeBgm
struct ABP_S3BgmManager_C_ChangeBgm_Params
{
	class UObject*                                     Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.UserConstructionScript
struct ABP_S3BgmManager_C_UserConstructionScript_Params
{
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.ReceiveBeginPlay
struct ABP_S3BgmManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.OnBeginTouchArea
struct ABP_S3BgmManager_C_OnBeginTouchArea_Params
{
	class AS3BgmArea**                                 AreaActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.OnEndTouchArea
struct ABP_S3BgmManager_C_OnEndTouchArea_Params
{
	class AS3BgmArea**                                 AreaActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.OnAreaBgmChanged
struct ABP_S3BgmManager_C_OnAreaBgmChanged_Params
{
	class AS3BgmArea**                                 area;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.PlayFromPlayer
struct ABP_S3BgmManager_C_PlayFromPlayer_Params
{
	class AS3BgmPlayer**                               BgmPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.Pause
struct ABP_S3BgmManager_C_Pause_Params
{
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.Restart
struct ABP_S3BgmManager_C_Restart_Params
{
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.PlayFromSequencer
struct ABP_S3BgmManager_C_PlayFromSequencer_Params
{
	class USoundAtomCue**                              Cue;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SoundId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.ReceiveEndPlay
struct ABP_S3BgmManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.ReceiveTick
struct ABP_S3BgmManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.StartFadeIn
struct ABP_S3BgmManager_C_StartFadeIn_Params
{
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.StartFadeOut
struct ABP_S3BgmManager_C_StartFadeOut_Params
{
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.SwitchController
struct ABP_S3BgmManager_C_SwitchController_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.ShowEyecatch
struct ABP_S3BgmManager_C_ShowEyecatch_Params
{
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.HideEyecatch
struct ABP_S3BgmManager_C_HideEyecatch_Params
{
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.ChangeSystemVolume
struct ABP_S3BgmManager_C_ChangeSystemVolume_Params
{
	ES3SoundVolume                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.SetTalkVolume
struct ABP_S3BgmManager_C_SetTalkVolume_Params
{
	bool*                                              bReset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3BgmManager.BP_S3BgmManager_C.ExecuteUbergraph_BP_S3BgmManager
struct ABP_S3BgmManager_C_ExecuteUbergraph_BP_S3BgmManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
