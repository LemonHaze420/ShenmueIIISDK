#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class BattleLabo.BTL_Character
// 0x0010 (0x0750 - 0x0740)
class ABTL_Character : public ACharacter
{
public:
	TArray<class USkeletalMeshComponent*>              SubMeshComponents;                                        // 0x0740(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_Character");
		return ptr;
	}


	void TrySetRadiusSafe(float TargetRadius);
	void SetSkeletalMeshes(class USkeletalMesh* MainMesh, TArray<class USkeletalMesh*> SubMeshes, bool bReinitPose);
	void SetAllPhysicsResponseToChannel(class UPrimitiveComponent* PrimComp, TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);
	bool IsValidSectionNameFromCurrentMontage(const struct FName& InSectionName);
};


// Class BattleLabo.BTL_SequenceActor
// 0x0080 (0x03A8 - 0x0328)
class ABTL_SequenceActor : public AActor
{
public:
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x0328(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UBTL_SequencePlayer*                         SequencePlayer;                                           // 0x0368(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FSoftObjectPath                             LevelSequence;                                            // 0x0370(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0388(0x0008) MISSED OFFSET
	class UObject*                                     CacheCameraObject;                                        // 0x0390(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnChangedCameraDispatcher;                                // 0x0398(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_SequenceActor");
		return ptr;
	}


	void SetSequence(class ULevelSequence* InSequence);
	void SetPlaybackSettingsPauseAtEnd(bool bInPauseAtEnd);
	void Play();
	void OnUdateCameraCut(class UObject* CameraObject, class UObject* UnlockIfCameraObject, bool bJumpCut);
	class ULevelSequence* GetLevelSequence();
};


// Class BattleLabo.ActorManagementComponentBase
// 0x00C8 (0x01B8 - 0x00F0)
class UActorManagementComponentBase : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xB9];                                      // 0x00F0(0x00B9) MISSED OFFSET
	bool                                               IncludeOwner;                                             // 0x01A9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x01AA(0x0006) MISSED OFFSET
	class UClass*                                      ManagedActorClass;                                        // 0x01B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.ActorManagementComponentBase");
		return ptr;
	}


	void Start();
	void OnManagedActorUnregistered_ImplementableEvent(class AActor* Actor);
	void OnManagedActorRegistered_ImplementableEvent(class AActor* Actor);
	bool CheckManagedActor(class AActor* Actor);
};


// Class BattleLabo.BTL_ActionSolverComponent
// 0x0018 (0x0108 - 0x00F0)
class UBTL_ActionSolverComponent : public UActorComponent
{
public:
	TArray<float>                                      TimePassedSinceActions;                                   // 0x00F0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_ActionSolverComponent");
		return ptr;
	}


	void TickActionTimers(float DeltaTime, unsigned char CurrentIndex);
	void ResetCurrentActionTimer(unsigned char Index);
	void InitializeActionTimers(int Count);
	float GetTimePassedSinceAction(unsigned char Index);
	float GetCurrentActionTimer();
};


// Class BattleLabo.BTL_AIController
// 0x0008 (0x0440 - 0x0438)
class ABTL_AIController : public AAIController
{
public:
	class UCrowdFollowingComponent*                    CrowdFollowingComponent;                                  // 0x0438(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_AIController");
		return ptr;
	}


	void SetCrowdSlowdownAtGoal(bool Enable);
	void SetCrowdSeparationWeight(float Weight);
};


// Class BattleLabo.BTL_AnimInstance
// 0x0030 (0x0390 - 0x0360)
class UBTL_AnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0360(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_AnimInstance");
		return ptr;
	}


	void SetRootTranslationScale(float Value);
	class UAnimMontage* SearchClosestMontage(TArray<class UAnimMontage*> Candidates, float TargetEndYaw);
	void ResetRootTranslationScale();
	int GetClosest8DirectionIndex(float Target);
	float GetClosest8DirectionAngle(float InputAngle, float FirstCheckAngle, float Hysteresis);
	float BiasTargetDirection(float TargetAngle, float PreviousTarget);
};


// Class BattleLabo.BTL_AnimNotifyContainer
// 0x00A0 (0x0190 - 0x00F0)
class UBTL_AnimNotifyContainer : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00F0(0x0050) UNKNOWN PROPERTY: SetProperty BattleLabo.BTL_AnimNotifyContainer.NotifyIDSet
	TMap<struct FName, int>                            NotifyIDCounters;                                         // 0x0140(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_AnimNotifyContainer");
		return ptr;
	}


	void Reset();
	void RemoveNotifyCount(const struct FName& State);
	void ClearNotifyCounts();
	bool CheckNotifyExistFast(const struct FName& Key);
	void AddNotifyCount(const struct FName& State);
};


// Class BattleLabo.BTL_AnimSetDataAsset
// 0x0000 (0x0030 - 0x0030)
class UBTL_AnimSetDataAsset : public UPrimaryDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_AnimSetDataAsset");
		return ptr;
	}

};


// Class BattleLabo.BTL_AttackDBAsset
// 0x0008 (0x0038 - 0x0030)
class UBTL_AttackDBAsset : public UDataAsset
{
public:
	class UDataTable*                                  AllAttackTable;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_AttackDBAsset");
		return ptr;
	}

};


