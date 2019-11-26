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

// AnimBlueprintGeneratedClass ABP_S3_Ryo_ShowHand_re.ABP_S3_Ryo_ShowHand_re_C
// 0x2068 (0x23C8 - 0x0360)
class UABP_S3_Ryo_ShowHand_re_C : public US3AnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EFC5CA2041294D3C99CA23B1586CA320;      // 0x0368(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_77470A98461C071F1473DCB5DF34143B;// 0x03D8(0x00E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8E902C094CA9134E35F9059E7A91572E;// 0x04B8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8DED5C1D4B94BD5E3C4EBEAC68410A83;// 0x0500(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_634697114ACC5A22898894888A89C5FF;// 0x0548(0x0128)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7E099ADB4F256B1BA23C6FA901012BF2;// 0x0670(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2E0CF3A74F669535089D5990971AEBB9;// 0x07D0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_57C6CE3F42AEB476957674B1DDE663AD;// 0x0930(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DF88D2CB4E5D1E0A691E968DBD1D564C;// 0x0A90(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_222CE7D648285A17A24CF6BF782FE395;// 0x0BF0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_379750664BB911120096BCABD41AE5C5;// 0x0D50(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9DE995584480EB99F57756A305EFB6F3;// 0x0EB0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2D10183A42675BE5F174B0A482F9F3E4;// 0x1010(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4D055FA943F9968D7EAA029C627DA8BC;// 0x1170(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1570ADFB4F6A0F751DCE68B054CFB966;// 0x12D0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_52A9DA6D41675C9238B0719B9B15CC6A;// 0x1430(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8016EAAD4350660D6F5DC38F60CBEBE4;// 0x1590(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_93047B964878CB517F3551AE716411C8;// 0x16F0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1C93C6E3406662EE5C516890A62C9F27;// 0x1850(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6483E7E844A4E5CE83A3B2839806FD87;// 0x19B0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C16828614FA681CDFD25EB992E81E47E;// 0x1B10(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D86AE089424B71156E635685B65EA128;// 0x1C70(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0D4A03AD452DFEDBDAF0E89421F6E9E7;// 0x1DD0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2C1E3A7944B97AF05A49A1A0AD83A27C;// 0x1F30(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A22F289A484FA053992C8C83FE176B84;// 0x2090(0x0160)
	struct FAnimNode_Root                              AnimGraphNode_Root_DEDAEEA04F2FC090808B7BA6D5F67C84;      // 0x21F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7C4B03D3476701A893AA78B1141FA0D8;// 0x2238(0x00B0)
	class ABP_PlayerShowObject_C*                      OwnerPlayerObject;                                        // 0x22E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              HandBlendAlpha;                                           // 0x22F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x22F4(0x0004) MISSED OFFSET
	TArray<struct FVector>                             ThumbLocations;                                           // 0x22F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            ThumbRotations;                                           // 0x2308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Thumb_Alpha;                                              // 0x2318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x231C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             IndexLocations;                                           // 0x2320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            IndexRotations;                                           // 0x2330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Index_Alpha;                                              // 0x2340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2344(0x0004) MISSED OFFSET
	TArray<struct FVector>                             MiddleLocations;                                          // 0x2348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            MiddleRotations;                                          // 0x2358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Middle_Alpha;                                             // 0x2368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x236C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             RingLocations;                                            // 0x2370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            RingRotations;                                            // 0x2380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Ring_Alpha;                                               // 0x2390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x2394(0x0004) MISSED OFFSET
	TArray<struct FVector>                             PinkyLocations;                                           // 0x2398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            PinkyRotations;                                           // 0x23A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Pinky_Alpha;                                              // 0x23B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ArmRotation;                                              // 0x23BC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_S3_Ryo_ShowHand_re.ABP_S3_Ryo_ShowHand_re_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_ModifyBone_C16828614FA681CDFD25EB992E81E47E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_ModifyBone_D86AE089424B71156E635685B65EA128();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_ModifyBone_0D4A03AD452DFEDBDAF0E89421F6E9E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_ModifyBone_2C1E3A7944B97AF05A49A1A0AD83A27C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_ModifyBone_A22F289A484FA053992C8C83FE176B84();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_ModifyBone_1570ADFB4F6A0F751DCE68B054CFB966();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_ModifyBone_4D055FA943F9968D7EAA029C627DA8BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_ModifyBone_6483E7E844A4E5CE83A3B2839806FD87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_ModifyBone_2D10183A42675BE5F174B0A482F9F3E4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_ModifyBone_9DE995584480EB99F57756A305EFB6F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_ModifyBone_379750664BB911120096BCABD41AE5C5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_ModifyBone_222CE7D648285A17A24CF6BF782FE395();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_ModifyBone_DF88D2CB4E5D1E0A691E968DBD1D564C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_ModifyBone_57C6CE3F42AEB476957674B1DDE663AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_ModifyBone_2E0CF3A74F669535089D5990971AEBB9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_ModifyBone_7E099ADB4F256B1BA23C6FA901012BF2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_BlendSpacePlayer_634697114ACC5A22898894888A89C5FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_ModifyBone_1C93C6E3406662EE5C516890A62C9F27();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_ModifyBone_93047B964878CB517F3551AE716411C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_ModifyBone_8016EAAD4350660D6F5DC38F60CBEBE4();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re_AnimGraphNode_ModifyBone_52A9DA6D41675C9238B0719B9B15CC6A();
	void ExecuteUbergraph_ABP_S3_Ryo_ShowHand_re(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
