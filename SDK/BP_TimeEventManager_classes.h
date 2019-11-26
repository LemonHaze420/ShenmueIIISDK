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

// BlueprintGeneratedClass BP_TimeEventManager.BP_TimeEventManager_C
// 0x0015 (0x033D - 0x0328)
class ABP_TimeEventManager_C : public AS3GameTimeEventManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MiniGameTime;                                             // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MiniGameTimeCalcFlag;                                     // 0x0334(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0335(0x0003) MISSED OFFSET
	float                                              MiniGameTimeMax;                                          // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MiniGameTimeHasComeFlag;                                  // 0x033C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TimeEventManager.BP_TimeEventManager_C");
		return ptr;
	}


	void IsTimeHasComeFlag(bool* flag);
	void MiniGameTimeInit();
	void MiniGameTimeCalcFlagOn(float TimeMax);
	void MiniGameTimeCalc();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
