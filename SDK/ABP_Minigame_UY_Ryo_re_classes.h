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

// AnimBlueprintGeneratedClass ABP_Minigame_UY_Ryo_re.ABP_Minigame_UY_Ryo_re_C
// 0x0562 (0x08C2 - 0x0360)
class UABP_Minigame_UY_Ryo_re_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6C1FD9D341092C1410F7D5B1BD3144F6;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A93978904FDE7B65E27CEA8F812DB3D9;      // 0x03B0(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F10C59AF48008E53FADED288E0BAA42E;// 0x0420(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B8F393A44EBC6C0F51F09FBD620F23B2;// 0x0468(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_509C16264BA530F436B9ED8F80016869;// 0x04B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9B3C32064CD53232711D6F8B7BE3488D;// 0x04F8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8E878CC041670FA188ADFFAF68249C35;// 0x05A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1DDF484A4267DC59B38BB1AA05A4653C;// 0x05F0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BCC779C64F7EA433EAF40B9F7083A794;// 0x06A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_76269D8541B7D47A58B4CE8755847E84;// 0x06E8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_784FAC144ABF2AFF4067CE8054D62ADD;// 0x0798(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_83860BB94D343A59C962839ACADF53F9;// 0x07E0(0x00E0)
	bool                                               bThrow;                                                   // 0x08C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bThrowIdle;                                               // 0x08C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Minigame_UY_Ryo_re.ABP_Minigame_UY_Ryo_re_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minigame_UY_Ryo_re_AnimGraphNode_TransitionResult_509C16264BA530F436B9ED8F80016869();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minigame_UY_Ryo_re_AnimGraphNode_TransitionResult_B8F393A44EBC6C0F51F09FBD620F23B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minigame_UY_Ryo_re_AnimGraphNode_SequencePlayer_9B3C32064CD53232711D6F8B7BE3488D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Minigame_UY_Ryo_re_AnimGraphNode_TransitionResult_F10C59AF48008E53FADED288E0BAA42E();
	void AnimNotify_MiniGameThrow();
	void AnimNotify_TransIdleFromThrowStart();
	void InitThrow();
	void ExecuteUbergraph_ABP_Minigame_UY_Ryo_re(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