// Class BattleLabo.BTL_NamedCooldownContainer
// 0x0020 (0x0048 - 0x0028)
class UBTL_NamedCooldownContainer : public UObject
{
public:
	TArray<struct FName>                               IdsOnCooldown;                                            // 0x0028(0x0010) (ZeroConstructor)
	TArray<float>                                      CooldownTimes;                                            // 0x0038(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_NamedCooldownContainer");
		return ptr;
	}


	void SetCooldown(const struct FName& Name, float Time);
	bool IsOnCooldown(const struct FName& Name);
	void ClearAllCooldowns();
};


// Class BattleLabo.BTL_AttackHitSolverComponent
// 0x0038 (0x0128 - 0x00F0)
class UBTL_AttackHitSolverComponent : public UActorComponent
{
public:
	TArray<struct FAttackColliderData>                 AttackColliders;                                          // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FAttackOverlapResult>                AttackCollisions;                                         // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UBTL_NamedCooldownContainer*>         CooldownContainers;                                       // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              AttackColliderInflation;                                  // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0124(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_AttackHitSolverComponent");
		return ptr;
	}


	void UpdateAttackCollisions(TArray<struct FName> Tags);
	void RegisterAttackCollider(class UPrimitiveComponent* Collider, const struct FName& identifer);
	void CacheColliderTransforms();
};


// Class BattleLabo.BTL_BattleManager
// 0x0000 (0x0328 - 0x0328)
class ABTL_BattleManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_BattleManager");
		return ptr;
	}

};


// Class BattleLabo.BTL_BattleRallyFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UBTL_BattleRallyFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_BattleRallyFunctionLibrary");
		return ptr;
	}


	struct FBTL_TimeMSC STATIC_MakeTimeMSCFromFloat(float Seconds);
	float STATIC_MakeFloatFromTimeMSC(const struct FBTL_TimeMSC& Time);
	bool STATIC_IsTimeMSCZero(const struct FBTL_TimeMSC& Time);
	class UBTL_CourseRecordBook* STATIC_CreateRecordBook(TArray<class UBTL_CourseDataAsset*> Courses);
	class UBTL_CourseLeaderboard* STATIC_CreateLeaderboard(const struct FName& Course, class UDataTable* DataTable);
	class UBTL_CourseDataAsset* STATIC_CreateCourseDataAsset(TArray<struct FDataTableRowHandle> Battles);
};


// Class BattleLabo.BTL_BlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UBTL_BlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_BlueprintFunctionLibrary");
		return ptr;
	}


	class UClass* STATIC_FindUserClass(class UClass* BaseClass);
	struct FVector STATIC_ClosestPointOnSegment(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint);
};


// Class BattleLabo.BTL_BRallyGoalpost
// 0x0008 (0x0330 - 0x0328)
class ABTL_BRallyGoalpost : public AActor
{
public:
	class UBTL_GoalpostBehavior*                       Behavior;                                                 // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_BRallyGoalpost");
		return ptr;
	}

};


// Class BattleLabo.BTL_CharacterDataAsset
// 0x0078 (0x00A8 - 0x0030)
class UBTL_CharacterDataAsset : public UDataAsset
{
public:
	struct FName                                       CharacterProfileName;                                     // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharacterVoiceName;                                       // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class USkeletalMesh*>                       SubSkeletalMeshes;                                        // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UBTL_AnimSetDataAsset*                       AnimSetData;                                              // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               PhysicsAsset;                                             // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               BlinkSequence;                                            // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CharacterClass;                                           // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FDataTableRowHandle                         ParameterTableRow;                                        // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<class UObject*>                             PreloadAssets;                                            // 0x0088(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) UNKNOWN PROPERTY: ArrayProperty BattleLabo.BTL_CharacterDataAsset.PreloadSoftAssets

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_CharacterDataAsset");
		return ptr;
	}


	class ABTL_Character* SpawnCharacterWithDefaults(class UObject* WorldContextObject, const struct FTransform& SpawnTransform, class UBTL_CharacterDataAsset* Defaults);
	class ABTL_Character* SpawnCharacter(class UObject* WorldContextObject, const struct FTransform& SpawnTransform);
	struct FName GetCharacterVoiceName();
};


// Class BattleLabo.BTL_CharacterEnviromentInterface
// 0x0000 (0x0028 - 0x0028)
class UBTL_CharacterEnviromentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_CharacterEnviromentInterface");
		return ptr;
	}


	TArray<bool> GetAreaFlags();
};


// Class BattleLabo.BTL_CharacterMovementComponent
// 0x0030 (0x07A0 - 0x0770)
class UBTL_CharacterMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0770(0x0008) MISSED OFFSET
	bool                                               bPathFollowerRequestMaxSpeed;                             // 0x0778(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x27];                                      // 0x0779(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_CharacterMovementComponent");
		return ptr;
	}


	bool TestPath(const struct FVector& Destination);
	void ConsumePathFollowerMove();
	void AddWorldOffsetToRootMotion(const struct FVector& DeltaLocation);
	void AddLocalOffsetToRootMotion(const struct FVector& DeltaLocation);
	void AddDeltaYawWithRootMotion(float DeltaRotation);
};


