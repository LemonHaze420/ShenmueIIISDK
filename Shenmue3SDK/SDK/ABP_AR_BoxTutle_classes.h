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

// AnimBlueprintGeneratedClass ABP_AR_BoxTutle.ABP_AR_BoxTutle_C
// 0x0C58 (0x0FB8 - 0x0360)
class UABP_AR_BoxTutle_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B04DBB71440EB728282C9A8B875B5823;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C19F25DB42A88D065E0F72A61C77F559;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A69BBB404B758D552F109796B1D2B50E;// 0x03F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B98D9A17485BB480A67626A615DEFC94;// 0x0440(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D38462BC47E3D2F5084160A7BEFE6D4A;// 0x0488(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5D927C924F161B378809159B66E48E16;// 0x04D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1C8D52374E1162CC64B26FA0F8D367CD;// 0x0518(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2901D1E54E7B618E47ECB4A3D37961A2;// 0x0560(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FF9727C848BA4D96D17A7CAA3FEAE8CE;// 0x05A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AABCF64A46E37CA88BAD7FB196B443CA;// 0x05F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7A5E323C4E8F7103074445AECC8E53C4;// 0x0638(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F6C047BB4D22C635DC4F62AD8A163379;// 0x0680(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7D9B06D34CD3CE9330064BB7D890234E;// 0x06C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CF32E80848009C24A9099093ACF6D16E;// 0x0710(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ED4CBEC44A5D9A02762FD29EAD61EDFB;// 0x0758(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9BA18C32463B596CFAF0E29EC761E56E;// 0x07A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D8E9A4264FA2B8B62D0F81A5B771ADD0;// 0x07E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C95C73B442B837563C247EA57E367503;// 0x0830(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_91D7F7BC4514EF9B05157891446308EC;// 0x0878(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B29477B5467D0FE74AAB26A64E822E58;// 0x08C0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_296B3CB445EFACF49DBFB19CC077AB39;// 0x0908(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6C2D75B647B7651CA13C35A5F0AAF4FA;// 0x0950(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4DE90EE54BFB5149A8EAD19574C2EE21;// 0x0A00(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5EA7C307484A0292266CD9BD292CAAFD;// 0x0A48(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8E3049524F32BED68AEA81A2C3F8B48A;// 0x0AF8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C81892D74A945DAF4170A6A67364E2A7;// 0x0B40(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0A0182BC46457AEB2B770192426BD32F;// 0x0BF0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6234766F49F8A4D46AB1CD86339BBF1D;// 0x0C38(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_427ED0A8449546BFD87B6C814E481797;// 0x0D60(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8C6F0E8943D7FE1FDEE9C39FD6FD844F;// 0x0DA8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_353BA49B41E43F24EF62B7A75AED2E2D;// 0x0E58(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B1EA49204A88F3C7717804BFB398B210;// 0x0EA0(0x00E0)
	float                                              side_rate;                                                // 0x0F80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              walk_rate;                                                // 0x0F84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_death_anim_end;                                        // 0x0F88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_AR_Motion_Type>                      mot_type;                                                 // 0x0F89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_death;                                                 // 0x0F8A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0F8B(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    Anim_CryTiming;                                           // 0x0F90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Anim_WalkTiming;                                          // 0x0FA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              AnimPlayRate;                                             // 0x0FB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreeAnimStartPos;                                         // 0x0FB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_AR_BoxTutle.ABP_AR_BoxTutle_C");
		return ptr;
	}


	void setFreeAnimStartPos(float StartPos);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_TransitionResult_1C8D52374E1162CC64B26FA0F8D367CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_TransitionResult_2901D1E54E7B618E47ECB4A3D37961A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_TransitionResult_FF9727C848BA4D96D17A7CAA3FEAE8CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_TransitionResult_AABCF64A46E37CA88BAD7FB196B443CA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_TransitionResult_7A5E323C4E8F7103074445AECC8E53C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_TransitionResult_5D927C924F161B378809159B66E48E16();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_TransitionResult_F6C047BB4D22C635DC4F62AD8A163379();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_TransitionResult_7D9B06D34CD3CE9330064BB7D890234E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_TransitionResult_CF32E80848009C24A9099093ACF6D16E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_TransitionResult_ED4CBEC44A5D9A02762FD29EAD61EDFB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_TransitionResult_D38462BC47E3D2F5084160A7BEFE6D4A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_TransitionResult_9BA18C32463B596CFAF0E29EC761E56E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_TransitionResult_D8E9A4264FA2B8B62D0F81A5B771ADD0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_TransitionResult_C95C73B442B837563C247EA57E367503();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_TransitionResult_91D7F7BC4514EF9B05157891446308EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_TransitionResult_B98D9A17485BB480A67626A615DEFC94();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_TransitionResult_B29477B5467D0FE74AAB26A64E822E58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_TransitionResult_296B3CB445EFACF49DBFB19CC077AB39();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_SequencePlayer_6C2D75B647B7651CA13C35A5F0AAF4FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_TransitionResult_A69BBB404B758D552F109796B1D2B50E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_BlendSpacePlayer_6234766F49F8A4D46AB1CD86339BBF1D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AR_BoxTutle_AnimGraphNode_TransitionResult_C19F25DB42A88D065E0F72A61C77F559();
	void AnimNotify_BoxturtleDeath_Anim_Finished();
	void AnimNotify_MG_AnimalCry();
	void AnimNotify_MG_WalkTiming();
	void ExecuteUbergraph_ABP_AR_BoxTutle(int EntryPoint);
	void Anim_WalkTiming__DelegateSignature();
	void Anim_CryTiming__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
