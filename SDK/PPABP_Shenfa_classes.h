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

// AnimBlueprintGeneratedClass PPABP_Shenfa.PPABP_Shenfa_C
// 0x8E10 (0x91A0 - 0x0390)
class UPPABP_Shenfa_C : public US3PostProcessAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D5658C7F45B4E7A0C1729CBC7A06B6C8;// 0x0398(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E18CBE5948626CB418A9B096BCE52963;// 0x03E0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3880A99C4ED4A1862FEB8192BF534DA2;// 0x0760(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A258FA264B3BD596B7FCE191633176C6;// 0x0AE0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_289B3C3D4061A5216BA93DBEB07AD2A1;// 0x0E60(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_49F799954549300F2F0DA49730683D51;// 0x11E0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9CDDDD3346016D31E94486934CAAA3A8;// 0x1560(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F07C98244F6ED025C9D323A326911C45;// 0x18E0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_63DD2C07423C3D0AADB406B0B0B3F7B1;// 0x1C60(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BF54286B44C70FC50E695FAA27FC940F;// 0x1FE0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5AEBEB08498C7EA81BCF60A151AAF3B1;// 0x2360(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6551EADA4EA7558A901811A59A66B59B;// 0x26E0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1B734A344C96F8445F9908857B1A9545;// 0x2A60(0x0380)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D15A19364A7AFC27C96072A59B25B731;// 0x2DE0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_57E216FD4189D9282BDF90AF3ED023DC;// 0x2EC0(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_362C9E204595DDCB7AA690802F0EE5D0;// 0x2F10(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E08F9B994D97718A7F0FFC858ECDD7F1;// 0x2F58(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A50B7005467D0BB2F933E1930CB25BBE;// 0x3028(0x0050)
	unsigned char                                      UnknownData00[0x8];                                       // 0x3078(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_C7BBE3A942AD5A8E4242A782865BA377; // 0x3080(0x05A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A3C736AF4E22C567E515C1BC211E7BC9;// 0x3620(0x00D0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_093DDACE44258E110577D09990EF21B0;// 0x36F0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_383784454AB79207059EC0B1F536935D;// 0x3738(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BC07665541D134314B3854BBC03A1EB4;// 0x3788(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0C5FEF4C4A65791D986F8A9D7C5FA19D;// 0x37D0(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_ED3224874FFB105B6C1E0AA128044A5E;// 0x38A0(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1F819FAC46CEE7F78F87918B9F6E270F;// 0x38F0(0x00E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_945F344C4D126E6361B37FB05D8D16AF;// 0x39D0(0x0048)
	unsigned char                                      UnknownData01[0x8];                                       // 0x3A18(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6D5D4C174E5FBC5E1E3CB1A03F9B85B4;// 0x3A20(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5F3F5A5F481E4B0143AECB9B61FBB401;// 0x3DA0(0x0380)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F91D4CC44AEDA7F5602E07966164710E;// 0x4120(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1D046DBD4B342CCD22BF6BA46873B339;// 0x4170(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_370069014A6CC38356391A8E183C13C1;// 0x4250(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_61874DDF4B4C2461900AB0B4707F7F71;// 0x42A0(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_840C99B341BAB1A8DEB2008A84F326AA;// 0x4370(0x0050)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A49E9A10415255801D38E285F902532E;// 0x43C0(0x0380)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_740D2EAF4F1C927F5103068CBA2CA81C;// 0x4740(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4A2FBFFD443FBBAF3CFBCEB0F63FF372;// 0x4788(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DC3E32D3490DD25B6608B1B9290B0A20;// 0x47D0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E9CBB9E74015B97665457996C7CFC3E9;// 0x4B50(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3CC86CD849A503B99723A1B27257872C;// 0x4ED0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F0D854B24B3AC3C230FCBEA11CEC116D;// 0x5250(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BB847E07431C63F313E517B072494608;// 0x55D0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E3EB017E4EF282B05E69F2AB94BB63D7;// 0x5950(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8F4D27EC4AAF6979421654854DCA680B;// 0x5CD0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F6A614A94412372794FA469B5D47D575;// 0x6050(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2F54512F4E7969C94A58549959F565D7;// 0x63D0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_CE56836D4D8D731F3F2264B504FB11F0;// 0x6750(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_16E5C33A4C72500790AEFA981A9FDEEC;// 0x6AD0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_137010DA47B7BBD3B9642195873FC5EB;// 0x6E50(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4C0EDD2442F469AFD8D2BEB80B31F913;// 0x71D0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8DDABD804DE5A219601DB48A02E06853;// 0x7550(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0014920D40ED2211051EC79914DC76EB;// 0x78D0(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_136A2D9F462C05059206588678931D38;// 0x7C50(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_52A2C03148D49DD285FC259F630C76EC;// 0x7FD0(0x0380)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C3E03EDD47D7A8A7143B1CA454DB8B75;// 0x8350(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4224F0974AA0F17B4DCBF3BF4310D6BC;// 0x84B0(0x0160)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A68DFCEF45A1E2BD09D6CBB5C8C234A8;// 0x8610(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9BC360C84C87CE7066DCE8AB76A0B6DD;// 0x8658(0x00D0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B0A6809A4F1526826A7299B9D53E4821;// 0x8728(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4983B90D4582485C58EF16974AB2D563;// 0x8770(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4FDED1E542ACBDAFD82DFBB48154F39A;// 0x87B8(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_22A69F1345AC4A82BB1F8FB4E17EC447;// 0x8800(0x0380)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_270242EA4F0232DEC75946B623A131AA;// 0x8B80(0x0380)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1A371F644FBBB429CA76AE936DA238C7;// 0x8F00(0x0050)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6B5CA8934856D1E412755DAB5A34B2D4;// 0x8F50(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DB2835594F5031A5225A3E8DFA635DD6;// 0x8F98(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E95A821443EFBBC57B512CAF04A2F029;// 0x8FE8(0x00D0)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_2C0341DE4E7BB68B01E605A4CB8015CC;  // 0x90B8(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_Root_D3AC748F4389D87E6B368F8362B81A02;      // 0x9120(0x0048)
	bool                                               USE_ANIM_DYNAMICS;                                        // 0x9168(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x9169(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x9170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     ORIGINAL_LOCATION_EARING_L_00;                            // 0x9178(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ORIGINAL_LOCATION_EARING_R_00;                            // 0x9184(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	class UABP_ScheduleNPC_C*                          ABP_NPC;                                                  // 0x9190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_NPC_Lead_C*                              NPC_Lead;                                                 // 0x9198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass PPABP_Shenfa.PPABP_Shenfa_C");
		return ptr;
	}


	bool IsNeedSupportHem();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_BlendListByBool_9BC360C84C87CE7066DCE8AB76A0B6DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_ModifyBone_4224F0974AA0F17B4DCBF3BF4310D6BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_ModifyBone_C3E03EDD47D7A8A7143B1CA454DB8B75();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_AnimDynamics_52A2C03148D49DD285FC259F630C76EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_AnimDynamics_136A2D9F462C05059206588678931D38();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_AnimDynamics_0014920D40ED2211051EC79914DC76EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_AnimDynamics_8DDABD804DE5A219601DB48A02E06853();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_AnimDynamics_4C0EDD2442F469AFD8D2BEB80B31F913();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_AnimDynamics_137010DA47B7BBD3B9642195873FC5EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_AnimDynamics_16E5C33A4C72500790AEFA981A9FDEEC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_AnimDynamics_CE56836D4D8D731F3F2264B504FB11F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_AnimDynamics_2F54512F4E7969C94A58549959F565D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_AnimDynamics_F6A614A94412372794FA469B5D47D575();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_AnimDynamics_8F4D27EC4AAF6979421654854DCA680B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_AnimDynamics_E3EB017E4EF282B05E69F2AB94BB63D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_AnimDynamics_BB847E07431C63F313E517B072494608();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_AnimDynamics_F0D854B24B3AC3C230FCBEA11CEC116D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_AnimDynamics_3CC86CD849A503B99723A1B27257872C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_AnimDynamics_E9CBB9E74015B97665457996C7CFC3E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_AnimDynamics_DC3E32D3490DD25B6608B1B9290B0A20();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_AnimDynamics_A49E9A10415255801D38E285F902532E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_BlendListByBool_61874DDF4B4C2461900AB0B4707F7F71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_BlendListByBool_E95A821443EFBBC57B512CAF04A2F029();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_BlendListByBool_0C5FEF4C4A65791D986F8A9D7C5FA19D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_BlendListByBool_A3C736AF4E22C567E515C1BC211E7BC9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_RigidBody_C7BBE3A942AD5A8E4242A782865BA377();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_PPABP_Shenfa_AnimGraphNode_BlendListByBool_E08F9B994D97718A7F0FFC858ECDD7F1();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_PPABP_Shenfa(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
