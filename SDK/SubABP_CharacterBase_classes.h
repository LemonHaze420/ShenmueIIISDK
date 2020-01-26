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

// AnimBlueprintGeneratedClass SubABP_CharacterBase.SubABP_CharacterBase_C
// 0x2FC4 (0x3714 - 0x0750)
class USubABP_CharacterBase_C : public US3FaceAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0750(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6822F7724A31844115ACFC951F92B1C1;      // 0x0758(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_163784F549F81C3689E764B16BB5F07E;// 0x07A0(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_80AD3BF24E1231036155EFAACC286879;      // 0x0880(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_660409A34D1A9E226405539E6C696495;// 0x08F0(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BF56C6974366668866EE6AAFE0E76AE9;// 0x09C0(0x00E0)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_CA82028745AC94C165DC46A4CFC6E9F0;  // 0x0AA0(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B7075D0B4B98D9F44FBDBC825411A3BC;// 0x0B08(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9FD73ADB4EFCC6011C8AE2A79EF62FF6;// 0x0BE8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4ABC01B14888CE159215409155EC5C75;// 0x0C38(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A2C543E64FED2C00BD9155BC08774B44;// 0x0C88(0x0050)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E77936AD46C93BB7F257B3854B2434CE;// 0x0CD8(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F7DA6C2246858DEA1C9BDEB813C0C3D1;// 0x0D20(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9FB0D49B459870A448433FAF997E1D07;// 0x0D68(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9EFB0AFA474F85399F921B93FF5A98F4;// 0x0E48(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_146D05A044B11F478977D6BACF041763;// 0x0E98(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E8DEC3B04135D37B3F104AA7D4026406;// 0x0F68(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_281CC9124661ACB44809C2B0D2B1D56D;// 0x0FB8(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F15186F940D416D2FF0FC7A94367E54F;// 0x1008(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_097067E8489CB6495B2BACB48B6CE5B8;// 0x10D8(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E6F6BE674903FF209DDCAE9D7A3B133D;// 0x1128(0x00E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_01B3B6094AB4B9DF349D8FB699D7E8B8;// 0x1208(0x0048)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_B0B10A0C473B7DF27D75AD8F131D92F5;    // 0x1250(0x0240)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_A25ED02C40574FBD07485A8EDF7DAABF;    // 0x1490(0x0240)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C995C5984A1BD329C90CEE9D9CA9A71A;// 0x16D0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AA72536C4E936B4C295185B14D2DE6A2;// 0x1718(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_75ECB2A54119C4902CEA6EB4A98AB190;// 0x1768(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6E40D96F4FF1FABBA3D5C893DA0FF173;// 0x18C8(0x0160)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_53D2C3DF4D8BC4A021010A804FDAA926;// 0x1A28(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_09A482254DA4FED67620BDBA9AF2C14F;// 0x1A70(0x0160)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4234763F4A935F862F40E899AA06FC6F;// 0x1BD0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5F237D5E45F81E003BD2BCBB0485B016;// 0x1C18(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DAA02AFC4DC1197CB2C0178C65D47C4E;// 0x1CF8(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9F462FFA40841F950314118AA66BE2B9;// 0x1DC8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C56E23C54421CFD5B7F8BA874C508879;// 0x1E18(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_71DA2AD24558857972C4D2A416FED0DB;// 0x1E68(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_A7266A3E498F3EF9A0308BBBBB2EB246;// 0x1F48(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B2E5367A4E8BFB8D277EF2921979BCD1;      // 0x2028(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6A9CB441408384566F8A1BA15BB0AF0C;// 0x2098(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_ECA3A8B1427A02A3B8490388FAB74840;// 0x20E8(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0BE400954F2DD819D23E14A25E18FFB6;// 0x2138(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6A09F2F842C094BFD2F265B33B08C2D2;// 0x2208(0x0050)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_A0790ABD46CF5EF83E8276994FD25900;  // 0x2258(0x0150)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_168DE9DB4F4B37B13E4E8980A491D567;  // 0x23A8(0x0150)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_747624DC4F3D6FD2238DDEAC17825939;  // 0x24F8(0x0150)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_ED22115C47681788AD217693F1437457;  // 0x2648(0x0150)
	unsigned char                                      UnknownData00[0x8];                                       // 0x2798(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_2427342E4DE62DA9681D10899FA0C469; // 0x27A0(0x0270)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_3A969FD84F89E2B587387FAE2BB3883B; // 0x2A10(0x0270)
	struct FAnimNode_S3LookAt                          AnimGraphNode_S3LookAt_34BE70864AAE1E681F3699AD76E8D06D;  // 0x2C80(0x0180)
	struct FAnimNode_S3LookAt                          AnimGraphNode_S3LookAt_99EADCD44C38324A201E7AA7D7E49D7B;  // 0x2E00(0x0180)
	struct FAnimNode_S3LookAt                          AnimGraphNode_S3LookAt_5AEFF4E648C09169E60A47AE69852A08;  // 0x2F80(0x0180)
	struct FAnimNode_S3LookAt                          AnimGraphNode_S3LookAt_83CCFA454C996E72BFBB599FD2A0AA25;  // 0x3100(0x0180)
	struct FAnimNode_S3LookAt                          AnimGraphNode_S3LookAt_872AD054496382ED20CEBEAA0C3ABB35;  // 0x3280(0x0180)
	struct FAnimNode_S3LookAt                          AnimGraphNode_S3LookAt_17A9CDE541DED1AD6C3E81964EA9FF7B;  // 0x3400(0x0180)
	struct FAnimNode_S3LookAt                          AnimGraphNode_S3LookAt_5BE236A94C87625E7BBB518DE62094E8;  // 0x3580(0x0180)
	bool                                               bShouldInitFaceFlag;                                      // 0x3700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x3701(0x0007) MISSED OFFSET
	class ABP_S3Character_C*                           CharacterBase;                                            // 0x3708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TalkReactionBlendWeight;                                  // 0x3710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SubABP_CharacterBase.SubABP_CharacterBase_C");
		return ptr;
	}


	bool IsUseFluctuationEmotion();
	void DebugPlayEmotion(ECharacterEmotion EmotionId);
	void OverlapEyeCloseBlendMap(bool* Overlap);
	void InitAnimation();
	void InitManger(bool* Success);
	void DebugPlayClipper(EMouseShape ClipperId, float Volume);
	void InitFaceMotages(bool* Succsess);
	void PlayEyelidMontage(bool* dummy);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_TwoBoneIK_2427342E4DE62DA9681D10899FA0C469();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_BlendListByBool_0BE400954F2DD819D23E14A25E18FFB6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_TwoBoneIK_3A969FD84F89E2B587387FAE2BB3883B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_S3LookAt_34BE70864AAE1E681F3699AD76E8D06D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_S3LookAt_5BE236A94C87625E7BBB518DE62094E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_LayeredBoneBlend_A7266A3E498F3EF9A0308BBBBB2EB246();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_BlendListByBool_DAA02AFC4DC1197CB2C0178C65D47C4E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_ModifyBone_09A482254DA4FED67620BDBA9AF2C14F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_S3LookAt_17A9CDE541DED1AD6C3E81964EA9FF7B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_ModifyBone_6E40D96F4FF1FABBA3D5C893DA0FF173();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_ModifyBone_75ECB2A54119C4902CEA6EB4A98AB190();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_S3LookAt_872AD054496382ED20CEBEAA0C3ABB35();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_LookAt_A25ED02C40574FBD07485A8EDF7DAABF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_LookAt_B0B10A0C473B7DF27D75AD8F131D92F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_BlendListByBool_F15186F940D416D2FF0FC7A94367E54F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_BlendListByBool_146D05A044B11F478977D6BACF041763();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_S3LookAt_83CCFA454C996E72BFBB599FD2A0AA25();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_BlendListByBool_660409A34D1A9E226405539E6C696495();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_S3LookAt_5AEFF4E648C09169E60A47AE69852A08();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_LayeredBoneBlend_163784F549F81C3689E764B16BB5F07E();
	void PlayGreeting(int Level);
	void BlueprintInitializeAnimation();
	void RetryFaceAnimation(class AS3Character* LoadedCharacter);
	void CalcEmotion();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SubABP_CharacterBase_AnimGraphNode_S3LookAt_99EADCD44C38324A201E7AA7D7E49D7B();
	void CalcLookAt();
	void ExecuteUbergraph_SubABP_CharacterBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
