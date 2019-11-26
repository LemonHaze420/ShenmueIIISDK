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

// AnimBlueprintGeneratedClass ABP_S3_Ryo_ShowHand_re.ABP_S3_Ryo_ShowHand_re_C
// 0x0458 (0x07B8 - 0x0360)
class UABP_S3_Ryo_ShowHand_re_C : public US3AnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DEDAEEA04F2FC090808B7BA6D5F67C84;      // 0x0368(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_634697114ACC5A22898894888A89C5FF;// 0x03B0(0x0128)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EFC5CA2041294D3C99CA23B1586CA320;      // 0x04D8(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_77470A98461C071F1473DCB5DF34143B;// 0x0548(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7C4B03D3476701A893AA78B1141FA0D8;// 0x0628(0x00B0)
	class ABP_PlayerShowObject_C*                      OwnerPlayerObject;                                        // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              HandBlendAlpha;                                           // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06E4(0x0004) MISSED OFFSET
	TArray<struct FVector>                             ThumbLocations;                                           // 0x06E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            ThumbRotations;                                           // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Thumb_Alpha;                                              // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x070C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             IndexLocations;                                           // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            IndexRotations;                                           // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Index_Alpha;                                              // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0734(0x0004) MISSED OFFSET
	TArray<struct FVector>                             MiddleLocations;                                          // 0x0738(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            MiddleRotations;                                          // 0x0748(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Middle_Alpha;                                             // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x075C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             RingLocations;                                            // 0x0760(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            RingRotations;                                            // 0x0770(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Ring_Alpha;                                               // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0784(0x0004) MISSED OFFSET
	TArray<struct FVector>                             PinkyLocations;                                           // 0x0788(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            PinkyRotations;                                           // 0x0798(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Pinky_Alpha;                                              // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ArmRotation;                                              // 0x07AC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_S3_Ryo_ShowHand_re.ABP_S3_Ryo_ShowHand_re_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_BlendSpacePlayer_634697114ACC5A22898894888A89C5FF();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
