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

// AnimBlueprintGeneratedClass ABP_WorldTel.ABP_WorldTel_C
// 0x0388 (0x06E8 - 0x0360)
class UABP_WorldTel_C : public US3AnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_EE19CBB841FEC854B2D0B0B68E77188E;      // 0x0368(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_11A85F1C40235F17CE255D92244745FD;// 0x03B0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_460069C445610E6EB91A77BD48ED7923;// 0x0460(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_AE74596746694C9D8E54238D590A38A7;// 0x04A8(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EE1B86A548FD4C7B6869CF9101EE6D08;      // 0x0588(0x0070)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_A9912AC64E6C38BD334BDBAE67AA766D;// 0x05F8(0x00C8)
	class ABP_Chara_WorldTel2_C*                       Owner;                                                    // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                TeleportEnd;                                              // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                TeleportStart;                                            // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimInstance*>                       LinkedABP;                                                // 0x06D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_WorldTel.ABP_WorldTel_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void TelEnd();
	void TelStart();
	void AnimNotify_Talk_Start();
	void AnimNotify_CallStart();
	void AnimNotify_CallEnd();
	void AnimNotify_Sound_Cloth01();
	void AnimNotify_Sound_Take();
	void AnimNotify_Sound_ButtonPush();
	void AnimNotify_Sound_end();
	void ExecuteUbergraph_ABP_WorldTel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