// Class BattleLabo.BTL_CommandLibraryBase
// 0x0110 (0x0138 - 0x0028)
class UBTL_CommandLibraryBase : public UObject
{
public:
	TArray<struct FName>                               AllAttacks;                                               // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FName>                               AllSkillItems;                                            // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<struct FName, struct FName>                   AttackToItemMap;                                          // 0x0048(0x0050) (ZeroConstructor)
	TMap<struct FName, struct FName>                   ItemToAttackMap;                                          // 0x0098(0x0050) (ZeroConstructor)
	TMap<unsigned char, struct FName>                  CommandByteToNameMap;                                     // 0x00E8(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_CommandLibraryBase");
		return ptr;
	}


	TMap<unsigned char, struct FName> MakeDefaultByteToNameMap();
	bool IsSkillEquippable(const struct FName& SkillId);
	bool IsSkillEquappable(const struct FName& SkillId);
	bool IsAttackEquippable(const struct FName& AttackID);
	bool Initialize();
	struct FName FindRequiredItem(const struct FName& Attack);
	struct FName FindAttackByItem(const struct FName& SkillItem);
	TArray<struct FName> ConvertCommandsByteToName(TArray<unsigned char> Input);
	struct FName ConvertCommandByteToName(unsigned char Input);
	bool CheckPreviousAttacks(TArray<struct FName> ActualAttacks, TArray<struct FName> PatternPrevAttacks);
	void CacheComboAttack(const struct FName& Attack);
	void CacheAttackLookupData(const struct FName& Attack, const struct FName& RequiredItem);
};


// Class BattleLabo.BTL_CommandSolver
// 0x0020 (0x0110 - 0x00F0)
class UBTL_CommandSolver : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_CommandSolver");
		return ptr;
	}


	bool StartsWith_NameArray(TArray<struct FName> DoesThis, TArray<struct FName> StartWithThis);
	struct FName SearchMostRecentInAttackHistory(TArray<struct FName> SearchAttacks);
	void RecordAttackToHistory(const struct FName& Attack);
	bool Equals_NameArray(TArray<struct FName> ArrayA, TArray<struct FName> ArrayB);
};


// Class BattleLabo.BTL_CourseDataAsset
// 0x0040 (0x0070 - 0x0030)
class UBTL_CourseDataAsset : public UDataAsset
{
public:
	struct FName                                       Identifier;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartLocationLabel;                                       // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       EndLocationLabel;                                         // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MapTexture;                                               // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  NPCRecords;                                               // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TimeScoreMultiplier;                                      // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<class UBTL_CourseEventData*>                Events;                                                   // 0x0060(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_CourseDataAsset");
		return ptr;
	}

};


// Class BattleLabo.BTL_CourseEventData
// 0x0008 (0x0030 - 0x0028)
class UBTL_CourseEventData : public UObject
{
public:
	int                                                ExtendTime;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_CourseEventData");
		return ptr;
	}

};


// Class BattleLabo.BTL_CourseEventDataBattle
// 0x0018 (0x0048 - 0x0030)
class UBTL_CourseEventDataBattle : public UBTL_CourseEventData
{
public:
	struct FDataTableRowHandle                         BattleHandle;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                MaxDistanceScore;                                         // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_CourseEventDataBattle");
		return ptr;
	}

};


// Class BattleLabo.BTL_CourseLeaderboard
// 0x0020 (0x0048 - 0x0028)
class UBTL_CourseLeaderboard : public UObject
{
public:
	TArray<struct FBTL_LeaderboardRecord>              Records;                                                  // 0x0028(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_CourseLeaderboard");
		return ptr;
	}


	TArray<struct FBTL_LeaderboardRecord> GetRecords();
	bool GetRecordByIndex(int Index, struct FBTL_LeaderboardRecord* OutRecord);
	bool GetRecordByCharacter(const struct FName& CharacterID, struct FBTL_LeaderboardRecord* OutRecord);
	int GetRankPlace(const struct FName& CharacterID);
	int GetRankIndex(const struct FName& CharacterID);
	struct FName GetCourseId();
	int AddRecord(const struct FBTL_LeaderboardRecord& NewEntry);
};


// Class BattleLabo.BTL_CourseRecordBook
// 0x0060 (0x0088 - 0x0028)
class UBTL_CourseRecordBook : public UObject
{
public:
	TArray<class UBTL_CourseLeaderboard*>              LeaderBoards;                                             // 0x0028(0x0010) (ZeroConstructor)
	TMap<struct FName, class UDataTable*>              CourseDefaultLeaderboards;                                // 0x0038(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_CourseRecordBook");
		return ptr;
	}


	class UBTL_CourseLeaderboard* GetLeaderboard(const struct FName& Course);
};


// Class BattleLabo.BTLDataTableFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UBTLDataTableFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTLDataTableFunctionLibrary");
		return ptr;
	}


	bool STATIC_GetDataTableRowFromName(class UScriptStruct* Struct, class UDataTable* Table, const struct FName& RowName, struct FTableRowBase* OutRow);
};


