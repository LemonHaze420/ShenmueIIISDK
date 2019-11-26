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

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.IsTalking
struct ABP_Gimmick_OpenDoor_Template_C_IsTalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.LockPlayerInteraction
struct ABP_Gimmick_OpenDoor_Template_C_LockPlayerInteraction_Params
{
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckOpenDoorFromDistance
struct ABP_Gimmick_OpenDoor_Template_C_CheckOpenDoorFromDistance_Params
{
	class ABP_S3Character_C*                           SelfCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_S3Character_C*                           OpponentCharacter;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Prioritize;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.IsNeedPositionRecovery
struct ABP_Gimmick_OpenDoor_Template_C_IsNeedPositionRecovery_Params
{
	class ACharacter**                                 SelfCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACharacter**                                 OpponentCharacter;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.GetRecoveryPoint
struct ABP_Gimmick_OpenDoor_Template_C_GetRecoveryPoint_Params
{
	class ACharacter**                                 Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBack;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.IsReserved
struct ABP_Gimmick_OpenDoor_Template_C_IsReserved_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.SetDoorUseChara
struct ABP_Gimmick_OpenDoor_Template_C_SetDoorUseChara_Params
{
	class ABP_S3Character_C*                           DoorUseChara;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CallNotifyEvent
struct ABP_Gimmick_OpenDoor_Template_C_CallNotifyEvent_Params
{
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.DoesScriptAllowPlayerInteraction
struct ABP_Gimmick_OpenDoor_Template_C_DoesScriptAllowPlayerInteraction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.GetCurrentDoorDataTime
struct ABP_Gimmick_OpenDoor_Template_C_GetCurrentDoorDataTime_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.TraceToNearInteract
struct ABP_Gimmick_OpenDoor_Template_C_TraceToNearInteract_Params
{
	class ABP_S3CharacterBase_C*                       Chara;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Hit;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.GetNearAlignment
struct ABP_Gimmick_OpenDoor_Template_C_GetNearAlignment_Params
{
	class ABP_S3CharacterBase_C*                       Chara;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.GetAngleToDoor
struct ABP_Gimmick_OpenDoor_Template_C_GetAngleToDoor_Params
{
	struct FVector                                     InLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     InDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              OutAngle;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.InitReleaseCharaCount
struct ABP_Gimmick_OpenDoor_Template_C_InitReleaseCharaCount_Params
{
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.ChangeCollision
struct ABP_Gimmick_OpenDoor_Template_C_ChangeCollision_Params
{
	bool                                               bLock;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.EndEvent
struct ABP_Gimmick_OpenDoor_Template_C_EndEvent_Params
{
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.PrintDebugData
struct ABP_Gimmick_OpenDoor_Template_C_PrintDebugData_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckCanUseChara
struct ABP_Gimmick_OpenDoor_Template_C_CheckCanUseChara_Params
{
	class ABP_S3Character_C*                           Chara;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanUse;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.RecalculatePlayerGuides
struct ABP_Gimmick_OpenDoor_Template_C_RecalculatePlayerGuides_Params
{
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CallEventComplete
struct ABP_Gimmick_OpenDoor_Template_C_CallEventComplete_Params
{
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.GetTargetDoorPoint
struct ABP_Gimmick_OpenDoor_Template_C_GetTargetDoorPoint_Params
{
	bool                                               IsFront;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.GetLengthCharaToAdjustPoint
struct ABP_Gimmick_OpenDoor_Template_C_GetLengthCharaToAdjustPoint_Params
{
	class ABP_S3CharacterBase_C*                       Chara;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckCharaOnExtensionLine
struct ABP_Gimmick_OpenDoor_Template_C_CheckCharaOnExtensionLine_Params
{
	class ABP_S3CharacterBase_C*                       Chara;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHit;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckNPCOpen
struct ABP_Gimmick_OpenDoor_Template_C_CheckNPCOpen_Params
{
	class ABP_S3Character_C*                           NPC;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRegist;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckDataTable
struct ABP_Gimmick_OpenDoor_Template_C_CheckDataTable_Params
{
	bool                                               Existance;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckCan'tKnockDoorState
struct ABP_Gimmick_OpenDoor_Template_C_CheckCan_tKnockDoorState_Params
{
	bool                                               IsOpen;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.SetCanPlayEvent
struct ABP_Gimmick_OpenDoor_Template_C_SetCanPlayEvent_Params
{
	bool                                               CanPlayEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.ReleaseDoorUseChara
struct ABP_Gimmick_OpenDoor_Template_C_ReleaseDoorUseChara_Params
{
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.RegistDoorUseChara
struct ABP_Gimmick_OpenDoor_Template_C_RegistDoorUseChara_Params
{
	class ABP_S3Character_C*                           Chara;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRegist;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckAfterKnockPatarn
struct ABP_Gimmick_OpenDoor_Template_C_CheckAfterKnockPatarn_Params
{
	int                                                Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_AfterNockType>                      Patarn;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.JudgePatarnAfterKnock
struct ABP_Gimmick_OpenDoor_Template_C_JudgePatarnAfterKnock_Params
{
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.NPCOutOfRange
struct ABP_Gimmick_OpenDoor_Template_C_NPCOutOfRange_Params
{
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CanOpenDoor(New)
struct ABP_Gimmick_OpenDoor_Template_C_CanOpenDoor_New__Params
{
	class ABP_S3CharacterBase_C*                       Chara;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUseDoor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckCharaIndoor
struct ABP_Gimmick_OpenDoor_Template_C_CheckCharaIndoor_Params
{
	struct FName                                       CharacterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Existance;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckCharaNearSide
struct ABP_Gimmick_OpenDoor_Template_C_CheckCharaNearSide_Params
{
	class ACharacter*                                  Chara;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFront;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.FinishDoorKnock
struct ABP_Gimmick_OpenDoor_Template_C_FinishDoorKnock_Params
{
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckPlayEvent
struct ABP_Gimmick_OpenDoor_Template_C_CheckPlayEvent_Params
{
	bool                                               PlayEvent;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.JudgeDoorInOrOut
struct ABP_Gimmick_OpenDoor_Template_C_JudgeDoorInOrOut_Params
{
	bool                                               IsOut;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.FinishAdjustPosition
struct ABP_Gimmick_OpenDoor_Template_C_FinishAdjustPosition_Params
{
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.InitDoorUseChara
struct ABP_Gimmick_OpenDoor_Template_C_InitDoorUseChara_Params
{
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OpenDoor
struct ABP_Gimmick_OpenDoor_Template_C_OpenDoor_Params
{
	class ABP_S3CharacterBase_C*                       Chara;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AnimSequence;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AnimRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckCanUseDoor
struct ABP_Gimmick_OpenDoor_Template_C_CheckCanUseDoor_Params
{
	class ABP_S3CharacterBase_C*                       Chara;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsUseDoor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckNearSide
struct ABP_Gimmick_OpenDoor_Template_C_CheckNearSide_Params
{
	bool                                               IsFront;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.IsInBackDetectionArea
struct ABP_Gimmick_OpenDoor_Template_C_IsInBackDetectionArea_Params
{
	bool                                               inArea;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.IsInFrontDetectionArea
struct ABP_Gimmick_OpenDoor_Template_C_IsInFrontDetectionArea_Params
{
	bool                                               inArea;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.isInDetectionArea
struct ABP_Gimmick_OpenDoor_Template_C_isInDetectionArea_Params
{
	bool                                               isInDetectionArea;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.DeactivateOperation
struct ABP_Gimmick_OpenDoor_Template_C_DeactivateOperation_Params
{
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.ActivateOperation
struct ABP_Gimmick_OpenDoor_Template_C_ActivateOperation_Params
{
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.UserConstructionScript
struct ABP_Gimmick_OpenDoor_Template_C_UserConstructionScript_Params
{
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OnNotifyEnd_D9B9867F444EF4E776FADF9CDDAA1944
struct ABP_Gimmick_OpenDoor_Template_C_OnNotifyEnd_D9B9867F444EF4E776FADF9CDDAA1944_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OnNotifyBegin_D9B9867F444EF4E776FADF9CDDAA1944
struct ABP_Gimmick_OpenDoor_Template_C_OnNotifyBegin_D9B9867F444EF4E776FADF9CDDAA1944_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OnInterrupted_D9B9867F444EF4E776FADF9CDDAA1944
struct ABP_Gimmick_OpenDoor_Template_C_OnInterrupted_D9B9867F444EF4E776FADF9CDDAA1944_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OnBlendOut_D9B9867F444EF4E776FADF9CDDAA1944
struct ABP_Gimmick_OpenDoor_Template_C_OnBlendOut_D9B9867F444EF4E776FADF9CDDAA1944_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OnCompleted_D9B9867F444EF4E776FADF9CDDAA1944
struct ABP_Gimmick_OpenDoor_Template_C_OnCompleted_D9B9867F444EF4E776FADF9CDDAA1944_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.BndEvt__DetectArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Gimmick_OpenDoor_Template_C_BndEvt__DetectArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.BndEvt__DetectArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Gimmick_OpenDoor_Template_C_BndEvt__DetectArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.CheckFinishAnim
struct ABP_Gimmick_OpenDoor_Template_C_CheckFinishAnim_Params
{
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFront;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.BndEvt__NPCCheckArea_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Gimmick_OpenDoor_Template_C_BndEvt__NPCCheckArea_K2Node_ComponentBoundEvent_42_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.BndEvt__DetectAreaOutside_K2Node_ComponentBoundEvent_42_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Gimmick_OpenDoor_Template_C_BndEvt__DetectAreaOutside_K2Node_ComponentBoundEvent_42_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.BndEvt__DetectAreaGuide_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Gimmick_OpenDoor_Template_C_BndEvt__DetectAreaGuide_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.BndEvt__DetectAreaGuide_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Gimmick_OpenDoor_Template_C_BndEvt__DetectAreaGuide_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.ReceiveSmartLinkReached
struct ABP_Gimmick_OpenDoor_Template_C_ReceiveSmartLinkReached_Params
{
	class AActor**                                     Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Destination;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.ReceiveBeginPlay
struct ABP_Gimmick_OpenDoor_Template_C_ReceiveBeginPlay_Params
{
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.ReceiveTick
struct ABP_Gimmick_OpenDoor_Template_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OnTalkFinished
struct ABP_Gimmick_OpenDoor_Template_C_OnTalkFinished_Params
{
	class US3TalkComponent*                            TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               interrupted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.OnTalkStart
struct ABP_Gimmick_OpenDoor_Template_C_OnTalkStart_Params
{
	class US3TalkComponent*                            TalkComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.Screen_Player
struct ABP_Gimmick_OpenDoor_Template_C_Screen_Player_Params
{
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.Screen_NPC
struct ABP_Gimmick_OpenDoor_Template_C_Screen_NPC_Params
{
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.ExecuteUbergraph_BP_Gimmick_OpenDoor_Template
struct ABP_Gimmick_OpenDoor_Template_C_ExecuteUbergraph_BP_Gimmick_OpenDoor_Template_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.DoorEventAnimFinish__DelegateSignature
struct ABP_Gimmick_OpenDoor_Template_C_DoorEventAnimFinish__DelegateSignature_Params
{
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.NotifyEvent__DelegateSignature
struct ABP_Gimmick_OpenDoor_Template_C_NotifyEvent__DelegateSignature_Params
{
};

// Function BP_Gimmick_OpenDoor_Template.BP_Gimmick_OpenDoor_Template_C.DoorEventComplete__DelegateSignature
struct ABP_Gimmick_OpenDoor_Template_C_DoorEventComplete__DelegateSignature_Params
{
	class ABP_Gimmick_OpenDoor_Template_C*             Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Front;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
