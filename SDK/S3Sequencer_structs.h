#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum S3Sequencer.ESequenceSelectorType
enum class ESequenceSelectorType : uint8_t
{
	ESequenceSelectorType__None    = 0,
	ESequenceSelectorType__Weather = 1,
	ESequenceSelectorType__Language = 2,
	ESequenceSelectorType__ESequenceSelectorType_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct S3Sequencer.CineLookatTrackingParamater
// 0x0030
struct FCineLookatTrackingParamater
{
	class ASkeletalMeshActor*                          SkeletalMeshActor;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtAlpha;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       TargetActorSocketName;                                    // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetRelativeOffset;                                     // 0x0020(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct S3Sequencer.AnimNode_CineLookAt
// 0x00C8 (0x01E0 - 0x0118)
struct FAnimNode_CineLookAt : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x0118(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0130(0x000C) MISSED OFFSET
	TEnumAsByte<EAxisOption>                           LookAtAxis;                                               // 0x013C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLookUpAxis;                                           // 0x013D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxisOption>                           LookUpAxis;                                               // 0x013E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x013F(0x0001) MISSED OFFSET
	float                                              LookAtClamp;                                              // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDebug;                                             // 0x0144(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x9B];                                      // 0x0145(0x009B) MISSED OFFSET
};

// ScriptStruct S3Sequencer.AnimNode_CineLookAtEyes
// 0x00E8 (0x0200 - 0x0118)
struct FAnimNode_CineLookAtEyes : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              LeftEyeBoneToModify;                                      // 0x0118(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              RightEyeBoneToModify;                                     // 0x0130(0x0018) (Edit, BlueprintVisible)
	struct FBoneReference                              CenterEyeBoneToModify;                                    // 0x0148(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0160(0x000C) MISSED OFFSET
	TEnumAsByte<EAxisOption>                           LookAtAxis;                                               // 0x016C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLookUpAxis;                                           // 0x016D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxisOption>                           LookUpAxis;                                               // 0x016E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x016F(0x0001) MISSED OFFSET
	float                                              LookAtClamp;                                              // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDebug;                                             // 0x0174(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8B];                                      // 0x0175(0x008B) MISSED OFFSET
};

// ScriptStruct S3Sequencer.S3MovieScene3DSnapFloorSectionTemplate
// 0x0010 (0x0030 - 0x0020)
struct FS3MovieScene3DSnapFloorSectionTemplate : public FMovieSceneEvalTemplate
{
	class US3MovieScene3DSnapFloorSection*             Section;                                                  // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3MovieScene3DSnapFloorTrack*               Track;                                                    // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct S3Sequencer.S3MovieSceneAtomSectionTemplate
// 0x0008 (0x0188 - 0x0180)
struct FS3MovieSceneAtomSectionTemplate : public FMovieSceneAtomSectionTemplate
{
	class US3MovieSceneAtomSection*                    Section;                                                  // 0x0180(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct S3Sequencer.S3MovieSceneEventSectionParms
// 0x0010
struct FS3MovieSceneEventSectionParms
{
	struct FName                                       TextLabel;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharacterName;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct S3Sequencer.S3MovieSceneEventSectionTemplate
// 0x0010 (0x00D0 - 0x00C0)
struct FS3MovieSceneEventSectionTemplate : public FMovieSceneEventSectionTemplate
{
	class US3MovieSceneEventSection*                   Section;                                                  // 0x00C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3MovieSceneEventTrack*                     Track;                                                    // 0x00C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