// Class BattleLabo.BTL_EnemySearchPath
// 0x0060 (0x0088 - 0x0028)
class UBTL_EnemySearchPath : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET
	bool                                               IsStoredNodeArray;                                        // 0x0070(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	TArray<struct FBTL_EnemySearchPathNode>            StoredNodeArray;                                          // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_EnemySearchPath");
		return ptr;
	}


	void SetupOrigin(int GoalIndex);
	int SetupInsert(int AIndex, float ACost, int BIndex, float BCost);
	int Insert(int AIndex, float ACost, int BIndex, float BCost);
	void FindAndUsePath(int Start, TArray<int>* Route);
	int AddNode();
	void AddEdge(int NodeIndex, int EdgeTo, float EdgeCost);
};


// Class BattleLabo.BTL_BattleSpawner
// 0x0000 (0x0328 - 0x0328)
class ABTL_BattleSpawner : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_BattleSpawner");
		return ptr;
	}


	void LaunchDebugBattle();
};


// Class BattleLabo.BTL_GoalpostBehavior
// 0x0000 (0x0028 - 0x0028)
class UBTL_GoalpostBehavior : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_GoalpostBehavior");
		return ptr;
	}


	bool OnPlayerEntered(class ABTL_Character* Player);
};


// Class BattleLabo.BTL_EQSQueryRenderingComponent
// 0x0020 (0x0580 - 0x0560)
class UBTL_EQSQueryRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0560(0x0008) MISSED OFFSET
	int                                                DispIndex;                                                // 0x0568(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x056C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_EQSQueryRenderingComponent");
		return ptr;
	}

};


// Class BattleLabo.BTL_MeshFaderComponent
// 0x0098 (0x0188 - 0x00F0)
class UBTL_MeshFaderComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnMeshVisibilityChanged;                                  // 0x00F0(0x0010) (ZeroConstructor, InstancedReference)
	TMap<struct FName, class UCurveFloat*>             MaterialFadeAlphaCurveMap;                                // 0x0100(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FBTL_MeshFadeSettings>               MeshSettings;                                             // 0x0150(0x0010) (ZeroConstructor)
	TArray<class AActor*>                              FadeOutExecutors;                                         // 0x0160(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0170(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_MeshFaderComponent");
		return ptr;
	}


	void StartFadeOut(class AActor* Executor, float FadeTime);
	void StartFadeIn(class AActor* Executor, float FadeTime);
	void SetMeshComponents(TArray<class UMeshComponent*> Components);
	class UMaterialInterface* CreateFadeMaterial(class UMaterialInterface* SourceMaterial);
	void AddMeshComponent(class UMeshComponent* Component);
};


// Class BattleLabo.BTLKismetLibrary
// 0x0000 (0x0028 - 0x0028)
class UBTLKismetLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTLKismetLibrary");
		return ptr;
	}


	int STATIC_XorIntegerFlag(int lflag, int rflag);
	int STATIC_SetIntegerFlag(int flag, int bitindex, bool Status);
	int STATIC_OrIntegerFlag(int lflag, int rflag);
	int STATIC_NotIntegerFlag(int flag);
	struct FTransform STATIC_IntersectionOfLineAndCircle(const struct FVector& _startPos, const struct FVector& _endPos, const struct FVector& _circleCenterPos, float _rad);
	struct FSyncActionInfoNative STATIC_GetRowByNameSyncActionInfo(class UDataTable* DataTable, const struct FName& pName, bool* Result);
	struct FMoveGapConditionNative STATIC_GetRowByNameMoveGapCondition(class UDataTable* DataTable, const struct FName& pName, bool* Result);
	struct FMotionDatabaseElementNative STATIC_GetRowByNameMotionDatabaseElement(class UDataTable* DataTable, const struct FName& pName, bool* Result);
	float STATIC_GetNotifyTriggerTime(class UAnimMontage* Montage, class UAnimNotify* Notify);
	class UAnimNotify* STATIC_GetNotifyTrigger(class UAnimMontage* Montage, class UClass* NotifyClass, float StartRange, float EndRange, bool Last);
	float STATIC_GetNotifyStateStartTime(class UAnimMontage* Montage, class UAnimNotifyState* NotifyState);
	void STATIC_GetNotifyStates(class UAnimMontage* Montage, class UClass* StateClass, TArray<class UAnimNotifyState*> States);
	float STATIC_GetNotifyStateEndTime(class UAnimMontage* Montage, class UAnimNotifyState* NotifyState);
	class UAnimNotifyState* STATIC_GetNotifyStateAtTime(class UAnimMontage* Montage, class UClass* StateClass, float Time, bool Last);
	class UAnimNotifyState* STATIC_GetNotifyState(class UAnimMontage* Montage, class UClass* StateClass, float StartRange, float EndRange, bool Last);
	bool STATIC_GetIntegerFlag(int flag, int bitindex);
	float STATIC_GetCustomNotifyTime(class UAnimMontage* Montage, const struct FName& NotifyName);
	struct FName STATIC_EstimateNextNameInSequence(TArray<struct FName> Names, int* Confidence);
	bool STATIC_EllipseContains(const struct FVector2D& Point, const struct FVector2D& Radii);
	struct FVector2D STATIC_EllipseClamp(const struct FVector2D& Point, const struct FVector2D& Radii);
	bool STATIC_ContainsNotifyState(class UAnimMontage* Montage, class UAnimNotifyState* NotifyState);
	bool STATIC_CallRemoteLevelEvent(const struct FName& EventName, class AActor* WorldContextObject);
	int STATIC_AndIntegerFlag(int lflag, int rflag);
};


