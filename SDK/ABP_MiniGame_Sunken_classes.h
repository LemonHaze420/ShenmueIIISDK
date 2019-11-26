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

// AnimBlueprintGeneratedClass ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C
// 0x0D94 (0x10F4 - 0x0360)
class UABP_MiniGame_Sunken_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D4AEF6D242C6F8096FE90C980F74DE31;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1A0318E6466B55B60ED7AE9F6C1502D2;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5DA748424A14038F907AAAA229D1F70E;// 0x03F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_83A14FA34535B32BDFD0E69BC583103F;// 0x0440(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C74B94404D472843971E329619833DA1;// 0x0488(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_EB36808E427BE883A25136944BA2AA88;// 0x0538(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F487C94E413F6AEE1C8F98B2B2343752;// 0x0580(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DC22CB9F4DFA9FD6AA5FF1A33C62F4C5;// 0x0630(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AA63A610487D44116E232984D6B37451;// 0x0678(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BAD202E54A5B80A6DCD561A91B907229;// 0x0728(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A96940234AFC367CE5A43EA2596E802B;// 0x0770(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3F694F644DDF74FEE98D0A8288537A03;// 0x0850(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_752594F8468ED9B8A99AD699CF497329;// 0x0900(0x00E0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_D4BB17B449090BA3453372AC6F1CB26E;    // 0x09E0(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_94B969D2441BBD9C67075390884344E5;    // 0x0C20(0x0240)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A8E9887D4B39167C1C319AA97A92D8FC;// 0x0E60(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3F49F887436CC347863C2C82EA829294;// 0x0EA8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2C98E80942EDF7B0C1B839B10B63EC29;// 0x0EF0(0x00B0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_701B519046BD4CA6C06B13AD286B66A5;// 0x0FA0(0x00E0)
	float                                              PowerRate;                                                // 0x1080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DifficultIndex;                                           // 0x1084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPunch;                                                   // 0x1088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1089(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    Dispatcher_PunchEnd;                                      // 0x1090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UAnimSequenceBase*                           AnimPunchImpact;                                          // 0x10A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentPunchRatio;                                        // 0x10A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentPunchElapsedTime;                                  // 0x10AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchPlayRate;                                            // 0x10B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReturn;                                                  // 0x10B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x10B5(0x0003) MISSED OFFSET
	float                                              CurrentReturnElapsedTime;                                 // 0x10B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x10BC(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           AnimPunchReturn;                                          // 0x10C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentReturnRatio;                                       // 0x10C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentKungFuPower;                                       // 0x10CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           AnimIdle;                                                 // 0x10D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IdleSequencePlayRate;                                     // 0x10D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentIdleElapsedTime;                                   // 0x10DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentIdleRatio;                                         // 0x10E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentLookAtLocation;                                    // 0x10E4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              CloseEyeBlend;                                            // 0x10F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MiniGame_Sunken.ABP_MiniGame_Sunken_C");
		return ptr;
	}


	void SetIdleSequencePlayRate(float PlayRate);
	void SetEyeCloseBlend(float Value);
	bool IsIdle();
	void GetCurrentIdleRatio(float* CurrentIdleRatio);
	void UpdateElapsedTime(float InputPin);
	void Initialize();
	void SetAnimData(class UAnimSequenceBase* AnimPunchImpact, class UAnimSequenceBase* AnimPunchIdle, class UAnimSequenceBase* AnimReturn, float IdleSequencePlayRate, float PunchPlayRate);
	void IsPunch(bool* bPunch);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_SequencePlayer_C74B94404D472843971E329619833DA1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_SequencePlayer_F487C94E413F6AEE1C8F98B2B2343752();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_TransitionResult_83A14FA34535B32BDFD0E69BC583103F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_SequencePlayer_AA63A610487D44116E232984D6B37451();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_LookAt_D4BB17B449090BA3453372AC6F1CB26E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_LookAt_94B969D2441BBD9C67075390884344E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_LayeredBoneBlend_701B519046BD4CA6C06B13AD286B66A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_TransitionResult_5DA748424A14038F907AAAA229D1F70E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Sunken_AnimGraphNode_TransitionResult_1A0318E6466B55B60ED7AE9F6C1502D2();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void AnimNotify_TransEndReturnFromPunch();
	void AnimNotify_TransEndIdleFromReturn();
	void AnimNotify_TransStartIdleFromReturn();
	void AnimNotify_MoveStart();
	void ExecuteUbergraph_ABP_MiniGame_Sunken(int EntryPoint);
	void Dispatcher_PunchEnd__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
