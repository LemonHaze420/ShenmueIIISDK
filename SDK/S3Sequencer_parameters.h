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

// Function S3Sequencer.CineAnimInstance.GetCineLookAtEyesAlpha
struct UCineAnimInstance_GetCineLookAtEyesAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3Sequencer.CineAnimInstance.GetCineLookAtAlphaBySocketName
struct UCineAnimInstance_GetCineLookAtAlphaBySocketName_Params
{
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3Sequencer.S3LevelSequencePlayer.RefreshRootMovieSceneInstance
struct US3LevelSequencePlayer_RefreshRootMovieSceneInstance_Params
{
};

// Function S3Sequencer.S3LevelSequencePlayer.CreateS3LevelSequencePlayer
struct US3LevelSequencePlayer_CreateS3LevelSequencePlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              InLevelSequence;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneSequencePlaybackSettings         Settings;                                                 // (Parm)
	class US3LevelSequencePlayer*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function S3Sequencer.S3LevelSequencePlayer.AttachSpawnActorToActor
struct US3LevelSequencePlayer_AttachSpawnActorToActor_Params
{
	class AActor*                                      ParentActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function S3Sequencer.S3LevelSequencePlayer.AssignActorByTag
struct US3LevelSequencePlayer_AssignActorByTag_Params
{
	struct FName                                       Tag;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function S3Sequencer.S3SequencerBgmManager.StopFromSequencer
struct AS3SequencerBgmManager_StopFromSequencer_Params
{
	struct FName                                       SoundId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function S3Sequencer.S3SequencerBgmManager.PlayFromSequencer
struct AS3SequencerBgmManager_PlayFromSequencer_Params
{
	class USoundAtomCue*                               Cue;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function S3Sequencer.S3SequencerSoundManager.StopFromSequencer
struct AS3SequencerSoundManager_StopFromSequencer_Params
{
	struct FName                                       SoundId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function S3Sequencer.S3SequencerSoundManager.PlayFromSequencer
struct AS3SequencerSoundManager_PlayFromSequencer_Params
{
	class USoundAtomCue*                               Cue;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SoundId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	ESequenceSelectorType                              Selector;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOneShot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
