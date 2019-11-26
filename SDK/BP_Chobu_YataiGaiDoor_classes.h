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

// BlueprintGeneratedClass BP_Chobu_YataiGaiDoor.BP_Chobu_YataiGaiDoor_C
// 0x0018 (0x0340 - 0x0328)
class ABP_Chobu_YataiGaiDoor_C : public AActor
{
public:
	class UStaticMeshComponent*                        M_Tavern_Inside_Door_01;                                  // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_HideInFlag_Template_C*                   BP_HideInFlag_Template;                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Chobu_YataiGaiDoor.BP_Chobu_YataiGaiDoor_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
