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

// BlueprintGeneratedClass BP_State_LookAtPlayer_NPC.BP_State_LookAtPlayer_NPC_C
// 0x0028 (0x0070 - 0x0048)
class UBP_State_LookAtPlayer_NPC_C : public UBP_State_LookAtPlayer_C
{
public:
	float                                              LookAtUpdateWaitTime;                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NPC_LOOKAT_INTERVAL;                                      // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      IgnoreNPCActor;                                           // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeIgnoringNPC;                                          // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class AActor*                                      StateTargetActor;                                         // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              NPC_LOOKAT_DISTANCE;                                      // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeOnCurrentTarget;                                      // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_State_LookAtPlayer_NPC.BP_State_LookAtPlayer_NPC_C");
		return ptr;
	}


	void GetInteractActor(int InIndex, class AActor** Actor);
	void StateExit(float Delta, bool* bProcessing);
	void StateEnter(float Delta, bool* bProcessing);
	void StateUpdate(float Delta, bool* bDummy);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
