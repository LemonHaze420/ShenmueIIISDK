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

// BlueprintGeneratedClass BP_DoorManager.BP_DoorManager_C
// 0x0018 (0x0340 - 0x0328)
class ABP_DoorManager_C : public AS3DoorManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ABP_Gimmick_OpenDoor_Template_C*>     Doors;                                                    // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DoorManager.BP_DoorManager_C");
		return ptr;
	}


	void LazyFindDoors();
	void ForbidPCDoorInteraction();
	void GetDoors(TArray<class ABP_Gimmick_OpenDoor_Template_C*>* Doors);
	void ChangeDoorType(const struct FString& DoorName, TEnumAsByte<EN_DoorType> DoorType);
	void SetDoors();
	void GetDoorByName(const struct FString& DoorName, class ABP_Gimmick_OpenDoor_Template_C** DoorActor);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