// Class BattleLabo.BTL_MontageListDataAsset
// 0x0010 (0x0040 - 0x0030)
class UBTL_MontageListDataAsset : public UDataAsset
{
public:
	TArray<class UAnimMontage*>                        Montages;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_MontageListDataAsset");
		return ptr;
	}

};


// Class BattleLabo.BTL_NavigationFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UBTL_NavigationFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_NavigationFunctionLibrary");
		return ptr;
	}


	bool STATIC_TestPathExists(class UObject* Querier, const struct FVector& StartLocation, const struct FVector& EndLocation, class UClass* FilterClass);
	class ARecastNavMesh* STATIC_GetRecastNavmesh(class UObject* WorldContextObject);
	float STATIC_FindDistanceToWall(class UObject* WorldContextObject, const struct FVector& StartLoc, class UClass* FilterClass, class ARecastNavMesh* NavData, float MaxDistance, struct FVector* OutClosestPointOnWall);
};


// Class BattleLabo.BTL_NPCLODComponent
// 0x0060 (0x0150 - 0x00F0)
class UBTL_NPCLODComponent : public UActorComponent
{
public:
	class ABTL_Character*                              OwnerCharacter;                                           // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UBTL_StatusComponent*                        StatusComponent;                                          // 0x00F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USplineComponent*                            spline;                                                   // 0x0100(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0108(0x0014) MISSED OFFSET
	float                                              WakeDistanceEuclidean;                                    // 0x011C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WakeDistanceSpline;                                       // 0x0120(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BreakOffDistanceSpline;                                   // 0x0124(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BreakOffBufferSpline;                                     // 0x0128(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReturnStandbyeDistance;                                   // 0x012C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeactivateDistancePlayerEuclidean;                        // 0x0130(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeactivateDistancePlayerSpline;                           // 0x0134(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeactivateDistancePlayerSpawner;                          // 0x0138(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStateChanged;                                           // 0x0140(0x0010) (Edit, ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_NPCLODComponent");
		return ptr;
	}


	EBTL_NPCLODState GetState();
	struct FVector GetSpawnLocation();
};


// Class BattleLabo.BTL_NPCLODSystem
// 0x0030 (0x0120 - 0x00F0)
class UBTL_NPCLODSystem : public UActorComponent
{
public:
	TArray<class UBTL_NPCLODComponent*>                Components;                                               // 0x00F0(0x0010) (ExportObject, ZeroConstructor)
	class USplineComponent*                            spline;                                                   // 0x0100(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0108(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_NPCLODSystem");
		return ptr;
	}


	void SetSpline(class USplineComponent* InSpline);
	void RegisterNPCs(TArray<class ABTL_Character*> NPCs);
};


// Class BattleLabo.BTL_PawnSeperatorComponent
// 0x00A0 (0x0190 - 0x00F0)
class UBTL_PawnSeperatorComponent : public UActorComponent
{
public:
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UShapeComponent*>                     CollisionShapes;                                          // 0x0100(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	class UBTL_RagdollSolverComponent*                 RagdollSolver;                                            // 0x0110(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0118(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_PawnSeperatorComponent");
		return ptr;
	}


	struct FVector GetVirtualActorLocation();
	bool FindSeperationFor(class AActor* Other, class UShapeComponent* Capsule, float Distance, const struct FVector& PushDirection, struct FVector* SeperationVector);
	bool CanLeadSeperationCalc();
	bool CalculateActorSeperation(class AActor* Other, float MaxDistance, struct FVector* SeperationVector);
};


// Class BattleLabo.BTL_NPCDataAsset
// 0x0010 (0x00B8 - 0x00A8)
class UBTL_NPCDataAsset : public UBTL_CharacterDataAsset
{
public:
	class UDataTable*                                  AttackTable;                                              // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               BehaviorTree;                                             // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_NPCDataAsset");
		return ptr;
	}

};


// Class BattleLabo.BTL_RacerDataAsset
// 0x0038 (0x0068 - 0x0030)
class UBTL_RacerDataAsset : public UDataAsset
{
public:
	struct FName                                       TagId;                                                    // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBTL_PlayerCharacterDataAsset*               BattleAsset;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ShortcutSkills;                                           // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FBTL_RacerStatLimits                        Attack;                                                   // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FBTL_RacerStatLimits                        Vitality;                                                 // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UTexture2D*                                  PortraitTexture;                                          // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_RacerDataAsset");
		return ptr;
	}

};


// Class BattleLabo.BTL_RagdollSolverComponent
// 0x00A0 (0x0190 - 0x00F0)
class UBTL_RagdollSolverComponent : public UActorComponent
{
public:
	TArray<class UPrimitiveComponent*>                 PreRagdollCollision;                                      // 0x00F0(0x0010) (ExportObject, ZeroConstructor)
	class UBTL_SkeletalMeshComponent*                  SkeletalMeshComponent;                                    // 0x0100(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           MovementCapsule;                                          // 0x0108(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // 0x0110(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PelvisBoneName;                                           // 0x0118(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       NeckBoneName;                                             // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
	struct FReflectTransform                           ReflectTransformData;                                     // 0x0130(0x0050) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsRagdolling;                                            // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0181(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_RagdollSolverComponent");
		return ptr;
	}


	void SnapActorToPelvis();
	bool PreRagdollOverlap();
	bool MoveActorSafelyToPelvis();
	void InitPreRagdollCollision(TArray<class UPrimitiveComponent*> InCollision, int InObjectTypes);
	struct FVector GetWorldSpacePelvisLocation();
	struct FVector GetVirtualActorLocation();
	bool GetIsRagdolling();
	bool GetBeingRagdoll();
	void EnablePreRagdollCollision(bool Enable);
};


