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

// AnimBlueprintGeneratedClass ABP_S3_ACCharacter.ABP_S3_ACCharacter_C
// 0x5522 (0x5FC2 - 0x0AA0)
class UABP_S3_ACCharacter_C : public US3NPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_52210BC14664AA63D88EBC840928A4C9;// 0x0AA8(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7FA1CD85402742DED78706A240780226;// 0x0AF0(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B38(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_DE91B1CB4C6FF3A350402A85D49012E9; // 0x0B40(0x0270)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_EF5F7C0349BB05A3F8A141AFCD07CCFD; // 0x0DB0(0x0270)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B1AF5D2D4BE882D50B33DEBBFDAE9540;// 0x1020(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2DD3F2AD4ABEDA317983A4AE85825B61;// 0x1180(0x0160)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7C26BAC84C2BE914E05636A67B51DA92;// 0x12E0(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F73D4F0642580567C6EE44B017447C39;// 0x13C0(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6B3DC3054386BAAF8FE773A27AEFC850;      // 0x14A0(0x0070)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_83E31F3844927C45DD716FA22F27D8F6;// 0x1510(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_83B7655F442A71740F5986A17F894304;      // 0x15F0(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_41CD11334BC7E8ED65D32EA009FBA13B;// 0x1660(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7E8DCA884BF2DEFD886F9C9210E1C829;// 0x16B0(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_038493204534D41A0EEC90BAFF16F221;// 0x1790(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1F54A9B14CE06ECEF71D8AB7720D381A;// 0x1870(0x0050)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_3BA4AF0F487137065C341AA002A56F06;// 0x18C0(0x00C8)
	struct FAnimNode_Root                              AnimGraphNode_Root_7622DC8A4B9B838CF3E2AAB100EB3CCC;      // 0x1988(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B3231F284E6934900B77B4930DAF3B85;// 0x19D0(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E3EDA4EF49725C0F16950C91F18DEC3E;// 0x1AB0(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F1AB6B6142ABFEFC195FF59DBF6CDBD3;// 0x1B60(0x0048)
	unsigned char                                      UnknownData01[0x8];                                       // 0x1BA8(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_B0B79DDC4867771D0D899D857D648A8C; // 0x1BB0(0x0270)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_5B7B80DF4BF3542313FBCDB51E9CAAC4; // 0x1E20(0x0270)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D6787A424C070A308B21BD886DF24D1C;// 0x2090(0x00E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1A3399E741A086DF2B5A18BCE5992B3E;// 0x2170(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0709743E4069FD31A85B6EA340D52209;// 0x21B8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5E80273F4C35850011D571BC5C587FC2;// 0x2268(0x00D0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_79900B0A4CC1B2996E726385A5A33DC4;// 0x2338(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_47A39AB5416879C5CFF64D9B29705A3D;// 0x2418(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A57DE77F4EF4A09F6882B3B4A737A139;// 0x24C8(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_418B0A9D4D975D1B1B216EA848D6EF8B;// 0x2578(0x00D0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_525DAD9647F3292DA2DDAE913F9634C8;// 0x2648(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4FD83E2B4EF0F83FC43E969F3029FD9B;// 0x2728(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F6D798F74BD57435CC50D18236A8E825;// 0x27F8(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D9EA50244486763513B8C28FECB7AC3C;// 0x2920(0x00E0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8C46C8C648EA32D72FEE9481182A3584;// 0x2A00(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7A1938CC400AF168CAB4C1A4D510BD8C;// 0x2A48(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6D28B0F0448484EC6C8BCF8745FA32F8;// 0x2A90(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4B2286A041FB3ED3FCAB2B9341C0E848;// 0x2AD8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BD5F28084E410326CA2FA0B20B93A18E;// 0x2B20(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9EA9DC68496E3E6FAF06B3A39E769E85;// 0x2B68(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_244BAF7A4B7A42C2F56BDD889B00B7A5;// 0x2C18(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F1D166A64E9615815124BAA82A4E04F6;// 0x2C60(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5076EBAA4C8060A041DD279F3057DA21;// 0x2D10(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_0BC3A9EC45AAB909C80F31B44D2C880C;// 0x2D58(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_729E616C4A2ECB1BFD6458BEF698B57B;// 0x2E38(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C1C22C0342DF4B2F973C0991173157EB;// 0x2E80(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_413B6C274E6422B6DADEF58497DF70C0;// 0x2F60(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F8E08B7F467BB3FF2F1D15A7ACC31A30;// 0x3040(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FB28796846AE44DA8BC91BAB1BEB95A9;// 0x3090(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4DD3FA7A4385F0774E0A1280F4875095;// 0x3170(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AEE1ABE94080C7FD7ACDAE9F834E6E14;// 0x3250(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F7B0A9334E324FC0FEF5C3AF0AA91255;// 0x32A0(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D780519044902033B925A1AF6040D1E9;// 0x32F0(0x0128)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9E8A14324D525B05CA679592C14D5FC0;// 0x3418(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D4D441534CAE79E94FE9A091F8AA0F46;// 0x34C8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E54F0A8447BF0C5DE4D1A983D49F8A03;// 0x3598(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AE27EFFA4C6E4E51460A1EA17DB7388B;// 0x3668(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F68111014FC5EAD9383907BE451161CF;// 0x3738(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1844A3E24300F4FFEEC255832D0CC0EC;// 0x37E8(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1DFF154D40EA788EEF7385B45B15D85F;// 0x38B8(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FB8BA695436655B06EBA709DBE1FB952;// 0x3988(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6169B54C4DD021BA9DC22D9F89EDAA30;// 0x3AB0(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_594328A0494A192C29296CB1C2B7C3C1;// 0x3BD8(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_060034EC4B8CD885AA0CC8B3CB646651;// 0x3D00(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DFAF7E7B48428CBCCAFD28983C5D3C4C;// 0x3E28(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_DA7381A841467AC15D45D0A3EBE0A427;// 0x3EF8(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F1EC4C2D43668D8B73CA489F63F5F743;// 0x4020(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4418E22543E4B9C65AB7C58BA9FE43DD;// 0x40F0(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5F1A4754403BF6959CD4FDA792165DCE;// 0x41C0(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_3BDE2EDA41E75B81671A4985599EC936;// 0x42E8(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_32D301ED4CE1BD2D65ECE9953E02349B;// 0x4410(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_356B409D4A369AD929D36A986C0C1216;// 0x44F0(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_58E93D704EE5C5FD3007A8B35DF19550;// 0x45C0(0x00D0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2ACAE34F457DCAE0E7DF1A8A0ECA79DD;// 0x4690(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_52D3C983486F5BF9F81137B59525821C;// 0x4770(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EF7D1BDB43038074B13BCDA9E6AE4EE0;// 0x47C0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_77C333574C1086A9BFB57FB90778DF03;// 0x4810(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_918AFC0A46FEA7767B06E2800E78A64D;// 0x48E0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C8AC37CF4AC4236EBF1842983540AC21;// 0x4930(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CC345D814C05D5DEC964D8907BAA6BFC;// 0x4980(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_903CFB1842A92D44305D6A938F41477A;// 0x49D0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5AE71F36450E92E614AA70A1E6BE0519;// 0x4A20(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9C5A3D5F4F8321B58D768695353CB78C;// 0x4AF0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9BE4640240A8158AE30DF2BE98ED6A17;// 0x4B40(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0680E5034BB964CA77820AB4E4E760AC;// 0x4C10(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9211CF5347245E63505F90BCFA5A1FFA;// 0x4C60(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B095B0A049028FAA77CC1AAE4CD27C4E;// 0x4D30(0x0128)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B61307A74B3AE544B0E82DB347CEA015;// 0x4E58(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4CE17CEB44251E0E00CAAFAC549704E7;// 0x4F38(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8C36D2CE439F2B6689978E8A7DC6FA31;// 0x4F88(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CB95F9094739B009A3C66FBA30471F31;// 0x4FD8(0x0160)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2C5DAF2D453F2C6B43B9C89DB819C4B3;// 0x5138(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_043A6256457A7CD0DB9BC8BA70202498;// 0x5180(0x00D0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_57634B234EE9970039402B9E2EAE18FB;// 0x5250(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1B00BA3F44A381CB0AA8318B051E1D59;// 0x5298(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5547FD8A4C2A329A224CB7AE59007C76;// 0x5378(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AD1560484F880DC9CBE30E95A481E773;// 0x53C8(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_613241A345B92B8202FED7B3D19799E5;// 0x5418(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B50902A74F84EE1299C7BC827E63B123;// 0x54E8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_591EF92B4C2CEAC155EDD8AEB152478D;// 0x5538(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5FF269CE4FE111C407DC82AAA7B9AD5A;// 0x5588(0x0160)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_15F71C6948A5B5271132DBA9C73943D0;// 0x56E8(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F09A1AA74E732BD699B48D9AE30255FA;// 0x5730(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_25A040624373212E9146A8A14C0AB3C5;// 0x5810(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_076800874AE8A307DD7B76AAB9AF9E05;// 0x5970(0x0160)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A69B2A5543F9C8F71F228D82D3C3C77B;// 0x5AD0(0x00D0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_00995B604B8CC630DCFFC189EC7370D0;// 0x5BA0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C5F78DA54C88194643A4229AEF9F7D9C;// 0x5BE8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A09D8007444B27115A0317B68BB25C10;// 0x5C38(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_57F79D3C464FC478A5C3988C49E2C021;// 0x5C88(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_733F07F7489F702C70EBF586685C04C6;// 0x5CD8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_06AB11D7478D87F7D2E7CDBBD55A4C05;// 0x5E38(0x0160)
	bool                                               UseFootPlanting;                                          // 0x5F98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x5F99(0x0007) MISSED OFFSET
	TArray<struct FST_NPC_AttachInfo>                  AttachInfoArray;                                          // 0x5FA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_S3_ACCharacter_C*                        ACCharacter;                                              // 0x5FB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CharaName;                                                // 0x5FB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseJointAnim;                                             // 0x5FC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseTaskMotion;                                            // 0x5FC1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_S3_ACCharacter.ABP_S3_ACCharacter_C");
		return ptr;
	}


	void SetCharaName(const struct FName& NewName);
	bool IsReadyTalk();
	void AttachAnimObject(ENPCAttachFrom From, class AActor* Actor, class USkeletalMeshComponent* SkMeshComp, const struct FName& SocketName, bool IsSpawn);
	void Attach_DefinitionFromHaveItem(struct FHaveItemAttachSetting* HaveItem);
	void DetachAll();
	void GetAttachInfo(class UBP_AnimNotify_Attach_C* Notify, struct FST_NPC_AttachInfo* Info);
	void AttachStaticObject(ENPCAttachFrom From, class AActor* Actor, class UStaticMeshComponent* MeshComp, const struct FName& SocketName, bool IsSpwan);
	void Attach(struct FNPCAttachSetting* Setting);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_CB95F9094739B009A3C66FBA30471F31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_043A6256457A7CD0DB9BC8BA70202498();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_613241A345B92B8202FED7B3D19799E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_5FF269CE4FE111C407DC82AAA7B9AD5A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_25A040624373212E9146A8A14C0AB3C5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_076800874AE8A307DD7B76AAB9AF9E05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_A69B2A5543F9C8F71F228D82D3C3C77B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_733F07F7489F702C70EBF586685C04C6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_06AB11D7478D87F7D2E7CDBBD55A4C05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_4418E22543E4B9C65AB7C58BA9FE43DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_F1EC4C2D43668D8B73CA489F63F5F743();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_DA7381A841467AC15D45D0A3EBE0A427();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_DFAF7E7B48428CBCCAFD28983C5D3C4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_060034EC4B8CD885AA0CC8B3CB646651();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_594328A0494A192C29296CB1C2B7C3C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_6169B54C4DD021BA9DC22D9F89EDAA30();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_FB8BA695436655B06EBA709DBE1FB952();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_B095B0A049028FAA77CC1AAE4CD27C4E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_1DFF154D40EA788EEF7385B45B15D85F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_1844A3E24300F4FFEEC255832D0CC0EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_9211CF5347245E63505F90BCFA5A1FFA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_AE27EFFA4C6E4E51460A1EA17DB7388B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_E54F0A8447BF0C5DE4D1A983D49F8A03();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_D4D441534CAE79E94FE9A091F8AA0F46();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_D780519044902033B925A1AF6040D1E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_SequencePlayer_F1D166A64E9615815124BAA82A4E04F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_TransitionResult_BD5F28084E410326CA2FA0B20B93A18E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_TransitionResult_4B2286A041FB3ED3FCAB2B9341C0E848();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_TransitionResult_7A1938CC400AF168CAB4C1A4D510BD8C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_F6D798F74BD57435CC50D18236A8E825();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_4FD83E2B4EF0F83FC43E969F3029FD9B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_418B0A9D4D975D1B1B216EA848D6EF8B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_9BE4640240A8158AE30DF2BE98ED6A17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_5E80273F4C35850011D571BC5C587FC2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_TwoBoneIK_5B7B80DF4BF3542313FBCDB51E9CAAC4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_TwoBoneIK_B0B79DDC4867771D0D899D857D648A8C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_2DD3F2AD4ABEDA317983A4AE85825B61();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_ModifyBone_B1AF5D2D4BE882D50B33DEBBFDAE9540();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_TwoBoneIK_EF5F7C0349BB05A3F8A141AFCD07CCFD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_TwoBoneIK_DE91B1CB4C6FF3A350402A85D49012E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_5AE71F36450E92E614AA70A1E6BE0519();
	void AnimNotify_EnterAdjusting();
	void AnimNotify_EnterAnimating();
	void AnimNotify_EnterIdle();
	void AnimNotify_EnterIdleToWalking();
	void AnimNotify_EnterOpenDoor();
	void AnimNotify_EnterRunning();
	void AnimNotify_EnterSitting();
	void AnimNotify_EnterSittingAnimating();
	void AnimNotify_EnterSittingToWalking();
	void AnimNotify_EnterStairs();
	void AnimNotify_EnterTalking();
	void AnimNotify_EnterTurningInPlace();
	void AnimNotify_EnterWalking();
	void AnimNotify_EnterWalkingInterruption();
	void AnimNotify_EnterWalkingToIdle();
	void AnimNotify_EnterWalkingToIdleOnTheWay();
	void AnimNotify_EnterWalkingToSit();
	void AnimNotify_EnterWalkingTurn();
	void AnimNotify_EnterSittingTurn();
	void AnimNotify_RightFootDominant();
	void AnimNotify_LeftFootDominant();
	void AnimNotify_AnimationAComplete();
	void AnimNotify_AnimationBComplete();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_77C333574C1086A9BFB57FB90778DF03();
	void AnimNotify_EndAnimating();
	void AnimNotify_AdjustComplete();
	void AnimNotify_DisableFootIK();
	void AnimNotify_EnableFootIK();
	void AnimNotify_LeftStepBack();
	void AnimNotify_EnableBreathIK();
	void AnimNotify_DisableBreathIK();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_58E93D704EE5C5FD3007A8B35DF19550();
	void AnimNotify_StartFingerPointing();
	void AnimNotify_EndFingerPointing();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendListByBool_356B409D4A369AD929D36A986C0C1216();
	void AnimNotify_BeginSitting();
	void AnimNotify_BeginTransitionSittingToWalking();
	void AnimNotify_GroundingFootL();
	void AnimNotify_GroundingFootR();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_3BDE2EDA41E75B81671A4985599EC936();
	void BlueprintInitializeAnimation();
	void SetUseHandMotion(bool bUse);
	void Attach_HaveItem(const struct FHaveItemAttachSetting& HaveItemSetting);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_ACCharacter_AnimGraphNode_BlendSpacePlayer_5F1A4754403BF6959CD4FDA792165DCE();
	void ExecuteUbergraph_ABP_S3_ACCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
