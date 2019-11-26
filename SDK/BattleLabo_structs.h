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

// Enum BattleLabo.ECurveAdaptType
enum class ECurveAdaptType : uint8_t
{
	ECurveAdaptType__Both          = 0,
	ECurveAdaptType__Source        = 1,
	ECurveAdaptType__Destination   = 2,
	ECurveAdaptType__ECurveAdaptType_MAX = 3
};


// Enum BattleLabo.EStepType
enum class EStepType : uint8_t
{
	EStepType__None                = 0,
	EStepType__StepIn              = 1,
	EStepType__StepOut             = 2,
	EStepType__StepJump            = 3,
	EStepType__EStepType_MAX       = 4
};


// Enum BattleLabo.EFixSide
enum class EFixSide : uint8_t
{
	EFixSide__None                 = 0,
	EFixSide__Left                 = 1,
	EFixSide__Right                = 2,
	EFixSide__EFixSide_MAX         = 3
};


// Enum BattleLabo.EBTL_NPCLODState
enum class EBTL_NPCLODState : uint8_t
{
	EBTL_NPCLODState__None         = 0,
	EBTL_NPCLODState__Standbye     = 1,
	EBTL_NPCLODState__Battle       = 2,
	EBTL_NPCLODState__ReturnToStandbye = 3,
	EBTL_NPCLODState__Retired      = 4,
	EBTL_NPCLODState__Removed      = 5,
	EBTL_NPCLODState__EBTL_MAX     = 6
};


// Enum BattleLabo.EMoveStepMode
enum class EMoveStepMode : uint8_t
{
	EMoveStepMode__Idle            = 0,
	EMoveStepMode__StepInLeft      = 1,
	EMoveStepMode__StepInRight     = 2,
	EMoveStepMode__StepOutLeft     = 3,
	EMoveStepMode__StepOutRight    = 4,
	EMoveStepMode__EMoveStepMode_MAX = 5
};


// Enum BattleLabo.EBTL_HoldInputType
enum class EBTL_HoldInputType : uint8_t
{
	EBTL_HoldInputType__None       = 0,
	EBTL_HoldInputType__L2         = 1,
	EBTL_HoldInputType__EBTL_MAX   = 2
};


// Enum BattleLabo.EBTL_AutoOnOff
enum class EBTL_AutoOnOff : uint8_t
{
	EBTL_AutoOnOff__Auto           = 0,
	EBTL_AutoOnOff__Yes            = 1,
	EBTL_AutoOnOff__No             = 2,
	EBTL_AutoOnOff__EBTL_MAX       = 3
};


// Enum BattleLabo.EBattleAnimStrength
enum class EBattleAnimStrength : uint8_t
{
	EBattleAnimStrength__None      = 0,
	EBattleAnimStrength__Weak      = 1,
	EBattleAnimStrength__Med       = 2,
	EBattleAnimStrength__Strong    = 3,
	EBattleAnimStrength__EBattleAnimStrength_MAX = 4
};


// Enum BattleLabo.EBattleAnimDirection
enum class EBattleAnimDirection : uint8_t
{
	EBattleAnimDirection__None     = 0,
	EBattleAnimDirection__Left     = 1,
	EBattleAnimDirection__Forward  = 2,
	EBattleAnimDirection__Right    = 3,
	EBattleAnimDirection__Back     = 4,
	EBattleAnimDirection__EBattleAnimDirection_MAX = 5
};


// Enum BattleLabo.EBattleAnimRange
enum class EBattleAnimRange : uint8_t
{
	EBattleAnimRange__None         = 0,
	EBattleAnimRange__Close        = 1,
	EBattleAnimRange__Mid          = 2,
	EBattleAnimRange__Far          = 3,
	EBattleAnimRange__EBattleAnimRange_MAX = 4
};


// Enum BattleLabo.ESequencePlayMode
enum class ESequencePlayMode : uint8_t
{
	ESequencePlayMode__Idle        = 0,
	ESequencePlayMode__Walk        = 1,
	ESequencePlayMode__ESequencePlayMode_MAX = 2
};


// Enum BattleLabo.EAttackType
enum class EAttackType : uint8_t
{
	EAttackType__Normal            = 0,
	EAttackType__Strong            = 1,
	EAttackType__Special           = 2,
	EAttackType__EAttackType_MAX   = 3
};


// Enum BattleLabo.EBattleAnimHeight
enum class EBattleAnimHeight : uint8_t
{
	EBattleAnimHeight__None        = 0,
	EBattleAnimHeight__Lower       = 1,
	EBattleAnimHeight__Mid         = 2,
	EBattleAnimHeight__Upper       = 3,
	EBattleAnimHeight__EBattleAnimHeight_MAX = 4
};


