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

// BlueprintGeneratedClass BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C
// 0x0014 (0x005C - 0x0048)
class UBP_State_Follow_MoveBase_C : public UBP_State_Follow_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (Transient, DuplicateTransient)
	bool                                               IsPathing;                                                // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPathFollowingResult>                  PathResult;                                               // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	float                                              IDEAL_FOLLOW_DISTANCE;                                    // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BEGIN_RUN_DISTANCE;                                       // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_State_Follow_MoveBase.BP_State_Follow_MoveBase_C");
		return ptr;
	}


	bool CheckDoorOnPath();
	void CalculateFollowSpeed(float DistanceToLeader, float LeaderSpeed, float FollowDistanceEnd, float* OutSpeed);
	void TryLogPathFailure();
	void MoveStateEnter(bool* bDummy);
	void StateEnter(float* Delta, bool* bProcessing);
	void GetPathfindTarget(struct FVector* OutLocation, class AActor** OutActor);
	void OnFail_27825A3A4DCF934B8E42E09B783488FD(TEnumAsByte<EPathFollowingResult> MovementResult);
	void OnSuccess_27825A3A4DCF934B8E42E09B783488FD(TEnumAsByte<EPathFollowingResult> MovementResult);
	void Pathfind();
	void ExecuteUbergraph_BP_State_Follow_MoveBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
