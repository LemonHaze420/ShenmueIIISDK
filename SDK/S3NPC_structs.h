#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum S3NPC.ES3NPCMovingState
enum class ES3NPCMovingState : uint8_t
{
	ES3NPCMovingState__VE_Regular  = 0,
	ES3NPCMovingState__VE_Washing  = 1,
	ES3NPCMovingState__VE_CleanUp  = 2,
	ES3NPCMovingState__VE_Cow      = 3,
	ES3NPCMovingState__VE_Draw     = 4,
	ES3NPCMovingState__VE_Livestock = 5,
	ES3NPCMovingState__VE_Rake     = 6,
	ES3NPCMovingState__VE_Shopping = 7,
	ES3NPCMovingState__VE_MAX      = 8
};


// Enum S3NPC.ERotationAnimSelector
enum class ERotationAnimSelector : uint8_t
{
	ERotationAnimSelector__VE_Forward = 0,
	ERotationAnimSelector__VE_Right45 = 1,
	ERotationAnimSelector__VE_Right90 = 2,
	ERotationAnimSelector__VE_Right135 = 3,
	ERotationAnimSelector__VE_BehindR = 4,
	ERotationAnimSelector__VE_BehindL = 5,
	ERotationAnimSelector__VE_Left135 = 6,
	ERotationAnimSelector__VE_Left90 = 7,
	ERotationAnimSelector__VE_Left45 = 8,
	ERotationAnimSelector__VE_MAX  = 9
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct S3NPC.S3RegionStructTableRow
// 0x0010
struct FS3RegionStructTableRow
{
	struct FName                                       RegionTag;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Regionintent;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct S3NPC.ScheduleTableRowBase
// 0x0018 (0x0020 - 0x0008)
struct FScheduleTableRowBase : public FTableRowBase
{
	TArray<struct FS3RegionStructTableRow>             RegionInfo;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              StartTime;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct S3NPC.NPCRelationshipTableRowBase
// 0x0028 (0x0030 - 0x0008)
struct FNPCRelationshipTableRowBase : public FTableRowBase
{
	struct FGameplayTagContainer                       AnyMatchQueryTag;                                         // 0x0008(0x0020) (Edit, BlueprintVisible)
	float                                              Friendship;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Interests;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct S3NPC.POIListStruct
// 0x0018
struct FPOIListStruct
{
	TArray<class AS3NPCPOIBase*>                       POILists;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              StartTime;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct S3NPC.POIListWithGameplayTagsStruct
// 0x0030
struct FPOIListWithGameplayTagsStruct
{
	struct FGameplayTagContainer                       IDTags;                                                   // 0x0000(0x0020) (Edit, BlueprintVisible)
	TArray<struct FPOIListStruct>                      CharacterPOILists;                                        // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct S3NPC.S3NPCAttachmentStruct
// 0x0028
struct FS3NPCAttachmentStruct
{
	class AActor*                                      AttachObject;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 SpawnStaticMesh;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct S3NPC.S3TargetList
// 0x0018
struct FS3TargetList
{
	TArray<class AS3NPCPOIPointBase*>                  TargetList;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              fStartTime;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fEndTime;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct S3NPC.TargetListTableRowBase
// 0x0018 (0x0020 - 0x0008)
struct FTargetListTableRowBase : public FTableRowBase
{
	TArray<struct FName>                               TargetPointTags;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              fStartTime;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fEndTime;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct S3NPC.S3NPCRegionStruct
// 0x0010
struct FS3NPCRegionStruct
{
	class AS3NPCRegionBase*                            RegionRef;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Regionintent;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct S3NPC.S3NPCScheduleStruct
// 0x0018
struct FS3NPCScheduleStruct
{
	TArray<struct FS3NPCRegionStruct>                  Region;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              StartTime;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct S3NPC.S3NPCScheduleSplineStruct
// 0x0010
struct FS3NPCScheduleSplineStruct
{
	class AS3NPCSplineActorBase*                       ScheduleSplineActor;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct S3NPC.S3NPCSpawnerStruct
// 0x0040
struct FS3NPCSpawnerStruct
{
	class UClass*                                      NPC_Class;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AS3NPCSpawnPointBase*                        SpawnPoint;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AS3NPCPOITargetListManagerBase*              POITargetPointListArray;                                  // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePOITargetPointList;                                   // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSpline;                                               // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	struct FGameplayTagContainer                       GroupTags;                                                // 0x0020(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct S3NPC.S3POITimeTableStruct
// 0x0008
struct FS3POITimeTableStruct
{
	float                                              StartTime;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
