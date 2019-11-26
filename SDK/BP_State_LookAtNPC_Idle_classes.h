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

// BlueprintGeneratedClass BP_State_LookAtNPC_Idle.BP_State_LookAtNPC_Idle_C
// 0x0013 (0x006C - 0x0059)
class UBP_State_LookAtNPC_Idle_C : public UBP_State_LookAtNPC_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              ElapsedTime;                                              // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CheckWaitTime;                                            // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookDistance;                                             // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAngle;                                                // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_State_LookAtNPC_Idle.BP_State_LookAtNPC_Idle_C");
		return ptr;
	}


	void StateExit(float Delta, bool* bProcessing);
	void StateUpdate(float Delta, bool* bDummy);
	void StateEnter(float Delta, bool* bProcessing);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
