#pragma once

#include "../SDK.h"

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_S3AttentionController.BP_S3AttentionController_C.GetPriority
struct ABP_S3AttentionController_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.GetDetectAction
struct ABP_S3AttentionController_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.UpdateButton
struct ABP_S3AttentionController_C_UpdateButton_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.ResetLevelState
struct ABP_S3AttentionController_C_ResetLevelState_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.IsStartAC
struct ABP_S3AttentionController_C_IsStartAC_Params
{
	bool                                               StartAC;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.OnAttentionLevelUnloaded
struct ABP_S3AttentionController_C_OnAttentionLevelUnloaded_Params
{
	bool                                               NeetFade;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.UpdateVisibleActorControl
struct ABP_S3AttentionController_C_UpdateVisibleActorControl_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.SetActorVisibleControl
struct ABP_S3AttentionController_C_SetActorVisibleControl_Params
{
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.CheckCameraHit
struct ABP_S3AttentionController_C_CheckCameraHit_Params
{
	struct FVector                                     MoveVec;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               bHit;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.CheckDirection
struct ABP_S3AttentionController_C_CheckDirection_Params
{
	class US3AttentionComponent*                       Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bFind;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.ClearEmaSubtitles
struct ABP_S3AttentionController_C_ClearEmaSubtitles_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.DrawEmaSubtitles
struct ABP_S3AttentionController_C_DrawEmaSubtitles_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.IsEnabledAttention
struct ABP_S3AttentionController_C_IsEnabledAttention_Params
{
	class US3AttentionComponent*                       Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.PlayBGMwithManager
struct ABP_S3AttentionController_C_PlayBGMwithManager_Params
{
	class USoundAtomCue*                               Cue;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3AttentionManager_C*                    Manager;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.SetEnabledTimerEvent
struct ABP_S3AttentionController_C_SetEnabledTimerEvent_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.UpdateTimerEvent
struct ABP_S3AttentionController_C_UpdateTimerEvent_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.ForceExecConditionEvent
struct ABP_S3AttentionController_C_ForceExecConditionEvent_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.ExecConditionEvent
struct ABP_S3AttentionController_C_ExecConditionEvent_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.IsStepEvent
struct ABP_S3AttentionController_C_IsStepEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.StopGameTime
struct ABP_S3AttentionController_C_StopGameTime_Params
{
	bool                                               Stop;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.IsDisableAttentionState
struct ABP_S3AttentionController_C_IsDisableAttentionState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.SetSearchStateEnabled
struct ABP_S3AttentionController_C_SetSearchStateEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.IsBackerACEvent
struct ABP_S3AttentionController_C_IsBackerACEvent_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.IsInputActionEnabled
struct ABP_S3AttentionController_C_IsInputActionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.IsEffectEnd
struct ABP_S3AttentionController_C_IsEffectEnd_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.EndAttention
struct ABP_S3AttentionController_C_EndAttention_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.SetInputActionEnabled
struct ABP_S3AttentionController_C_SetInputActionEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.NotificationEvent
struct ABP_S3AttentionController_C_NotificationEvent_Params
{
	struct FString                                     ScriptLabel;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.CalcFrontVector
struct ABP_S3AttentionController_C_CalcFrontVector_Params
{
	struct FVector                                     FrontVec;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.SetAdjacentComponent
struct ABP_S3AttentionController_C_SetAdjacentComponent_Params
{
	class US3AttentionComponent*                       AdjacentComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.TraceRotateTarget
struct ABP_S3AttentionController_C_TraceRotateTarget_Params
{
	TEnumAsByte<ECarouselRotate>                       Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.SetAttentionComponent
struct ABP_S3AttentionController_C_SetAttentionComponent_Params
{
	class US3AttentionComponent*                       AttentionComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class US3AttentionComponent*                       Output;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.UpdateCursor
struct ABP_S3AttentionController_C_UpdateCursor_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.ResetEffectEndFlag
struct ABP_S3AttentionController_C_ResetEffectEndFlag_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.DrawAttentionEffect
struct ABP_S3AttentionController_C_DrawAttentionEffect_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.SetPlayerVisibility
struct ABP_S3AttentionController_C_SetPlayerVisibility_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.UpdateZoomRate
struct ABP_S3AttentionController_C_UpdateZoomRate_Params
{
	float                                              CameraZoomOffset;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.MultiCapsuleTrace
struct ABP_S3AttentionController_C_MultiCapsuleTrace_Params
{
	struct FVector                                     Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ignoreActors;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               DEBUG;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	struct FVector                                     MoveVec;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.CapsuleTrace
struct ABP_S3AttentionController_C_CapsuleTrace_Params
{
	struct FVector                                     Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfHeight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ignoreActors;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.ResetCamera
struct ABP_S3AttentionController_C_ResetCamera_Params
{
	float                                              BlendTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.ExitAttentionRequest
struct ABP_S3AttentionController_C_ExitAttentionRequest_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.ExitAttention
struct ABP_S3AttentionController_C_ExitAttention_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.PlayGetSE
struct ABP_S3AttentionController_C_PlayGetSE_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.InputAction
struct ABP_S3AttentionController_C_InputAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.IsLookActor
struct ABP_S3AttentionController_C_IsLookActor_Params
{
	struct FVector                                     StartTrace;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     EndTrace;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Look;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.SearchReset
struct ABP_S3AttentionController_C_SearchReset_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.StartAttention
struct ABP_S3AttentionController_C_StartAttention_Params
{
	class US3AttentionComponent*                       InAttentionComponent;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     InHitLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.SearchTarget
struct ABP_S3AttentionController_C_SearchTarget_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.FreeMove
struct ABP_S3AttentionController_C_FreeMove_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.CheckNeighbourTarget
struct ABP_S3AttentionController_C_CheckNeighbourTarget_Params
{
	class US3AttentionComponent*                       Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.DrawArrow
struct ABP_S3AttentionController_C_DrawArrow_Params
{
	struct FVector                                     Vec;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.DrawNextDirection
struct ABP_S3AttentionController_C_DrawNextDirection_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.InputKey
struct ABP_S3AttentionController_C_InputKey_Params
{
	struct FName                                       KeyName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.CheckCondition
struct ABP_S3AttentionController_C_CheckCondition_Params
{
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.CameraSetting
struct ABP_S3AttentionController_C_CameraSetting_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.MoveCamera
struct ABP_S3AttentionController_C_MoveCamera_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.ChangeTarget
struct ABP_S3AttentionController_C_ChangeTarget_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.CalcNormal
struct ABP_S3AttentionController_C_CalcNormal_Params
{
	class US3AttentionComponent*                       Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.TraceNextTarget
struct ABP_S3AttentionController_C_TraceNextTarget_Params
{
	class US3AttentionComponent*                       Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       KeyName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3AttentionComponent*                       NextComponent;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.PlayScript
struct ABP_S3AttentionController_C_PlayScript_Params
{
	struct FString                                     ScriptLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               DisableButton;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Once;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Playing;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.UserConstructionScript
struct ABP_S3AttentionController_C_UserConstructionScript_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.InpActEvt_SearchUpSelect_K2Node_InputActionEvent_8
struct ABP_S3AttentionController_C_InpActEvt_SearchUpSelect_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.InpActEvt_SearchDownSelect_K2Node_InputActionEvent_7
struct ABP_S3AttentionController_C_InpActEvt_SearchDownSelect_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_6
struct ABP_S3AttentionController_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_5
struct ABP_S3AttentionController_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.ReceiveBeginPlay
struct ABP_S3AttentionController_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.ReceiveTick
struct ABP_S3AttentionController_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80
struct ABP_S3AttentionController_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91
struct ABP_S3AttentionController_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.DelayStartAttention
struct ABP_S3AttentionController_C_DelayStartAttention_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.DelayEndAttention
struct ABP_S3AttentionController_C_DelayEndAttention_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.AxisToDirection
struct ABP_S3AttentionController_C_AxisToDirection_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_61
struct ABP_S3AttentionController_C_InpAxisEvt_ZoomAxis_K2Node_InputAxisEvent_61_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.DecideDetectAction
struct ABP_S3AttentionController_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.StartACEvent
struct ABP_S3AttentionController_C_StartACEvent_Params
{
	class UTalkScript*                                 ACEventScript;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.Event_CameraZoomAxis
struct ABP_S3AttentionController_C_Event_CameraZoomAxis_Params
{
	float                                              Axis;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.ReceiveEndPlay
struct ABP_S3AttentionController_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.ExecuteUbergraph_BP_S3AttentionController
struct ABP_S3AttentionController_C_ExecuteUbergraph_BP_S3AttentionController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.OnExitAttentin__DelegateSignature
struct ABP_S3AttentionController_C_OnExitAttentin__DelegateSignature_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.OnEndAttention__DelegateSignature
struct ABP_S3AttentionController_C_OnEndAttention__DelegateSignature_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.OnStartAttention__DelegateSignature
struct ABP_S3AttentionController_C_OnStartAttention__DelegateSignature_Params
{
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.OnFindNPC__DelegateSignature
struct ABP_S3AttentionController_C_OnFindNPC__DelegateSignature_Params
{
	class ABP_ScheduleNPC_C*                           NPC;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3AttentionController.BP_S3AttentionController_C.OnAccordCondition__DelegateSignature
struct ABP_S3AttentionController_C_OnAccordCondition__DelegateSignature_Params
{
	struct FString                                     EventId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
