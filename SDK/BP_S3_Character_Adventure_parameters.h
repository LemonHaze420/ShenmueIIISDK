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

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.GetGroundFoot
struct ABP_S3_Character_Adventure_C_GetGroundFoot_Params
{
	TEnumAsByte<EN_FOOT_GROUND_STATE>                  Grounded;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.FootFrontLRCalc
struct ABP_S3_Character_Adventure_C_FootFrontLRCalc_Params
{
	bool                                               flag;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.GetStairClimber
struct ABP_S3_Character_Adventure_C_GetStairClimber_Params
{
	class UBPC_S3PlayerStairClimber_C*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.IsTalking
struct ABP_S3_Character_Adventure_C_IsTalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.UpdateCollisionResponses
struct ABP_S3_Character_Adventure_C_UpdateCollisionResponses_Params
{
	TEnumAsByte<ECollisionChannel>                     JustChangedChannel;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.RemoveIgnoreCollisionRequests
struct ABP_S3_Character_Adventure_C_RemoveIgnoreCollisionRequests_Params
{
	class UObject*                                     Requester;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.HasIgnoreCollisionChannelRequest
struct ABP_S3_Character_Adventure_C_HasIgnoreCollisionChannelRequest_Params
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.IgnoreCollisionChannel
struct ABP_S3_Character_Adventure_C_IgnoreCollisionChannel_Params
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StartIgnore;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Requester;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.GetEnableIK
struct ABP_S3_Character_Adventure_C_GetEnableIK_Params
{
	bool                                               bIKEnabled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ReturnOutOfWorld
struct ABP_S3_Character_Adventure_C_ReturnOutOfWorld_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.GetSearchMode
struct ABP_S3_Character_Adventure_C_GetSearchMode_Params
{
	TEnumAsByte<EN_PC_SearchMode>                      SearchMode;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.SetSearchMode
struct ABP_S3_Character_Adventure_C_SetSearchMode_Params
{
	TEnumAsByte<EN_PC_SearchMode>                      Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.SetMovementMode
struct ABP_S3_Character_Adventure_C_SetMovementMode_Params
{
	class UObject*                                     Executor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewCustomMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ReactToTeleported
struct ABP_S3_Character_Adventure_C_ReactToTeleported_Params
{
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.TeleportWithCamera
struct ABP_S3_Character_Adventure_C_TeleportWithCamera_Params
{
	struct FVector                                     NewLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.AddReflectorBoard
struct ABP_S3_Character_Adventure_C_AddReflectorBoard_Params
{
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.SetEnableIK
struct ABP_S3_Character_Adventure_C_SetEnableIK_Params
{
	bool                                               bInIKEnabled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               dummy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.UpdateDoorActor
struct ABP_S3_Character_Adventure_C_UpdateDoorActor_Params
{
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.GetClosestDoor
struct ABP_S3_Character_Adventure_C_GetClosestDoor_Params
{
	class AS3GimmickOpenDoor*                          OutDoor;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.IsInDoorTrigger
struct ABP_S3_Character_Adventure_C_IsInDoorTrigger_Params
{
	bool                                               bInTrigger;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ExpandNPCSensorDistance
struct ABP_S3_Character_Adventure_C_ExpandNPCSensorDistance_Params
{
	float                                              MinDistance;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.UpdatePlayerFade
struct ABP_S3_Character_Adventure_C_UpdatePlayerFade_Params
{
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.AddTurnAroundComponent
struct ABP_S3_Character_Adventure_C_AddTurnAroundComponent_Params
{
	class UBPC_TurnAround_C*                           Component;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.SetActorLocationAndRotationWithCamera
struct ABP_S3_Character_Adventure_C_SetActorLocationAndRotationWithCamera_Params
{
	struct FVector                                     NewLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Sweep;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Teleport;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ClearNotice
struct ABP_S3_Character_Adventure_C_ClearNotice_Params
{
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.TalkStopMotion
struct ABP_S3_Character_Adventure_C_TalkStopMotion_Params
{
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.TalkPlayMotion
struct ABP_S3_Character_Adventure_C_TalkPlayMotion_Params
{
	bool                                               SitFlag;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.IsDenyInput
struct ABP_S3_Character_Adventure_C_IsDenyInput_Params
{
	bool                                               deny;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.CheckInputAxis
struct ABP_S3_Character_Adventure_C_CheckInputAxis_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWasInput;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.UserConstructionScript
struct ABP_S3_Character_Adventure_C_UserConstructionScript_Params
{
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.BindCutscene
struct ABP_S3_Character_Adventure_C_BindCutscene_Params
{
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.UnbindCutscene
struct ABP_S3_Character_Adventure_C_UnbindCutscene_Params
{
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.StartCutscene
struct ABP_S3_Character_Adventure_C_StartCutscene_Params
{
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.EndCutscene
struct ABP_S3_Character_Adventure_C_EndCutscene_Params
{
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.OnTalkStart
struct ABP_S3_Character_Adventure_C_OnTalkStart_Params
{
	class US3TalkComponent*                            TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.OnTalkFinished
struct ABP_S3_Character_Adventure_C_OnTalkFinished_Params
{
	class US3TalkComponent*                            TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               interrupted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.Screen_Player
struct ABP_S3_Character_Adventure_C_Screen_Player_Params
{
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.Screen_NPC
struct ABP_S3_Character_Adventure_C_Screen_NPC_Params
{
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ReceiveTick
struct ABP_S3_Character_Adventure_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ReceiveBeginPlay
struct ABP_S3_Character_Adventure_C_ReceiveBeginPlay_Params
{
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ReceivePossessed
struct ABP_S3_Character_Adventure_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ReceiveDestroyed
struct ABP_S3_Character_Adventure_C_ReceiveDestroyed_Params
{
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.StartNock
struct ABP_S3_Character_Adventure_C_StartNock_Params
{
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.BndEvt__NPCSensor_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_S3_Character_Adventure_C_BndEvt__NPCSensor_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.BndEvt__NPCSensor_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct ABP_S3_Character_Adventure_C_BndEvt__NPCSensor_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.OnDoorAreaBeginOverlap
struct ABP_S3_Character_Adventure_C_OnDoorAreaBeginOverlap_Params
{
	class AS3GimmickOpenDoor*                          Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.OnDoorAreaEndOverlap
struct ABP_S3_Character_Adventure_C_OnDoorAreaEndOverlap_Params
{
	class AS3GimmickOpenDoor*                          Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ReceiveEndPlay
struct ABP_S3_Character_Adventure_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.HandleTeleportSucceeded
struct ABP_S3_Character_Adventure_C_HandleTeleportSucceeded_Params
{
	bool                                               bIsATest;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.CleanUpNullListEntries
struct ABP_S3_Character_Adventure_C_CleanUpNullListEntries_Params
{
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.FinishedLevelLoad
struct ABP_S3_Character_Adventure_C_FinishedLevelLoad_Params
{
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_3_OnEndStairUse__DelegateSignature
struct ABP_S3_Character_Adventure_C_BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_3_OnEndStairUse__DelegateSignature_Params
{
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_0_OnStartStairUse__DelegateSignature
struct ABP_S3_Character_Adventure_C_BndEvt__BPC_S3PlayerStairClimber_K2Node_ComponentBoundEvent_0_OnStartStairUse__DelegateSignature_Params
{
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.K2_OnEndViewTarget
struct ABP_S3_Character_Adventure_C_K2_OnEndViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.K2_OnBecomeViewTarget
struct ABP_S3_Character_Adventure_C_K2_OnBecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_S3_Character_Adventure.BP_S3_Character_Adventure_C.ExecuteUbergraph_BP_S3_Character_Adventure
struct ABP_S3_Character_Adventure_C_ExecuteUbergraph_BP_S3_Character_Adventure_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