// Enum BattleLabo.EActionCategoryNative
enum class EActionCategoryNative : uint8_t
{
	EActionCategoryNative__VE_None = 0,
	EActionCategoryNative__VE_Idle = 1,
	EActionCategoryNative__VE_MoveGap = 2,
	EActionCategoryNative__VE_Damage = 3,
	EActionCategoryNative__VE_Down = 4,
	EActionCategoryNative__VE_Standup = 5,
	EActionCategoryNative__VE_Guard = 6,
	EActionCategoryNative__VE_AttackStrong = 7,
	EActionCategoryNative__VE_Attack = 8,
	EActionCategoryNative__VE_Grasp = 9,
	EActionCategoryNative__VE_Action = 10,
	EActionCategoryNative__VE_Step = 11,
	EActionCategoryNative__VE_Parry = 12,
	EActionCategoryNative__VE_Parried = 13,
	EActionCategoryNative__VE_Action1 = 14,
	EActionCategoryNative__VE_Action2 = 15,
	EActionCategoryNative__VE_Action3 = 16,
	EActionCategoryNative__VE_Action4 = 17,
	EActionCategoryNative__VE_Control = 18,
	EActionCategoryNative__VE_Controlled = 19,
	EActionCategoryNative__VE_OffControl = 20,
	EActionCategoryNative__VE_Check = 21,
	EActionCategoryNative__VE_MAX  = 22
};


// Enum BattleLabo.EBTL_LeaderboardRankType
enum class EBTL_LeaderboardRankType : uint8_t
{
	EBTL_LeaderboardRankType__Score = 0,
	EBTL_LeaderboardRankType__Time = 1,
	EBTL_LeaderboardRankType__EBTL_MAX = 2
};


// Enum BattleLabo.EBattleAttackType
enum class EBattleAttackType : uint8_t
{
	EBattleAttackType__None        = 0,
	EBattleAttackType__Punch       = 1,
	EBattleAttackType__Kick        = 2,
	EBattleAttackType__EBattleAttackType_MAX = 3
};


// Enum BattleLabo.ERaycastHitpointInfoType
enum class ERaycastHitpointInfoType : uint8_t
{
	ERaycastHitpointInfoType__Wall = 0,
	ERaycastHitpointInfoType__Step = 1,
	ERaycastHitpointInfoType__ERaycastHitpointInfoType_MAX = 2
};


