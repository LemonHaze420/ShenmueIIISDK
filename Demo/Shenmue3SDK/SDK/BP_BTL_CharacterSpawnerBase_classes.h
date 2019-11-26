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

// BlueprintGeneratedClass BP_BTL_CharacterSpawnerBase.BP_BTL_CharacterSpawnerBase_C
// 0x0008 (0x0330 - 0x0328)
class ABP_BTL_CharacterSpawnerBase_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BTL_CharacterSpawnerBase.BP_BTL_CharacterSpawnerBase_C");
		return ptr;
	}


	bool isPlayer();
	bool IsEnabled();
	void GetSpawnInfo(class UObject* Outer, class UBTL_Launch_NPC_C** LaunchInfo);
	void GetID(struct FName* Identifier);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
