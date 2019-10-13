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

// BlueprintGeneratedClass BP_AnimNotify_DoorOpen.BP_AnimNotify_DoorOpen_C
// 0x0008 (0x0040 - 0x0038)
class UBP_AnimNotify_DoorOpen_C : public US3AnimNotify_PlayAtomCue
{
public:
	class USoundAtomCue*                               TestSound;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotify_DoorOpen.BP_AnimNotify_DoorOpen_C");
		return ptr;
	}


	void SetDoorFlag(class AS3GimmickOpenDoor* Door);
	void GetDoorActor(class USkeletalMeshComponent* Mesh, class AS3GimmickOpenDoor** DoorActor);
	void GetSound(class AS3GimmickOpenDoor* Door, class USoundAtomCue** Sound);
	struct FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
