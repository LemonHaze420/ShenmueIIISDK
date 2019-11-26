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

// BlueprintGeneratedClass BP_CutsceneForceTimeOfDayHolder.BP_CutsceneForceTimeOfDayHolder_C
// 0x000D (0x0335 - 0x0328)
class ABP_CutsceneForceTimeOfDayHolder_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ForceTimeOfDay;                                           // 0x0330(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledForceTimeOfDay;                                   // 0x0334(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CutsceneForceTimeOfDayHolder.BP_CutsceneForceTimeOfDayHolder_C");
		return ptr;
	}


	bool IsEnabledForceTimeOfDay();
	float GetForceTimeOfDayValue();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
