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

// AnimBlueprintGeneratedClass ABP_MiniGame_CJ_Ryo.ABP_MiniGame_CJ_Ryo_C
// 0x03C4 (0x0724 - 0x0360)
class UABP_MiniGame_CJ_Ryo_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AABF86984CD4A221C3533FA7A96CE375;// 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D3BA9A864C4F52A712A1DE907B87B269;// 0x03B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B25C77C64E2D4A025F2386B526F8ABE8;// 0x03F8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2D0138B0451032E108C41784A07BAFC6;// 0x04A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2F5730CF454060F963029F912537DFFC;// 0x04F0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D558EFA248A38666FD1394841817AAE9;// 0x05A0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_152A5DD74802524B7A83CFB4C1873998;// 0x05E8(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_Root_889219E44BB76B86415BF29E6E9794D3;      // 0x06C8(0x0048)
	bool                                               bDrop;                                                    // 0x0710(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bThrowIdle;                                               // 0x0711(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bThrow;                                                   // 0x0712(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRelease;                                                 // 0x0713(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIdle;                                                    // 0x0714(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0715(0x0003) MISSED OFFSET
	struct FVector                                     TargetWorldPos;                                           // 0x0718(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MiniGame_CJ_Ryo.ABP_MiniGame_CJ_Ryo_C");
		return ptr;
	}


	void SetIKTarget(const struct FVector& Target);
	void ResetFlag();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CJ_Ryo_AnimGraphNode_TransitionResult_D3BA9A864C4F52A712A1DE907B87B269();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CJ_Ryo_AnimGraphNode_TransitionResult_AABF86984CD4A221C3533FA7A96CE375();
	void AnimNotify_MG_KF_ReleaseStart();
	void AnimNotify_MG_KF_ReleaseEnd();
	void AnimNotify_TransThrowStart();
	void ExecuteUbergraph_ABP_MiniGame_CJ_Ryo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
