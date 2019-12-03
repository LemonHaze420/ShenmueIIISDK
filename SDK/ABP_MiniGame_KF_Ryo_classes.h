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

// AnimBlueprintGeneratedClass ABP_MiniGame_KF_Ryo.ABP_MiniGame_KF_Ryo_C
// 0x067C (0x09DC - 0x0360)
class UABP_MiniGame_KF_Ryo_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_52CFA2B94E5FF9B2117C74AC92C22B7B;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0B8A68644385FA4B12F93698C17D5B3A;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5AFC53024D91DEE2226EC4895B6A21FE;// 0x03F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F9BF90844D1CC8E1147740A7767B66D7;// 0x0440(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7E1A826841F8A9442C3CDA993FD33FF7;// 0x0488(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7BFC33F648521082179A13A89CC3A227;// 0x04D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6705A5454CD600F311E6A9A22A96E425;// 0x0518(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F7ED91174359681D51D24390F1F16121;// 0x05C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4180E7BF4D504992DA9B44866FEFDE48;// 0x0610(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_10BF40D448CFA7E624C77480755EF148;// 0x06C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BEB9E23E4B7976236F1E5F92AC3AE473;// 0x0708(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_47AEE1F94C505C4BA754E78235C2C3BB;// 0x07B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AFEFA8114257D74F41553BAE285898D6;// 0x0800(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C339D10E4C90DE9923EFF382EC4CA5D1;// 0x08B0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_001A961948BF479E784C0AAF9A16166E;// 0x08F8(0x00E0)
	bool                                               bDrop;                                                    // 0x09D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bThrowIdle;                                               // 0x09D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bThrow;                                                   // 0x09DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRelease;                                                 // 0x09DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MiniGame_KF_Ryo.ABP_MiniGame_KF_Ryo_C");
		return ptr;
	}


	void STATIC_ResetFlag();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_KF_Ryo_AnimGraphNode_TransitionResult_F9BF90844D1CC8E1147740A7767B66D7();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_KF_Ryo_AnimGraphNode_TransitionResult_7E1A826841F8A9442C3CDA993FD33FF7();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_KF_Ryo_AnimGraphNode_TransitionResult_7BFC33F648521082179A13A89CC3A227();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_KF_Ryo_AnimGraphNode_TransitionResult_5AFC53024D91DEE2226EC4895B6A21FE();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_KF_Ryo_AnimGraphNode_SequencePlayer_4180E7BF4D504992DA9B44866FEFDE48();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_KF_Ryo_AnimGraphNode_TransitionResult_0B8A68644385FA4B12F93698C17D5B3A();
	void STATIC_AnimNotify_MG_KF_ReleaseStart();
	void STATIC_AnimNotify_MG_KF_ReleaseEnd();
	void STATIC_AnimNotify_TransThrowStart();
	void STATIC_ExecuteUbergraph_ABP_MiniGame_KF_Ryo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
