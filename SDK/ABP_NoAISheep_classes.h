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

// AnimBlueprintGeneratedClass ABP_NoAISheep.ABP_NoAISheep_C
// 0x0540 (0x08A0 - 0x0360)
class UABP_NoAISheep_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2A8A5BF94FF85D555F4A9CA6B2CD5760;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1336E5334B0A053CC386128DAD14D9F3;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6E7B5B8247B2B57FA3AC36BA746A4092;// 0x03F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E573AC2E4D58B3F0E9D5DC93F1FA14B9;// 0x0440(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_710C8FBB42C4C4C687CB8589E1074DD2;// 0x0488(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0BC86A8A47A74DF701FA748DAA4BE05F;// 0x04D0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B61C6FD04D21871F82656180B3A14434;// 0x0580(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B3E40E864B61391F0B32639D92357567;// 0x05C8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C585539D43A60C4818B1E797D1C3B439;// 0x0678(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A119026245F65685774206B6A29EC389;// 0x06C0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1DBA588047420DC306B8E29BB2EDB7B2;// 0x0770(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DE09FB794001BFB12267ED8A495AEE31;// 0x07B8(0x00E0)
	bool                                               bTransitionAction;                                        // 0x0898(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0899(0x0003) MISSED OFFSET
	int                                                ActionIndex;                                              // 0x089C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_NoAISheep.ABP_NoAISheep_C");
		return ptr;
	}


	void STATIC_SetAction();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NoAISheep_AnimGraphNode_TransitionResult_710C8FBB42C4C4C687CB8589E1074DD2();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NoAISheep_AnimGraphNode_TransitionResult_6E7B5B8247B2B57FA3AC36BA746A4092();
	void STATIC_BlueprintBeginPlay();
	void STATIC_AnimNotify_ActionEnd();
	void STATIC_AnimNotify_Action1Start();
	void STATIC_AnimNotify_Action2Start();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NoAISheep_AnimGraphNode_TransitionResult_E573AC2E4D58B3F0E9D5DC93F1FA14B9();
	void STATIC_ExecuteUbergraph_ABP_NoAISheep(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
