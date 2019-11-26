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

// BlueprintGeneratedClass BP_State_LookAtPlayer_AI.BP_State_LookAtPlayer_AI_C
// 0x001C (0x0064 - 0x0048)
class UBP_State_LookAtPlayer_AI_C : public UBP_State_LookAtPlayer_C
{
public:
	class APlayerCtrl_C*                               PlayerCtrl;                                               // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtRand_Side;                                          // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtRand_Up;                                            // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug;                                                   // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              LookAtInterp_Side;                                        // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtInterp_Up;                                          // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_State_LookAtPlayer_AI.BP_State_LookAtPlayer_AI_C");
		return ptr;
	}


	void SetupRandomParam();
	void StateExit(float Delta, bool* bProcessing);
	void StateUpdate(float Delta, bool* bDummy);
	void StateEnter(float Delta, bool* bProcessing);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
