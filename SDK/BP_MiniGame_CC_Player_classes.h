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

// BlueprintGeneratedClass BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C
// 0x00E0 (0x0830 - 0x0750)
class ABP_MiniGame_CC_Player_C : public AS3MiniGameCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0750(0x0008) (Transient, DuplicateTransient)
	class UFootprintComponent_C*                       FootprintComponent;                                       // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            CameraPlayer;                                             // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAtomListenerFocusPoint*                     AtomListenerFocusPoint;                                   // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           AdditionalCapsule;                                        // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ULCComponent_C*                              LCComponent;                                              // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           CapsuleForPhysics;                                        // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArmCameraPlayer;                                    // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_Alpha_E3FA3BCC4716A8C270EAFDB533B321F6;        // 0x0790(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_E3FA3BCC4716A8C270EAFDB533B321F6;   // 0x0794(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0795(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              RagdollBlend_Spring_9D60D5F84DFECCFDA750FCACF27B15D9;     // 0x07A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RagdollBlend__Direction_9D60D5F84DFECCFDA750FCACF27B15D9; // 0x07A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RagdollBlend;                                             // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              UnRagdollBlend_PhysicsBlendWeight_71089C384A74A924ECDB14A6FE5D2C68;// 0x07B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    UnRagdollBlend__Direction_71089C384A74A924ECDB14A6FE5D2C68;// 0x07B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          UnRagdollBlend;                                           // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SpringArmLength;                                          // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    SpringArmRotation;                                        // 0x07C4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    SpringArmRotationOffset;                                  // 0x07D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x07DC(0x0004) MISSED OFFSET
	class UTimelineComponent*                          TurnLerpAlpha;                                            // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              InputRight;                                               // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputForward;                                             // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ActorForward;                                             // 0x07F0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MovePower;                                                // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetForward;                                            // 0x0800(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimUpperBodyRate;                                        // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpCameraAngle;                                        // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMove;                                                    // 0x0814(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0815(0x0003) MISSED OFFSET
	int                                                ReturnCount;                                              // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ReturnLocation;                                           // 0x081C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ReturnMovePower;                                          // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotatePower;                                              // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_CC_Player.BP_MiniGame_CC_Player_C");
		return ptr;
	}


	bool IsPlayerCollision(class UActorComponent* ActorComponent);
	void SetReturnLocation(const struct FVector& Location);
	void STATIC_AddReturnCount(int AddCount);
	void SetEnabledPlayer(bool Enabled);
	void UpdateCamera(float DeltaTime);
	void AnimRateUpdate(float DeltaSeconds);
	void STATIC_StopMove();
	void MoveUpdate(float DeltaSeconds);
	void STATIC_SetAnimMoveRate(float Rate);
	void PlayCatchAnim();
	void STATIC_InputAxisLook(float LRAxis, float UDAxis);
	void PreUpdate(float DeltaSec);
	void STATIC_UserConstructionScript();
	void UnRagdollBlend__FinishedFunc();
	void UnRagdollBlend__UpdateFunc();
	void RagdollBlend__FinishedFunc();
	void RagdollBlend__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void InpActEvt_Y_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void STATIC_InpActEvt_Y_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ChangeLocoState(TEnumAsByte<ELocomotionState> State);
	void ToRagdoll();
	void UnRagdoll();
	void StopTurningInPlace();
	void TurnInPlace(const struct FRotator& TurnInPlaceStart, const struct FRotator& TurnInPlaceTarget, class UCurveFloat* Curve, class UAnimMontage* TurnAnimation);
	void InputReleasedRun();
	void InputPressedRun();
	void InputMoveForward(float AxisValue);
	void STATIC_InputMoveRight(float AxisValue);
	void ExecuteUbergraph_BP_MiniGame_CC_Player(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
