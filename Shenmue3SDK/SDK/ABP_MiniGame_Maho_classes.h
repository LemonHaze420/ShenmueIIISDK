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

// AnimBlueprintGeneratedClass ABP_MiniGame_Maho.ABP_MiniGame_Maho_C
// 0x0CC9 (0x1029 - 0x0360)
class UABP_MiniGame_Maho_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_AF64DCFC442DFE8B17D15EBFD9BA058B;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26EC000848F5F9CA927D6CB9B9AF1430;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_69ADF2264FB858591844C7B387F2E0D5;// 0x03F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8511105A4C525A24E3AD06B72B81419E;// 0x0440(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33729B2C415547F9E5ED7C971C9FA30E;// 0x0488(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FD193ACF403665F168A5DFBEDBA7035D;// 0x04D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6FC61C1E4D343D08645928BAF46354AB;// 0x0518(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_22B285B34F1FFEBD772DECAF398BB778;// 0x0560(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4BA0CCBD430F1362CBBD4A971C03234F;// 0x05A8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_444017CE4D25862D12CE4FB768282418;// 0x0658(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9404726B44ADD6540A5CB4A14DDF0D4A;// 0x06A0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AB535AED4AE93CBAF4B0A08B6F5CBE04;// 0x0750(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_353387A04257F78FADFB89BE1EAAD522;// 0x0798(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_97D17FD943D12EE14BAF8CA6BEC4232E;// 0x0848(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BB6A1CC741D0368EC2E7F7A5F086F4EA;// 0x0890(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AC6A9E854B0181B7F273358FC47FC739;// 0x0940(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2A0375064FAA66FA8DF3679EA7721B3A;// 0x0988(0x00B0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_0C5C277F42897A6416BB1094706B4108;// 0x0A38(0x0120)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_988AA01242129F897CF84DB84D85C8A9;// 0x0B58(0x00B0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_A73A74DA4FD3DA7E799B38B9FB14CA3D;// 0x0C08(0x0120)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BDD7EE514D8395B3B394BD96D2A75E67;// 0x0D28(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_505DDF43464BF2BA27C8DB964F98E064;// 0x0DD8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9A35535A44B32FB291FE22871CDF581F;// 0x0E20(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B42CBFA1451BE9D15F66AD960A0EC106;// 0x0ED0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3D77B8FA4F0A09F2EC996EA468A56219;// 0x0F18(0x00E0)
	float                                              UpDownRate;                                               // 0x0FF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LowRate;                                                  // 0x0FFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SimpleUpDownRate;                                         // 0x1000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFallDown;                                               // 0x1004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1005(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    ReStartPlayingDispacher;                                  // 0x1008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TransEndFallDownDispacher;                                // 0x1018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsEnd;                                                    // 0x1028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MiniGame_Maho.ABP_MiniGame_Maho_C");
		return ptr;
	}


	void Initialize();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Maho_AnimGraphNode_TransitionResult_FD193ACF403665F168A5DFBEDBA7035D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Maho_AnimGraphNode_TransitionResult_6FC61C1E4D343D08645928BAF46354AB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Maho_AnimGraphNode_TransitionResult_8511105A4C525A24E3AD06B72B81419E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Maho_AnimGraphNode_TransitionResult_69ADF2264FB858591844C7B387F2E0D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Maho_AnimGraphNode_TwoWayBlend_0C5C277F42897A6416BB1094706B4108();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Maho_AnimGraphNode_TwoWayBlend_A73A74DA4FD3DA7E799B38B9FB14CA3D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Maho_AnimGraphNode_TransitionResult_26EC000848F5F9CA927D6CB9B9AF1430();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Maho_AnimGraphNode_TransitionResult_33729B2C415547F9E5ED7C971C9FA30E();
	void AnimNotify_TransEndFallDown();
	void AnimNotify_ReStartPlaying();
	void ExecuteUbergraph_ABP_MiniGame_Maho(int EntryPoint);
	void TransEndFallDownDispacher__DelegateSignature();
	void ReStartPlayingDispacher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