// Enum BattleLabo.EBTL_MeshFadeState
enum class EBTL_MeshFadeState : uint8_t
{
	EBTL_MeshFadeState__CompleteFadeIn = 0,
	EBTL_MeshFadeState__ActiveFadeIn = 1,
	EBTL_MeshFadeState__CompleteFadeOut = 2,
	EBTL_MeshFadeState__ActiveFadeOut = 3,
	EBTL_MeshFadeState__EBTL_MAX   = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BattleLabo.AttackColliderData
// 0x0050
struct FAttackColliderData
{
	struct FName                                       Identifier;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	class UPrimitiveComponent*                         Primitive;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct BattleLabo.AttackOverlapResult
// 0x0010
struct FAttackOverlapResult
{
	class UPrimitiveComponent*                         SourcePrimitive;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         DestinationPrimitive;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct BattleLabo.BTL_TimeMSC
// 0x000C
struct FBTL_TimeMSC
{
	int                                                MM;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SS;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CC;                                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BattleLabo.BTL_BRallyCourseCutsceneData
// 0x0020
struct FBTL_BRallyCourseCutsceneData
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ULevelSequence*                              LevelSequence;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             CameraTestLocations;                                      // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct BattleLabo.BTL_ScoreTallyData
// 0x0028
struct FBTL_ScoreTallyData
{
	struct FName                                       Type;                                                     // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UTexture2D*>                          Icons;                                                    // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                TallyNum;                                                 // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PointsPerTally;                                           // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowMaxed;                                               // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct BattleLabo.BTL_ScoreGroupData
// 0x0050
struct FBTL_ScoreGroupData
{
	TMap<int, int>                                     MaxCounts;                                                // 0x0000(0x0050) (ZeroConstructor, Transient)
};

// ScriptStruct BattleLabo.BTL_DateYMD
// 0x000C
struct FBTL_DateYMD
{
	int                                                YYYY;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MM;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DD;                                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BattleLabo.BTL_LeaderboardRecord
// 0x0028 (0x0030 - 0x0008)
struct FBTL_LeaderboardRecord : public FTableRowBase
{
	struct FName                                       CharacterID;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBTL_TimeMSC                                ClearTime;                                                // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                Score;                                                    // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBTL_DateYMD                                Date;                                                     // 0x0020(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct BattleLabo.BTL_CourseSaveData
// 0x0018
struct FBTL_CourseSaveData
{
	struct FName                                       CourseId;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBTL_LeaderboardRecord>              Records;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct BattleLabo.BTL_EnemySearchPathNode
// 0x0030
struct FBTL_EnemySearchPathNode
{
	TArray<int>                                        EdgesTo;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      EdgesCost;                                                // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0020(0x0004) MISSED OFFSET
	float                                              Cost;                                                     // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                From;                                                     // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BattleLabo.SyncActionInfoNative
// 0x0058 (0x0060 - 0x0008)
struct FSyncActionInfoNative : public FTableRowBase
{
	struct FName                                       LeaderMotionID;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FollowerMotionID;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SyncTime;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FName                                       AutoSyncTimeNotify;                                       // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FTransform                                  SyncTransform;                                            // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct BattleLabo.MoveGapConditionNative
// 0x0090 (0x0098 - 0x0008)
struct FMoveGapConditionNative : public FTableRowBase
{
	struct FName                                       SetupMontageName;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableThisCondition;                                      // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              SetupHeight;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SetupDistance;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SetupAngle;                                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableHeight;                                             // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              HeightUpperLimit;                                         // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeightLowerLimit;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableSpeed;                                              // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              SpeedUpperLimit;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedLowerLimit;                                          // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableDistance;                                           // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              DistanceUpperLimit;                                       // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceLowerLimit;                                       // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableEntryAngle;                                         // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              EntryAngleUpperLimit;                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EntryAngleLowerLimit;                                     // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableCharacterAngle;                                     // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              CharacterAngleUpperLimit;                                 // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CharacterAngleLowerLimit;                                 // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableGapDistance;                                        // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	float                                              GapDistanceUpperLimit;                                    // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GapDistanceLowerLimit;                                    // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableTableDepth;                                         // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	float                                              TableDepthUpperLimit;                                     // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TableDepthLowerLimit;                                     // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableSpace;                                              // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	float                                              SpaceUpperLimit;                                          // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpaceLowerLimit;                                          // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableTableSpace;                                         // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	float                                              TableSpaceUpperLimit;                                     // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TableSpaceLowerLimit;                                     // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableGapSpace;                                           // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	float                                              GapSpaceUpperLimit;                                       // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GapSpaceLowerLimit;                                       // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BattleLabo.MotionDatabaseElementNative
// 0x0038 (0x0040 - 0x0008)
struct FMotionDatabaseElementNative : public FTableRowBase
{
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MontageSection;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBattleAnimRange                                   RangeType;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBattleAnimDirection                               DirectionType;                                            // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBattleAnimHeight                                  HeightType;                                               // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBattleAnimStrength                                StrengthType;                                             // 0x0023(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Range;                                                    // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionAngle;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FName                                       SyncMontageName;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Use;                                                      // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                Cost;                                                     // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BattleLabo.BTL_MeshFadeSettings
// 0x0028
struct FBTL_MeshFadeSettings
{
	class UMeshComponent*                              Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OverrideBaseMats;                                         // 0x0008(0x0010) (ZeroConstructor)
	TArray<class UMaterialInterface*>                  FadeMats;                                                 // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct BattleLabo.ReflectTransform
// 0x0050
struct FReflectTransform
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     SafeLocation;                                             // 0x0030(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              LieFacingZ;                                               // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bValidNavmesh;                                            // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0041(0x000F) MISSED OFFSET
};

// ScriptStruct BattleLabo.BTL_RacerStatLimits
// 0x0008
struct FBTL_RacerStatLimits
{
	int                                                Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BattleLabo.BTL_MontageRefSearchable
// 0x0010
struct FBTL_MontageRefSearchable
{
	struct FName                                       Identifier;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BattleLabo.BTL_MontageSoftPtrSearchableData
// 0x0030
struct FBTL_MontageSoftPtrSearchableData
{
	struct FName                                       Identifier;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BattleLabo.BTL_MontageSoftPtrSearchableData.Montage
};

// ScriptStruct BattleLabo.UndulationInfoContainer
// 0x0010
struct FUndulationInfoContainer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct BattleLabo.UndulationInfoParamNative
// 0x0010
struct FUndulationInfoParamNative
{
	bool                                               Checked;                                                  // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HitToDownDirection;                                       // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HitToDirection;                                           // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FVector                                     CheckDirection;                                           // 0x0004(0x000C) (BlueprintVisible, IsPlainOldData)
};

// ScriptStruct BattleLabo.RaycastHitpointInfoNative
// 0x0024
struct FRaycastHitpointInfoNative
{
	bool                                               Enable;                                                   // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Point;                                                    // 0x0004(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0010(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              KeyValue;                                                 // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BattleLabo.JsonData
// 0x0010
struct FJsonData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct BattleLabo.DebugParam
// 0x0004
struct FDebugParam
{
	float                                              ZoomRatio;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BattleLabo.ReplayParam
// 0x0004
struct FReplayParam
{
	float                                              ReplayDilationTime;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BattleLabo.BTL_MontageSoftRefTableRow
// 0x0028 (0x0030 - 0x0008)
struct FBTL_MontageSoftRefTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BattleLabo.BTL_MontageSoftRefTableRow.Montage
};

// ScriptStruct BattleLabo.AttackSweepResult
// 0x0090
struct FAttackSweepResult
{
	class UPrimitiveComponent*                         SourcePrimitive;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // 0x0008(0x0088) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct BattleLabo.BTL_AttackTableRow
// 0x0038 (0x0040 - 0x0008)
struct FBTL_AttackTableRow : public FTableRowBase
{
	struct FString                                     Command;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EBTL_HoldInputType                                 Hold;                                                     // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FName                                       AttackName;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Item;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SelectRangeMin;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SelectRangeMax;                                           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBTL_AutoOnOff                                     Equip;                                                    // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct BattleLabo.BTL_ScoreTypeDataTableRow
// 0x0018 (0x0020 - 0x0008)
struct FBTL_ScoreTypeDataTableRow : public FTableRowBase
{
	class UTexture2D*                                  Icon;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Group;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct BattleLabo.BTL_AttackCommandSequence
// 0x0010
struct FBTL_AttackCommandSequence
{
	TArray<unsigned char>                              Commands;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct BattleLabo.BTLAnimNode_LookAt
// 0x0048 (0x0160 - 0x0118)
struct FBTLAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
	float                                              Angle;                                                    // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FBoneReference                              StartBone;                                                // 0x0120(0x0018) (Edit)
	struct FBoneReference                              EndBone;                                                  // 0x0138(0x0018) (Edit)
	TArray<struct FBoneReference>                      CachedBoneReferences;                                     // 0x0150(0x0010) (ZeroConstructor)
};

// ScriptStruct BattleLabo.BTLDataTableHandle
// 0x0008
struct FBTLDataTableHandle
{
	class UDataTable*                                  DataTable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BattleLabo.UndulationInfoNative
// 0x0030
struct FUndulationInfoNative
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct BattleLabo.AnimNode_AdjustIdle
// 0x0140 (0x0170 - 0x0030)
struct FAnimNode_AdjustIdle : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     Base;                                                     // 0x0030(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FTransform                                  PrevTransform;                                            // 0x0050(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  BaseTransform;                                            // 0x0080(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  TargetTransform;                                          // 0x00B0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                MoveStepMode;                                             // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8C];                                      // 0x00E4(0x008C) MISSED OFFSET
};

// ScriptStruct BattleLabo.AnimNode_AdjustMoveGap
// 0x0160 (0x0190 - 0x0030)
struct FAnimNode_AdjustMoveGap : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0030(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FTransform                                  StartTransform;                                           // 0x0050(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RootScale;                                                // 0x0080(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x104];                                     // 0x008C(0x0104) MISSED OFFSET
};

// ScriptStruct BattleLabo.AnimNode_AdjustOnTransform
// 0x0150 (0x0180 - 0x0030)
struct FAnimNode_AdjustOnTransform : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0030(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FTransform                                  StartTransform;                                           // 0x0050(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               EnableAdjust;                                             // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xFF];                                      // 0x0081(0x00FF) MISSED OFFSET
};

// ScriptStruct BattleLabo.AnimNode_AdjustMoveTier
// 0x0160 (0x0190 - 0x0030)
struct FAnimNode_AdjustMoveTier : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0030(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FTransform                                  StartTransform;                                           // 0x0050(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RootScale;                                                // 0x0080(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x104];                                     // 0x008C(0x0104) MISSED OFFSET
};

// ScriptStruct BattleLabo.AnimNode_AdjustRootMotion
// 0x0060 (0x0090 - 0x0030)
struct FAnimNode_AdjustRootMotion : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0030(0x0018) (Edit, BlueprintVisible)
	bool                                               CancelFirstFrameOnly;                                     // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x47];                                      // 0x0049(0x0047) MISSED OFFSET
};

// ScriptStruct BattleLabo.AnimNode_AdjustStep
// 0x0380 (0x03B0 - 0x0030)
struct FAnimNode_AdjustStep : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     Base;                                                     // 0x0030(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FTransform                                  PrevTransform;                                            // 0x0050(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  BaseTransform;                                            // 0x0080(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  TargetTransform;                                          // 0x00B0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                MoveStepMode;                                             // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableTwist;                                              // 0x00E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableSlant;                                              // 0x00E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2CA];                                     // 0x00E6(0x02CA) MISSED OFFSET
};

// ScriptStruct BattleLabo.MyAnimNode_AttackIK
// 0x0040 (0x02B0 - 0x0270)
struct FMyAnimNode_AttackIK : public FAnimNode_TwoBoneIK
{
	struct FVector                                     TargetLocation;                                           // 0x0270(0x000C) (Edit, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     TargetLocationSpace;                                      // 0x027C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x027D(0x0003) MISSED OFFSET
	struct FBoneReference                              IKBoneRef;                                                // 0x0280(0x0018) (Edit)
	struct FBoneReference                              JointBoneRef;                                             // 0x0298(0x0018) (Edit)
};

// ScriptStruct BattleLabo.AnimNode_BendPose
// 0x0120 (0x0150 - 0x0030)
struct FAnimNode_BendPose : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     Base;                                                     // 0x0030(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FTransform                                  BendBase;                                                 // 0x0050(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     TargetVector;                                             // 0x0080(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TargetHeight;                                             // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetAngle;                                              // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xBC];                                      // 0x0094(0x00BC) MISSED OFFSET
};

// ScriptStruct BattleLabo.AnimNode_EditPoseTest
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_EditPoseTest : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0030(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct BattleLabo.AnimNode_SequencePlayerEx
// 0x0180 (0x0230 - 0x00B0)
struct FAnimNode_SequencePlayerEx : public FAnimNode_SequencePlayer
{
	ESequencePlayMode                                  PlayMode;                                                 // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFixSide                                           FixSide;                                                  // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EStepType                                          StepType;                                                 // 0x00B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD];                                       // 0x00B3(0x000D) MISSED OFFSET
	struct FTransform                                  PrevTransform;                                            // 0x00C0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  BaseTransform;                                            // 0x00F0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  TargetTransform;                                          // 0x0120(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE0];                                      // 0x0150(0x00E0) MISSED OFFSET
};

// ScriptStruct BattleLabo.AnimNode_SlantPose
// 0x0120 (0x0150 - 0x0030)
struct FAnimNode_SlantPose : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     Base;                                                     // 0x0030(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FTransform                                  SlantBase;                                                // 0x0050(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     TargetVector;                                             // 0x0080(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TargetHeight;                                             // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC0];                                      // 0x0090(0x00C0) MISSED OFFSET
};

// ScriptStruct BattleLabo.AnimNode_TwistPose
// 0x0120 (0x0150 - 0x0030)
struct FAnimNode_TwistPose : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     Base;                                                     // 0x0030(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FTransform                                  TwistBase;                                                // 0x0050(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0080(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TargetHeight;                                             // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC0];                                      // 0x0090(0x00C0) MISSED OFFSET
};

// ScriptStruct BattleLabo.AnimNode_TwistPoseAngle
// 0x0110 (0x0140 - 0x0030)
struct FAnimNode_TwistPoseAngle : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     Base;                                                     // 0x0030(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FTransform                                  TwistBase;                                                // 0x0050(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TwistAngle;                                               // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetHeight;                                             // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB8];                                      // 0x0088(0x00B8) MISSED OFFSET
};

// ScriptStruct BattleLabo.AnimNode_TwistPoseToTarget
// 0x0180 (0x01B0 - 0x0030)
struct FAnimNode_TwistPoseToTarget : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     Base;                                                     // 0x0030(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FTransform                                  PrevTransform;                                            // 0x0050(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  BaseTransform;                                            // 0x0080(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  TargetTransform;                                          // 0x00B0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                MoveStepMode;                                             // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xCC];                                      // 0x00E4(0x00CC) MISSED OFFSET
};

// ScriptStruct BattleLabo.AnimNode_TwoWayBlendCustom
// 0x00A8 (0x00D8 - 0x0030)
struct FAnimNode_TwoWayBlendCustom : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     Source;                                                   // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FComponentSpacePoseLink                     Destination;                                              // 0x0048(0x0018) (Edit, BlueprintVisible)
	float                                              TransitionTime;                                           // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECurveAdaptType                                    CurveAdaptType;                                           // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LeftFirst;                                                // 0x0065(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x72];                                      // 0x0066(0x0072) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
