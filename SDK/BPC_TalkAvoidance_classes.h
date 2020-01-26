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

// BlueprintGeneratedClass BPC_TalkAvoidance.BPC_TalkAvoidance_C
// 0x00A8 (0x01A0 - 0x00F8)
class UBPC_TalkAvoidance_C : public US3TalkAvoidanceComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class ACharacter*                                  OwnerCharacter;                                           // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              AvoidanceObjectTypes;                                     // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EObjectTypeQuery>>              EyeLineTraceObjectTypes;                                  // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              OwnerCapsuleHalfHeight;                                   // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AvoidanceCheckAngle;                                      // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DivisionNumber;                                           // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToLeave;                                          // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DistanceCount;                                            // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              TargetActors;                                             // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              StartAngle;                                               // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDebugLog;                                          // 0x0154(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0155(0x0003) MISSED OFFSET
	TArray<class AActor*>                              ignoreActors;                                             // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              LogDuration;                                              // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OwnerCapsuleFactor;                                       // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GroundPreset;                                             // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               IgnoreDynamicCollisionNames;                              // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CollisionTestOffsetZ;                                     // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x018C(0x0004) MISSED OFFSET
	class ABP_S3BuildingStaticMeshActor_C*             InBuildingActor;                                          // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_TalkAvoidance.BPC_TalkAvoidance_C");
		return ptr;
	}


	bool CheckAboveGround(const struct FVector& Location);
	void LazySetupIgnoreActors();
	struct FRotator MakeCenterLookRotation();
	struct FVector GetTargetActorEyeLocationForTraceCheck(class AActor* InActor, const struct FVector& InOwnerLocation);
	void CalcCurrentBaseDistanceAndCount(float* BaseDistance, int* Count);
	struct FVector GetTargetActorLocationForCheck(class AActor* InActor);
	float GetDistanceToLeaveForCheck(class AActor* TargetActor);
	void CheckInBuildingOwnerActor();
	void ConvertAvoidableLocation(const struct FVector& AvoidableLocation, struct FVector* ActorLocation);
	bool TestCapsuleOverlap(const struct FVector& CapsulePos);
	void IsIgnoreCollisionProfile(const struct FName& CollisionProfileName, bool* bIgnore);
	void SetupIgnoreActors();
	void CanAvoidance(bool* bCan);
	void DebugPrintString(const struct FString& Chara, const struct FString& Result, const struct FLinearColor& TextColor);
	void ProcessAvoidable(bool* bProcessed);
	void IsAvoiddableDecide(bool* bExecution);
	void SetActors(TArray<class AActor*>* Actors);
	void DistanceCheckTargetActors(const struct FVector& TestActorLocation, bool* bSuccess);
	void GetForwardVector(struct FVector* ForwardVector);
	void GetAvoidableLocation(bool* bSuccess, struct FVector* AvoidableLocation, struct FString* LogString);
	void AvoidableTest(const struct FVector& ActorLocation, bool bDesperate, bool* bSuccessAvoidable);
	void EyeLineTraceCheckTargetActors(const struct FVector& TestActorLocation, bool* bSuccess);
	void GetActorPositionAfterRotationByAngle(float Angle, float Distance, struct FVector* ActorLocation);
	void ActorCollisionTestHeight(const struct FVector& ActorLocation, bool* bHitGround, struct FVector* HitLocation);
	void OutputDebugCollision(const struct FVector& ActorLocation, const struct FLinearColor& LineColor);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPC_TalkAvoidance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
