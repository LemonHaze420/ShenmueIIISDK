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

// AnimBlueprintGeneratedClass ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C
// 0x02B0 (0x0610 - 0x0360)
class UABP_RintenkiGimmickChara_C : public US3AnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B9C102D64DA298444C3D8CAE5323CB53;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_40CB25CF4980A06C756F818A9869728A;      // 0x03B0(0x0070)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_5478427E46EAF6BF9051E7B275380609;// 0x0420(0x0120)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A1BB06EF4FB8475EDDEC558A133C8C62;// 0x0540(0x00B0)
	class UAnimMontage*                                RotateAnimMontage;                                        // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IdleWeight;                                               // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET
	class UAnimSequence*                               IdleAnimSequence;                                         // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIdleState;                                               // 0x0608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0609(0x0003) MISSED OFFSET
	float                                              IDLE_BLEND_TIME;                                          // 0x060C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_RintenkiGimmickChara.ABP_RintenkiGimmickChara_C");
		return ptr;
	}


	void SetIdleWeight(float InWeight);
	void STATIC_SetIdleState(bool NewState);
	void STATIC_SetIdleAnimSequence(class UAnimSequence* NewAnimSequence);
	void UpdateIdleWeight(float DeltaTime);
	void UpdateRotateAnimMontage(float PositionRate);
	void PlayRotateAnimMontage(class UAnimMontage* NewMontage);
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RintenkiGimmickChara_AnimGraphNode_SequencePlayer_A1BB06EF4FB8475EDDEC558A133C8C62();
	void STATIC_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RintenkiGimmickChara_AnimGraphNode_TwoWayBlend_5478427E46EAF6BF9051E7B275380609();
	void STATIC_BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_RintenkiGimmickChara(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