// Class BattleLabo.BTL_PlayerCharacterDataAsset
// 0x0008 (0x00B0 - 0x00A8)
class UBTL_PlayerCharacterDataAsset : public UBTL_CharacterDataAsset
{
public:
	class UClass*                                      CommandLibraryClass;                                      // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_PlayerCharacterDataAsset");
		return ptr;
	}

};


// Class BattleLabo.BTL_ReplayRecordComponent
// 0x0040 (0x0130 - 0x00F0)
class UBTL_ReplayRecordComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00F0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_ReplayRecordComponent");
		return ptr;
	}


	void STATIC_SetReplayRecordTime(float Time);
	float GetStartGameTime();
	float GetEndGameTime();
};


// Class BattleLabo.BTL_ReplaySkeletalMeshComponent
// 0x0040 (0x0BE0 - 0x0BA0)
class UBTL_ReplaySkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0BA0(0x0028) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnReplayFinish;                                           // 0x0BC8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0BD8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_ReplaySkeletalMeshComponent");
		return ptr;
	}


	void ToggleReplayStopSwitch();
	void StartReplay(class UBTL_ReplayRecordComponent* ReplayRecordComponent, float StartGameTime, float EndGameTime);
	void ReplayToHead();
	void FinishReplay();
	void AddReplayTime(float AddTime);
};


// Class BattleLabo.BTL_RootMotionComponent
// 0x0000 (0x00F0 - 0x00F0)
class UBTL_RootMotionComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_RootMotionComponent");
		return ptr;
	}

};


// Class BattleLabo.BTL_RuntimeAttackDB
// 0x0110 (0x0138 - 0x0028)
class UBTL_RuntimeAttackDB : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnLoadFinished;                                           // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FBTL_MontageRefSearchable>           MontageList;                                              // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0048(0x00D8) MISSED OFFSET
	TArray<struct FBTL_MontageSoftPtrSearchableData>   MontageSoftPtrs;                                          // 0x0120(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0130(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_RuntimeAttackDB");
		return ptr;
	}


	bool SearchMontages(const struct FName& SearchTerm, TArray<class UAnimMontage*>* Results);
	void LoadMontagesFromDBAsset(TArray<struct FName> Identifiers, class UBTL_AttackDBAsset* DatabaseAsset);
	bool IsLoading();
};


// Class BattleLabo.BTL_ReplayCharacter
// 0x0000 (0x0740 - 0x0740)
class ABTL_ReplayCharacter : public ACharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_ReplayCharacter");
		return ptr;
	}

};


// Class BattleLabo.BTL_SkeletalMeshComponent
// 0x0040 (0x0BE0 - 0x0BA0)
class UBTL_SkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0BA0(0x0010) MISSED OFFSET
	struct FName                                       LeftFootSocketName;                                       // 0x0BB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightFootSocketName;                                      // 0x0BB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationPivotWeight;                                      // 0x0BC0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0BC4(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_SkeletalMeshComponent");
		return ptr;
	}

};


// Class BattleLabo.BTL_SplineFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UBTL_SplineFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_SplineFunctionLibrary");
		return ptr;
	}


	float STATIC_FindDistanceClosestToWorldLocation(class USplineComponent* spline, const struct FVector& Location);
	float STATIC_ConvertInputKeyToDistance(class USplineComponent* spline, float InputKey);
};


// Class BattleLabo.BTL_SequencePlayer
// 0x0010 (0x08B8 - 0x08A8)
class UBTL_SequencePlayer : public US3LevelSequencePlayer
{
public:
	class UObject*                                     EventContext;                                             // 0x08A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x08B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_SequencePlayer");
		return ptr;
	}


	void SetIgnoreUpdateCameraCut(bool bNewIgnore);
	class UBTL_SequencePlayer* RegisterSwitchObject(const struct FString& SrcObjectName, class UObject* DstObject);
	void CleanUpInternalSpawnedObjects();
};


// Class BattleLabo.BTL_SplineNavigationComponent
// 0x0038 (0x0128 - 0x00F0)
class UBTL_SplineNavigationComponent : public UActorComponent
{
public:
	class USplineComponent*                            SplineComponent;                                          // 0x00F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x00F8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_SplineNavigationComponent");
		return ptr;
	}


	struct FVector GetSplineRightVector();
	float GetDistanceAlongSpline();
	float GetDistanceAlongNormal();
	struct FVector GetClosestSplineLocation();
	struct FVector EstimateLocationAhead(float Distance);
	struct FVector CalculateFollowDirection(float LookAheadDistance, float TargetNormalDistance);
};


