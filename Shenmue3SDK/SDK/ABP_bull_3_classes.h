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

// AnimBlueprintGeneratedClass ABP_bull_3.ABP_bull_2_C
// 0x053A (0x089A - 0x0360)
class UABP_bull_2_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BC8E923240D4ED731D849B85B181021E;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_38CA7E454365124F2516AF88A9E3C48E;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2D31B0D646F170B807C9CBAE472860CD;// 0x03F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_66BF58AC4213F24D996E90BCDBB0F3F0;// 0x0440(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_400DE92F4D3DC4FBB26EEC9FA5556891;// 0x0488(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_591822664720B12679E96680327F2116;// 0x04D0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2BAD20DD4017C8605C71669B8C442A40;// 0x0580(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FBFCFD8A40F7BD5C48B2E5BE6401259D;// 0x05C8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3C78F61F44F149A352D44084583BFD31;// 0x0678(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EC01C58542E075AE7B311AB28E780EAE;// 0x06C0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C963E9404EA3DBE6E1835EB164500FD5;// 0x0770(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3FA75FFB4C020F82DBB90FBBD85451FC;// 0x07B8(0x00E0)
	bool                                               RunFlag;                                                  // 0x0898(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WalkFlag;                                                 // 0x0899(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_bull_3.ABP_bull_2_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bull_2_AnimGraphNode_TransitionResult_2D31B0D646F170B807C9CBAE472860CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bull_2_AnimGraphNode_TransitionResult_66BF58AC4213F24D996E90BCDBB0F3F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bull_2_AnimGraphNode_TransitionResult_400DE92F4D3DC4FBB26EEC9FA5556891();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_bull_2_AnimGraphNode_TransitionResult_38CA7E454365124F2516AF88A9E3C48E();
	void ExecuteUbergraph_ABP_bull_3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
