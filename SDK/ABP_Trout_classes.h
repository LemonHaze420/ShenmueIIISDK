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

// AnimBlueprintGeneratedClass ABP_Trout.ABP_Trout_C
// 0x053A (0x089A - 0x0360)
class UABP_Trout_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5981ED3744F725C2A7DDAAA73CEBEF5B;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_50173A83473FAE9762E9269DA9DACE7B;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A1ACF15D4EB79FBB7DBA27A3FA378FFC;// 0x03F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7B26BF614DA851B6F4E3D5AA3430BDA2;// 0x0440(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_88504B1E4E0F0EFACCCFBDADC22A7FB2;// 0x0488(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B891785A4D5B8C2F42973A830EE59084;// 0x04D0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CAA23DDC4A20448241334EB9DF943D76;// 0x0580(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_511CB214430D8E02410EC797752CA01C;// 0x05C8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BA6C78C34065267EA17750A8C124143E;// 0x0678(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D256DC224DE899D13670DB8ECD924B38;// 0x06C0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B406EAD54A4B9D2A0D6621B098C1A538;// 0x0770(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D1C715E34A77E57D061A6B81059FB4B4;// 0x07B8(0x00E0)
	bool                                               RunFlag;                                                  // 0x0898(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WalkFlag;                                                 // 0x0899(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Trout.ABP_Trout_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Trout_AnimGraphNode_TransitionResult_A1ACF15D4EB79FBB7DBA27A3FA378FFC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Trout_AnimGraphNode_TransitionResult_7B26BF614DA851B6F4E3D5AA3430BDA2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Trout_AnimGraphNode_TransitionResult_88504B1E4E0F0EFACCCFBDADC22A7FB2();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Trout_AnimGraphNode_TransitionResult_50173A83473FAE9762E9269DA9DACE7B();
	void STATIC_ExecuteUbergraph_ABP_Trout(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
