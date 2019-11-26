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

// Function BP_SoundManager.BP_SoundManager_C.EndSystemPause
struct ABP_SoundManager_C_EndSystemPause_Params
{
};

// Function BP_SoundManager.BP_SoundManager_C.BeginSystemPause
struct ABP_SoundManager_C_BeginSystemPause_Params
{
};

// Function BP_SoundManager.BP_SoundManager_C.ForbidStopAll
struct ABP_SoundManager_C_ForbidStopAll_Params
{
};

// Function BP_SoundManager.BP_SoundManager_C.SetTalkVolume_Impl
struct ABP_SoundManager_C_SetTalkVolume_Impl_Params
{
	bool                                               Reset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.StopWithDestroy
struct ABP_SoundManager_C_StopWithDestroy_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Destroy;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.EndCutscene_Impl
struct ABP_SoundManager_C_EndCutscene_Impl_Params
{
};

// Function BP_SoundManager.BP_SoundManager_C.InitCutsceneSetting
struct ABP_SoundManager_C_InitCutsceneSetting_Params
{
	class ABP_S3SoundPlayer_C*                         Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAtomCue*                               Cue;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESequenceSelectorType                              Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.ForceGC
struct ABP_SoundManager_C_ForceGC_Params
{
};

// Function BP_SoundManager.BP_SoundManager_C.SetSelector
struct ABP_SoundManager_C_SetSelector_Params
{
	class ABP_S3SoundPlayer_C*                         Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESequenceSelectorType                              Selector;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.CreateNewPlayer
struct ABP_SoundManager_C_CreateNewPlayer_Params
{
	class USoundAtomCue*                               Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AutoDestroy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AutoPlay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         Player;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.DebugPrint
struct ABP_SoundManager_C_DebugPrint_Params
{
};

// Function BP_SoundManager.BP_SoundManager_C.SetSystemVolume
struct ABP_SoundManager_C_SetSystemVolume_Params
{
	ES3SoundVolume                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.CreatePlayerWithTransform
struct ABP_SoundManager_C_CreatePlayerWithTransform_Params
{
	class USoundAtomCue*                               Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           Attenuation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AutoDestroy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AutoPlay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         Player;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.StopAll
struct ABP_SoundManager_C_StopAll_Params
{
};

// Function BP_SoundManager.BP_SoundManager_C.PlayFromSequencer_Impl
struct ABP_SoundManager_C_PlayFromSequencer_Impl_Params
{
	class USoundAtomCue*                               Cue;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESequenceSelectorType                              Selector;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OneShot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.PermitPlayAll
struct ABP_SoundManager_C_PermitPlayAll_Params
{
};

// Function BP_SoundManager.BP_SoundManager_C.GarbageCollection
struct ABP_SoundManager_C_GarbageCollection_Params
{
};

// Function BP_SoundManager.BP_SoundManager_C.SetAtomSound
struct ABP_SoundManager_C_SetAtomSound_Params
{
	class ABP_S3AtomSound_C*                           Atom;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Register;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.StopTimerSound
struct ABP_SoundManager_C_StopTimerSound_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.SetTimerSound
struct ABP_SoundManager_C_SetTimerSound_Params
{
	class ABP_S3AtomSoundTimer_C*                      Timer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Register;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.CreatePlayer
struct ABP_SoundManager_C_CreatePlayer_Params
{
	class USoundAtomCue*                               Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AutoDestroy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AutoPlay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3SoundPlayer_C*                         Player;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.SetPlayer
struct ABP_SoundManager_C_SetPlayer_Params
{
	class AS3SoundPlayer*                              Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Register;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.PlayTimerSound
struct ABP_SoundManager_C_PlayTimerSound_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FS3SoundTimerParam                          Param;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_SoundManager.BP_SoundManager_C.GetAvailableComponent
struct ABP_SoundManager_C_GetAvailableComponent_Params
{
	class UAtomComponent*                              Component;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.Play_Impl
struct ABP_SoundManager_C_Play_Impl_Params
{
	class USoundAtomCue*                               Cue;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.UserConstructionScript
struct ABP_SoundManager_C_UserConstructionScript_Params
{
};

// Function BP_SoundManager.BP_SoundManager_C.ReceiveBeginPlay
struct ABP_SoundManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_SoundManager.BP_SoundManager_C.ReceiveTick
struct ABP_SoundManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.Play
struct ABP_SoundManager_C_Play_Params
{
	class USoundAtomCue*                               Cue;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.PlayFromSequencer
struct ABP_SoundManager_C_PlayFromSequencer_Params
{
	class USoundAtomCue*                               Cue;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESequenceSelectorType                              Selector;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOneShot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.ReceiveEndPlay
struct ABP_SoundManager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.ChangeVolume
struct ABP_SoundManager_C_ChangeVolume_Params
{
	ES3SoundVolume                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.StartFadeIn
struct ABP_SoundManager_C_StartFadeIn_Params
{
};

// Function BP_SoundManager.BP_SoundManager_C.EndSequenser
struct ABP_SoundManager_C_EndSequenser_Params
{
};

// Function BP_SoundManager.BP_SoundManager_C.SetTalkVolume
struct ABP_SoundManager_C_SetTalkVolume_Params
{
	bool                                               bReset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.BindFade
struct ABP_SoundManager_C_BindFade_Params
{
};

// Function BP_SoundManager.BP_SoundManager_C.ChangePlayer
struct ABP_SoundManager_C_ChangePlayer_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.FinishFadeOut
struct ABP_SoundManager_C_FinishFadeOut_Params
{
};

// Function BP_SoundManager.BP_SoundManager_C.BeginPause
struct ABP_SoundManager_C_BeginPause_Params
{
};

// Function BP_SoundManager.BP_SoundManager_C.EndPause
struct ABP_SoundManager_C_EndPause_Params
{
};

// Function BP_SoundManager.BP_SoundManager_C.SetEnableFadePause
struct ABP_SoundManager_C_SetEnableFadePause_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SoundManager.BP_SoundManager_C.ExecuteUbergraph_BP_SoundManager
struct ABP_SoundManager_C_ExecuteUbergraph_BP_SoundManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
