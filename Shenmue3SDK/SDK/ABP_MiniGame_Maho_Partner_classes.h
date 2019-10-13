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

// AnimBlueprintGeneratedClass ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C
// 0x0990 (0x0CF0 - 0x0360)
class UABP_MiniGame_Maho_Partner_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_FB95B9DA408FF3673E69BC81F3AA4DBF;      // 0x0368(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_137619EA4009984FF4E2C5B2FBF02112;// 0x03B0(0x0160)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_491E60E347E4545EBC1C0EA280845AE1;// 0x0510(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D998665548C3E86D8941519887BC64EC;// 0x0558(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DA0ED2134D96CCC6EC0C96A39B91A0D0;// 0x05A0(0x0160)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_8D85DCA8407CB992FD18FB8DDDD876DF;// 0x0700(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F06E5A6044379A82500036B9C71081B7;// 0x07E0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C19B421046467EFAA9641B8B8C6ED372;// 0x0890(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1C8B7A0B419287776DF95FA966F18A9C;// 0x0940(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CE7826D645468516D23F718A167C030E;// 0x09F0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AB3A68AA408F3636DF4F1892954B63B1;// 0x0AA0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_46ECADAB46D7BFA735BC2984AC2A981A;// 0x0B50(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BF0A6ED24C757B4CD0F4C8BA759C4073;// 0x0C00(0x00B0)
	struct FScriptMulticastDelegate                    ReStartPlayingDispacher;                                  // 0x0CB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TransEndFallDownDispacher;                                // 0x0CC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<E_MiniGame_MahoPartnerState>           State;                                                    // 0x0CD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0CD1(0x0003) MISSED OFFSET
	float                                              AnimBlendRate;                                            // 0x0CD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MotionBlendTimer;                                         // 0x0CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MiniGame_MahoPartnerState>           NextState;                                                // 0x0CDC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0CDD(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    ChangeAnimState;                                          // 0x0CE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MiniGame_Maho_Partner.ABP_MiniGame_Maho_Partner_C");
		return ptr;
	}


	void SetAnimState(TEnumAsByte<E_MiniGame_MahoPartnerState> State);
	void Initialize();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Maho_Partner_AnimGraphNode_BlendListByEnum_8D85DCA8407CB992FD18FB8DDDD876DF();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ABP_MiniGame_Maho_Partner(int EntryPoint);
	void ChangeAnimState__DelegateSignature(TEnumAsByte<E_MiniGame_MahoPartnerState> State);
	void TransEndFallDownDispacher__DelegateSignature();
	void ReStartPlayingDispacher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
