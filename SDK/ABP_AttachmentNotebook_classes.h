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

// AnimBlueprintGeneratedClass ABP_AttachmentNotebook.ABP_AttachmentNotebook_C
// 0x03B0 (0x0750 - 0x03A0)
class UABP_AttachmentNotebook_C : public US3NPCAttachmentAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7F0E24D74BB7CF70B550FD9B4902E900;      // 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_715F25434561E1C846A7439F5B4337EB;// 0x03F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6E78405C4EB432D0578C34874CB96C1F;// 0x0438(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E641A31743284A9B8B82568C027965B6;// 0x0480(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6030324A4066F23BAC7B2288F88FA299;// 0x0530(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_127B9FD54CE574926280E1A89EBAE3AA;// 0x0578(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_244122E84C1AADB64809D18B8927F3F8;// 0x0628(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_726CB7594D6583D0F6B29195E43D7652;// 0x0670(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_AttachmentNotebook.ABP_AttachmentNotebook_C");
		return ptr;
	}


	void PlayAnimation(struct FName* AnimationName);
	void AnimNotify_IdleToTurnPageEnd();
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentNotebook_AnimGraphNode_TransitionResult_6E78405C4EB432D0578C34874CB96C1F();
	void RequestAnimationName(const struct FName& AnimationName);
	void ExecuteUbergraph_ABP_AttachmentNotebook(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
