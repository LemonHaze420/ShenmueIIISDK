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

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetHelpName
struct ABP_S3ItemSpawner_C_GetHelpName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetHelpPriority
struct ABP_S3ItemSpawner_C_GetHelpPriority_Params
{
	ES3HelpPriority                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsActivateHelp
struct ABP_S3ItemSpawner_C_IsActivateHelp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.RegisterHelp
struct ABP_S3ItemSpawner_C_RegisterHelp_Params
{
	ES3HelpRegisterTiming                              Timing;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.UnregisterHelp
struct ABP_S3ItemSpawner_C_UnregisterHelp_Params
{
	ES3HelpRegisterTiming                              Timing;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.SetAquisitionItem
struct ABP_S3ItemSpawner_C_SetAquisitionItem_Params
{
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsAcquisitionItem
struct ABP_S3ItemSpawner_C_IsAcquisitionItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.InitializeSearchItemActor
struct ABP_S3ItemSpawner_C_InitializeSearchItemActor_Params
{
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsPlayOnlyLookScript
struct ABP_S3ItemSpawner_C_IsPlayOnlyLookScript_Params
{
	bool                                               isPlay;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetUniqueCameraTransform
struct ABP_S3ItemSpawner_C_GetUniqueCameraTransform_Params
{
	struct FTransform                                  Transform;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsLooking
struct ABP_S3ItemSpawner_C_IsLooking_Params
{
	bool                                               Look;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetCameraLocationOffset
struct ABP_S3ItemSpawner_C_GetCameraLocationOffset_Params
{
	struct FVector                                     CameraLocationOffset;                                     // (Parm, OutParm, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.GetItemIDAsName
struct ABP_S3ItemSpawner_C_GetItemIDAsName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.UniqueActionOnFind
struct ABP_S3ItemSpawner_C_UniqueActionOnFind_Params
{
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ForceFindSelf
struct ABP_S3ItemSpawner_C_ForceFindSelf_Params
{
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.RemovalItem
struct ABP_S3ItemSpawner_C_RemovalItem_Params
{
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsCompleted
struct ABP_S3ItemSpawner_C_IsCompleted_Params
{
	bool                                               bCompleted;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.InFront
struct ABP_S3ItemSpawner_C_InFront_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.MyDestructor
struct ABP_S3ItemSpawner_C_MyDestructor_Params
{
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.CalcTargetDirection
struct ABP_S3ItemSpawner_C_CalcTargetDirection_Params
{
	class ABP_S3ItemSpawner_C*                         BP_S3ItemSpawner;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PC_Sensor_Input_Dir_WS;                                   // (Parm, OutParm, IsPlainOldData)
	float                                              PC_NPCSelect_Dir;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.SetSearchStep
struct ABP_S3ItemSpawner_C_SetSearchStep_Params
{
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.SwitchTarget
struct ABP_S3ItemSpawner_C_SwitchTarget_Params
{
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsCurrentItem
struct ABP_S3ItemSpawner_C_IsCurrentItem_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.IsOverlappingPlayer
struct ABP_S3ItemSpawner_C_IsOverlappingPlayer_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RangeFlag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.OverlappingCheck
struct ABP_S3ItemSpawner_C_OverlappingCheck_Params
{
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.UpdateEffect
struct ABP_S3ItemSpawner_C_UpdateEffect_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.CalcRelativeAngle
struct ABP_S3ItemSpawner_C_CalcRelativeAngle_Params
{
	float                                              RelativeAngle;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CurrentItem;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.CreateEffect
struct ABP_S3ItemSpawner_C_CreateEffect_Params
{
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.CalcCameraTransform
struct ABP_S3ItemSpawner_C_CalcCameraTransform_Params
{
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.Initialize
struct ABP_S3ItemSpawner_C_Initialize_Params
{
	bool                                               Enable;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.UserConstructionScript
struct ABP_S3ItemSpawner_C_UserConstructionScript_Params
{
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ReceiveBeginPlay
struct ABP_S3ItemSpawner_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ReceiveTick
struct ABP_S3ItemSpawner_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_S3ItemSpawner_C_BndEvt__HitCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ReceiveDestroyed
struct ABP_S3ItemSpawner_C_ReceiveDestroyed_Params
{
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__HitCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct ABP_S3ItemSpawner_C_BndEvt__HitCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__GetCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_S3ItemSpawner_C_BndEvt__GetCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__GetCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_S3ItemSpawner_C_BndEvt__GetCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_S3ItemSpawner_C_BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_S3ItemSpawner_C_BndEvt__WakeupCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ReceiveEndPlay
struct ABP_S3ItemSpawner_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.SetEnabledHelp
struct ABP_S3ItemSpawner_C_SetEnabledHelp_Params
{
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_S3ItemSpawner_C_BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature
struct ABP_S3ItemSpawner_C_BndEvt__HelpReactCollision_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.DelayedInitialize
struct ABP_S3ItemSpawner_C_DelayedInitialize_Params
{
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.BeginActionVisibleAndFound
struct ABP_S3ItemSpawner_C_BeginActionVisibleAndFound_Params
{
};

// Function BP_S3ItemSpawner.BP_S3ItemSpawner_C.ExecuteUbergraph_BP_S3ItemSpawner
struct ABP_S3ItemSpawner_C_ExecuteUbergraph_BP_S3ItemSpawner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
