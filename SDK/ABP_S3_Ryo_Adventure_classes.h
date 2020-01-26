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

// AnimBlueprintGeneratedClass ABP_S3_Ryo_Adventure.ABP_S3_Ryo_Adventure_C
// 0x20D1 (0x2431 - 0x0360)
class UABP_S3_Ryo_Adventure_C : public US3AnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D71672454FFE44D223396BB86A063795;      // 0x0368(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4EDA23474A9AD7DFCD432291D567DA7B;// 0x03B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34D2F7614094E987B6C89CB46987B0F1;// 0x03F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9D9706E14BC3C593F586E69BF949A3D3;// 0x0440(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3FBA78674A5BD3C247312B9647B92959;// 0x0488(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73FB11B64A3DD637EBBE559FE99F2133;// 0x04D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F33B7EC144E6002D23C772BB56DD1171;// 0x0518(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0C2862DD4A3FEE0248F7B38E8F95DB83;// 0x0560(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_01C2E928454C7B4060B2609B4E81306A;// 0x05A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2D942E174AC6D08E92AA9C9FA46219AF;// 0x05F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7D476FBB43778869687031AE71B08BB8;// 0x0638(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_197664294DE7604637833796D9EE4242;// 0x0680(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_4273B96548EDA421C16249BF2C2A3BC3;// 0x06C8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BF94566F4050C7003FA0DD8C9B784B6F;// 0x0738(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_36E05A214D59AFD93961A9977F0BAB26;// 0x0780(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F2D82D9A4F50BF6994F02CAC0E53EB45;// 0x0830(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_8C924C0F41DF00E02A236C9497DCA06B;// 0x0878(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6183B7E84A07479DFA37F7A46590F768;// 0x08E8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_626D9A5543ACC2C1B9FEBFA9D4D37A92;// 0x09C8(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C48322294782CE7EEA29A4869BF467CE;// 0x0AF0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_885E38964713662F66EFCBA624C7C8D5;// 0x0B38(0x00B0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_80A3B02B4A386BA3104DDC9CBFF11C0E;// 0x0BE8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_32A9BCC6436ACB445B9F409D77EFC84C;// 0x0CB8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_06E77F7C4A3970E276271E883510589C;// 0x0D68(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FF7E74B740F3CD038AF7CEA8F07391CD;// 0x0DB0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DBE3A8FE41CB475C371968AC8D6358DD;// 0x0E60(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_660131284567C6C7DD9375BF389565B1;// 0x0EA8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4DA15AC440FCABA9675BECBA0046284D;// 0x0F58(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_9E61388E4BE417BB784B009AF145F982;// 0x0FA0(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E7852581436ED83A7BA6E98D2BA70C75;// 0x1010(0x00E0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C8D2895F4FD678E0305CC78256979B93;// 0x10F0(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6457C5D7413760D9950FFB9637F68C38;// 0x1138(0x0048)
	struct FAnimNode_S3SpeedWarping                    AnimGraphNode_S3SpeedWarping_B1AFACDE4596DC529F0E2595AFBB0FEC;// 0x1180(0x0180)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4B306F7C44EB9F9E03F5719C847DBDD9;// 0x1300(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_959DB3B648CE4D79762779B67EFE45ED;// 0x1428(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B54A0B6745742608AC07C5A4163DCDEA;// 0x1470(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_789F9BF34FD4049E4D27978A72BF5E67;      // 0x1550(0x0070)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6D43220F44057AA232C19CBD26124CBE;// 0x15C0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6B1E2F264A99723751EF0FAC772918F4;// 0x16A0(0x0050)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_70443CF340F4AB6639EAA2856F3AE977;// 0x16F0(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_91264D2D4B2D6B651FA1A7A5794BF573;// 0x1738(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6929C0604FA22CB7F7EEBCB95F2DE818;// 0x1818(0x0050)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_CC48160447F5B32CB393599948E2EAC5;// 0x1868(0x00C8)
	struct FAnimNode_S3TwoBoneIK                       AnimGraphNode_S3TwoBoneIK_2D6E1A2C4A2A0A43358B75BE3751F48B;// 0x1930(0x01B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_CEB5008C41AD15DB1D7DDC97528E73AD;// 0x1AE0(0x0048)
	struct FAnimNode_S3SpeedWarping                    AnimGraphNode_S3SpeedWarping_246F6CD345E4CE5F1DC6C39BDFF04B49;// 0x1B28(0x0180)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C39178C7412AA18B01B084BD7AAF8BDD;// 0x1CA8(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E26E8C854774241E68248FBB1DAEF9B0;// 0x1D88(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4B83FAC443B4F72526DB5FB20EFBD7C9;// 0x1DD8(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_48192F054BAF015E7A8C5293F7FB708C;// 0x1E28(0x0120)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_BDE3B6924CAC349A1A2B07845BD71C60;// 0x1F48(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_504F3E5345EFB7237AD244B3C08F7B56;// 0x1F90(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_774C036E45BBF0A1004D968017EB2759;// 0x1FD8(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_82BEBED941A8DCF5F64F4D9C4819FBEB;// 0x20A8(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E602BBE0424B54A7F05ACF8125697F9A;// 0x20F8(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4631C27A47C81A60D692339A9508837A;// 0x21D8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8AE0919E429229F5E3464FB01F4C0B70;// 0x2228(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7E563A014AE735B0978C0997CE6493C7;// 0x2278(0x00D0)
	float                                              RateKI;                                                   // 0x2348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RateDO;                                                   // 0x234C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RateAI;                                                   // 0x2350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RateRAKU;                                                 // 0x2354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PawnVelocity;                                             // 0x2358(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PawnActorRotation;                                        // 0x2364(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class APlayerCtrl_C*                               PlayerCtrl;                                               // 0x2370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ABP_PawnVelocityLength;                                   // 0x2378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x237C(0x0004) MISSED OFFSET
	class ABP_S3_Character_Adventure_C*                OwnerCharacter;                                           // 0x2380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ABP_IsTalking;                                            // 0x2388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2389(0x0007) MISSED OFFSET
	TArray<bool>                                       IsEyeRotateEmotionFlags;                                  // 0x2390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EN_PC_State>                           ABP_PC_State;                                             // 0x23A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ABP_PC_MS;                                                // 0x23A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x23A2(0x0002) MISSED OFFSET
	float                                              TurnAroundAngle;                                          // 0x23A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TurnAroundAnimStep;                                       // 0x23A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ABP_InputVelocity;                                        // 0x23AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ABP_MoveStartFoot;                                        // 0x23B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x23B1(0x0003) MISSED OFFSET
	float                                              ABP_SlopeAngle;                                           // 0x23B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ABP_SpeedWarpDir;                                         // 0x23B8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ABP_SpeedWarping_Scale;                                   // 0x23C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ABP_SpeedWarping_Alpha;                                   // 0x23C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ABP_MoveStartTimeN;                                       // 0x23CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ABP_LegGroundIK_Alpha;                                    // 0x23D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ABP_RootMotionScale;                                      // 0x23D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ABP_IsTalkStand;                                          // 0x23D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ABP_TransitionBehindMontage;                              // 0x23D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x23DA(0x0002) MISSED OFFSET
	float                                              ABP_LeftLandingWeight;                                    // 0x23DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ABP_RightLandingWeight;                                   // 0x23E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ABP_SitIntentFlag;                                        // 0x23E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ABP_EnableIKProcessing;                                   // 0x23E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ABP_ResetIK;                                              // 0x23E6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ABP_DummyFlag;                                            // 0x23E7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ABP_SpeedWarp_ScaleTarget;                                // 0x23E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x23EC(0x0004) MISSED OFFSET
	class UBP_IdleAnimSwitcher_C*                      ABP_IdleSwitcher;                                         // 0x23F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ABP_IdleVariation;                                        // 0x23F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ABP_WalkSpeedWarpingScale;                                // 0x23FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ABP_MoveUpperBodyBlend;                                   // 0x2400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ABP_WalkSpeedWarpingAlpha;                                // 0x2404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InWalkState;                                              // 0x2408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x2409(0x0003) MISSED OFFSET
	float                                              DeltaTimeX;                                               // 0x240C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_S3AnimNotifyComponent_C*                 NotifyComponent;                                          // 0x2410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBlendSpaceBase*                             BS_TalkTurn;                                              // 0x2418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             BS_WalkForward;                                           // 0x2420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           AS_BaseIdle;                                              // 0x2428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ABPSpeedWarpingOn;                                        // 0x2430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_S3_Ryo_Adventure.ABP_S3_Ryo_Adventure_C");
		return ptr;
	}


	bool IsCrouchSubState(bool Enter);
	void UpdateIKAlpha();
	bool IsReadyTalk();
	void UpdateRootMotionMode();
	void GetEyeRotateEmotionRate(float* EyeRotateEmotionRate);
	void TryGetFootOffset(float LocationX, float LocationY, float LocationZ, float ToLocationZ, float* Offset);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_TransitionResult_2D942E174AC6D08E92AA9C9FA46219AF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_TransitionResult_34D2F7614094E987B6C89CB46987B0F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_TransitionResult_197664294DE7604637833796D9EE4242();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_SequenceEvaluator_4273B96548EDA421C16249BF2C2A3BC3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_SequenceEvaluator_8C924C0F41DF00E02A236C9497DCA06B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_BlendSpacePlayer_626D9A5543ACC2C1B9FEBFA9D4D37A92();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_TransitionResult_4EDA23474A9AD7DFCD432291D567DA7B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_BlendListByInt_80A3B02B4A386BA3104DDC9CBFF11C0E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_SequencePlayer_32A9BCC6436ACB445B9F409D77EFC84C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_SequenceEvaluator_9E61388E4BE417BB784B009AF145F982();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_LayeredBoneBlend_E7852581436ED83A7BA6E98D2BA70C75();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_S3SpeedWarping_B1AFACDE4596DC529F0E2595AFBB0FEC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_BlendSpacePlayer_4B306F7C44EB9F9E03F5719C847DBDD9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_S3TwoBoneIK_2D6E1A2C4A2A0A43358B75BE3751F48B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_S3SpeedWarping_246F6CD345E4CE5F1DC6C39BDFF04B49();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_TwoWayBlend_48192F054BAF015E7A8C5293F7FB708C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_BlendListByBool_774C036E45BBF0A1004D968017EB2759();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_BlendListByBool_7E563A014AE735B0978C0997CE6493C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_TransitionResult_01C2E928454C7B4060B2609B4E81306A();
	void AnimNotify_AdvanceFootL();
	void AnimNotify_AdvanceFootR();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_TransitionResult_73FB11B64A3DD637EBBE559FE99F2133();
	void AnimNotify_GroundingFootL();
	void AnimNotify_GroundingFootR();
	void AnimNotify_OpenDoor();
	void AnimNotify_StopStartLeft();
	void AnimNotify_StopStartRight();
	void AnimNotify_ResetState();
	void AnimNotify_StateIdleStart();
	void AnimNotify_TransitFrame();
	void AnimNotify_EnterMove();
	void AnimNotify_ShowItemZoomCameraStart();
	void AnimNotify_StateIdleEnd();
	void UpdateStateIdle(float DeltaSeconds);
	void AnimNotify_LeftMove();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_TransitionResult_3FBA78674A5BD3C247312B9647B92959();
	void AnimNotify_ShowItemTakeOut();
	void AnimNotify_ShowItemPutAway();
	void AnimNotify_StateLookAtTurnAroundEnd();
	void AnimNotify_StateLookAtTurnAroundEntered();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void BlueprintPostEvaluateAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_S3_Ryo_Adventure_AnimGraphNode_TransitionResult_9D9706E14BC3C593F586E69BF949A3D3();
	void ExecuteUbergraph_ABP_S3_Ryo_Adventure(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
