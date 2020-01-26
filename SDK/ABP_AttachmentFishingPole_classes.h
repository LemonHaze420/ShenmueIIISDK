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

// AnimBlueprintGeneratedClass ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C
// 0x0B58 (0x0EF8 - 0x03A0)
class UABP_AttachmentFishingPole_C : public US3NPCAttachmentAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0xB50];                                     // 0x03A8(0x0B50) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C");
		return ptr;
	}


	void PlayAnimation(struct FName* AnimationName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
