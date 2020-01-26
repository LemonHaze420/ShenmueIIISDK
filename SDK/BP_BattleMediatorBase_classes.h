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

// BlueprintGeneratedClass BP_BattleMediatorBase.BP_BattleMediatorBase_C
// 0x0008 (0x0330 - 0x0328)
class ABP_BattleMediatorBase_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleMediatorBase.BP_BattleMediatorBase_C");
		return ptr;
	}


	void PrelaunchBattle(bool* dummy);
	void SelectLoadingHint(bool* Found, struct FST_LoadingHintWindowParam* Hint);
	int CountHeldRecoveryItems();
	bool AllowsRecoveryItems();
	void IsSparring(bool* Enabled);
	void GetRequiredLevels(TArray<struct FName>* Levels, bool* OneOrMore);
	void StartLoadingLaunchData(class UBTL_LaunchParameters_C** LaunchDataObject);
	void CreateLaunchDataObject(class UBTL_LaunchParameters_C** Object);
	void GetBattleID(struct FName* ID);
	void StartBattle(class ABP_BattleManagerBase_C* BattleManager, class UBTL_LaunchParameters_C* LaunchData, bool* dummy);
	void ShutdownBattle(class ABP_BattleManagerBase_C* Manager, bool* dummy);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
