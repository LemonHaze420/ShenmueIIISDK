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

// AnimBlueprintGeneratedClass ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C
// 0x0BB1 (0x0F11 - 0x0360)
class UABP_MiniGame_CC_Player_re_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_69101BA6486D196D8E7D0886C32442EA;      // 0x0368(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1072A9C2421FEC08965D54A159409CA0;// 0x03D8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_18A444EE419E962B1FF5FF91366CE059;      // 0x0420(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F26513024338B1B4436FC9BFF7EFB6D4;// 0x0490(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_993702BE4158C03EC787BA8F7F2BE13A;      // 0x04D8(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0C991826438CB5DB8BEC45AEB63553D8;      // 0x0548(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6F4D1FD141704E98769B6AA1B6AE6186;// 0x05B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_45F2B9AB47E730ED2E576EA6B34048D2;// 0x0600(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8C5FDAF346797F8B3BB06A871FB2EBC8;// 0x0648(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_81360C884437633463479E95ADE5F452;// 0x0690(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9381E07D489F5DA9784CA9968CC69ABB;// 0x07B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4C7ADC5B4F67B5FB6A3EFC8595C9EF04;// 0x0800(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_834D7E7341E1C997B83C3497D8412643;// 0x08B0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E57390CE40DA8627F149578FE0ADDB3E;// 0x08F8(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C68A12A94C34CF82DA907AABD0B404D0;// 0x09D8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2EF7AFA74D871E524FDB2BBA283DD702;// 0x0A20(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7511414B426D60CFCE51D985851B2654;// 0x0B00(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D6FB28CD40A4807BEE8DC2946608B9D6;// 0x0B50(0x00E0)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_E738FA8E4DAE1C5595DA2FAE77DAD20E;// 0x0C30(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_Root_FABF58724722327468CC93A2160C4B7E;      // 0x0D10(0x0048)
	float                                              DeltaTimeX;                                               // 0x0D58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0D5C(0x0004) MISSED OFFSET
	class APawn*                                       PawnOwner;                                                // 0x0D60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed;                                                    // 0x0D68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Moving;                                                   // 0x0D6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0D6D(0x0003) MISSED OFFSET
	struct FRotator                                    VelocityRotation;                                         // 0x0D70(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CharacterRotation;                                        // 0x0D7C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RootOffset;                                               // 0x0D88(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ELocomotionState>                      LocomotionState;                                          // 0x0D94(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InAir;                                                    // 0x0D95(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MovementInput;                                            // 0x0D96(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0D97(0x0001) MISSED OFFSET
	struct FVector                                     PlayerMovementInputVector;                                // 0x0D98(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ControlRotation;                                          // 0x0DA4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x0DB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TurnInPlaceStart;                                         // 0x0DB4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TurnInPlaceTarget;                                        // 0x0DC0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              RotationOffset;                                           // 0x0DCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECardinalDirection>                    CardinalDirection;                                        // 0x0DD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldTurnInPlace;                                        // 0x0DD1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0DD2(0x0002) MISSED OFFSET
	float                                              RootOffsetYaw;                                            // 0x0DD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   AO;                                                       // 0x0DD8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              YawValue;                                                 // 0x0DE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LastKnownRotation;                                        // 0x0DE4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Rotation_Rate;                                            // 0x0DF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccelerationValue;                                        // 0x0DF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastKnownSpeed;                                           // 0x0DF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccelerationRate;                                         // 0x0DFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootPosition;                                             // 0x0E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ToIdle;                                                   // 0x0E04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0E05(0x0003) MISSED OFFSET
	float                                              StartPosition;                                            // 0x0E08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Stopping;                                                 // 0x0E0C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0E0D(0x0003) MISSED OFFSET
	float                                              IdleAdditiveAlpha;                                        // 0x0E10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InRagdoll;                                                // 0x0E14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanRotate;                                                // 0x0E15(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0E16(0x0002) MISSED OFFSET
	float                                              FootPositionDirection;                                    // 0x0E18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurningInPlace;                                           // 0x0E1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EntryState>                            EntryState;                                               // 0x0E1D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0E1E(0x0002) MISSED OFFSET
	struct FRotator                                    JumpRotation;                                             // 0x0E20(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Jumped;                                                   // 0x0E2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0E2D(0x0003) MISSED OFFSET
	struct FVector                                     InAirVelocity;                                            // 0x0E30(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpStartPosition;                                        // 0x0E3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InAirExplicitTime;                                        // 0x0E40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpHeight;                                               // 0x0E44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InAirLeanAmount;                                          // 0x0E48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EOffsetExample>                        OffsetExample;                                            // 0x0E4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0E4D(0x0003) MISSED OFFSET
	class ULCComponent_C*                              LCComp;                                                   // 0x0E50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAnimMontage*                                CurrentMontage;                                           // 0x0E58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MontageMode;                                              // 0x0E60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0E61(0x0003) MISSED OFFSET
	float                                              PlaySpeedForMontage;                                      // 0x0E64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x8];                                       // 0x0E68(0x0008) MISSED OFFSET
	struct FTransform                                  TwistBase;                                                // 0x0E70(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TwistAngle;                                               // 0x0EA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TwistTargetHeight;                                        // 0x0EA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseTarget;                                                // 0x0EA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0EA9(0x0003) MISSED OFFSET
	struct FVector                                     TargetPos;                                                // 0x0EAC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimePlayTime;                                            // 0x0EB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0EBC(0x0004) MISSED OFFSET
	class ABattleDebugArrowZB_C*                       DebugTargetArrow;                                         // 0x0EC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               QTEResult;                                                // 0x0EC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0EC9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    QTE_Input;                                                // 0x0ED0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    QTE_End;                                                  // 0x0EE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              MontageBlendTime;                                         // 0x0EF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0EF4(0x0004) MISSED OFFSET
	class UAnimMontage*                                CatchAnimMontage;                                         // 0x0EF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveRate;                                                 // 0x0F00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0F04(0x0004) MISSED OFFSET
	class ABP_MiniGame_CC_Player_C*                    MiniPlayerPawn;                                           // 0x0F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceIdle;                                               // 0x0F10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_MiniGame_CC_Player_re.ABP_MiniGame_CC_Player_re_C");
		return ptr;
	}


	void IsPlayCatchAnim(bool* isPlay);
	void PlayCatchAnim();
	void UpdatePA();
	void RInterpToQ(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed, struct FRotator* RetRot);
	void InitFunc();
	void MakeTargetRotation(struct FRotator* ReturnRot);
	void GOMA8_OtherFunc();
	void StopMontageWrapper();
	void TurnInPlaceCheck(float TurnThreshold, float TurnAngle, struct FRotator* TargetRotation, bool* ShouldRotate, bool* TurnRight);
	void SetCharacterRotation(const struct FRotator& TargetRotation, float RotationRate);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_1072A9C2421FEC08965D54A159409CA0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_6F4D1FD141704E98769B6AA1B6AE6186();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_45F2B9AB47E730ED2E576EA6B34048D2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_TransitionResult_8C5FDAF346797F8B3BB06A871FB2EBC8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_BlendSpacePlayer_81360C884437633463479E95ADE5F452();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MiniGame_CC_Player_re_AnimGraphNode_RotateRootBone_E738FA8E4DAE1C5595DA2FAE77DAD20E();
	void AnimNotify_QTE_FinishWait();
	void AnimNotify_QTE_InputStart();
	void AnimNotify_QTE_InputEnd();
	void AnimNotify_QTE_End();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_CanRotate();
	void OnJump();
	void PauseMotion();
	void SetPlayRate(float PlayRate);
	void BlueprintInitializeAnimation();
	void SetForceIdle(bool bForceIdle);
	void AnimNotify_GroundingFootL();
	void AnimNotify_GroundingFootR();
	void ExecuteUbergraph_ABP_MiniGame_CC_Player_re(int EntryPoint);
	void QTE_End__DelegateSignature();
	void QTE_Input__DelegateSignature(bool StartFlag);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
