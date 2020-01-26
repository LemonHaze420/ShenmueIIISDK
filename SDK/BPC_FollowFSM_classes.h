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

// BlueprintGeneratedClass BPC_FollowFSM.BPC_FollowFSM_C
// 0x0074 (0x0234 - 0x01C0)
class UBPC_FollowFSM_C : public UFiniteStateMachineComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C0(0x0008) (Transient, DuplicateTransient)
	class ABP_NPCLeadManager_C*                        FollowLead;                                               // 0x01C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceToLeader;                                         // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01D4(0x0004) MISSED OFFSET
	class ABP_Follower_POI_C*                          POI;                                                      // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceToPOI;                                            // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET
	class UBPC_Follower_POI_Selector_C*                POISelector;                                              // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              LeaderSpeed;                                              // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeaderProjectedSpeed;                                     // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetMoveSpeed;                                          // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET
	class ABP_S3_Character_Adventure_C*                Leader;                                                   // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBPC_Player_Lead_C*                          LeaderComponent;                                          // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               ResetNextFrame;                                           // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0211(0x0007) MISSED OFFSET
	class UBPC_NPCLeadAccelerator_C*                   SpeedComp;                                                // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               DrawDebug;                                                // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0221(0x0003) MISSED OFFSET
	float                                              FollowEndDistance;                                        // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FollowStartDistance;                                      // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PathFailure;                                              // 0x022C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x022D(0x0003) MISSED OFFSET
	float                                              TimeToClearPathFailure;                                   // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_FollowFSM.BPC_FollowFSM_C");
		return ptr;
	}


	void TryClearPathFailure(float DeltaSeconds);
	void FailedPath();
	class US3PathFollowingComponent* GetPathFollowingComponent();
	void EnablePathMassaging(bool Enable);
	void IsFollowEnabled(bool* EnableFollow);
	class ABP_NPC_Lead_C* GetPawn();
	void Reset();
	void UpdateLeaderData();
	void UpdatePOIData();
	void Update(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPC_FollowFSM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
