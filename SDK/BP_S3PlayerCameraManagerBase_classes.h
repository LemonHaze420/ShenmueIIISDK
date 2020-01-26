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

// BlueprintGeneratedClass BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C
// 0x025C (0x290C - 0x26B0)
class ABP_S3PlayerCameraManagerBase_C : public AS3PlayerCameraManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x26B0(0x0008) (Transient, DuplicateTransient)
	class UBPC_DoorCameraControl_C*                    BPC_DoorCameraControl;                                    // 0x26B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_S3CameraSmoothRotator_C*                 FirstPersonRotationFollow;                                // 0x26C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_S3CameraSmoothRotator_C*                 ThirdPersonRotationFollow;                                // 0x26C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     CameraV;                                                  // 0x26D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraFocusPoint;                                         // 0x26DC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraC;                                                  // 0x26E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              RotY;                                                     // 0x26F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CAMERA_CENTER_DIS_DIV;                                    // 0x26F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZOOM_PITCH_LIMIT_MAX;                                     // 0x26FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerZ;                                                  // 0x2700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetArmLength;                                          // 0x2704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentArmLength;                                         // 0x2708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetArmHeight;                                          // 0x270C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CalcFlag;                                                 // 0x2710(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x2711(0x0007) MISSED OFFSET
	class APlayerCtrl_C*                               PlayerCtrl;                                               // 0x2718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3_Character_Adventure_C*                CharacterAdventure;                                       // 0x2720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              CharZ;                                                    // 0x2728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraZ;                                                  // 0x272C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerCameraSabun;                                        // 0x2730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraCenterRot;                                          // 0x2734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraPlayerLength;                                       // 0x2738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraNearUpOffset;                                       // 0x273C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CAMERA_NEAR_LENGTH;                                       // 0x2740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SABUN_PITCH_LIMIT;                                        // 0x2744(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SLOPE_DOWN_LIMIT;                                         // 0x2748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ARM_LENGTH_SPEED_ZOOM;                                    // 0x274C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ARM_LENGTH_SPEED_THIRD_PERSON;                            // 0x2750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DEFAULT_ARM_LENGTH;                                       // 0x2754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DEFAULT_ARM_HEIGHT;                                       // 0x2758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentArmHeight;                                         // 0x275C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArmLengthSpeed;                                           // 0x2760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2764(0x0004) MISSED OFFSET
	class US3SpringArmComponent*                       SpringArm;                                                // 0x2768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              CAMERA_PITCH_OFFSET;                                      // 0x2770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ShipTestDiff;                                             // 0x2774(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoomAxisSmooth;                                           // 0x2780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZOOM_ARM_LENGTH;                                          // 0x2784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZOOM_ARM_HEIGHT;                                          // 0x2788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FIRST_PERSON_START_VALUE;                                 // 0x278C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FIRST_PERSON_END_VALUE;                                   // 0x2790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FIRST_PERSON_ZOOM_FOV;                                    // 0x2794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SEARCH_ZOOM_FOV;                                          // 0x2798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PitchOffset;                                              // 0x279C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PLAYER_HIDE_LENGTH;                                       // 0x27A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OutSidePitchOffset;                                       // 0x27A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraDis;                                                // 0x27A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ThirdPersonRotResult;                                     // 0x27AC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               ChangePlayerVisibility;                                   // 0x27B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ResetThirdPerson;                                         // 0x27B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x27BA(0x0002) MISSED OFFSET
	float                                              ZoomRotTargetZ;                                           // 0x27BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECameraZoomState>                      CameraZoomState;                                          // 0x27C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x27C1(0x0007) MISSED OFFSET
	class UCurveFloat*                                 ZoomSpeedCurve;                                           // 0x27C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoomVelocityMeasure;                                      // 0x27D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ZOOM_MAX_PAN;                                             // 0x27D4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ZOOM_PAN_SPEED;                                           // 0x27DC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ZOOM_PAN_RETURN_SPEED;                                    // 0x27E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstPersonFirstRelease;                                  // 0x27E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstPersonSecondPush;                                    // 0x27E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x27EA(0x0002) MISSED OFFSET
	float                                              ZOOM_INPUT_DEADZONE;                                      // 0x27EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZOOM_INPUT_EXIT_THRESH;                                   // 0x27F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZOOM_INPUT_SECOND_PRESS_THRESH;                           // 0x27F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   PanAxisInterp;                                            // 0x27F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableAutoRotate;                                        // 0x2800(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ResetThirdPersonInstant;                                  // 0x2801(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ArmLagEnabled;                                            // 0x2802(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x2803(0x0005) MISSED OFFSET
	class UPC_SimpleFloatMeter_C*                      PCMoveMeter;                                              // 0x2808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LookAt_Location;                                          // 0x2810(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               LookAt_LocationEnable;                                    // 0x281C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x281D(0x0003) MISSED OFFSET
	struct FVector2D                                   LookAt_AbsolutePitchRange;                                // 0x2820(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAt_PitchOffset;                                       // 0x2828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAt_MinDistance;                                       // 0x282C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ARM_LENGTH_SPEED_DOOR;                                    // 0x2830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ARM_LENGTH_SPEED_KNOCK;                                   // 0x2834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPressedInputReset;                                       // 0x2838(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugEnableFaceFocusMode;                                // 0x2839(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableFaceFocusMode;                                     // 0x283A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bZoomFixFlag;                                             // 0x283B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCrouchMode;                                              // 0x283C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x283D(0x0003) MISSED OFFSET
	struct FVector2D                                   PITCH_LIMITS;                                             // 0x2840(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              DOOR_USE_ARM_LENGTH;                                      // 0x2848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DOOR_USE_ARM_HEIGHT;                                      // 0x284C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DOOR_APPROACH_ARM_LENGTH;                                 // 0x2850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ARM_HEIGHT_SPEED_NORMAL;                                  // 0x2854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ARM_HEIGHT_SPEED_FAST;                                    // 0x2858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DOOR_APPROACH_ARM_HEIGHT;                                 // 0x285C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              INDOOR_ARM_LENGTH;                                        // 0x2860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              INDOOR_ARM_HEIGHT;                                        // 0x2864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BACKWARD_FOLLOW_THRESH;                                   // 0x2868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SocketPanOffset;                                          // 0x286C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ZOOM_CROUCH_HEIGHT;                                       // 0x2878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoomHeightOffset;                                         // 0x287C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraPitchLimit;                                         // 0x2880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PitchLimitResetFlag;                                      // 0x2884(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x2885(0x0003) MISSED OFFSET
	float                                              ZoomPitchLimitResetBase;                                  // 0x2888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoomPitchLimitResetAlpha;                                 // 0x288C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              SpringArmYOffset;                                         // 0x2890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x2894(0x0004) MISSED OFFSET
	class UCurveFloat*                                 ArmYOffsetCurve;                                          // 0x2898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ArmYOffsetByDistCurve;                                    // 0x28A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TickDeltaSeconds;                                         // 0x28A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInBuilding;                                             // 0x28AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x28AD(0x0003) MISSED OFFSET
	struct FVector2D                                   CurrentPitchLimits;                                       // 0x28B0(0x0008) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   INDOOR_PITCH_LIMITS;                                      // 0x28B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAttentionZoom;                                           // 0x28C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInBuildingPreHist;                                      // 0x28C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x28C2(0x0002) MISSED OFFSET
	float                                              PartialZoomResetTimer;                                    // 0x28C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ResetSpringArm;                                           // 0x28C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableZoomUntilRePress;                                 // 0x28C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x6];                                       // 0x28CA(0x0006) MISSED OFFSET
	class URequestCounter_C*                           DisableZoomRequests;                                      // 0x28D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPC_SimpleFloatMeter_C*                      AutoRotateMeter;                                          // 0x28D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DoorZoomAmount;                                           // 0x28E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x28E4(0x0004) MISSED OFFSET
	class ABP_FocusSignManager_C*                      BP_FocusSignManager;                                      // 0x28E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ThirdPersonTurnRate;                                      // 0x28F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   MOUSE_LOOK_SPEED_LIMIT;                                   // 0x28F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   LastTurnAmount;                                           // 0x2900(0x0008) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	int                                                FOCUS_SETTING_FLAG_INDEX;                                 // 0x2908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C");
		return ptr;
	}


	void InputRotateY(float AmountY);
	void InputRotateX(float AmountX);
	void SetControlRotationYaw(float Yaw);
	struct FRotator GetControlRotation();
	float StandardGateMouseLook(float In);
	void SetActiveFocusSign(bool Active);
	bool GetIsZoomingInFOV();
	void SetEnabledAttentionSearch(bool Enabled);
	void ResetCameraPitchLimit(bool Immediately);
	float PanInterp(float Current, float Max, float Speed, float InputStr);
	void SetControlRotation(const struct FRotator& NewRotation);
	void EnableFaceFocusMode(bool bSetEnabled);
	void Debug_EnableFaceFocusMode(bool bSetEnabled);
	void IsFaceFocusModeEnabled(bool* bIsEnabled);
	void ZoomLookAtChar(class AS3Character* InCharacter, bool* bValid);
	void ZoomLookAtTalkChar(bool* bValidChar);
	void InitZoomRotation();
	void GetZoomTargetCharacter(class AS3Character** OutCharacter);
	void GetLookAtRotation(const struct FRotator& FallbackRotation, struct FRotator* OutRotation);
	void StopLookAtLocation();
	void StandardGateFloatInput(float InFloat, float* OutFloat);
	void BeginLookAtLocation(const struct FVector& Location, bool bImmediate);
	void SetRotationOffset(const struct FRotator& Offset);
	void SetPlayerBehindSmooth(bool Smooth);
	void UpdateSpringArmLagFlag();
	void PhotographyCameraModify(const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* ResultCameraLocation);
	void GetCameraSpaceYaw(const struct FVector& Direction, float* Yaw);
	void CanScreenShot(bool* CAN);
	void UpdateSpringArmSocket();
	void UpdateZoomState(float ZoomInputAxis);
	void InterpolateAngleNear(float SrcAngle, float DstAngle, float Ratio, float* Result);
	void InterpolateAngle(float SrcAngle, float DstAngle, float Ratio, bool Positive, float* Result);
	void GetAngleNormal(float SrcAngleDeg, float* DstAngleDeg);
	void IsReversedSignIfAdd(float BaseParam, float AddParam, bool* Reversed);
	void SetPlayerBehind();
	void IsZoomEnable(bool* Enable);
	void ResetZoom(bool WithState);
	void IsFirstPersonView(bool* FirstPerson);
	void SwitchZoomState(float AxisValue);
	void CalcThirdPersonCamera();
	void IsAttention(bool* Attention);
	void TickZoomCameraRotation();
	void IsZooming(bool* Zooming);
	void UpdateSpringArmParams();
	float GetDesiredZoomFOV();
	bool BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV);
	void CameraSpringArmLagSet(bool flag);
	void IsCameraCollision(bool* CollisionFlag);
	void CameraCollisionOff();
	void CameraCollisionOn();
	void CameraCalcOff();
	void CameraCalcOn();
	void CameraRotInitParam();
	void CameraRotInit();
	void UserConstructionScript();
	void InpActEvt_Screenshot_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_ScreenshotCine_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_ResetCamera_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_ResetCamera_K2Node_InputActionEvent_5(const struct FKey& Key);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnPhotographySessionStart();
	void OnPhotographySessionEnd();
	void InputHeldResetCamera();
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_7(float AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_18(float AxisValue);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void CleanupNullReferences();
	void ChangedCameraState(ECameraState OldState, ECameraState NewState);
	void InpAxisEvt_MouseLook_X_K2Node_InputAxisEvent_3(float AxisValue);
	void InpAxisEvt_MouseLook_Y_K2Node_InputAxisEvent_4(float AxisValue);
	void ExecuteUbergraph_BP_S3PlayerCameraManagerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
