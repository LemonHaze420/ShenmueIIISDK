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

// BlueprintGeneratedClass BPC_Player_Lead.BPC_Player_Lead_C
// 0x0069 (0x0159 - 0x00F0)
class UBPC_Player_Lead_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	TArray<class ABP_Follower_POI_C*>                  InRangePOI;                                               // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	TArray<class AActor*>                              NoFollowRegions;                                          // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	float                                              PartnerSpeed;                                             // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PartnerSpeedMatchAmt;                                     // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableAutoMove;                                           // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	class UBPC_S3PlayerSteering_C*                     SteeringComponent;                                        // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               PreventOvertake;                                          // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	class UBPC_PlayerObstacleSensor_C*                 ObstacleSensor;                                           // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              TimePartnerObstacle;                                      // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	class AS3Character*                                Follower;                                                 // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class US3CharacterPhasingComponent*                Phasing;                                                  // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bInputMove;                                               // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Player_Lead.BPC_Player_Lead_C");
		return ptr;
	}


	class AS3Character* GetFollower();
	void UnpairFollower();
	void PairFollower(class AS3Character* Follower);
	void AutoFollowSpline(class AS3SplineMoveActor* SplineActor);
	void GetSpline(class AS3SplineMoveActor** SplineActor);
	void AllowBackwardsFollow(bool Enable);
	void GetMaxFollowSpeed(float OriginalMax, bool WantsToMatch, float* Matched);
	void SetAutoMove(bool Value);
	void PairLeader(class AS3SplineMoveActor* FollowSpline);
	void UnpairLeader();
	void DeleteInvalidRefs();
	void GetMatchedSpeed(float OriginalSpeed, float* Matched);
	void CanBeFollowed(bool* bFollowable);
	void ValidateData();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Input_Move();
	void ExecuteUbergraph_BPC_Player_Lead(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
