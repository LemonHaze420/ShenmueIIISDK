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

// AnimBlueprintGeneratedClass AnimBP_Chicken.AnimBP_Chicken_C
// 0x08A0 (0x0C00 - 0x0360)
class UAnimBP_Chicken_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E21EF68B49F1B300AD4C7687947CA864;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_828012E5429A58BE22037ABA9BA1F595;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FB55D77D4755958B629361A2B68E71E6;// 0x03F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_57DC6FE3476B0DED5814B381B1E205AA;// 0x0440(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AB38E2BD47CD7B7170358C85BF10483E;// 0x0488(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AFDD76FF4CC5E84584DC07B7D3775DD3;// 0x04D0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_73EDBC4643E1CBC8D11B61ADE3BDF0BB;// 0x0518(0x00B0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_55F045EF47A4DA323892BF9738A1D16D;// 0x05C8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8C13EAD9429E0742617BD69B51B35E68;// 0x0698(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_206B3B55424D696D465A6B971A01A7C0;// 0x0748(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_27681E374DDF3FC4C9ED4D922E36BD7D;// 0x0790(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2C0F22394458092CE4A0829CF1C098B7;// 0x0840(0x0048)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_A16A2BC34FBCA409C3E347B97FEE0FC5;// 0x0888(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7DDC9A8C4F5562D2027C1A9A10415011;// 0x0958(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ECE09EAA4692D58DD97FAA916AC0B79D;// 0x0A08(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4858711647C67478D486BAB512606E62;// 0x0AB8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_83425BE843B14A9891356F95CA1A6E31;// 0x0B00(0x00E0)
	bool                                               bMove;                                                    // 0x0BE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0BE1(0x0003) MISSED OFFSET
	float                                              MoveAnimPlayrate;                                         // 0x0BE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RandomIdleSelection;                                      // 0x0BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RunningVar;                                               // 0x0BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed;                                                    // 0x0BF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0BF4(0x0004) MISSED OFFSET
	class ABP_Chicken_C*                               CHICKEN;                                                  // 0x0BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_Chicken.AnimBP_Chicken_C");
		return ptr;
	}


	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Chicken_AnimGraphNode_TransitionResult_57DC6FE3476B0DED5814B381B1E205AA();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Chicken_AnimGraphNode_TransitionResult_AB38E2BD47CD7B7170358C85BF10483E();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Chicken_AnimGraphNode_TransitionResult_AFDD76FF4CC5E84584DC07B7D3775DD3();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Chicken_AnimGraphNode_SequencePlayer_73EDBC4643E1CBC8D11B61ADE3BDF0BB();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Chicken_AnimGraphNode_BlendListByInt_55F045EF47A4DA323892BF9738A1D16D();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Chicken_AnimGraphNode_SequencePlayer_8C13EAD9429E0742617BD69B51B35E68();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Chicken_AnimGraphNode_TransitionResult_FB55D77D4755958B629361A2B68E71E6();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Chicken_AnimGraphNode_BlendListByInt_A16A2BC34FBCA409C3E347B97FEE0FC5();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Chicken_AnimGraphNode_SequencePlayer_7DDC9A8C4F5562D2027C1A9A10415011();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Chicken_AnimGraphNode_SequencePlayer_ECE09EAA4692D58DD97FAA916AC0B79D();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Chicken_AnimGraphNode_TransitionResult_828012E5429A58BE22037ABA9BA1F595();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void STATIC_AnimNotify_RandomIdle();
	void STATIC_BlueprintInitializeAnimation();
	void ExecuteUbergraph_AnimBP_Chicken(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
