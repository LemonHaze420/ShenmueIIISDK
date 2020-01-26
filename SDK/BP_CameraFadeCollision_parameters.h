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

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.UpdatePlayerFaderState
struct ABP_CameraFadeCollision_C_UpdatePlayerFaderState_Params
{
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.SelectFadeTime
struct ABP_CameraFadeCollision_C_SelectFadeTime_Params
{
	float                                              NonInstant;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.ShouldAllFadesBeInstant
struct ABP_CameraFadeCollision_C_ShouldAllFadesBeInstant_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.EnableNPCFadeCollision
struct ABP_CameraFadeCollision_C_EnableNPCFadeCollision_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Requester;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.GetCollidedDoor
struct ABP_CameraFadeCollision_C_GetCollidedDoor_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Primitive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	class AS3GimmickOpenDoor*                          Door;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.FadeDoor
struct ABP_CameraFadeCollision_C_FadeDoor_Params
{
	class AS3GimmickOpenDoor*                          Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.ShouldHideOverlappingNPCs
struct ABP_CameraFadeCollision_C_ShouldHideOverlappingNPCs_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.OverlapNPC
struct ABP_CameraFadeCollision_C_OverlapNPC_Params
{
	class AS3Character*                                NPC;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Overlap;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.EnablePlayerFadeCollision
struct ABP_CameraFadeCollision_C_EnablePlayerFadeCollision_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Requester;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.WantsToHidePlayer
struct ABP_CameraFadeCollision_C_WantsToHidePlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.FadeCharacter
struct ABP_CameraFadeCollision_C_FadeCharacter_Params
{
	class AS3Character*                                Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FadeOut;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.IsPlayerMeshCollision
struct ABP_CameraFadeCollision_C_IsPlayerMeshCollision_Params
{
	class USceneComponent*                             Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.UserConstructionScript
struct ABP_CameraFadeCollision_C_UserConstructionScript_Params
{
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_CameraFadeCollision_C_BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_CameraFadeCollision_C_BndEvt__PlayerTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.ReceiveTick
struct ABP_CameraFadeCollision_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__NPCTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_CameraFadeCollision_C_BndEvt__NPCTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__NPCTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ABP_CameraFadeCollision_C_BndEvt__NPCTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.ReceiveEndPlay
struct ABP_CameraFadeCollision_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__DoorTrigger_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_CameraFadeCollision_C_BndEvt__DoorTrigger_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__DoorTrigger_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
struct ABP_CameraFadeCollision_C_BndEvt__DoorTrigger_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__DisablePlayerFade_K2Node_ComponentBoundEvent_8_OnLastRequestRemove__DelegateSignature
struct ABP_CameraFadeCollision_C_BndEvt__DisablePlayerFade_K2Node_ComponentBoundEvent_8_OnLastRequestRemove__DelegateSignature_Params
{
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__DisableNPCAndDoorFade_K2Node_ComponentBoundEvent_6_OnFirstRequestAdd__DelegateSignature
struct ABP_CameraFadeCollision_C_BndEvt__DisableNPCAndDoorFade_K2Node_ComponentBoundEvent_6_OnFirstRequestAdd__DelegateSignature_Params
{
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.BndEvt__DisableNPCAndDoorFade_K2Node_ComponentBoundEvent_7_OnLastRequestRemove__DelegateSignature
struct ABP_CameraFadeCollision_C_BndEvt__DisableNPCAndDoorFade_K2Node_ComponentBoundEvent_7_OnLastRequestRemove__DelegateSignature_Params
{
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.ReceiveBeginPlay
struct ABP_CameraFadeCollision_C_ReceiveBeginPlay_Params
{
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.ResumeNormalNPCFadeMode
struct ABP_CameraFadeCollision_C_ResumeNormalNPCFadeMode_Params
{
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.StartFastNPCFadeMode
struct ABP_CameraFadeCollision_C_StartFastNPCFadeMode_Params
{
};

// Function BP_CameraFadeCollision.BP_CameraFadeCollision_C.ExecuteUbergraph_BP_CameraFadeCollision
struct ABP_CameraFadeCollision_C_ExecuteUbergraph_BP_CameraFadeCollision_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
