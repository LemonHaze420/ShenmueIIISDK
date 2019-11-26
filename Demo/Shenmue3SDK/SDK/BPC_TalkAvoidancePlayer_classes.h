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

// BlueprintGeneratedClass BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C
// 0x000B (0x01AB - 0x01A0)
class UBPC_TalkAvoidancePlayer_C : public UBPC_TalkAvoidance_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01A0(0x0008) (Transient, DuplicateTransient)
	bool                                               bLogShowItemCollisionCheck;                               // 0x01A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowItemTask;                                             // 0x01A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowItemTaskCacheFlag;                                    // 0x01AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_TalkAvoidancePlayer.BPC_TalkAvoidancePlayer_C");
		return ptr;
	}


	void ForceAnimationUpdate(float DeltaTime);
	void CanAvoidance(bool* bCan);
	struct FVector GetTargetActorEyeLocationForTraceCheck(class AActor** InActor, struct FVector* InOwnerLocation);
	struct FVector GetTargetActorLocationForCheck(class AActor** InActor);
	float GetDistanceToLeaveForCheck(class AActor** TargetActor);
	void IsAvoiddableDecide(bool* bExecution);
	void IsShowItemCollisionCheck(const struct FVector& ActorLocation, bool* bHitCollision);
	void AvoidableTest(struct FVector* ActorLocation, bool* bDesperate, bool* bSuccessAvoidable);
	void IsSitMotionPlayer(TArray<class AActor*>* TargetActors, bool* bSit);
	void IsExistShowItemTask(bool* bReturnValue);
	void ProcessAvoidable(bool* bProcessed);
	void ReceiveBeginPlay();
	void BeginTalk();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BPC_TalkAvoidancePlayer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