// Class BattleLabo.BTL_StatusComponent
// 0x0008 (0x00F8 - 0x00F0)
class UBTL_StatusComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_StatusComponent");
		return ptr;
	}


	void SetHPFlag(bool bValue);
	void IsZeroHP(bool* IsZero);
	void HasHP(bool* IsPositive);
};


// Class BattleLabo.BTL_SurroundCoordinator
// 0x0018 (0x0040 - 0x0028)
class UBTL_SurroundCoordinator : public UObject
{
public:
	class ABTL_Character*                              PlayerCharacter;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AAIController*>                       ControllersWithReservations;                              // 0x0030(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.BTL_SurroundCoordinator");
		return ptr;
	}


	bool TryGetAnchorAngleWS(float* Angle);
	bool TryCalculateDirectionWS(class AAIController* NPC, float* Angle);
	void SetPlayer(class ABTL_Character* Player);
	void SetNewAnchor(class AAIController* Item);
	void Reserve(class AAIController* Item, int Index);
	void RemoveNPC(class AAIController* NPC);
	bool HasReservation(class AAIController* ItemToFind);
	float GetOffsetForIndex(int Index);
	int GetNPCReservationIndex(class AAIController* ItemToFind);
	int GetClosestOpenIndex(class AAIController* NPC);
	class AAIController* GetAnchorNPC();
	void ClearAllReservationsButAnchor();
	void ClearAllReservations();
};


// Class BattleLabo.UndulationInfoFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UUndulationInfoFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.UndulationInfoFunctionLibrary");
		return ptr;
	}


	void STATIC_SetupUndulationInfo(const struct FUndulationInfoContainer& Container, int InfoCount, int WallPointCount, int StepPointCount);
	void STATIC_SetUndulationInfo(const struct FUndulationInfoContainer& Container, int InfoIndex, const struct FUndulationInfoParamNative& Param);
	void STATIC_SetRaycastHitpointInfo(const struct FUndulationInfoContainer& Container, int InfoIndex, ERaycastHitpointInfoType Type, int PointIndex, const struct FRaycastHitpointInfoNative& Point);
	int STATIC_GetUndulationInfoCount(const struct FUndulationInfoContainer& Container);
	void STATIC_GetUndulationInfo(const struct FUndulationInfoContainer& Container, int InfoIndex, struct FUndulationInfoParamNative* OutStruct, int* WallRaycastHitpointInfoCount, int* StepRaycastHitpointInfoCount);
	int STATIC_GetRaycastHitpointInfoCount(const struct FUndulationInfoContainer& Container, int InfoIndex, ERaycastHitpointInfoType Type);
	void STATIC_GetRaycastHitpointInfo(const struct FUndulationInfoContainer& Container, int InfoIndex, ERaycastHitpointInfoType Type, int PointIndex, struct FRaycastHitpointInfoNative* OutStruct);
	int STATIC_GetEnableRaycastHitpointInfoCount(const struct FUndulationInfoContainer& Container, int InfoIndex, ERaycastHitpointInfoType Type);
	void STATIC_ClearWorks(const struct FUndulationInfoContainer& Container);
};


// Class BattleLabo.PrimitiveDrawComponent
// 0x0010 (0x0570 - 0x0560)
class UPrimitiveDrawComponent : public UPrimitiveComponent
{
public:
	class UMaterialInterface*                          MaterialInterface;                                        // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0568(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x056C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.PrimitiveDrawComponent");
		return ptr;
	}

};


// Class BattleLabo.CircleDrawComponent
// 0x0020 (0x0590 - 0x0570)
class UCircleDrawComponent : public UPrimitiveDrawComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0570(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.CircleDrawComponent");
		return ptr;
	}


	void ClearLength();
	void AddLength(float Length);
};


// Class BattleLabo.SquareDrawComponent
// 0x0020 (0x0590 - 0x0570)
class USquareDrawComponent : public UPrimitiveDrawComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0570(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.SquareDrawComponent");
		return ptr;
	}


	void ClearSquare();
	void AddSquare(const struct FVector& LT, const struct FVector& RT, const struct FVector& LB, const struct FVector& RB);
};


// Class BattleLabo.EnvQueryTest_BTL_CheckArea
// 0x0008 (0x01C8 - 0x01C0)
class UEnvQueryTest_BTL_CheckArea : public UEnvQueryTest
{
public:
	class UClass*                                      TargetActorContext;                                       // 0x01C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.EnvQueryTest_BTL_CheckArea");
		return ptr;
	}

};


// Class BattleLabo.EnvQueryTest_BTL_Range
// 0x0038 (0x01F8 - 0x01C0)
class UEnvQueryTest_BTL_Range : public UEnvQueryTest
{
public:
	class UClass*                                      OriginContext;                                            // 0x01C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAIDataProviderFloatValue                   Distance;                                                 // 0x01C8(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.EnvQueryTest_BTL_Range");
		return ptr;
	}

};


