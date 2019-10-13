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

// BlueprintGeneratedClass BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C
// 0x001C (0x0078 - 0x005C)
class UBP_State_Follow_FollowLeader_C : public UBP_State_Follow_MoveBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0060(0x0008) (Transient, DuplicateTransient)
	float                                              FollowEndDistance;                                        // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeadSlowTimer;                                            // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WaitState;                                                // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_State_Follow_FollowLeader.BP_State_Follow_FollowLeader_C");
		return ptr;
	}


	void GetPathfindTarget(struct FVector* OutLocation, class AActor** OutActor);
	void MoveStateEnter(bool* bDummy);
	void StateEnter(float* Delta, bool* bProcessing);
	void StateUpdate(float* Delta, bool* bDummy);
	void UpdateTransitions(float* DeltaSeconds);
	void CancelPath();
	void FinishPath();
	void ExecuteUbergraph_BP_State_Follow_FollowLeader(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
