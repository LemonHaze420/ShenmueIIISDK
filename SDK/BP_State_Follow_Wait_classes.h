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

// BlueprintGeneratedClass BP_State_Follow_Wait.BP_State_Follow_Wait_C
// 0x0018 (0x0060 - 0x0048)
class UBP_State_Follow_Wait_C : public UBP_State_Follow_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (Transient, DuplicateTransient)
	float                                              TimeWaiting;                                              // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeToDoPOISearch;                                        // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   POI_SEARCH_TIMES;                                         // 0x0058(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_State_Follow_Wait.BP_State_Follow_Wait_C");
		return ptr;
	}


	bool FindNearbyRoadLocation(struct FVector* ProjectedLocation);
	void StateEnter(float Delta, bool* bProcessing);
	void StateExit(float Delta, bool* bProcessing);
	void StateUpdate(float Delta, bool* bDummy);
	void UpdateTransitions(float DeltaSeconds);
	void ExecuteUbergraph_BP_State_Follow_Wait(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
