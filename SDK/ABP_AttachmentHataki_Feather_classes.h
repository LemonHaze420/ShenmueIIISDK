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

// AnimBlueprintGeneratedClass ABP_AttachmentHataki_Feather.ABP_AttachmentHataki_Feather_C
// 0x0100 (0x04A0 - 0x03A0)
class UABP_AttachmentHataki_Feather_C : public US3NPCAttachmentAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9EA17C474E16F3F0545C5CBAD57E03C8;      // 0x03A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_64A91FC84ABF3950339344BA30EEE239;// 0x03F0(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_AttachmentHataki_Feather.ABP_AttachmentHataki_Feather_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_AttachmentHataki_Feather(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
