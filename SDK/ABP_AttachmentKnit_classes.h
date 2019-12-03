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

// AnimBlueprintGeneratedClass ABP_AttachmentKnit.ABP_AttachmentKnit_C
// 0x0228 (0x05C8 - 0x03A0)
class UABP_AttachmentKnit_C : public US3NPCAttachmentAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_256F20B246039DAADEA4928032CAEE75;      // 0x03A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_651AC6884B7D23F2C14EFAA506DB54E0;// 0x03F0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8E325CAD492159392A70DB9B106FBA8A;// 0x04A0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_EB2BE70545EFAF9E767041AC8200583C;// 0x04E8(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_AttachmentKnit.ABP_AttachmentKnit_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentKnit_AnimGraphNode_SequencePlayer_651AC6884B7D23F2C14EFAA506DB54E0();
	void STATIC_ExecuteUbergraph_ABP_AttachmentKnit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
