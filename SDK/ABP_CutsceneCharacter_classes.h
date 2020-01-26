#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_CutsceneCharacter.ABP_CutsceneCharacter_C
// 0x2DFD (0x31BD - 0x03C0)
class UABP_CutsceneCharacter_C : public UCineAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D99026D94DF385DB8E2EC9A0DC3BEBF5;      // 0x03C8(0x0070)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1A37820A481C5AEF8A49DDA0DB87D28D;// 0x0438(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D03EDD0C475C0BA0CF6F71869C0E52BC;// 0x0518(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_44D7676743F110C8E20A3AB3E467ED63;// 0x0568(0x0120)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DDC7B5334CB7ED9B606B26B81F8E9E1B;      // 0x0688(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7FDE603248618658F19DF0ACAB9FD8E6;// 0x06F8(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_F09B65424C4A562FB8B0AA8E4D2DCEA6;// 0x0748(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_495FDC3145E897FB2F80C9B55E3AD1D9;      // 0x0828(0x0070)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_EAD9D26F474DE87ADBD52F96309098C5;// 0x0898(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_94F5FBFA4CAE20885EF5968F54CF17DA;// 0x0978(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_060AF50F4BFEC47D6BE5298F130B8C7A;// 0x09C8(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2A561D1C4E130E14548386891BA94C2F;      // 0x0AA8(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3CD0DBC845FB7AD98E18D2B9C1111143;// 0x0B18(0x0050)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_8063D62E496887AD7D4025BB642BA9C6;// 0x0B68(0x00C8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1D5459994BA416F5895A8F821CEC7639;// 0x0C30(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_24B5C4B54E0B76BD73F444A3997345D0;// 0x0D10(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_64796362453FDDFF49737D89D0EF317F;// 0x0D60(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6F98F26145D1BFB6010B61A122FF3F98;// 0x0DB0(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_Root_DBA1AB354FB4076DF4112F98DB09D07E;      // 0x0E80(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_567F7F434A0DB9CECF5BCFB32202E19D;// 0x0EC8(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FD2E71D34CEA31F7A2CCB0B6D3969170;// 0x0FA8(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9F708181439DB8FC77A9CAB25AEE5E20;// 0x0FF8(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_820C95D24D324FF1D645E79BA8490360;      // 0x10D8(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1EFEA0FF4691AF3FD8ABCDBBB6C34AF7;// 0x1148(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B82A49F14F845BDC6273F9B2996BC884;// 0x1198(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4F6A38DB4C75BF1E6EA678ACE0016252;      // 0x1278(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A8ACABC24F5DAEBDD5E8659DE036A1C5;// 0x12E8(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BB779FF5479D79E5A3B568A77DB34AF5;// 0x1338(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9E22ECF1468DEE116FB1309533198FEF;// 0x1418(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_A5E009274DF6ED85B3E0B782772EE413;// 0x1468(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_73F8F2FE49B9F7642EBE33B4301BBBF5;      // 0x1548(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F13B742A4809B5690562BE9261E33523;// 0x15B8(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_1CA9FC7849D08EA4AC5723876DBF5692;// 0x1608(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BCFB865246A814C8BA79F7B6350220F3;      // 0x16E8(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C544AF2F42967222CEB8C5AE096B34B4;// 0x1758(0x0050)
	unsigned char                                      UnknownData00[0x8];                                       // 0x17A8(0x0008) MISSED OFFSET
	struct FAnimNode_CineLookAt                        AnimGraphNode_CineLookAt_62010DE44F31BFF4C6CE59B9CD4897D6;// 0x17B0(0x01E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_250685EA431E2255ED9D48A11CBAB15A;// 0x1990(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_CA0914284D21DE31986DD89E9AFC1306;// 0x19D8(0x0048)
	struct FAnimNode_CineLookAt                        AnimGraphNode_CineLookAt_58994B9247DD83EA6020FDB41E0D1BE5;// 0x1A20(0x01E0)
	struct FAnimNode_CineLookAtEyes                    AnimGraphNode_CineLookAtEyes_E1AE2FC7463D785123AAFD860C6ED6A9;// 0x1C00(0x0200)
	struct FAnimNode_CineLookAtEyes                    AnimGraphNode_CineLookAtEyes_80AEACD141173F62039185A69A442AC1;// 0x1E00(0x0200)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_F624AE9A49A417F2EF86698FF23E51B2; // 0x2000(0x0270)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_5873D3C04D290366154F499E30FAA076; // 0x2270(0x0270)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1D8BB8864E671608FB28D3A3EA7CE281;// 0x24E0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3D173D134730FC11D4DC6B9F621DC80D;// 0x25C0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_477BBDC94568FF9D8437048AE5678627;// 0x2610(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BC0293504F35AD1BA22E94B7B3FE5960;// 0x2660(0x00D0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9662F0FB4198D97FD3C320B206998E75;// 0x2730(0x00E0)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_81E4548040E94590241F6B99C2E326F9;// 0x2810(0x0120)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot_FCDAD8FD446EEB5FE381FA9C3BB6B31A;// 0x2930(0x00B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_962C703F44004B3CF289B3B61BBD93AC;// 0x29E0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0A8FD63245DD7A91D655FF80814C238F;// 0x2B40(0x0160)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9B5C2F944625626A2617D8B0CFDD2EA5;// 0x2CA0(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B94924E143BA93B38405F89A0A39C69F;// 0x2D80(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_245859B24CFD1574289FD3A8C8B16BBE;// 0x2E60(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DEC5F3C94A995B52AA4232B526B52A54;// 0x2EB0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_100F1B7443A6B69092E7C1A584872DB3;// 0x2F00(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_21E32F0441AEE6C43F4576B863E5B32A;// 0x2FD0(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6B67489B476BD825987F4883A854D0BA;// 0x3020(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_60C88C5742FC7DCD4B96079655F8BA9F;// 0x3100(0x0050)
	bool                                               bUseSubAnimInstance;                                      // 0x3150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x3151(0x0003) MISSED OFFSET
	float                                              CineLookatAlpha_Head;                                     // 0x3154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CineLookatAlpha_Eyes;                                     // 0x3158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeightFullBody_SEQ2;                                      // 0x315C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeightF_SEQ;                                              // 0x3160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeightH_L2;                                               // 0x3164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeightH_R2;                                               // 0x3168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x316C(0x0004) MISSED OFFSET
	class ABP_CutsceneSkeletalMeshActor_C*             CutsceneSkeletalMeshActor;                                // 0x3170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              WeightF_SEQ2;                                             // 0x3178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeftHandIKEffectorLocation;                               // 0x317C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftHandIKAlpha;                                          // 0x3188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RightHandIKEffectorLocation;                              // 0x318C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              RightHandIKAlpha;                                         // 0x3198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTmpIsFaceDisabled;                                       // 0x319C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x319D(0x0003) MISSED OFFSET
	struct FName                                       FinalBlendPoseSnapshotName;                               // 0x31A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FinalBlendPoseWeight;                                     // 0x31A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EyeDirectRotationAlpha;                                   // 0x31AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    EyeDirectRotation;                                        // 0x31B0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Overwrite_with_animation;                                 // 0x31BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CutsceneCharacter.ABP_CutsceneCharacter_C");
		return ptr;
	}


	void UpdateOverwriteWithAnimation();
	void UpdateEyeDirectRotation();
	void SetFinalBlendPoseWeight(float NewWeight);
	void SnapshotFinalBlendPose();
	void TmpUpdateIsFaceDisabled();
	void UpdateHandIK();
	void UpdateAnimationWeight();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CutsceneCharacter_AnimGraphNode_CineLookAt_58994B9247DD83EA6020FDB41E0D1BE5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CutsceneCharacter_AnimGraphNode_CineLookAtEyes_E1AE2FC7463D785123AAFD860C6ED6A9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CutsceneCharacter_AnimGraphNode_CineLookAt_62010DE44F31BFF4C6CE59B9CD4897D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CutsceneCharacter_AnimGraphNode_LayeredBoneBlend_1CA9FC7849D08EA4AC5723876DBF5692();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CutsceneCharacter_AnimGraphNode_CineLookAtEyes_80AEACD141173F62039185A69A442AC1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CutsceneCharacter_AnimGraphNode_LayeredBoneBlend_A5E009274DF6ED85B3E0B782772EE413();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CutsceneCharacter_AnimGraphNode_TwoBoneIK_F624AE9A49A417F2EF86698FF23E51B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CutsceneCharacter_AnimGraphNode_BlendListByBool_6F98F26145D1BFB6010B61A122FF3F98();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CutsceneCharacter_AnimGraphNode_TwoBoneIK_5873D3C04D290366154F499E30FAA076();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CutsceneCharacter_AnimGraphNode_LayeredBoneBlend_060AF50F4BFEC47D6BE5298F130B8C7A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CutsceneCharacter_AnimGraphNode_LayeredBoneBlend_F09B65424C4A562FB8B0AA8E4D2DCEA6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CutsceneCharacter_AnimGraphNode_BlendListByBool_BC0293504F35AD1BA22E94B7B3FE5960();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CutsceneCharacter_AnimGraphNode_BlendListByBool_100F1B7443A6B69092E7C1A584872DB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CutsceneCharacter_AnimGraphNode_ModifyBone_0A8FD63245DD7A91D655FF80814C238F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CutsceneCharacter_AnimGraphNode_ModifyBone_962C703F44004B3CF289B3B61BBD93AC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CutsceneCharacter_AnimGraphNode_TwoWayBlend_44D7676743F110C8E20A3AB3E467ED63();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CutsceneCharacter_AnimGraphNode_PoseSnapshot_FCDAD8FD446EEB5FE381FA9C3BB6B31A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CutsceneCharacter_AnimGraphNode_TwoWayBlend_81E4548040E94590241F6B99C2E326F9();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CutsceneCharacter_AnimGraphNode_LayeredBoneBlend_9662F0FB4198D97FD3C320B206998E75();
	void AnimNotify_GroundingFootL();
	void AnimNotify_GroundingFootR();
	void ExecuteUbergraph_ABP_CutsceneCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
