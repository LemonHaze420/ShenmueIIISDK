#pragma once

#include "../SDK.h"

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function PlayerCtrl.PlayerCtrl_C.GetPriority
struct APlayerCtrl_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.GetDetectAction
struct APlayerCtrl_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_GetIsInFirstPersonMode
struct APlayerCtrl_C_PC_GetIsInFirstPersonMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_InitPawn
struct APlayerCtrl_C_PC_InitPawn_Params
{
	class ABP_S3_Character_Adventure_C*                Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_ShouldDelayTalkInteract
struct APlayerCtrl_C_PC_ShouldDelayTalkInteract_Params
{
	bool                                               bCanStop;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_HasVirtualJoystickInput
struct APlayerCtrl_C_PC_HasVirtualJoystickInput_Params
{
	bool                                               newParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.UseRunEnergy
struct APlayerCtrl_C_UseRunEnergy_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_TalkShowMotionIsCrouch
struct APlayerCtrl_C_PC_TalkShowMotionIsCrouch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_RequestFaceActor
struct APlayerCtrl_C_PC_RequestFaceActor_Params
{
	class AActor*                                      PC_Sensor_InputDirWS;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcMSLeave
struct APlayerCtrl_C_PC_StateProcMSLeave_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_IsIdle
struct APlayerCtrl_C_PC_IsIdle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_IsSafeToPlayEventMontages
struct APlayerCtrl_C_PC_IsSafeToPlayEventMontages_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_GetWalkStopMaxSpeed
struct APlayerCtrl_C_PC_GetWalkStopMaxSpeed_Params
{
	float                                              WALK_SPEED_MAX;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_StopMontage
struct APlayerCtrl_C_PC_StopMontage_Params
{
	class UAnimMontage*                                Anim;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.GetAdventureCharacter
struct APlayerCtrl_C_GetAdventureCharacter_Params
{
	class ABP_S3_Character_Adventure_C*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_ShouldRun
struct APlayerCtrl_C_PC_ShouldRun_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_GetEnergyManager
struct APlayerCtrl_C_PC_GetEnergyManager_Params
{
	class AS3EnergyManager*                            EnergyMan;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcTickWalk
struct APlayerCtrl_C_PC_StateProcTickWalk_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_HasAxisInput
struct APlayerCtrl_C_PC_HasAxisInput_Params
{
	float                                              Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeadZone;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_ApplyInputDeadzone
struct APlayerCtrl_C_PC_ApplyInputDeadzone_Params
{
	float                                              Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeadZone;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Gated;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_GateInputFloat
struct APlayerCtrl_C_PC_GateInputFloat_Params
{
	float                                              Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Gated;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_IsInputAllowed
struct APlayerCtrl_C_PC_IsInputAllowed_Params
{
	bool                                               Allow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_IsInputAllowed_SpecialCased
struct APlayerCtrl_C_PC_IsInputAllowed_SpecialCased_Params
{
	ES3PlayerBehavior                                  SpecialException;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Allow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_R2ButtonRunFlagSet
struct APlayerCtrl_C_PC_R2ButtonRunFlagSet_Params
{
	bool                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_StartWalkStopMontage
struct APlayerCtrl_C_PC_StartWalkStopMontage_Params
{
	float                                              CycleStartTime_Fraction_;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_GetWalkCycleTime
struct APlayerCtrl_C_PC_GetWalkCycleTime_Params
{
	float                                              TimeFraction;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_GetWalkCycleTimeFraction
struct APlayerCtrl_C_PC_GetWalkCycleTimeFraction_Params
{
	float                                              TimeFraction;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_IsRunning
struct APlayerCtrl_C_PC_IsRunning_Params
{
	bool                                               IsRunning;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_AllowZoomMode
struct APlayerCtrl_C_PC_AllowZoomMode_Params
{
	bool                                               OK;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_HasMoveInput
struct APlayerCtrl_C_PC_HasMoveInput_Params
{
	bool                                               bMove;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_MatchTarget_RotationOnly
struct APlayerCtrl_C_PC_MatchTarget_RotationOnly_Params
{
	struct FRotator                                    MatchRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              StartPercent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndPercent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_TurnBack
struct APlayerCtrl_C_PC_TurnBack_Params
{
	class UShapeComponent*                             Shape;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bNewReaction;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcEnter_Stair
struct APlayerCtrl_C_PC_StateProcEnter_Stair_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_SkipTalkShowMotion
struct APlayerCtrl_C_PC_SkipTalkShowMotion_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_MustAdjustBeforeUseDoor
struct APlayerCtrl_C_PC_MustAdjustBeforeUseDoor_Params
{
	bool                                               bNeedsToAlgin;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_CanStopWithCurrentSpeed
struct APlayerCtrl_C_PC_CanStopWithCurrentSpeed_Params
{
	bool                                               bCanStop;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_UpdateInputPostAI
struct APlayerCtrl_C_PC_UpdateInputPostAI_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcTick_Door
struct APlayerCtrl_C_PC_StateProcTick_Door_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_GetShouldStopForTalk
struct APlayerCtrl_C_PC_GetShouldStopForTalk_Params
{
	bool                                               bShouldStop;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_CalculateObstacleStopParams
struct APlayerCtrl_C_PC_CalculateObstacleStopParams_Params
{
	float                                              OutTargetSpeed;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutTargetDeaccel;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_TransitTalk
struct APlayerCtrl_C_PC_TransitTalk_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_TalkShowMotionSelect
struct APlayerCtrl_C_PC_TalkShowMotionSelect_Params
{
	class UAnimMontage*                                OutMontage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcMSE_Stop
struct APlayerCtrl_C_PC_StateProcMSE_Stop_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcMSE_Door
struct APlayerCtrl_C_PC_StateProcMSE_Door_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_Sensor_UpdateNoInputForwardTrackAngle
struct APlayerCtrl_C_PC_Sensor_UpdateNoInputForwardTrackAngle_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_RequestTargetSwitching
struct APlayerCtrl_C_PC_RequestTargetSwitching_Params
{
	struct FVector                                     PC_Sensor_InputDirWS;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              PC_NPCSelectDir;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_ApplySlopeSpeedFactor
struct APlayerCtrl_C_PC_ApplySlopeSpeedFactor_Params
{
	float                                              OriginalSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SlopeAngle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutSpeed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcLeave_Stair
struct APlayerCtrl_C_PC_StateProcLeave_Stair_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcMSE_Stair
struct APlayerCtrl_C_PC_StateProcMSE_Stair_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcTick_Stair
struct APlayerCtrl_C_PC_StateProcTick_Stair_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcTick_WalkStop
struct APlayerCtrl_C_PC_StateProcTick_WalkStop_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_SensorDetectTurnDirection
struct APlayerCtrl_C_PC_SensorDetectTurnDirection_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_AI_UpdateTargetSwitching
struct APlayerCtrl_C_PC_AI_UpdateTargetSwitching_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_UpdateSensorHistory
struct APlayerCtrl_C_PC_UpdateSensorHistory_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_UpdateSensor_References
struct APlayerCtrl_C_PC_UpdateSensor_References_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_UpdateSensor_Physical
struct APlayerCtrl_C_PC_UpdateSensor_Physical_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcMSE_Turn
struct APlayerCtrl_C_PC_StateProcMSE_Turn_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_Turn_GetTurnRelativeAngle
struct APlayerCtrl_C_PC_Turn_GetTurnRelativeAngle_Params
{
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcTick_Turn
struct APlayerCtrl_C_PC_StateProcTick_Turn_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_CalcFootPivotRootDelta
struct APlayerCtrl_C_PC_CalcFootPivotRootDelta_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Delta;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_TransitTurn
struct APlayerCtrl_C_PC_TransitTurn_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_TransitStop
struct APlayerCtrl_C_PC_TransitStop_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_StopMontages
struct APlayerCtrl_C_PC_StopMontages_Params
{
	TArray<class UAnimMontage*>                        AnimList;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_SetNextStateStair
struct APlayerCtrl_C_PC_SetNextStateStair_Params
{
	TEnumAsByte<EN_PC_Stair>                           NextMS;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Continue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interrupt;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_TransitStair
struct APlayerCtrl_C_PC_TransitStair_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_TransitWalk
struct APlayerCtrl_C_PC_TransitWalk_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcLeave_Input
struct APlayerCtrl_C_PC_StateProcLeave_Input_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_TransitIdle
struct APlayerCtrl_C_PC_TransitIdle_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_TransitDoor
struct APlayerCtrl_C_PC_TransitDoor_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_IsAbleToTransitDoor
struct APlayerCtrl_C_PC_IsAbleToTransitDoor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_DetectObstacle_Test
struct APlayerCtrl_C_PC_DetectObstacle_Test_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_IsAdjustedDoorFront
struct APlayerCtrl_C_PC_IsAdjustedDoorFront_Params
{
	bool                                               Adjusted;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_SetNextStateDoor
struct APlayerCtrl_C_PC_SetNextStateDoor_Params
{
	TEnumAsByte<EN_PC_Door>                            NextMS;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Continue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interrupt;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_UpdateAccessibleObject
struct APlayerCtrl_C_PC_UpdateAccessibleObject_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_AddDetectActorIfUnregistered
struct APlayerCtrl_C_PC_AddDetectActorIfUnregistered_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_BeginPlayImpl
struct APlayerCtrl_C_PC_BeginPlayImpl_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_DrawShapeCollision
struct APlayerCtrl_C_PC_DrawShapeCollision_Params
{
	class UShapeComponent*                             Shape;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Thickness;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_DrawText
struct APlayerCtrl_C_PC_DrawText_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FVector                                     StartPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_SetEnableFallDetection
struct APlayerCtrl_C_PC_SetEnableFallDetection_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_AI_Runable
struct APlayerCtrl_C_PC_AI_Runable_Params
{
	bool                                               Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Runable;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_AI_Walkable
struct APlayerCtrl_C_PC_AI_Walkable_Params
{
	bool                                               Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Walkable;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_ResetSensor
struct APlayerCtrl_C_PC_ResetSensor_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_GetMontage
struct APlayerCtrl_C_PC_GetMontage_Params
{
	TEnumAsByte<EN_PC_EventMontage>                    MontageType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_SetNextStateStop
struct APlayerCtrl_C_PC_SetNextStateStop_Params
{
	TEnumAsByte<EN_PC_Stop>                            NextMS;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Continue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interrupt;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_LockInputCancel
struct APlayerCtrl_C_PC_LockInputCancel_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_LockInputDirTick
struct APlayerCtrl_C_PC_LockInputDirTick_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_LockInputDir
struct APlayerCtrl_C_PC_LockInputDir_Params
{
	float                                              inDuration;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_DrawDirectionArrow
struct APlayerCtrl_C_PC_DrawDirectionArrow_Params
{
	struct FVector                                     StartPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Length;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_SensorUpdateInputDir
struct APlayerCtrl_C_PC_SensorUpdateInputDir_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_CalcDirectionType
struct APlayerCtrl_C_PC_CalcDirectionType_Params
{
	struct FVector                                     ForwardDir;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     InputDir;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TEnumAsByte<EN_PC_DirectionType>                   DirectionType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AngleDegSigned;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_ResetInput
struct APlayerCtrl_C_PC_ResetInput_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_InputControl
struct APlayerCtrl_C_PC_InputControl_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_IsPlayerBhv
struct APlayerCtrl_C_PC_IsPlayerBhv_Params
{
	ES3PlayerBehavior                                  Behavior;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Same;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_IsTalkCrouchEnd
struct APlayerCtrl_C_PC_IsTalkCrouchEnd_Params
{
	bool                                               TalkCrouch;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_IsTalkStand
struct APlayerCtrl_C_PC_IsTalkStand_Params
{
	bool                                               TalkCrouch;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_IsTalkCrouching
struct APlayerCtrl_C_PC_IsTalkCrouching_Params
{
	bool                                               TalkCrouch;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_ConvertBehaviorToState
struct APlayerCtrl_C_PC_ConvertBehaviorToState_Params
{
	ES3PlayerBehavior                                  Behavior;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_PC_State>                           State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_ConvertBehaviorToMS
struct APlayerCtrl_C_PC_ConvertBehaviorToMS_Params
{
	ES3PlayerBehavior                                  Behavior;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_PC_State>                           State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MS;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_ElapseTimeState
struct APlayerCtrl_C_PC_ElapseTimeState_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_TransitState
struct APlayerCtrl_C_PC_TransitState_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_UpdateState
struct APlayerCtrl_C_PC_UpdateState_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_SetNextStateTalk
struct APlayerCtrl_C_PC_SetNextStateTalk_Params
{
	TEnumAsByte<EN_PC_Talk>                            NextMS;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Continue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interrupt;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_SetNextStateTurn
struct APlayerCtrl_C_PC_SetNextStateTurn_Params
{
	TEnumAsByte<EN_PC_Turn>                            NextMS;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Continue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interrupt;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_SetNextStateWalk
struct APlayerCtrl_C_PC_SetNextStateWalk_Params
{
	TEnumAsByte<EN_PC_Walk>                            NextMS;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Continue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interrupt;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_SetNextStateStand
struct APlayerCtrl_C_PC_SetNextStateStand_Params
{
	TEnumAsByte<EN_PC_Stand>                           NextMS;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Continue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interrupt;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_SetNextState
struct APlayerCtrl_C_PC_SetNextState_Params
{
	TEnumAsByte<EN_PC_State>                           NextState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NextMS;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Continue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interrupt;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcLeave
struct APlayerCtrl_C_PC_StateProcLeave_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcMSEnter
struct APlayerCtrl_C_PC_StateProcMSEnter_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_IsPlayingMontageList
struct APlayerCtrl_C_PC_IsPlayingMontageList_Params
{
	TArray<class UAnimMontage*>                        AnimMontageList;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsPlaying;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_IsPlayingMontage
struct APlayerCtrl_C_PC_IsPlayingMontage_Params
{
	class UAnimMontage*                                MontageRef;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsPlaying;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcTick
struct APlayerCtrl_C_PC_StateProcTick_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_StateProcEnter
struct APlayerCtrl_C_PC_StateProcEnter_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_UpdateSensor
struct APlayerCtrl_C_PC_UpdateSensor_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_IsAbleToTalk
struct APlayerCtrl_C_PC_IsAbleToTalk_Params
{
	bool                                               flag;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_Init
struct APlayerCtrl_C_PC_Init_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_Calc
struct APlayerCtrl_C_PC_Calc_Params
{
	bool                                               flag;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_TalkShowMotionCalc
struct APlayerCtrl_C_PC_TalkShowMotionCalc_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.PC_TalkShowMotionEnd
struct APlayerCtrl_C_PC_TalkShowMotionEnd_Params
{
	bool                                               StopMotion;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_TalkShowMotionStart
struct APlayerCtrl_C_PC_TalkShowMotionStart_Params
{
	struct FName                                       ItemNameId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                showType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_SHOW_ID>                            ItemShowTypeId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DirOtherFlag;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.PC_TalkStartInit
struct APlayerCtrl_C_PC_TalkStartInit_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.UserConstructionScript
struct APlayerCtrl_C_UserConstructionScript_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.InpActEvt_SwitchTarget_K2Node_InputActionEvent_6
struct APlayerCtrl_C_InpActEvt_SwitchTarget_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerCtrl.PlayerCtrl_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_4
struct APlayerCtrl_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerCtrl.PlayerCtrl_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_3
struct APlayerCtrl_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerCtrl.PlayerCtrl_C.InpActEvt_VirtualJoystickOn_K2Node_InputActionEvent_5
struct APlayerCtrl_C_InpActEvt_VirtualJoystickOn_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerCtrl.PlayerCtrl_C.InpActEvt_VirtualJoystickOn_K2Node_InputActionEvent_4
struct APlayerCtrl_C_InpActEvt_VirtualJoystickOn_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerCtrl.PlayerCtrl_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91
struct APlayerCtrl_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.InternalRunAxis
struct APlayerCtrl_C_InternalRunAxis_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.InternalMoveForwardAxis
struct APlayerCtrl_C_InternalMoveForwardAxis_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.InternalMoveRightAxis
struct APlayerCtrl_C_InternalMoveRightAxis_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_7
struct APlayerCtrl_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_7_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.InpAxisEvt_RunAxis_K2Node_InputAxisEvent_13
struct APlayerCtrl_C_InpAxisEvt_RunAxis_K2Node_InputAxisEvent_13_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.BndEvt__BP_PlayerInputBufferComponent_K2Node_ComponentBoundEvent_0_OnTargetSelectAction__DelegateSignature
struct APlayerCtrl_C_BndEvt__BP_PlayerInputBufferComponent_K2Node_ComponentBoundEvent_0_OnTargetSelectAction__DelegateSignature_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.DecideDetectAction
struct APlayerCtrl_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.MouseMoveAxii
struct APlayerCtrl_C_MouseMoveAxii_Params
{
	struct FVector2D                                   Axii;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.SetVirtualMovementInput
struct APlayerCtrl_C_SetVirtualMovementInput_Params
{
	struct FVector                                     WorldVector;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Magnitude;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Run;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.ReceiveBeginPlay
struct APlayerCtrl_C_ReceiveBeginPlay_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.ReceiveTick
struct APlayerCtrl_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.Reinit
struct APlayerCtrl_C_Reinit_Params
{
};

// Function PlayerCtrl.PlayerCtrl_C.BndEvt__BPC_PlayerTargetSwitcher_K2Node_ComponentBoundEvent_0_OnFaceDirection__DelegateSignature
struct APlayerCtrl_C_BndEvt__BPC_PlayerTargetSwitcher_K2Node_ComponentBoundEvent_0_OnFaceDirection__DelegateSignature_Params
{
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.ReceiveEndPlay
struct APlayerCtrl_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.ExecuteUbergraph_PlayerCtrl
struct APlayerCtrl_C_ExecuteUbergraph_PlayerCtrl_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerCtrl.PlayerCtrl_C.DetectFallDispatcher__DelegateSignature
struct APlayerCtrl_C_DetectFallDispatcher__DelegateSignature_Params
{
	struct FVector                                     CharaPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     CharaDir;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               IsRight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