// Class BattleLabo.EnvQueryTest_BTL_Trace
// 0x00D0 (0x0290 - 0x01C0)
class UEnvQueryTest_BTL_Trace : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               TraceData;                                                // 0x01C0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderBoolValue                    TraceFromContext;                                         // 0x01F0(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ItemHeightOffset;                                         // 0x0220(0x0030) (Edit, DisableEditOnInstance)
	struct FAIDataProviderFloatValue                   ContextHeightOffset;                                      // 0x0250(0x0030) (Edit, DisableEditOnInstance)
	class UClass*                                      Context;                                                  // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      IgnoredActorsContext;                                     // 0x0288(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.EnvQueryTest_BTL_Trace");
		return ptr;
	}

};


// Class BattleLabo.KeyConfig
// 0x0000 (0x0028 - 0x0028)
class UKeyConfig : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.KeyConfig");
		return ptr;
	}


	void STATIC_SwitchKey(const struct FName& A, const struct FName& B);
	void STATIC_SortObject(class USortObjectCompare* Compare, TArray<class UObject*>* TargetArray);
	void STATIC_SortName(class USortNameCompare* Compare, TArray<struct FName>* TargetArray);
	void STATIC_SortActor(class USortActorCompare* Compare, TArray<class AActor*>* TargetArray);
	void STATIC_SetMontagePosition(class UAnimInstance* AnimInstance, class UAnimMontage* Montage, float Position);
	void STATIC_SetMontageBlendOutTime(class UAnimMontage* Montage, float BlendTime);
	void STATIC_SetMontageBlendInTime(class UAnimMontage* Montage, float BlendTime);
	bool STATIC_ResetAction(const struct FKey& Key, const struct FName& Name);
	bool STATIC_IsPlayingAttackMontage(class UAnimInstance* AnimInstance);
	float STATIC_GetMontageBlendOutTime(class UAnimMontage* Montage);
	float STATIC_GetMontageBlendInTime(class UAnimMontage* Montage);
	TArray<struct FKey> STATIC_GetKeyArray(const struct FName& Name);
	float STATIC_GetFollowingPathLength(class UPathFollowingComponent* PathFollowingComponent);
	float STATIC_GetCurrentMontagePosition(class UAnimInstance* AnimInstance);
	float STATIC_GetCurrentMontagePlayRate(class UAnimInstance* AnimInstance);
	bool STATIC_EnableNextAttack(class UAnimInstance* AnimInstance);
	void STATIC_DispCurrentAnimInfo(class UAnimInstance* AnimInstance);
	class UObject* STATIC_CreateObjectForTemplate(class UObject* Outer, const struct FName& Name, class UObject* Template);
	class UObject* STATIC_CreateObject(class UClass* ObjectClass);
};


// Class BattleLabo.Json
// 0x0000 (0x0028 - 0x0028)
class UJson : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.Json");
		return ptr;
	}


	bool STATIC_LoadJson(const struct FString& Name, struct FJsonData* Data);
	bool STATIC_GetString(const struct FJsonData& JsonData, const struct FString& Key, struct FString* String);
	bool STATIC_GetInt(const struct FJsonData& JsonData, const struct FString& Key, int* Int);
	bool STATIC_GetFloat(const struct FJsonData& JsonData, const struct FString& Key, float* Float);
	bool STATIC_GetData(const struct FJsonData& JsonData, const struct FString& Key, struct FJsonData* Data);
	bool STATIC_GetBool(const struct FJsonData& JsonData, const struct FString& Key, bool* Bool);
	bool STATIC_GetArray(const struct FJsonData& JsonData, const struct FString& Key, TArray<struct FString>* Array);
};


// Class BattleLabo.ManagedActorComponent
// 0x0008 (0x00F8 - 0x00F0)
class UManagedActorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.ManagedActorComponent");
		return ptr;
	}

};


// Class BattleLabo.MyCharacter
// 0x0000 (0x0740 - 0x0740)
class AMyCharacter : public ACharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.MyCharacter");
		return ptr;
	}

};


// Class BattleLabo.MyCharacterMovementComponent
// 0x0010 (0x0780 - 0x0770)
class UMyCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0770(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.MyCharacterMovementComponent");
		return ptr;
	}


	struct FVector UseRequestedVector();
};


// Class BattleLabo.MyPlayerController
// 0x0000 (0x0678 - 0x0678)
class AMyPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.MyPlayerController");
		return ptr;
	}

};


// Class BattleLabo.SortActorCompare
// 0x0000 (0x0028 - 0x0028)
class USortActorCompare : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.SortActorCompare");
		return ptr;
	}


	bool Compare(class AActor* A, class AActor* B);
};


// Class BattleLabo.SortNameCompare
// 0x0000 (0x0028 - 0x0028)
class USortNameCompare : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.SortNameCompare");
		return ptr;
	}


	bool Compare(const struct FName& A, const struct FName& B);
};


// Class BattleLabo.MyGameInstance
// 0x0028 (0x00C8 - 0x00A0)
class UMyGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET
	struct FDebugParam                                 DebugParam;                                               // 0x00C0(0x0004) (BlueprintVisible, IsPlainOldData)
	struct FReplayParam                                ReplayParam;                                              // 0x00C4(0x0004) (BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.MyGameInstance");
		return ptr;
	}

};


// Class BattleLabo.SortObjectCompare
// 0x0000 (0x0028 - 0x0028)
class USortObjectCompare : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class BattleLabo.SortObjectCompare");
		return ptr;
	}


	bool Compare(class UObject* A, class UObject* B);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
