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

// AnimBlueprintGeneratedClass ABP_AttachmentNotebook.ABP_AttachmentNotebook_C
// 0x03B0 (0x0750 - 0x03A0)
class UABP_AttachmentNotebook_C : public US3NPCAttachmentAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x3A8];                                     // 0x03A8(0x03A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_AttachmentNotebook.ABP_AttachmentNotebook_C");
		return ptr;
	}


	void PlayAnimation(struct FName* AnimationName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
