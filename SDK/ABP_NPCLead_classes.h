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

// AnimBlueprintGeneratedClass ABP_NPCLead.ABP_NPCLead_C
// 0x11F0 (0x1550 - 0x0360)
class UABP_NPCLead_C : public US3AnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BC729DF5416ABB38029A9C82E9CD1F8E;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7015382946DC31526C0D56A3F4CB7B5B;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C421866423F2E27F085E59865D34829;// 0x03F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F7E6BCC947E20D68DA3085B4B6F7FC89;// 0x0440(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73054C4A4E7F2DA569FD679263F8A1C2;// 0x0488(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3AF8C8374B4EB99F7C57749BF5AEF8DC;// 0x04D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B914D2154EC38D886265E9B3F485B0C2;// 0x0518(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_5DE1DD0449B521A37D670B8A02222F41;// 0x0560(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0441DA1844E97E74CA3D74BBB3D25C67;// 0x0688(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_A592CB844E19A4401DA30197274106DC;// 0x06D0(0x0090)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_835FDA9D43A1A580B06C428D811BD6B0;// 0x0760(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FA5B5D0F4E7C2829541316858C329F85;// 0x0810(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_991B702F4919E49F9B1BCD974C8B22C7;// 0x08E0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2AA3CAD44CEF9FD792FDEA9A24E82213;// 0x0928(0x0128)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_160C6C01432065E1CDE91C92999C9FE3;// 0x0A50(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1B16CCCE412023F70719398FEA5FC953;// 0x0A98(0x0048)
	struct FAnimNode_S3SpeedWarping                    AnimGraphNode_S3SpeedWarping_E51AB6FA453F77DC87EAC084C52FB8E7;// 0x0AE0(0x0180)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2E740BCA4C3F67251A3F8A9621EBE036;// 0x0C60(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_310C4A52462EE1B6B01CAF83900F2E1A;// 0x0CA8(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D077DBD34E6B781B6A4FF3AAD01072C0;// 0x0D88(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B851CCD04EE8B3789BD8E4B473CF4109;// 0x0E68(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_82C5EBF245B37C564AF03E8E0FC723E3;      // 0x0EB8(0x0070)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_CAE3D8AB425B8AEB2F0226B357A80527;// 0x0F28(0x00C8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D727C2BA49A50DB3AA78958AB724DA30;// 0x0FF0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_17A3A10E4EA02D0C0C2A5E8035ED0CE0;// 0x1038(0x0048)
	struct FAnimNode_S3TwoBoneIK                       AnimGraphNode_S3TwoBoneIK_8E1E821842B8E73ED279E58A2706232D;// 0x1080(0x01B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_02B2CD0E4CB18DF60570F9A30B04C09A;// 0x1230(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_13AC89A14707D07614C31EA08084C908;// 0x1310(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AE1FE1A34C2E4CF22E5184848B5A89D7;// 0x1360(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_C22B52BC477C62526DC76BB0CCE767F5;// 0x13B0(0x0120)
	float                                              RateKI;                                                   // 0x14D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RateDO;                                                   // 0x14D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RateAI;                                                   // 0x14D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RateRAKU;                                                 // 0x14DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<bool>                                       IsEyeRotateEmotionFlags;                                  // 0x14E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TurnAroundAngle;                                          // 0x14F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TurnAroundAnimStep;                                       // 0x14F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityLength;                                           // 0x14F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ForwardDirection;                                         // 0x14FC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              StrideScale;                                              // 0x1508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedWarpingAlpha;                                        // 0x150C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkMotionMinSpeed;                                       // 0x1510(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinStrideRatio;                                           // 0x1514(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTalking;                                                // 0x1518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1519(0x0007) MISSED OFFSET
	class ABP_NPC_Lead_C*                              LeadCharacter;                                            // 0x1520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBP_S3AnimNotifyComponent_C*                 NotifyComponent;                                          // 0x1528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              LegGroundIKAlpha;                                         // 0x1530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftLegLandingWeight;                                     // 0x1534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RightLegLandingWeight;                                    // 0x1538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnablelegIK;                                             // 0x153C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeleportReset;                                           // 0x153D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x153E(0x0002) MISSED OFFSET
	float                                              SlopeAngle;                                               // 0x1540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InIdle;                                                   // 0x1544(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x1545(0x0003) MISSED OFFSET
	class UBlendSpaceBase*                             BS_TalkTurn;                                              // 0x1548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_NPCLead.ABP_NPCLead_C");
		return ptr;
	}


	bool STATIC_IsReadyTalk();
	void STATIC_UpdateRootMotionMode();
	void STATIC_GetEyeRotateEmotionRate(float* EyeRotateEmotionRate);
	void STATIC_InitEyeRotateEmotion();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_BlendListByBool_FA5B5D0F4E7C2829541316858C329F85();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_3AF8C8374B4EB99F7C57749BF5AEF8DC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_BlendSpacePlayer_2AA3CAD44CEF9FD792FDEA9A24E82213();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_S3SpeedWarping_E51AB6FA453F77DC87EAC084C52FB8E7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_73054C4A4E7F2DA569FD679263F8A1C2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_S3TwoBoneIK_8E1E821842B8E73ED279E58A2706232D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TwoWayBlend_C22B52BC477C62526DC76BB0CCE767F5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_F7E6BCC947E20D68DA3085B4B6F7FC89();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_7C421866423F2E27F085E59865D34829();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_BlendSpacePlayer_5DE1DD0449B521A37D670B8A02222F41();
	void AnimNotify_GroundingFootL();
	void AnimNotify_GroundingFootR();
	void NotifyFootprint(TEnumAsByte<ENEFootType> Type);
	void AnimNotify_StopStartLeft();
	void AnimNotify_StopStartRight();
	void AnimNotify_StateTurnAroundLeave();
	void AnimNotify_StateTurnAroundEnter();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_7015382946DC31526C0D56A3F4CB7B5B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPCLead_AnimGraphNode_TransitionResult_B914D2154EC38D886265E9B3F485B0C2();
	void BlueprintPostEvaluateAnimation();
	void AnimNotify_StatIdleFullyBlended();
	void AnimNotify_StateIdleEnd();
	void AnimNotify_StateIdleStart();
	void STATIC_ExecuteUbergraph_ABP_NPCLead(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
