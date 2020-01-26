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

// BlueprintGeneratedClass BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C
// 0x0050 (0x0140 - 0x00F0)
class UBPC_Follower_POI_Selector_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	float                                              TimeSinceLastPOIQuery;                                    // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	TArray<class ABP_Follower_POI_C*>                  POI_Use_History;                                          // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	float                                              QueryInterval;                                            // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HistoryCount;                                             // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AS3Character*                                Follower;                                                 // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	class AS3Character*                                Leader;                                                   // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_Follower_POI_C*>                  POI_List_Temp;                                            // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class UBPC_Player_Lead_C*                          LeaderComp;                                               // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Follower_POI_Selector.BPC_Follower_POI_Selector_C");
		return ptr;
	}


	void InRange(class ABP_Follower_POI_C* POI, bool* bInRange);
	void ScorePOI(class ABP_Follower_POI_C* POI, bool TestLeaderLoS, float* Score);
	void IsNavStraightLine(class AS3Character* Character, class ABP_Follower_POI_C* POI, bool* bIsStraight);
	void UpdateHistory(class ABP_Follower_POI_C* Selected);
	void SearchForPOI(bool bIgnoreTimer, bool bTestLeaderLOS, class ABP_Follower_POI_C** POI, bool* bRanQuery);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BPC_Follower_POI_Selector(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
