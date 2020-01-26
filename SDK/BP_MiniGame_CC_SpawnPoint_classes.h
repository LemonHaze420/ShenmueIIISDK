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

// BlueprintGeneratedClass BP_MiniGame_CC_SpawnPoint.BP_MiniGame_CC_SpawnPoint_C
// 0x0010 (0x0338 - 0x0328)
class ABP_MiniGame_CC_SpawnPoint_C : public AActor
{
public:
	class USphereComponent*                            LifeArea;                                                 // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_CC_SpawnPoint.BP_MiniGame_CC_SpawnPoint_C");
		return ptr;
	}


	void GetSpawnPosition(struct FVector* pos);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
