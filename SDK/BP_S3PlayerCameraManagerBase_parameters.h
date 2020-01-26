#pragma once

#include "../SDK.h"

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InputRotateY
struct ABP_S3PlayerCameraManagerBase_C_InputRotateY_Params
{
	float                                              AmountY;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InputRotateX
struct ABP_S3PlayerCameraManagerBase_C_InputRotateX_Params
{
	float                                              AmountX;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetControlRotationYaw
struct ABP_S3PlayerCameraManagerBase_C_SetControlRotationYaw_Params
{
	float                                              Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetControlRotation
struct ABP_S3PlayerCameraManagerBase_C_GetControlRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.StandardGateMouseLook
struct ABP_S3PlayerCameraManagerBase_C_StandardGateMouseLook_Params
{
	float                                              In;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetActiveFocusSign
struct ABP_S3PlayerCameraManagerBase_C_SetActiveFocusSign_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetIsZoomingInFOV
struct ABP_S3PlayerCameraManagerBase_C_GetIsZoomingInFOV_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetEnabledAttentionSearch
struct ABP_S3PlayerCameraManagerBase_C_SetEnabledAttentionSearch_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ResetCameraPitchLimit
struct ABP_S3PlayerCameraManagerBase_C_ResetCameraPitchLimit_Params
{
	bool                                               Immediately;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.PanInterp
struct ABP_S3PlayerCameraManagerBase_C_PanInterp_Params
{
	float                                              Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InputStr;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetControlRotation
struct ABP_S3PlayerCameraManagerBase_C_SetControlRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.EnableFaceFocusMode
struct ABP_S3PlayerCameraManagerBase_C_EnableFaceFocusMode_Params
{
	bool                                               bSetEnabled;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.Debug_EnableFaceFocusMode
struct ABP_S3PlayerCameraManagerBase_C_Debug_EnableFaceFocusMode_Params
{
	bool                                               bSetEnabled;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsFaceFocusModeEnabled
struct ABP_S3PlayerCameraManagerBase_C_IsFaceFocusModeEnabled_Params
{
	bool                                               bIsEnabled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ZoomLookAtChar
struct ABP_S3PlayerCameraManagerBase_C_ZoomLookAtChar_Params
{
	class AS3Character*                                InCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ZoomLookAtTalkChar
struct ABP_S3PlayerCameraManagerBase_C_ZoomLookAtTalkChar_Params
{
	bool                                               bValidChar;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InitZoomRotation
struct ABP_S3PlayerCameraManagerBase_C_InitZoomRotation_Params
{
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetZoomTargetCharacter
struct ABP_S3PlayerCameraManagerBase_C_GetZoomTargetCharacter_Params
{
	class AS3Character*                                OutCharacter;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetLookAtRotation
struct ABP_S3PlayerCameraManagerBase_C_GetLookAtRotation_Params
{
	struct FRotator                                    FallbackRotation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.StopLookAtLocation
struct ABP_S3PlayerCameraManagerBase_C_StopLookAtLocation_Params
{
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.StandardGateFloatInput
struct ABP_S3PlayerCameraManagerBase_C_StandardGateFloatInput_Params
{
	float                                              InFloat;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutFloat;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.BeginLookAtLocation
struct ABP_S3PlayerCameraManagerBase_C_BeginLookAtLocation_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bImmediate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetRotationOffset
struct ABP_S3PlayerCameraManagerBase_C_SetRotationOffset_Params
{
	struct FRotator                                    Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetPlayerBehindSmooth
struct ABP_S3PlayerCameraManagerBase_C_SetPlayerBehindSmooth_Params
{
	bool                                               Smooth;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UpdateSpringArmLagFlag
struct ABP_S3PlayerCameraManagerBase_C_UpdateSpringArmLagFlag_Params
{
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.PhotographyCameraModify
struct ABP_S3PlayerCameraManagerBase_C_PhotographyCameraModify_Params
{
	struct FVector                                     NewCameraLocation;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     PreviousCameraLocation;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     OriginalCameraLocation;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ResultCameraLocation;                                     // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetCameraSpaceYaw
struct ABP_S3PlayerCameraManagerBase_C_GetCameraSpaceYaw_Params
{
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CanScreenShot
struct ABP_S3PlayerCameraManagerBase_C_CanScreenShot_Params
{
	bool                                               CAN;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UpdateSpringArmSocket
struct ABP_S3PlayerCameraManagerBase_C_UpdateSpringArmSocket_Params
{
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UpdateZoomState
struct ABP_S3PlayerCameraManagerBase_C_UpdateZoomState_Params
{
	float                                              ZoomInputAxis;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InterpolateAngleNear
struct ABP_S3PlayerCameraManagerBase_C_InterpolateAngleNear_Params
{
	float                                              SrcAngle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DstAngle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InterpolateAngle
struct ABP_S3PlayerCameraManagerBase_C_InterpolateAngle_Params
{
	float                                              SrcAngle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DstAngle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Positive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetAngleNormal
struct ABP_S3PlayerCameraManagerBase_C_GetAngleNormal_Params
{
	float                                              SrcAngleDeg;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DstAngleDeg;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsReversedSignIfAdd
struct ABP_S3PlayerCameraManagerBase_C_IsReversedSignIfAdd_Params
{
	float                                              BaseParam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AddParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Reversed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SetPlayerBehind
struct ABP_S3PlayerCameraManagerBase_C_SetPlayerBehind_Params
{
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsZoomEnable
struct ABP_S3PlayerCameraManagerBase_C_IsZoomEnable_Params
{
	bool                                               Enable;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ResetZoom
struct ABP_S3PlayerCameraManagerBase_C_ResetZoom_Params
{
	bool                                               WithState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsFirstPersonView
struct ABP_S3PlayerCameraManagerBase_C_IsFirstPersonView_Params
{
	bool                                               FirstPerson;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.SwitchZoomState
struct ABP_S3PlayerCameraManagerBase_C_SwitchZoomState_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CalcThirdPersonCamera
struct ABP_S3PlayerCameraManagerBase_C_CalcThirdPersonCamera_Params
{
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsAttention
struct ABP_S3PlayerCameraManagerBase_C_IsAttention_Params
{
	bool                                               Attention;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.TickZoomCameraRotation
struct ABP_S3PlayerCameraManagerBase_C_TickZoomCameraRotation_Params
{
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsZooming
struct ABP_S3PlayerCameraManagerBase_C_IsZooming_Params
{
	bool                                               Zooming;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UpdateSpringArmParams
struct ABP_S3PlayerCameraManagerBase_C_UpdateSpringArmParams_Params
{
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.GetDesiredZoomFOV
struct ABP_S3PlayerCameraManagerBase_C_GetDesiredZoomFOV_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.BlueprintUpdateCamera
struct ABP_S3PlayerCameraManagerBase_C_BlueprintUpdateCamera_Params
{
	class AActor*                                      CameraTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewCameraLocation;                                        // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    NewCameraRotation;                                        // (Parm, OutParm, IsPlainOldData)
	float                                              NewCameraFOV;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraSpringArmLagSet
struct ABP_S3PlayerCameraManagerBase_C_CameraSpringArmLagSet_Params
{
	bool                                               flag;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.IsCameraCollision
struct ABP_S3PlayerCameraManagerBase_C_IsCameraCollision_Params
{
	bool                                               CollisionFlag;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraCollisionOff
struct ABP_S3PlayerCameraManagerBase_C_CameraCollisionOff_Params
{
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraCollisionOn
struct ABP_S3PlayerCameraManagerBase_C_CameraCollisionOn_Params
{
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraCalcOff
struct ABP_S3PlayerCameraManagerBase_C_CameraCalcOff_Params
{
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraCalcOn
struct ABP_S3PlayerCameraManagerBase_C_CameraCalcOn_Params
{
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraRotInitParam
struct ABP_S3PlayerCameraManagerBase_C_CameraRotInitParam_Params
{
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CameraRotInit
struct ABP_S3PlayerCameraManagerBase_C_CameraRotInit_Params
{
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.UserConstructionScript
struct ABP_S3PlayerCameraManagerBase_C_UserConstructionScript_Params
{
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpActEvt_Screenshot_K2Node_InputActionEvent_8
struct ABP_S3PlayerCameraManagerBase_C_InpActEvt_Screenshot_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpActEvt_ScreenshotCine_K2Node_InputActionEvent_7
struct ABP_S3PlayerCameraManagerBase_C_InpActEvt_ScreenshotCine_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_6
struct ABP_S3PlayerCameraManagerBase_C_InpActEvt_ResetCamera_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpActEvt_ResetCamera_K2Node_InputActionEvent_5
struct ABP_S3PlayerCameraManagerBase_C_InpActEvt_ResetCamera_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ReceiveTick
struct ABP_S3PlayerCameraManagerBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ReceiveBeginPlay
struct ABP_S3PlayerCameraManagerBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.OnPhotographySessionStart
struct ABP_S3PlayerCameraManagerBase_C_OnPhotographySessionStart_Params
{
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.OnPhotographySessionEnd
struct ABP_S3PlayerCameraManagerBase_C_OnPhotographySessionEnd_Params
{
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InputHeldResetCamera
struct ABP_S3PlayerCameraManagerBase_C_InputHeldResetCamera_Params
{
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_7
struct ABP_S3PlayerCameraManagerBase_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_7_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_18
struct ABP_S3PlayerCameraManagerBase_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_18_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ReceiveEndPlay
struct ABP_S3PlayerCameraManagerBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.CleanupNullReferences
struct ABP_S3PlayerCameraManagerBase_C_CleanupNullReferences_Params
{
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ChangedCameraState
struct ABP_S3PlayerCameraManagerBase_C_ChangedCameraState_Params
{
	ECameraState                                       OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECameraState                                       NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpAxisEvt_MouseLook_X_K2Node_InputAxisEvent_3
struct ABP_S3PlayerCameraManagerBase_C_InpAxisEvt_MouseLook_X_K2Node_InputAxisEvent_3_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.InpAxisEvt_MouseLook_Y_K2Node_InputAxisEvent_4
struct ABP_S3PlayerCameraManagerBase_C_InpAxisEvt_MouseLook_Y_K2Node_InputAxisEvent_4_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3PlayerCameraManagerBase.BP_S3PlayerCameraManagerBase_C.ExecuteUbergraph_BP_S3PlayerCameraManagerBase
struct ABP_S3PlayerCameraManagerBase_C_ExecuteUbergraph_BP_S3PlayerCameraManagerBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
