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

// BlueprintGeneratedClass BP_AnimNotify_DoorClose.BP_AnimNotify_DoorClose_C
// 0x0000 (0x0040 - 0x0040)
class UBP_AnimNotify_DoorClose_C : public UBP_AnimNotify_DoorOpen_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimNotify_DoorClose.BP_AnimNotify_DoorClose_C");
		return ptr;
	}


	void SetDoorFlag(class AS3GimmickOpenDoor** Door);
	struct FString GetNotifyName();
	void GetSound(class AS3GimmickOpenDoor** Door, class USoundAtomCue** Sound);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
