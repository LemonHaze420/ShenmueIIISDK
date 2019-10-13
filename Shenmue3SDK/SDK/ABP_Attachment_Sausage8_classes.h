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

// AnimBlueprintGeneratedClass ABP_Attachment_Sausage8.ABP_Attachment_Sausage8_C
// 0x0228 (0x05C8 - 0x03A0)
class UABP_Attachment_Sausage8_C : public US3NPCAttachmentAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1285BC1046EF3ED58CE41094409DACF3;      // 0x03A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0DBFD8644696856D2FD246B8AA2661CC;// 0x03F0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E474371B493D3B93CF7368821BF55AE4;// 0x04A0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_631A7F7E4653CE84486CF79B8DB7452D;// 0x04E8(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Attachment_Sausage8.ABP_Attachment_Sausage8_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Attachment_Sausage8_AnimGraphNode_SequencePlayer_0DBFD8644696856D2FD246B8AA2661CC();
	void ExecuteUbergraph_ABP_Attachment_Sausage8(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
