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

// AnimBlueprintGeneratedClass ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C
// 0x0B46 (0x0EA6 - 0x0360)
class UABP_MiniGame_SupportNPC_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C6301DC04FE82879AD6DCDA8D1CB5C3A;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3FC9E51644D08B3E760BD281AB3E13F5;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0C943C0E467DD3B6B51E038DBCFD50DC;// 0x03F8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6396293C4212A647DB5E98BE4BDF7D90;// 0x0440(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_99AEF4FC4870A13BA2259F9BE265EC01;// 0x04F0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_494534884C266C388A80F3B7BFCE5829;// 0x05A0(0x00B0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_BA32322944E76EDA95F923A3E0FEA094;// 0x0650(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F62F10E14A1F6B44A623AF8066318A5B;// 0x0720(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FE78588F42E05D1601917A85D5EF0E00;// 0x0768(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8A3E3E4C4E0873180447B1913D5DC9A5;// 0x0818(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_CB0CE2A44E806347DC08EC8B55AF5168;// 0x0860(0x00E0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_F9516E7D4BA35AECDBAA789D688B23AF;    // 0x0940(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_35C3E4AB45E86A307EDA428B25391388;    // 0x0B80(0x0240)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D85263B64C221F2BBD58D09517815148;// 0x0DC0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5B758EC8492462417DD06AB1BD893647;// 0x0E08(0x0048)
	class UAnimSequenceBase*                           AnimIdle;                                                 // 0x0E50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AnimIndex;                                                // 0x0E58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuspendTime;                                              // 0x0E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayAction;                                             // 0x0E60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E61(0x0003) MISSED OFFSET
	float                                              CurrentSequenceLength;                                    // 0x0E64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOverlapSuccess;                                         // 0x0E68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0E69(0x0003) MISSED OFFSET
	int                                                OverlapActionCount;                                       // 0x0E6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimSequenceBase*>                   AnimActionList;                                           // 0x0E70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     LookAtLocation;                                           // 0x0E80(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LookAtLocationOffset;                                     // 0x0E8C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentLookAtLocation;                                    // 0x0E98(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAction;                                                 // 0x0EA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBlockAction;                                             // 0x0EA5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MiniGame_SupportNPC.ABP_MiniGame_SupportNPC_C");
		return ptr;
	}


	void SetBlockAction(bool bBlockAction);
	void IsBlockAction(bool* IsAction);
	void ChangeAnim(class UAnimSequenceBase* Anim);
	void SetLookAtLocation(const struct FVector& LookAtLocation);
	void Finalize();
	void Initialize(class UAnimSequenceBase* AnimIdle);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_494534884C266C388A80F3B7BFCE5829();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_BlendListByInt_BA32322944E76EDA95F923A3E0FEA094();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_99AEF4FC4870A13BA2259F9BE265EC01();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_6396293C4212A647DB5E98BE4BDF7D90();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_SequencePlayer_FE78588F42E05D1601917A85D5EF0E00();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_TransitionResult_0C943C0E467DD3B6B51E038DBCFD50DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_LookAt_F9516E7D4BA35AECDBAA789D688B23AF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_LookAt_35C3E4AB45E86A307EDA428B25391388();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_SupportNPC_AnimGraphNode_TransitionResult_3FC9E51644D08B3E760BD281AB3E13F5();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_StartTransitionIdlle();
	void AnimNotify_EndTransitionIdle();
	void AnimNotify_StartTransitionActionToIdle();
	void ExecuteUbergraph_ABP_MiniGame_SupportNPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
