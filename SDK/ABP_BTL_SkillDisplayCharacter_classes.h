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

// AnimBlueprintGeneratedClass ABP_BTL_SkillDisplayCharacter.ABP_BTL_SkillDisplayCharacter_C
// 0x0455 (0x07B5 - 0x0360)
class UABP_BTL_SkillDisplayCharacter_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_EF34DB21493D81F72CDD0DB81628848A;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_ADBA4F474C50F5FE7E77178349962B66;      // 0x03B0(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B7B38FBA43E8359F93B96FAB93B7FAE3;// 0x0420(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8DE793A54F0B6CCCD0B021921A651464;// 0x04F0(0x00B0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_3BF97EFD4BE3A4B6C84ABCB88232FED7;// 0x05A0(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E654D1A04FCCC96D80A302910C9D7656;// 0x0610(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15F5D70849C65E66BDCA7AB0662FE56C;// 0x06F0(0x00B0)
	class UAnimMontage*                                CurrentMontage;                                           // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeWaiting;                                              // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoopWaitTime;                                             // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Loops;                                                    // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Guard;                                                    // 0x07B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_BTL_SkillDisplayCharacter.ABP_BTL_SkillDisplayCharacter_C");
		return ptr;
	}


	void LoopMontage(class UAnimMontage* Montage);
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BTL_SkillDisplayCharacter_AnimGraphNode_BlendListByBool_B7B38FBA43E8359F93B96FAB93B7FAE3();
	void STATIC_BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_BTL_SkillDisplayCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
