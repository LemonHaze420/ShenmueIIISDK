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

// AnimBlueprintGeneratedClass ABP_OD_Hand_re.ABP_OD_Hand_re_C
// 0x03D0 (0x0730 - 0x0360)
class UABP_OD_Hand_re_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1A6F82BA41ADAE2EF442A28A404BC856;// 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6C92D6E4462AB823E6EF71BF011C41F4;// 0x03B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FB877A7048302D66E5F1EC983BBECF62;// 0x03F8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B73095E742E9DF64CC1187ADF3BD0031;// 0x04A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DB808F6D4B87C52149673AA3560336CB;// 0x04F0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_774B30974F9720F00055AFBB31C924C4;// 0x05A0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5B6A455D4A897DAFA4BEA2A267C5D143;// 0x05E8(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_Root_EC9726D74C9973CD229AC9A0EC734CFC;      // 0x06C8(0x0048)
	float                                              hand_rate;                                                // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DropBall;                                                 // 0x0714(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0715(0x0003) MISSED OFFSET
	struct FRotator                                    TestRotate;                                               // 0x0718(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LowerArmRotate;                                           // 0x0724(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_OD_Hand_re.ABP_OD_Hand_re_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_OD_Hand_re_AnimGraphNode_TransitionResult_6C92D6E4462AB823E6EF71BF011C41F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_OD_Hand_re_AnimGraphNode_TransitionResult_1A6F82BA41ADAE2EF442A28A404BC856();
	void ExecuteUbergraph_ABP_OD_Hand_re(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
