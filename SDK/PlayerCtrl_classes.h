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

// BlueprintGeneratedClass PlayerCtrl.PlayerCtrl_C
// 0x036D (0x0AD5 - 0x0768)
class APlayerCtrl_C : public ABP_S3AdventurePlayerController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0768(0x0008) (Transient, DuplicateTransient)
	class UBPC_PlayerTargetSwitcher_C*                 BPC_PlayerTargetSwitcher;                                 // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_PlayerObstacleSensor_C*                 BPC_PlayerObstacleSensor;                                 // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_PlayerInputBufferComponent_C*            BP_PlayerInputBufferComponent;                            // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PC_StickInput_TurnRight;                                  // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_Anim_TalkSitFlag;                                      // 0x078C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_WalkStart_LRFlag;                                      // 0x078D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopTimeOnceFlag;                                         // 0x078E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_FootFrontLrFlag;                                       // 0x078F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_ClavicleTime_L;                                        // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_ClavicleTime_R;                                        // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_UpperBodyAnimTime;                                     // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_HitTime;                                               // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_PauseAvoidanceFlag;                                    // 0x07A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_SHOW_ID>                            PC_TalkItemId;                                            // 0x07A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x07A2(0x0002) MISSED OFFSET
	float                                              OBSTACLE_CHECK_LENGTH;                                    // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                PC_State_TalkShowMontageRef;                              // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_OrgMoveForward;                                        // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_OrgMoveRight;                                          // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_Sensor_R2Button_RunFlag;                               // 0x07B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x07B9(0x0007) MISSED OFFSET
	class ABP_S3_Character_Adventure_C*                AdventurePawn;                                            // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimInstance*                               PC_ABP;                                                   // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCharacterMovementComponent*                 CharacterMovement;                                        // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TEnumAsByte<EN_PC_State>                           PC_State;                                                 // 0x07D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_PC_State>                           PC_PrevState;                                             // 0x07D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_PC_State>                           PC_NextState;                                             // 0x07DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_Sensor_Input_Push_Action;                              // 0x07DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_Sensor_Input_Walk;                                     // 0x07DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07DD(0x0003) MISSED OFFSET
	float                                              PC_StateContinueTime;                                     // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_MSContinueTime;                                        // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      PC_NextMS;                                                // 0x07E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      PC_MS;                                                    // 0x07E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x07EA(0x0002) MISSED OFFSET
	float                                              PC_Sensor_DeltaTime;                                      // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                PC_TalkMontageRef;                                        // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PC_Sensor_InputDir;                                       // 0x07F8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_Sensor_InputMagnitude;                                 // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3PlayerCameraManagerBase_C*             PlayerCamera;                                             // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_Sensor_InputRun;                                       // 0x0810(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0811(0x0003) MISSED OFFSET
	float                                              PC_RotateSpeed;                                           // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_MoveSpeed;                                             // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_InterruptStateChange;                                  // 0x081C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_ContinueTransState;                                    // 0x081D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_Sensor_InputLSNone;                                    // 0x081E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x081F(0x0001) MISSED OFFSET
	struct FVector                                     PC_Sensor_ActorPos;                                       // 0x0820(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PC_Sensor_ActorForward;                                   // 0x082C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PC_Sensor_ActorRight;                                     // 0x0838(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PC_Sensor_InputDirWS;                                     // 0x0844(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_STATE_SIT_IN_TIME;                                     // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_STATE_SIT_OUT_TIME;                                    // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PC_Sensor_PrevInputDirWS;                                 // 0x0858(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_Sensor_LastInputRunTime;                               // 0x0864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_Sensor_InputDebugRun;                                  // 0x0868(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_Sensor_InputRunPrev;                                   // 0x0869(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_PC_DirectionType>                   PC_Sensor_InputDirectionType;                             // 0x086A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x086B(0x0001) MISSED OFFSET
	struct FVector                                     PC_Sensor_Input_AiInputDirection;                         // 0x086C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_Sensor_Input_AIInputMagnitude;                         // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PC_Sensor_OriginInputDirWS;                               // 0x087C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LEFT_STICK_INPUT_THRESHOLD;                               // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MIN_ANIM_SPEED;                                           // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MAX_ANIM_SPEED;                                           // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WALK_SPEED_MIN;                                           // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WALK_SPEED_MAX;                                           // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WALK_MIN_ROTATE_SPEED;                                    // 0x089C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RUN_SPEED_MIN;                                            // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RUN_SPEED_MAX;                                            // 0x08A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RUN_DEBUG_SPEED;                                          // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_FixInputDirWS;                                         // 0x08AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x08AD(0x0003) MISSED OFFSET
	struct FVector                                     PC_FixedInputDirWS;                                       // 0x08B0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_FixInputDirTimer;                                      // 0x08BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_Sensor_ActorSpeed;                                     // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x08C4(0x0004) MISSED OFFSET
	class APlayerMotionDatabase_C*                     PC_MotionDatabase;                                        // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UPlayerMotionDatabaseManager_C*              PlayerMotionDatabaseManager;                              // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PC_TalkItemName;                                          // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_Sensor_CapsuleRadius;                                  // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PC_Sensor_CapsuleBottomPos;                               // 0x08E4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    DetectFallDispatcher;                                     // 0x08F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              PC_Sensor_HalfHeight;                                     // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_Sensor_LeftFootOnGround;                               // 0x0904(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_Sensor_RightFootOnGround;                              // 0x0905(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_FOOT_GROUND_STATE>                  PC_Sensor_FootGroundState;                                // 0x0906(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_Stop_LeftFootStop;                                     // 0x0907(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_Sensor_DetectTurnBack;                                 // 0x0908(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0909(0x0003) MISSED OFFSET
	struct FVector                                     PC_Sensor_InputVec;                                       // 0x090C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_RegistedDetectActor;                                   // 0x0918(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_Sensor_DetectDoor;                                     // 0x0919(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_Sensor_CanUseDoor;                                     // 0x091A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1];                                       // 0x091B(0x0001) MISSED OFFSET
	float                                              WALK_DODGE_ROT_SPEED_RATIO;                               // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RUN_DODGE_ROT_SPEED_RATIO;                                // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_LastMoveSpeed;                                         // 0x0924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_WalkSpeedRate;                                         // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_Sensor_ForwardInputThresh;                             // 0x092C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_InputTurnReorientAngle;                                // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_InputReorientResetRate;                                // 0x0934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_InputTurnReorientAmt;                                  // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_Sensor_ABP_TransitFrame;                               // 0x093C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_IsJumpEnabled;                                         // 0x093D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x093E(0x0002) MISSED OFFSET
	float                                              PC_Sensor_NoInputForwardTrackAngleCS;                     // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_TurnDisabledZoom;                                      // 0x0944(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0945(0x0003) MISSED OFFSET
	class ABP_Gimmick_OpenDoor_Template_C*             PC_InteractingDoor;                                       // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              WALK_ACCEL;                                               // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RUN_ACCEL;                                                // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RUN_WALK_DEACCEL;                                         // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_DoorInteractDidAlign;                                  // 0x095C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_R2TrackTurn;                                           // 0x095D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x095E(0x0002) MISSED OFFSET
	float                                              PC_TurnFullAngle;                                         // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PC_TurnStartDirection;                                    // 0x0964(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PC_TurnEndDirection;                                      // 0x0970(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_TurnDir;                                               // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_PC_DirectionType>                   PC_TurnType;                                              // 0x0980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0981(0x0003) MISSED OFFSET
	float                                              FORWARD_THRESH_RETURN_RATE;                               // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_TurnBreakoutMeter;                                     // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_Sensor_InputAngleAS;                                   // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_TurnDuration;                                          // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_TurnAddRotVel;                                         // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_State_DeltaRotAccum;                                   // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_Sensor_InputPushSwitchTarget;                          // 0x099C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_TurnInPlaceFlag;                                       // 0x099D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x099E(0x0002) MISSED OFFSET
	float                                              ROTATE_SPEED_BONUS_AFTER_TURN;                            // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_TimeSinceTurn;                                         // 0x09A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_SensorActorForwardAngleWS;                             // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RUN_BEND_ACCEL;                                           // 0x09AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RUN_BEND_DEACCEL;                                         // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SLOPE_ANIM_MAX_ANGLE;                                     // 0x09B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WALK_DEACCEL_START_ANGLE;                                 // 0x09B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WALK_DEACCEL_FULL_ANGLE;                                  // 0x09BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RUN_DEACCEL_START_ANGLE;                                  // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RUN_DEACCEL_FULL_ANGLE;                                   // 0x09C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_GuideSteerStrength;                                    // 0x09C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PC_GuideDirection;                                        // 0x09CC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_RunInputWeightInterp;                                  // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_AI_AvoidanceAngleLerp;                                 // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_TimeLSNone;                                            // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_LockWalkAnimSpeed;                                     // 0x09E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_EnableSequenceRootMotion;                              // 0x09E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_StopTriggedByObstacle;                                 // 0x09E6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_DisableRootMotionAll;                                  // 0x09E7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_FPS_WALK_SPEED_RATIO;                                  // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_FPS_RUN_SPEED_RATIO;                                   // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WALK_ANIM_SPEED_SLOPE;                                    // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RUN_ANIM_SPEED_SLOPE;                                     // 0x09F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x8];                                       // 0x09F8(0x0008) MISSED OFFSET
	struct FTransform                                  PC_DoorAlignment;                                         // 0x0A00(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_SensorInputDoorQueued;                                 // 0x0A30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0A31(0x0003) MISSED OFFSET
	float                                              PC_DoorWaitForCameraAbort;                                // 0x0A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_Sensor_InputHeldFollowGuide;                           // 0x0A38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0A39(0x0003) MISSED OFFSET
	float                                              WALK_BEND_SPEED_ALPHA_MIN;                                // 0x0A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WALK_INPUT_MIN_SPEED_THRESH;                              // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WALK_INPUT_MAX_SPEED_THRESH;                              // 0x0A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TIME_FOR_ROT_SPEED_BONUS_AFTER_TURN;                      // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LEFT_STICK_INPUT_MIN_ROTATE_THRESH;                       // 0x0A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LEFT_STICK_INPUT_MAX_ROTATE_THRESH;                       // 0x0A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LEFT_STICK_ROTATE_WEIGHT_INTERP_TIME;                     // 0x0A54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_IsDebugRunEnabled;                                     // 0x0A58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x0A59(0x0007) MISSED OFFSET
	class UShapeComponent*                             PC_Sensor_TurnBackBox;                                    // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UShapeComponent*                             PC_State_TurnBackBox;                                     // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     PC_Sensor_TurnBacDir;                                     // 0x0A70(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_Sensor_GuideMagnitude;                                 // 0x0A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WALK_START_SPEED;                                         // 0x0A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WALK_ACCEL_MAX;                                           // 0x0A84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_Sensor_InputRunAxis;                                   // 0x0A88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   PC_RunAxisThresholds;                                     // 0x0A8C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_Sensor_InputMouseWalk;                                 // 0x0A94(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x0A95(0x0003) MISSED OFFSET
	class UCurveFloat*                                 SpeedToRotationSpeedCurve;                                // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_ForcedStop;                                            // 0x0AA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x0AA1(0x0007) MISSED OFFSET
	class UBPC_AdventureMouseControl_C*                MouseWalkComponent;                                       // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               PC_TalkItemDirOtherFlag;                                  // 0x0AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_Sensor_Input_AIRun;                                    // 0x0AB1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_Input_TalkSitFlag;                                     // 0x0AB2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_PC_Talk_ShowItem>                   PC_State_TalkShowState;                                   // 0x0AB3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WALK_SPEED_MANUAL_MAX;                                    // 0x0AB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_State_ObstacleStopSpeedInterp;                         // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PC_Sensor_InputLSTime;                                    // 0x0ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_AIControl;                                             // 0x0AC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x0AC1(0x0003) MISSED OFFSET
	struct FVector                                     PC_Sensor_LastNonZeroInputDir;                            // 0x0AC4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                PC_TalkItemShowType;                                      // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PC_State_DelayInteract;                                   // 0x0AD4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerCtrl.PlayerCtrl_C");
		return ptr;
	}


	int GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	bool PC_GetIsInFirstPersonMode();
	void PC_InitPawn(class ABP_S3_Character_Adventure_C* Pawn);
	bool PC_ShouldDelayTalkInteract();
	void PC_HasVirtualJoystickInput(bool* newParam);
	void UseRunEnergy();
	bool PC_TalkShowMotionIsCrouch();
	void PC_RequestFaceActor(class AActor* PC_Sensor_InputDirWS);
	void PC_StateProcMSLeave();
	bool PC_IsIdle();
	bool PC_IsSafeToPlayEventMontages();
	void PC_GetWalkStopMaxSpeed(float* WALK_SPEED_MAX);
	void PC_StopMontage(class UAnimMontage* Anim);
	class ABP_S3_Character_Adventure_C* GetAdventureCharacter();
	bool PC_ShouldRun();
	void PC_GetEnergyManager(class AS3EnergyManager** EnergyMan);
	void PC_StateProcTickWalk();
	bool PC_HasAxisInput(float Input, float DeadZone);
	void PC_ApplyInputDeadzone(float Input, float DeadZone, float* Gated);
	void PC_GateInputFloat(float Input, float* Gated);
	void PC_IsInputAllowed(bool* Allow);
	void PC_IsInputAllowed_SpecialCased(ES3PlayerBehavior SpecialException, bool* Allow);
	void PC_R2ButtonRunFlagSet(bool Value);
	void PC_StartWalkStopMontage(float CycleStartTime_Fraction_, class UAnimMontage* InputPin);
	void PC_GetWalkCycleTime(float* TimeFraction, bool* Valid);
	void PC_GetWalkCycleTimeFraction(float* TimeFraction, bool* Valid);
	void PC_IsRunning(bool* IsRunning);
	void PC_AllowZoomMode(bool* OK);
	void PC_HasMoveInput(bool* bMove);
	void PC_MatchTarget_RotationOnly(const struct FRotator& MatchRotation, float StartPercent, float EndPercent, float DeltaSeconds, struct FRotator* OutRotation);
	void PC_TurnBack(class UShapeComponent* Shape, const struct FVector& Normal, bool* bNewReaction);
	void PC_StateProcEnter_Stair();
	void PC_SkipTalkShowMotion();
	void PC_MustAdjustBeforeUseDoor(bool* bNeedsToAlgin);
	void PC_CanStopWithCurrentSpeed(bool* bCanStop);
	void PC_UpdateInputPostAI();
	void PC_StateProcTick_Door();
	void PC_GetShouldStopForTalk(bool* bShouldStop);
	void PC_CalculateObstacleStopParams(float* OutTargetSpeed, float* OutTargetDeaccel);
	void PC_TransitTalk();
	void PC_TalkShowMotionSelect(class UAnimMontage** OutMontage);
	void PC_StateProcMSE_Stop();
	void PC_StateProcMSE_Door();
	void PC_Sensor_UpdateNoInputForwardTrackAngle();
	void PC_RequestTargetSwitching(const struct FVector& PC_Sensor_InputDirWS, float PC_NPCSelectDir);
	void PC_ApplySlopeSpeedFactor(float OriginalSpeed, float SlopeAngle, float* OutSpeed);
	void PC_StateProcLeave_Stair();
	void PC_StateProcMSE_Stair();
	void PC_StateProcTick_Stair();
	void PC_StateProcTick_WalkStop();
	void PC_SensorDetectTurnDirection();
	void PC_AI_UpdateTargetSwitching();
	void PC_UpdateSensorHistory();
	void PC_UpdateSensor_References();
	void PC_UpdateSensor_Physical();
	void PC_StateProcMSE_Turn();
	void PC_Turn_GetTurnRelativeAngle(const struct FVector& Direction, float* Angle);
	void PC_StateProcTick_Turn();
	void PC_CalcFootPivotRootDelta(float Angle, struct FVector* Delta);
	void PC_TransitTurn();
	void PC_TransitStop();
	void PC_StopMontages(TArray<class UAnimMontage*>* AnimList);
	void PC_SetNextStateStair(TEnumAsByte<EN_PC_Stair> NextMS, bool CONTINUE, bool Interrupt);
	void PC_TransitStair();
	void PC_TransitWalk();
	void PC_StateProcLeave_Input();
	void PC_TransitIdle();
	void PC_TransitDoor();
	bool PC_IsAbleToTransitDoor();
	void PC_DetectObstacle_Test();
	void PC_IsAdjustedDoorFront(bool* Adjusted);
	void PC_SetNextStateDoor(TEnumAsByte<EN_PC_Door> NextMS, bool CONTINUE, bool Interrupt);
	void PC_UpdateAccessibleObject();
	void PC_AddDetectActorIfUnregistered();
	void PC_BeginPlayImpl();
	void PC_DrawShapeCollision(class UShapeComponent* Shape, float Thickness, const struct FLinearColor& Color, bool Enable);
	void PC_DrawText(const struct FString& Text, const struct FVector& StartPos, const struct FVector& Offset, bool Enable, const struct FLinearColor& Color);
	void PC_SetEnableFallDetection(bool Enable);
	void PC_AI_Runable(bool Start, bool* Runable);
	void PC_AI_Walkable(bool Start, bool* Walkable);
	void PC_ResetSensor();
	void PC_GetMontage(TEnumAsByte<EN_PC_EventMontage> MontageType, class UAnimMontage** Montage);
	void PC_SetNextStateStop(TEnumAsByte<EN_PC_Stop> NextMS, bool CONTINUE, bool Interrupt);
	void PC_LockInputCancel();
	void PC_LockInputDirTick();
	void PC_LockInputDir(float inDuration);
	void PC_DrawDirectionArrow(const struct FVector& StartPos, const struct FVector& Direction, float Length, float Thickness, const struct FLinearColor& Color, bool Enable);
	void PC_SensorUpdateInputDir();
	void PC_CalcDirectionType(const struct FVector& ForwardDir, const struct FVector& InputDir, TEnumAsByte<EN_PC_DirectionType>* DirectionType, float* AngleDegSigned);
	void PC_ResetInput();
	void PC_InputControl();
	void PC_IsPlayerBhv(ES3PlayerBehavior Behavior, bool* Same);
	void PC_IsTalkCrouchEnd(bool* TalkCrouch);
	void PC_IsTalkStand(bool* TalkCrouch);
	void PC_IsTalkCrouching(bool* TalkCrouch);
	void PC_ConvertBehaviorToState(ES3PlayerBehavior Behavior, TEnumAsByte<EN_PC_State>* State);
	void PC_ConvertBehaviorToMS(ES3PlayerBehavior Behavior, TEnumAsByte<EN_PC_State> State, unsigned char* MS);
	void PC_ElapseTimeState();
	void PC_TransitState();
	void PC_UpdateState();
	void PC_SetNextStateTalk(TEnumAsByte<EN_PC_Talk> NextMS, bool CONTINUE, bool Interrupt);
	void PC_SetNextStateTurn(TEnumAsByte<EN_PC_Turn> NextMS, bool CONTINUE, bool Interrupt);
	void PC_SetNextStateWalk(TEnumAsByte<EN_PC_Walk> NextMS, bool CONTINUE, bool Interrupt);
	void PC_SetNextStateStand(TEnumAsByte<EN_PC_Stand> NextMS, bool CONTINUE, bool Interrupt);
	void PC_SetNextState(TEnumAsByte<EN_PC_State> NextState, unsigned char NextMS, bool CONTINUE, bool Interrupt);
	void PC_StateProcLeave();
	void PC_StateProcMSEnter();
	void PC_IsPlayingMontageList(TArray<class UAnimMontage*>* AnimMontageList, bool* IsPlaying);
	void PC_IsPlayingMontage(class UAnimMontage* MontageRef, bool* IsPlaying);
	void PC_StateProcTick();
	void PC_StateProcEnter();
	void PC_UpdateSensor();
	void PC_IsAbleToTalk(bool* flag);
	void PC_Init();
	void PC_Calc(bool* flag);
	void PC_TalkShowMotionCalc();
	void PC_TalkShowMotionEnd(bool StopMotion);
	void PC_TalkShowMotionStart(const struct FName& ItemNameId, int showType, TEnumAsByte<EN_SHOW_ID> ItemShowTypeId, bool DirOtherFlag);
	void PC_TalkStartInit();
	void UserConstructionScript();
	void InpActEvt_SwitchTarget_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_VirtualJoystickOn_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_VirtualJoystickOn_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InternalRunAxis(float AxisValue);
	void InternalMoveForwardAxis(float AxisValue);
	void InternalMoveRightAxis(float AxisValue);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_7(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91(float AxisValue);
	void InpAxisEvt_RunAxis_K2Node_InputAxisEvent_13(float AxisValue);
	void BndEvt__BP_PlayerInputBufferComponent_K2Node_ComponentBoundEvent_0_OnTargetSelectAction__DelegateSignature();
	void DecideDetectAction(ES3ActionIconType Type);
	void MouseMoveAxii(const struct FVector2D& Axii);
	void SetVirtualMovementInput(const struct FVector& WorldVector, float Magnitude, bool Run);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Reinit();
	void BndEvt__BPC_PlayerTargetSwitcher_K2Node_ComponentBoundEvent_0_OnFaceDirection__DelegateSignature(const struct FVector& Direction);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_PlayerCtrl(int EntryPoint);
	void DetectFallDispatcher__DelegateSignature(const struct FVector& CharaPos, const struct FVector& CharaDir, bool IsRight);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
