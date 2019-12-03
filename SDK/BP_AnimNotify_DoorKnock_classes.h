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

// BlueprintGeneratedClass BP_AnimNotify_DoorKnock.BP_AnimNotify_DoorKnock_C
// 0x0000 (0x0040 - 0x0040)
class UBP_AnimNotify_DoorKnock_C : public UBP_AnimNotify_DoorOpen_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotify_DoorKnock.BP_AnimNotify_DoorKnock_C");
		return ptr;
	}


	void STATIC_GetDoorActor(class USkeletalMeshComponent* Mesh, class AS3GimmickOpenDoor** DoorActor);
	void GetSound(class AS3GimmickOpenDoor* Door, class USoundAtomCue** Sound);
	struct FString GetNotifyName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
