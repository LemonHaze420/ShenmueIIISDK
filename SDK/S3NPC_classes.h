#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class S3NPC.S3KismetNPCLibrary
// 0x0000 (0x0028 - 0x0028)
class US3KismetNPCLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3NPC.S3KismetNPCLibrary");
		return ptr;
	}


	float VectorGetDistance(const struct FVector& Vector1, const struct FVector& Vector2, bool bIsDistance2D);
	bool TryProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent, struct FVector* Projected);
	TEnumAsByte<ERootMotionMode> SetRootMotionMode(class UAnimInstance* TargetAnimInstance, TEnumAsByte<ERootMotionMode> RootMotionMode);
	void SetGlobalAvoidanceProperties(class UObject* WorldContextObject, float LockTimeAfterAvoid, float LockTimeAfterClean, float DeltaTimeToPredict);
	ERotationAnimSelector RotatingAnimParameter(class AActor* NPC, class AActor* Target, const struct FVector& TargetLocation);
	ERotationAnimSelector RotateAnimationSelector(float fAngle, bool bOntheLeft);
	class AActor* RandomGetAndRemove(TArray<class AActor*> InputArray, TArray<class AActor*>* OutInputArray);
	struct FGameplayTagQuery MakeAnyMatchQueryByContainer(const struct FGameplayTagContainer& InputContainer);
	ERotationAnimSelector InteractionRotatingSelector(class AActor* NPC, class AActor* Target, const struct FVector& TargetLocation);
	float IKFootTrace(float fTraceDistance, const struct FName& FootSocketName, class ACharacter* IKCharacter);
	struct FScheduleTableRowBase GetRowByNameScheduleTable(class UDataTable* DataTable, const struct FName& pName, bool* Result);
	struct FNPCRelationshipTableRowBase GetRowByNameNPCRelationshipTable(class UDataTable* DataTable, const struct FName& pName, bool* Result);
	struct FVector GetRandomProjectedLocation(const struct FVector& QueryExtend, class AActor* Context, class AActor** HitActor, bool* OutValidLocation);
	struct FVector GetRandomPointTracedSphere(class AActor* Context, const struct FVector& RandomCenter, const struct FVector& ForwardVector, float RadiusMin, float RadiusMax, float VerticleAngleMin, float VerticleAngleMax, float ClampedAngle, bool* bSuccess);
	struct FVector GetRandomPointTracedCylinder(class AActor* Context, const struct FVector& RandomCenter, const struct FVector& ForwardVector, float RadiusMin, float RadiusMax, float VerticleOffsetMax, float ClampedAngle, bool* bSuccess);
	struct FVector GetRandomPointBetweenSpheresClampedForward(const struct FVector& RandomCenter, const struct FVector& ForwardVector, float RadiusMin, float RadiusMax, float VerticleAngleMin, float VerticleAngleMax, float ClampedAngle);
	struct FVector GetRandomPointBetweenSpheres(const struct FVector& RandomCenter, float RadiusMin, float RadiusMax, float VerticleAngleMin, float VerticleAngleMax);
	struct FVector GetRandomPointBetweenCylindersClampedForward(const struct FVector& RandomCenter, const struct FVector& ForwardVector, float RadiusMin, float RadiusMax, float VerticleOffsetMax, float ClampedAngle);
	struct FVector GetRandomLocationZTop(const struct FVector& Extend, class AActor* ActorTrans);
	struct FString GetMapName(class AActor* LevelContext);
	struct FVector GetLocationNextSplinePoint(class USplineComponent* InputSpline, float Distance);
	float GetForwardClampedAngle(class AActor* Actor, class AActor* Target, const struct FVector& TargetLocation, bool* bOutIsOntheLeft);
	float GetCurrentMontageSectionLengthPercentage(class UAnimInstance* TargetAnimInstance, class UAnimMontage* CurrentMontage, const struct FName& MontageSection);
	float GetCurrentMontageLengthPercentage(class UAnimInstance* TargetAnimInstance, class UAnimMontage* CurrentMontage);
	float GetClampedAngleInTwoForwards(class AActor* Actor, class AActor* Target, const struct FVector& TargetForwardVector, bool* bOutLeftTurn);
	class UAvoidanceManager* GetAvoidanceManager(class UObject* WorldContextObject);
	void DisableSplitScreen(class AActor* Context, bool bDisable);
	float ComponentGetDistance(class USceneComponent* Component1, class USceneComponent* Component2, bool bIsDistance2D);
	bool AlignRotationLookat(class AActor* Actor1, class AActor* Actor2, float DeltaTime, float RotInterpSpeed, class AActor** OutActor1, class AActor** OutActor2);
	bool AlignLocationRotation(class AActor* NPC, class AActor* Target, float DeltaTime, float LocInterpSpeed, float RotInterpSpeed, class AActor** OutNPC, class AActor** OutTarget);
	float ActorGetDistance(class AActor* Actor1, class AActor* Actor2, bool bIsDistance2D);
};


// Class S3NPC.S3InteractionManager
// 0x0000 (0x0328 - 0x0328)
class AS3InteractionManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3NPC.S3InteractionManager");
		return ptr;
	}

};


// Class S3NPC.S3NPCPOIListBase
// 0x0030 (0x0358 - 0x0328)
class AS3NPCPOIListBase : public AActor
{
public:
	struct FPOIListWithGameplayTagsStruct              POIListStruct;                                            // 0x0328(0x0030) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3NPC.S3NPCPOIListBase");
		return ptr;
	}


	bool GetPOIListbyTags(const struct FGameplayTagQuery& InputTagQuery, float GameTime, TArray<class AS3NPCPOIBase*>* POIs);
};


