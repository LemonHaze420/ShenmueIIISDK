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

// Class S3Sequencer.CineAnimInstance
// 0x0060 (0x03C0 - 0x0360)
class UCineAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0360(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3Sequencer.CineAnimInstance");
		return ptr;
	}


	float GetCineLookAtEyesAlpha();
	float GetCineLookAtAlphaBySocketName(const struct FName& SocketName);
};


// Class S3Sequencer.CineLookAtActor
// 0x0010 (0x0338 - 0x0328)
class ACineLookAtActor : public AActor
{
public:
	class UCineLookAtComponent*                        CineLookAtComponent;                                      // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       LookAtSocketName;                                         // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3Sequencer.CineLookAtActor");
		return ptr;
	}

};


// Class S3Sequencer.CineLookAtComponent
// 0x0040 (0x0130 - 0x00F0)
class UCineLookAtComponent : public UActorComponent
{
public:
	struct FCineLookatTrackingParamater                LookatTrackingParamater;                                  // 0x00F0(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3Sequencer.CineLookAtComponent");
		return ptr;
	}

};


// Class S3Sequencer.CineLookAtEyeActor
// 0x0000 (0x0338 - 0x0338)
class ACineLookAtEyeActor : public ACineLookAtActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3Sequencer.CineLookAtEyeActor");
		return ptr;
	}

};


// Class S3Sequencer.S3CineSkeletalMeshActor
// 0x0008 (0x03B8 - 0x03B0)
class AS3CineSkeletalMeshActor : public ASkeletalMeshActor
{
public:
	class USkeletalMeshComponent*                      FaceSkeletalMesh;                                         // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3Sequencer.S3CineSkeletalMeshActor");
		return ptr;
	}

};


// Class S3Sequencer.S3LevelSequencePlayer
// 0x0018 (0x08A8 - 0x0890)
class US3LevelSequencePlayer : public ULevelSequencePlayer
{
public:
	struct FScriptMulticastDelegate                    OnCameraCutDispatcher;                                    // 0x0890(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UObject*                                     WorldContextObj;                                          // 0x08A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3Sequencer.S3LevelSequencePlayer");
		return ptr;
	}


	void RefreshRootMovieSceneInstance();
	class US3LevelSequencePlayer* STATIC_CreateS3LevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* InLevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings);
	void AttachSpawnActorToActor(class AActor* ParentActor, const struct FName& SocketName);
	void AssignActorByTag(const struct FName& Tag, class AActor* Actor);
};


// Class S3Sequencer.S3MovieScene3DSnapFloorSection
// 0x0010 (0x0188 - 0x0178)
class US3MovieScene3DSnapFloorSection : public UMovieSceneBoolSection
{
public:
	bool                                               bDrawDebug;                                               // 0x0178(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x0179(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x017A(0x0002) MISSED OFFSET
	float                                              CapsuleHalfHeight;                                        // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleRadius;                                            // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FloorOffset;                                              // 0x0184(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3Sequencer.S3MovieScene3DSnapFloorSection");
		return ptr;
	}

};


// Class S3Sequencer.S3MovieScene3DSnapFloorTrack
// 0x0000 (0x0080 - 0x0080)
class US3MovieScene3DSnapFloorTrack : public UMovieSceneBoolTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3Sequencer.S3MovieScene3DSnapFloorTrack");
		return ptr;
	}

};


// Class S3Sequencer.S3MovieSceneAtomSection
// 0x0008 (0x0240 - 0x0238)
class US3MovieSceneAtomSection : public UMovieSceneAtomSection
{
public:
	bool                                               bIsBGM;                                                   // 0x0238(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOneShotSE;                                             // 0x0239(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESequenceSelectorType                              Selector;                                                 // 0x023A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x023B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3Sequencer.S3MovieSceneAtomSection");
		return ptr;
	}

};


// Class S3Sequencer.S3MovieSceneAtomTrack
// 0x0000 (0x0068 - 0x0068)
class US3MovieSceneAtomTrack : public UMovieSceneAtomTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3Sequencer.S3MovieSceneAtomTrack");
		return ptr;
	}

};


// Class S3Sequencer.S3MovieSceneEventSection
// 0x0138 (0x0308 - 0x01D0)
class US3MovieSceneEventSection : public UMovieSceneEventSection
{
public:
	struct FNameCurve                                  EventFunction;                                            // 0x01D0(0x0068) (Deprecated)
	struct FNameCurve                                  EventTextLabel;                                           // 0x0238(0x0068) (Deprecated)
	struct FNameCurve                                  EventCharacterName;                                       // 0x02A0(0x0068) (Deprecated)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3Sequencer.S3MovieSceneEventSection");
		return ptr;
	}

};


// Class S3Sequencer.S3MovieSceneEventTrack
// 0x0000 (0x0080 - 0x0080)
class US3MovieSceneEventTrack : public UMovieSceneEventTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3Sequencer.S3MovieSceneEventTrack");
		return ptr;
	}

};


// Class S3Sequencer.S3SequencerBgmManager
// 0x0000 (0x0328 - 0x0328)
class AS3SequencerBgmManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3Sequencer.S3SequencerBgmManager");
		return ptr;
	}


	void StopFromSequencer(const struct FName& SoundId);
	void PlayFromSequencer(class USoundAtomCue* Cue, const struct FName& SoundId, float StartTime, float Volume, float Pitch);
};


// Class S3Sequencer.S3SequencerGameMode
// 0x0010 (0x0420 - 0x0410)
class AS3SequencerGameMode : public AGameMode
{
public:
	class AS3SequencerBgmManager*                      BgmManager_Sequencer;                                     // 0x0410(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AS3SequencerSoundManager*                    SoundManager_Sequencer;                                   // 0x0418(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3Sequencer.S3SequencerGameMode");
		return ptr;
	}

};


// Class S3Sequencer.S3SequencerSoundManager
// 0x0000 (0x0328 - 0x0328)
class AS3SequencerSoundManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3Sequencer.S3SequencerSoundManager");
		return ptr;
	}


	void StopFromSequencer(const struct FName& SoundId);
	void PlayFromSequencer(class USoundAtomCue* Cue, const struct FName& SoundId, ESequenceSelectorType Selector, bool bOneShot, float StartTime, float Volume, float Pitch);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
