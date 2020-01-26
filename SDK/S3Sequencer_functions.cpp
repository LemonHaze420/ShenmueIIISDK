
#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function S3Sequencer.CineAnimInstance.GetCineLookAtEyesAlpha
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCineAnimInstance::GetCineLookAtEyesAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function S3Sequencer.CineAnimInstance.GetCineLookAtEyesAlpha");

	UCineAnimInstance_GetCineLookAtEyesAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3Sequencer.CineAnimInstance.GetCineLookAtAlphaBySocketName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCineAnimInstance::GetCineLookAtAlphaBySocketName(const struct FName& SocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3Sequencer.CineAnimInstance.GetCineLookAtAlphaBySocketName");

	UCineAnimInstance_GetCineLookAtAlphaBySocketName_Params params;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3Sequencer.S3LevelSequencePlayer.RefreshRootMovieSceneInstance
// (Final, Native, Public, BlueprintCallable)

void US3LevelSequencePlayer::RefreshRootMovieSceneInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function S3Sequencer.S3LevelSequencePlayer.RefreshRootMovieSceneInstance");

	US3LevelSequencePlayer_RefreshRootMovieSceneInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function S3Sequencer.S3LevelSequencePlayer.CreateS3LevelSequencePlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          InLevelSequence                (Parm, ZeroConstructor, IsPlainOldData)
// struct FMovieSceneSequencePlaybackSettings Settings                       (Parm)
// class US3LevelSequencePlayer*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class US3LevelSequencePlayer* US3LevelSequencePlayer::STATIC_CreateS3LevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* InLevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3Sequencer.S3LevelSequencePlayer.CreateS3LevelSequencePlayer");

	US3LevelSequencePlayer_CreateS3LevelSequencePlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InLevelSequence = InLevelSequence;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function S3Sequencer.S3LevelSequencePlayer.AttachSpawnActorToActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ParentActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)

void US3LevelSequencePlayer::AttachSpawnActorToActor(class AActor* ParentActor, const struct FName& SocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3Sequencer.S3LevelSequencePlayer.AttachSpawnActorToActor");

	US3LevelSequencePlayer_AttachSpawnActorToActor_Params params;
	params.ParentActor = ParentActor;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function S3Sequencer.S3LevelSequencePlayer.AssignActorByTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Tag                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void US3LevelSequencePlayer::AssignActorByTag(const struct FName& Tag, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3Sequencer.S3LevelSequencePlayer.AssignActorByTag");

	US3LevelSequencePlayer_AssignActorByTag_Params params;
	params.Tag = Tag;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function S3Sequencer.S3SequencerBgmManager.StopFromSequencer
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SoundId                        (Parm, ZeroConstructor, IsPlainOldData)

void AS3SequencerBgmManager::StopFromSequencer(const struct FName& SoundId)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3Sequencer.S3SequencerBgmManager.StopFromSequencer");

	AS3SequencerBgmManager_StopFromSequencer_Params params;
	params.SoundId = SoundId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function S3Sequencer.S3SequencerBgmManager.PlayFromSequencer
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAtomCue*           Cue                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundId                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)

void AS3SequencerBgmManager::PlayFromSequencer(class USoundAtomCue* Cue, const struct FName& SoundId, float StartTime, float Volume, float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3Sequencer.S3SequencerBgmManager.PlayFromSequencer");

	AS3SequencerBgmManager_PlayFromSequencer_Params params;
	params.Cue = Cue;
	params.SoundId = SoundId;
	params.StartTime = StartTime;
	params.Volume = Volume;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function S3Sequencer.S3SequencerSoundManager.StopFromSequencer
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SoundId                        (Parm, ZeroConstructor, IsPlainOldData)

void AS3SequencerSoundManager::StopFromSequencer(const struct FName& SoundId)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3Sequencer.S3SequencerSoundManager.StopFromSequencer");

	AS3SequencerSoundManager_StopFromSequencer_Params params;
	params.SoundId = SoundId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function S3Sequencer.S3SequencerSoundManager.PlayFromSequencer
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundAtomCue*           Cue                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundId                        (Parm, ZeroConstructor, IsPlainOldData)
// ESequenceSelectorType          Selector                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOneShot                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)

void AS3SequencerSoundManager::PlayFromSequencer(class USoundAtomCue* Cue, const struct FName& SoundId, ESequenceSelectorType Selector, bool bOneShot, float StartTime, float Volume, float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function S3Sequencer.S3SequencerSoundManager.PlayFromSequencer");

	AS3SequencerSoundManager_PlayFromSequencer_Params params;
	params.Cue = Cue;
	params.SoundId = SoundId;
	params.Selector = Selector;
	params.bOneShot = bOneShot;
	params.StartTime = StartTime;
	params.Volume = Volume;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
