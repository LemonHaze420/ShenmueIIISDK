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

// AnimBlueprintGeneratedClass ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C
// 0x0B58 (0x0EF8 - 0x03A0)
class UABP_AttachmentFishingPole_C : public US3NPCAttachmentAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CE9F0DB94E651ACA34E10EBE409495B3;      // 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7DB82F334F3C13CCF13983AE685F7A62;// 0x03F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D3A86F184E3F0327343941AE4527EA65;// 0x0438(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E957BC6345BBFC60E7E8BC9BA603C411;// 0x0480(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_824CD7CC4C71CCE299CA5C874497ECAF;// 0x04C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_549DBDB6485B89D0985467A14453CCE9;// 0x0510(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1EEA0F774C5738C242DE6C99DF23323D;// 0x0558(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C6A816BB4D74E758734856A3183E07BD;// 0x05A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_83B6ECAD43EB1EA0E2CF509525893A7A;// 0x05E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9EE3B18E4A4D6BA7C2E1C185D547E121;// 0x0630(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_68385A154BC4ED72BDEDCFB4A7F29FCC;// 0x0678(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BF0FB2974B37D4E89DE380B602C22602;// 0x06C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7BF8DB6F47F63D53BBC469A74C907226;// 0x0708(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BF45ADF14E7F054492392F9D06DA6398;// 0x0750(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E4ACCE5E48C66769F0CCAA95CEBA5746;// 0x0800(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_61015CAF4B4F1FC400644E93C5726B82;// 0x0848(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_59E1299D4C3C998AEFA910BA883801AE;// 0x08F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2BE98DB64CF7EDA711B7AD931A57E85E;// 0x0940(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2AADC988480F41EA37116FA5DFC80890;// 0x09F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_61C490B84CD8EE423A5B7A9F5E28D137;// 0x0A38(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_163442F9428BCE6C54CB0CBBCAF5217E;// 0x0AE8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3AA35E4A4C4D98A0DC532C9177DA18B6;// 0x0B30(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_863629714880542B913AA9B21D29D7BF;// 0x0BE0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EA581A1A42C730F7E56882ABE32771AD;// 0x0C28(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B351438342CD8248A95E2D9C98B8488C;// 0x0CD8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D66AFDCA48E23A1C66930293DCBB7F53;// 0x0D20(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_307EE961456D06F6AC83D38FA17F5557;// 0x0DD0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FB7450824442A994F857799ADE8EBAB1;// 0x0E18(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_AttachmentFishingPole.ABP_AttachmentFishingPole_C");
		return ptr;
	}


	void STATIC_PlayAnimation(struct FName* AnimationName);
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_BF0FB2974B37D4E89DE380B602C22602();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_7BF8DB6F47F63D53BBC469A74C907226();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_9EE3B18E4A4D6BA7C2E1C185D547E121();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_83B6ECAD43EB1EA0E2CF509525893A7A();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_C6A816BB4D74E758734856A3183E07BD();
	void STATIC_AnimNotify_IdleToBendPageEnd();
	void STATIC_RequestAnimationName(const struct FName& AnimationName);
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AttachmentFishingPole_AnimGraphNode_TransitionResult_68385A154BC4ED72BDEDCFB4A7F29FCC();
	void ExecuteUbergraph_ABP_AttachmentFishingPole(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
