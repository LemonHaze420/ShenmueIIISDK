#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BattleFlowBase.BP_BattleFlowBase_C
// 0x0009 (0x0331 - 0x0328)
class ABP_BattleFlowBase_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               UseDefaultEndConditions;                                  // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleFlowBase.BP_BattleFlowBase_C");
		return ptr;
	}


	bool EnableDefaultEndConditions();
	void SetBattleManager(class ABP_BattleManagerBase_C* Manager);
	void Update(float DeltaTime);
	void StartBattle();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
