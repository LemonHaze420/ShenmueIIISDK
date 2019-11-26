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

// Function BP_Forklift_New.BP_Forklift_New_C.CheckNeedReverseHit
struct ABP_Forklift_New_C_CheckNeedReverseHit_Params
{
	struct FVector                                     ImpactNormal;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.DisableUpdateSound
struct ABP_Forklift_New_C_DisableUpdateSound_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.ChangeLoopSEState
struct ABP_Forklift_New_C_ChangeLoopSEState_Params
{
	bool                                               Stop;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.IsPlayingScriptLabel
struct ABP_Forklift_New_C_IsPlayingScriptLabel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.CheckLiftMoveSafety
struct ABP_Forklift_New_C_CheckLiftMoveSafety_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.SetScriptLabels
struct ABP_Forklift_New_C_SetScriptLabels_Params
{
	TArray<struct FName>                               ExistUp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               Timeup;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Forklift_New.BP_Forklift_New_C.StopPlayingFeedBack
struct ABP_Forklift_New_C_StopPlayingFeedBack_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.IsInputEnabled
struct ABP_Forklift_New_C_IsInputEnabled_Params
{
	bool                                               bInputEnabled;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.DebugLog
struct ABP_Forklift_New_C_DebugLog_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.GetScriptLabel
struct ABP_Forklift_New_C_GetScriptLabel_Params
{
	TEnumAsByte<E_MiniGame_FL_LabelType>               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.PlayScriptLabel
struct ABP_Forklift_New_C_PlayScriptLabel_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.ResetRespawnFlag
struct ABP_Forklift_New_C_ResetRespawnFlag_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.CollisionCheck
struct ABP_Forklift_New_C_CollisionCheck_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.CheckLiftMove
struct ABP_Forklift_New_C_CheckLiftMove_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.SetEnabledSpeedControlCount
struct ABP_Forklift_New_C_SetEnabledSpeedControlCount_Params
{
	bool                                               Add;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.InitializeValue
struct ABP_Forklift_New_C_InitializeValue_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.UpdateSteeringAnim
struct ABP_Forklift_New_C_UpdateSteeringAnim_Params
{
	float                                              InputValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.UpdateLight
struct ABP_Forklift_New_C_UpdateLight_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.GetClothMeshComponent
struct ABP_Forklift_New_C_GetClothMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.ForceMoveLiftTopLocation
struct ABP_Forklift_New_C_ForceMoveLiftTopLocation_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.UpdateCanDownAreaFlag
struct ABP_Forklift_New_C_UpdateCanDownAreaFlag_Params
{
	bool                                               ChangeState;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.CheckDownContainer
struct ABP_Forklift_New_C_CheckDownContainer_Params
{
	bool                                               Check;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.ReMoveLift
struct ABP_Forklift_New_C_ReMoveLift_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.CheckHitSomethingOnTheLine
struct ABP_Forklift_New_C_CheckHitSomethingOnTheLine_Params
{
	struct FVector                                     StartPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     EndPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      Hit;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.CheckUpContainer
struct ABP_Forklift_New_C_CheckUpContainer_Params
{
	bool                                               Check;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.CheckCanLiftDonw
struct ABP_Forklift_New_C_CheckCanLiftDonw_Params
{
	bool                                               CanDown;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.CheckHitContainerOnTheLine
struct ABP_Forklift_New_C_CheckHitContainerOnTheLine_Params
{
	struct FVector                                     StartPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     EndPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class ABP_FL_Container_C*                          Hit;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.CanDownContainer
struct ABP_Forklift_New_C_CanDownContainer_Params
{
	bool                                               CanDown;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.UpdateContainerCollision
struct ABP_Forklift_New_C_UpdateContainerCollision_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.SetForkAlpha
struct ABP_Forklift_New_C_SetForkAlpha_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.GetForkAlpha
struct ABP_Forklift_New_C_GetForkAlpha_Params
{
	float                                              Alpha;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.UpdateLiftUpDown
struct ABP_Forklift_New_C_UpdateLiftUpDown_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.MoveLift
struct ABP_Forklift_New_C_MoveLift_Params
{
	TEnumAsByte<E_MiniGame_FL_LiftHeight>              NextLiftHeight;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.UserConstructionScript
struct ABP_Forklift_New_C_UserConstructionScript_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.ShakeTimeLine__FinishedFunc
struct ABP_Forklift_New_C_ShakeTimeLine__FinishedFunc_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.ShakeTimeLine__UpdateFunc
struct ABP_Forklift_New_C_ShakeTimeLine__UpdateFunc_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.ReceiveBeginPlay
struct ABP_Forklift_New_C_ReceiveBeginPlay_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.StopLiftMove
struct ABP_Forklift_New_C_StopLiftMove_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.InputForkDown
struct ABP_Forklift_New_C_InputForkDown_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.BndEvt__ContainerSensor_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Forklift_New_C_BndEvt__ContainerSensor_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.BndEvt__ContainerSensor_K2Node_ComponentBoundEvent_43_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Forklift_New_C_BndEvt__ContainerSensor_K2Node_ComponentBoundEvent_43_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.BndEvt__LiftCollision_K2Node_ComponentBoundEvent_42_ComponentHitSignature__DelegateSignature
struct ABP_Forklift_New_C_BndEvt__LiftCollision_K2Node_ComponentBoundEvent_42_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.ReceiveTick
struct ABP_Forklift_New_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.ForceStop
struct ABP_Forklift_New_C_ForceStop_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.InputChangeCamera
struct ABP_Forklift_New_C_InputChangeCamera_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.PauseForMap
struct ABP_Forklift_New_C_PauseForMap_Params
{
	bool                                               Pause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.Event_InputThrottle
struct ABP_Forklift_New_C_Event_InputThrottle_Params
{
	float                                              Throttle_Axis;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.Event_InputSteering
struct ABP_Forklift_New_C_Event_InputSteering_Params
{
	float                                              Steering_Axis;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.InitializeSound
struct ABP_Forklift_New_C_InitializeSound_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.Update Engine Sound
struct ABP_Forklift_New_C_Update_Engine_Sound_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.BndEvt__CrushSoundCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Forklift_New_C_BndEvt__CrushSoundCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.BndEvt__ForwardCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_Forklift_New_C_BndEvt__ForwardCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.ReceiveEndPlay
struct ABP_Forklift_New_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.PlayScriptWithInputOff
struct ABP_Forklift_New_C_PlayScriptWithInputOff_Params
{
	TEnumAsByte<E_MiniGame_FL_LabelType>               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.EndGameWithPlayingLabel
struct ABP_Forklift_New_C_EndGameWithPlayingLabel_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.ReverseLift
struct ABP_Forklift_New_C_ReverseLift_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.ExecuteUbergraph_BP_Forklift_New
struct ABP_Forklift_New_C_ExecuteUbergraph_BP_Forklift_New_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Forklift_New.BP_Forklift_New_C.OnEndwithPlayingLabelDispacher__DelegateSignature
struct ABP_Forklift_New_C_OnEndwithPlayingLabelDispacher__DelegateSignature_Params
{
};

// Function BP_Forklift_New.BP_Forklift_New_C.OnRespawnDispacher__DelegateSignature
struct ABP_Forklift_New_C_OnRespawnDispacher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