// Class S3NPC.S3NPCPOIPointBase
// 0x0018 (0x0340 - 0x0328)
class AS3NPCPOIPointBase : public AActor
{
public:
	bool                                               bIsAvailable;                                             // 0x0328(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsing;                                                   // 0x0329(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x032A(0x0006) MISSED OFFSET
	TArray<struct FS3NPCAttachmentStruct>              ActionWithAttachment;                                     // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3NPC.S3NPCPOIPointBase");
		return ptr;
	}

};


// Class S3NPC.S3NPCPOITargetListBase
// 0x0010 (0x0338 - 0x0328)
class AS3NPCPOITargetListBase : public AActor
{
public:
	TArray<class AS3NPCPOIPointBase*>                  POITargetLists;                                           // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3NPC.S3NPCPOITargetListBase");
		return ptr;
	}

};


// Class S3NPC.S3NPCEnvQueryTestInVolume
// 0x0008 (0x01C8 - 0x01C0)
class US3NPCEnvQueryTestInVolume : public UEnvQueryTest
{
public:
	class UClass*                                      VolumeContext;                                            // 0x01C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3NPC.S3NPCEnvQueryTestInVolume");
		return ptr;
	}

};


// Class S3NPC.S3NPCPOIBase
// 0x0000 (0x0328 - 0x0328)
class AS3NPCPOIBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3NPC.S3NPCPOIBase");
		return ptr;
	}

};


// Class S3NPC.S3NPCPOITargetListManagerBase
// 0x0010 (0x0338 - 0x0328)
class AS3NPCPOITargetListManagerBase : public AActor
{
public:
	TArray<struct FS3TargetList>                       TargetListArray;                                          // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3NPC.S3NPCPOITargetListManagerBase");
		return ptr;
	}


	TArray<class AS3NPCPOIPointBase*> PickUpTargetListByTime(float GameTime, bool* bFoundList, int* ListIndex);
	struct FTargetListTableRowBase GetRowByNameTargetListDataTable(class UDataTable* DataTable, const struct FName& pName, bool* Result);
};


// Class S3NPC.S3NPCRegionBase
// 0x0038 (0x0398 - 0x0360)
class AS3NPCRegionBase : public AVolume
{
public:
	class UTextRenderComponent*                        StandardPointComponent;                                   // 0x0360(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       AISelectionTags;                                          // 0x0368(0x0020) (Edit, BlueprintVisible)
	TArray<struct FVector>                             ReachablePointSet;                                        // 0x0388(0x0010) (BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3NPC.S3NPCRegionBase");
		return ptr;
	}


	bool PointInsideVolume(const struct FVector& WorldLocation, float SphereRadius);
	bool GetRandomReachablePoint();
	struct FVector GetBoxExtend();
};


// Class S3NPC.S3NPCSpawnerBase
// 0x0058 (0x0380 - 0x0328)
class AS3NPCSpawnerBase : public AActor
{
public:
	TArray<struct FS3NPCSpawnerStruct>                 SpawnSettings;                                            // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class ACharacter*>                          SpawnedActors;                                            // 0x0338(0x0010) (BlueprintVisible, ZeroConstructor)
	class AS3NPCScheduleBase*                          Schedule;                                                 // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AS3NPCSplineActorBase*                       SelectedSpline;                                           // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsGroupAI;                                               // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSpawned;                                               // 0x0359(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x035A(0x0002) MISSED OFFSET
	int                                                SplineActorSelector;                                      // 0x035C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // 0x0360(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    SpawnRotation;                                            // 0x036C(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bUseSpawnPoint;                                           // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0379(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3NPC.S3NPCSpawnerBase");
		return ptr;
	}


	bool SpawnNPC(float GameTime, float GroupMemberSpawnRadius);
	class ACharacter* SpawnActorByBP(int StructIndex);
	void DestroyNPC();
	bool AddPOITargetList(int StructIndex, class ACharacter* NPCToAdd);
	void AddGroupTags(class ACharacter* NPCToSet, int NPCIndex);
};


// Class S3NPC.S3NPCSpawnPointBase
// 0x0000 (0x0328 - 0x0328)
class AS3NPCSpawnPointBase : public ATargetPoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3NPC.S3NPCSpawnPointBase");
		return ptr;
	}

};


// Class S3NPC.S3NPCSplineActorBase
// 0x0008 (0x0330 - 0x0328)
class AS3NPCSplineActorBase : public AActor
{
public:
	class USplineComponent*                            SplineComponent;                                          // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3NPC.S3NPCSplineActorBase");
		return ptr;
	}

};


// Class S3NPC.S3NPCScheduleBase
// 0x0028 (0x0350 - 0x0328)
class AS3NPCScheduleBase : public AActor
{
public:
	TArray<struct FS3NPCScheduleStruct>                Schedule;                                                 // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FS3NPCScheduleSplineStruct>          ScheduleSplined;                                          // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              TimePreMove;                                              // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x034C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3NPC.S3NPCScheduleBase");
		return ptr;
	}

};


// Class S3NPC.S3NPCSettings
// 0x0018 (0x0040 - 0x0028)
class US3NPCSettings : public UObject
{
public:
	struct FSoftObjectPath                             BehaviorTreeEdito;                                        // 0x0028(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3NPC.S3NPCSettings");
		return ptr;
	}

};


// Class S3NPC.S3NPCCommonStruct
// 0x0000 (0x0028 - 0x0028)
class US3NPCCommonStruct : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class S3NPC.S3NPCCommonStruct");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
