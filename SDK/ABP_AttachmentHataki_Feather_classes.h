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

// AnimBlueprintGeneratedClass ABP_AttachmentHataki_Feather.ABP_AttachmentHataki_Feather_C
// 0x0100 (0x04A0 - 0x03A0)
class UABP_AttachmentHataki_Feather_C : public US3NPCAttachmentAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0xF8];                                      // 0x03A8(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_AttachmentHataki_Feather.ABP_AttachmentHataki_Feather_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
