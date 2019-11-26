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

// BlueprintGeneratedClass BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C
// 0x0040 (0x01E0 - 0x01A0)
class UBPC_TalkAvoidanceNPCLead_C : public UBPC_TalkAvoidance_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01A0(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x01A8(0x0008) MISSED OFFSET
	struct FTransform                                  CacheTransform;                                           // 0x01B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_TalkAvoidanceNPCLead.BPC_TalkAvoidanceNPCLead_C");
		return ptr;
	}


	bool FindFallbackLocation(class ACharacter* Player, struct FVector* Location);
	struct FRotator MakeRotation(class AS3TalkEventManagerBase* TalkEventManager, const struct FVector& InVec);
	void CanAvoidance(bool* bCan);
	void ProcessAvoidable(bool* bProcessed);
	void IsAvoiddableDecide(bool* bExecution);
	void DistanceCheckTargetActors(struct FVector* TestActorLocation, bool* bSuccess);
	void DelayResumePhysics();
	void ExecuteUbergraph_BPC_TalkAvoidanceNPCLead(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
