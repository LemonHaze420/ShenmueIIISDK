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

// AnimBlueprintGeneratedClass ABP_MiniGame_NewST_Ryo_re.ABP_MiniGame_NewST_Ryo_re_C
// 0x16B8 (0x1A18 - 0x0360)
class UABP_MiniGame_NewST_Ryo_re_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A70789474CA39FD337F99CBABB618353;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2399F95E458ADD6D45A731AF3ABF644C;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B3FDC3374C206C0A99BDE7A0E6727FAB;// 0x03F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2AC493EA40439F7B82E8FB813632F8D9;// 0x0440(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_542AE0C140143BD88D3CA2B5AAF3C7FC;// 0x0488(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_88F8F2714B931D6703BED19DF59886B4;// 0x04D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_09CB36374F0F6D1E233D7D9BD8EDD8BD;// 0x0518(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_568F241C4DE33146F2FBEB8DE1B420C4;// 0x0560(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B7FADB4B47E9B733DCBAD5891455E28A;// 0x0610(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2257193E43549296993198AF87A031FB;// 0x06C0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2505C77845CC4ABD677A1AAB53C4B991;// 0x0770(0x00B0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_25EAA9B64C1D0793ABA9B89BB17DA599;// 0x0820(0x0200)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_57625D2940DE9AB0DE50268ECA38381A;// 0x0A20(0x00D0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_A0A25632454F2B072083A1A4CBC52D7A;// 0x0AF0(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_342800C740A381C2DF38968BC71DFA9C;// 0x0BD0(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B2FE8D9349B8E15D48ECD0A9B3F2747E;// 0x0CB0(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C3146A58414597F77A29FB8DDBEE85ED;// 0x0CF8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_126974D44B70F9AF78E7A098BED1247A;// 0x0DD8(0x0128)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_94E93D9442FD85A714FB7D9EB92E92E0;// 0x0F00(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4B05DCA6414093F1E9AB7299B9E65B06;// 0x0FB0(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_D5C9C4824F48299108F3E99F71019139;// 0x0FF8(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_82610BDF43E5836CC2185B9919842B9A;// 0x10D8(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B2EBD666469EEA89368207B617B389B7;// 0x1188(0x00B0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_BAF1BB00406EAB7A47D9BEAF7BFA00FE;// 0x1238(0x0128)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_9A9F7B6B4951BDBC99F895A67FF303EA;// 0x1360(0x0200)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_8CC01A1E4208410323EADC9CE8F9FA54;// 0x1560(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DF71D1A94F7D39264FD9B3812D3A5F1A;// 0x1640(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1D86A17841B8C957CEE62C8E2C2F8B5E;// 0x1688(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7AFC5C954FE350F2E958F8BE1B2041A3;// 0x1768(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FA78BEF949DCEF5FD7720C95725C58E2;// 0x17B0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_314FF5F940A6825A2E974B87E386C1BD;// 0x1860(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7EAB8764440C8EB49408D2A461E42E3C;// 0x18A8(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_747B98B041B27CB97DFA2F9E38046BE7;      // 0x1988(0x0070)
	float                                              Power;                                                    // 0x19F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bThrow;                                                   // 0x19FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTakeOut;                                                 // 0x19FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bThrowEndAnim;                                            // 0x19FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x19FF(0x0001) MISSED OFFSET
	class UBPC_MiniGameThrowArmAnimation_C*            ThrowArmComponent;                                        // 0x1A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bThrowingMode;                                            // 0x1A08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1A09(0x0007) MISSED OFFSET
	class ABP_MiniGame_ThrowGameBase_C*                ThrowGame;                                                // 0x1A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MiniGame_NewST_Ryo_re.ABP_MiniGame_NewST_Ryo_re_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_NewST_Ryo_re_AnimGraphNode_TransitionResult_B3FDC3374C206C0A99BDE7A0E6727FAB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_NewST_Ryo_re_AnimGraphNode_TransitionResult_2AC493EA40439F7B82E8FB813632F8D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_NewST_Ryo_re_AnimGraphNode_TransitionResult_542AE0C140143BD88D3CA2B5AAF3C7FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_NewST_Ryo_re_AnimGraphNode_TransitionResult_88F8F2714B931D6703BED19DF59886B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_NewST_Ryo_re_AnimGraphNode_TransitionResult_09CB36374F0F6D1E233D7D9BD8EDD8BD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_NewST_Ryo_re_AnimGraphNode_RotationOffsetBlendSpace_25EAA9B64C1D0793ABA9B89BB17DA599();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_NewST_Ryo_re_AnimGraphNode_BlendListByBool_57625D2940DE9AB0DE50268ECA38381A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_NewST_Ryo_re_AnimGraphNode_BlendSpacePlayer_BAF1BB00406EAB7A47D9BEAF7BFA00FE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_NewST_Ryo_re_AnimGraphNode_RotationOffsetBlendSpace_9A9F7B6B4951BDBC99F895A67FF303EA();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_NewST_Ryo_re_AnimGraphNode_TransitionResult_2399F95E458ADD6D45A731AF3ABF644C();
	void AnimNotify_OnFullTransitionFinishedTakeOut();
	void AnimNotify_OnStateStartThrowingMode();
	void ExecuteUbergraph_ABP_MiniGame_NewST_Ryo_re(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
