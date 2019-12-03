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

// AnimBlueprintGeneratedClass ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C
// 0x0941 (0x0CA1 - 0x0360)
class UABP_MiniGame_Keiho_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_AD37CF37467869CCCD3F6CBB4EB4D54E;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_084888F54593D64299F9E585B9F36FE8;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B75768E040DDF530660724A1E3981977;// 0x03F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1E519ABA4F1A0133D31411BFF2EF1D81;// 0x0440(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7B8DA4A84FF4C3556D26419D09F3E377;// 0x0488(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C82D658A44D9F4818D0DA0B4D75AD3D2;// 0x04D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6C2FEF504C2F47FB8BA462A0AEA6834E;// 0x0518(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A7BA5F0345FC6A6A4847DF9E965B2986;// 0x0560(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5DD33975461884065AAEEEBEFE8BCF3C;// 0x05A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_250155304228EE743413178CB3EBA14B;// 0x05F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6759202E4904F3463F343B9A11CB057A;// 0x0638(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DAECB2D7437665AE028E689BBFF892AF;// 0x0680(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B464EBCC4CEC3F25438184A9A8652E50;// 0x06C8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C889F44A421223ABA9C4E6A5536A2916;// 0x0778(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F629385E4B4B17B77C5FFC9DB76E4BFA;// 0x07C0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B17A343C4754494AF8A7B2AC64EB3E58;// 0x0870(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BB91A3EB4AF50D978408E68AD1C908C3;// 0x08B8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A3FEC005442D4C52A50C358B1F5E71AB;// 0x0968(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FF57A2AE4B36D217D0186A98D7C3ABB9;// 0x09B0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2877D1DC43F9885AB77822B0BE08B2C1;// 0x0A60(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C18565A1469887C33033F7A8E3EA9599;// 0x0AA8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5BD8F86549087FC0D0F15389A57E2252;// 0x0AF0(0x00E0)
	bool                                               IsStop;                                                   // 0x0BD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0BD1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    RightFootLandedDipatcher;                                 // 0x0BD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    LeftFootLandedDispacher;                                  // 0x0BE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              WalkRate;                                                 // 0x0BF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFailed;                                                 // 0x0BFC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0BFD(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    FailedEndDispacher;                                       // 0x0C00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              CurrentPlayPos;                                           // 0x0C10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0C14(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    RightFootStartDispacher;                                  // 0x0C18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    LeftFootStartDispacher;                                   // 0x0C28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    RightFootInputStartDispacher;                             // 0x0C38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    LeftFootInputStartDispacher;                              // 0x0C48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              WalkOffsetRateBase;                                       // 0x0C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentOffsetRate;                                        // 0x0C5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Turn;                                                     // 0x0C60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bResetAnim;                                               // 0x0C61(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0C62(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    EventFootPrintL;                                          // 0x0C68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class USkeletalMeshComponent*                      SkeletalMeshPlayer;                                       // 0x0C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    EventFootPrintR;                                          // 0x0C80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventRyoUpdateFade;                                       // 0x0C90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bTurning;                                                 // 0x0CA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MiniGame_Keiho.ABP_MiniGame_Keiho_C");
		return ptr;
	}


	void IsTurning(bool* bTurning);
	bool STATIC_IsCounterClock();
	bool STATIC_IsClockWise();
	void STATIC_SetResetAnim(bool bResetAnim);
	void STATIC_SetTurn(bool bClockWiseWalk);
	void GetWalkOffsetRate(float* Rate);
	void SetWalkRate(float WalkRate);
	void SetFailed(bool IsFailed);
	void STATIC_UpdateWalk(float WalkRate);
	void UnBindDispacher();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_5DD33975461884065AAEEEBEFE8BCF3C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_A7BA5F0345FC6A6A4847DF9E965B2986();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_250155304228EE743413178CB3EBA14B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_6C2FEF504C2F47FB8BA462A0AEA6834E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_C82D658A44D9F4818D0DA0B4D75AD3D2();
	void STATIC_BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_MG_Keiho_LeftFoot();
	void AnimNotify_MG_Keiho_RightFoot();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_7B8DA4A84FF4C3556D26419D09F3E377();
	void AnimNotify_TransStartWalkFromFailed1();
	void AnimNotify_TransEndWalkFromFailed1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_1E519ABA4F1A0133D31411BFF2EF1D81();
	void AnimNotify_MG_Keiho_LeftFootStart();
	void AnimNotify_MG_Keiho_RightFootStart();
	void AnimNotify_MG_Keiho_LeftFootInput();
	void AnimNotify_MG_Keiho_RightFootInput();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_Keiho_AnimGraphNode_TransitionResult_B75768E040DDF530660724A1E3981977();
	void AnimNotify_TransitionEndToTurnClockWise();
	void AnimNotify_TransitionEndToTurnCounter();
	void AnimNotify_TransitionStartToStart();
	void BlueprintInitializeAnimation();
	void AnimNotify_GroundingFootL();
	void AnimNotify_GroundingFootR();
	void AnimNotify_TransitionEndToClockWise();
	void AnimNotify_TransitionEndToCounterClock();
	void ExecuteUbergraph_ABP_MiniGame_Keiho(int EntryPoint);
	void STATIC_EventRyoUpdateFade__DelegateSignature();
	void STATIC_EventFootPrintR__DelegateSignature();
	void STATIC_EventFootPrintL__DelegateSignature();
	void STATIC_LeftFootInputStartDispacher__DelegateSignature();
	void STATIC_RightFootInputStartDispacher__DelegateSignature();
	void STATIC_LeftFootStartDispacher__DelegateSignature();
	void STATIC_RightFootStartDispacher__DelegateSignature();
	void STATIC_FailedEndDispacher__DelegateSignature();
	void STATIC_LeftFootLandedDispacher__DelegateSignature();
	void STATIC_RightFootLandedDipatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
