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

// Function BP_TalkEventManager.BP_TalkEventManager_C.IsStreetFightScript
struct ABP_TalkEventManager_C_IsStreetFightScript_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.IsIgonoreShe
struct ABP_TalkEventManager_C_IsIgonoreShe_Params
{
	bool                                               Ignore;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.SetDisableAnsel
struct ABP_TalkEventManager_C_SetDisableAnsel_Params
{
	bool                                               Disable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecMuteSoundTask
struct ABP_TalkEventManager_C_ExecMuteSoundTask_Params
{
	class UMuteFadeSoundTask*                          MuteSoundTask;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.StopForceSkip
struct ABP_TalkEventManager_C_StopForceSkip_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.CheckCanSkip
struct ABP_TalkEventManager_C_CheckCanSkip_Params
{
	bool                                               Skip;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CAN;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecFade
struct ABP_TalkEventManager_C_ExecFade_Params
{
	int                                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ColorIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.SkipTalk
struct ABP_TalkEventManager_C_SkipTalk_Params
{
	bool                                               AC_Only;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DEBUG;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.NotifyCameraChange
struct ABP_TalkEventManager_C_NotifyCameraChange_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.RunStandAloneScript
struct ABP_TalkEventManager_C_RunStandAloneScript_Params
{
	class AActor*                                      InTalkedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InIsBS;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTalkScript*                                 InTalkScript;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3TalkComponent*                            InTalkComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ENPCTalkState                                      InTalkState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.CheckLookAtTask
struct ABP_TalkEventManager_C_CheckLookAtTask_Params
{
	class ULookAtTask*                                 Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Failed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.SetMoonLightCastShadow
struct ABP_TalkEventManager_C_SetMoonLightCastShadow_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.TeleportActor
struct ABP_TalkEventManager_C_TeleportActor_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecPauseScheduleTask
struct ABP_TalkEventManager_C_ExecPauseScheduleTask_Params
{
	class UPauseScheduleTask*                          PauseScheduleTask;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.FinishShowItemEnd
struct ABP_TalkEventManager_C_FinishShowItemEnd_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.FindTalkScriptTask
struct ABP_TalkEventManager_C_FindTalkScriptTask_Params
{
	class UTalkScript*                                 Script;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CheckTalkTaskClass;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTalkEventTaskBase*                          Task;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bExist;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.CheckForceAddDetect
struct ABP_TalkEventManager_C_CheckForceAddDetect_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.SetTalkedActor
struct ABP_TalkEventManager_C_SetTalkedActor_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.GetCurrentTask
struct ABP_TalkEventManager_C_GetCurrentTask_Params
{
	class UTalkEventTaskBase*                          Task;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecDojoCaptionTask
struct ABP_TalkEventManager_C_ExecDojoCaptionTask_Params
{
	class UDojoCaptionTask*                            Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecHelpPriorityTask
struct ABP_TalkEventManager_C_ExecHelpPriorityTask_Params
{
	class UHelpPriorityTask*                           Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.Finalize
struct ABP_TalkEventManager_C_Finalize_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.IsExistTalkScriptTask
struct ABP_TalkEventManager_C_IsExistTalkScriptTask_Params
{
	class UTalkScript*                                 Script;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              CheckTalkTaskClasses;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bExist;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.IsMiniGameTalk
struct ABP_TalkEventManager_C_IsMiniGameTalk_Params
{
	bool                                               bStrictly;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.EnableAutoCamera
struct ABP_TalkEventManager_C_EnableAutoCamera_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.IsWaitTaskWaiting
struct ABP_TalkEventManager_C_IsWaitTaskWaiting_Params
{
	bool                                               isWaiting;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UWaitTask*                                   WaitTask;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.IsTalkTransitionErroredActor
struct ABP_TalkEventManager_C_IsTalkTransitionErroredActor_Params
{
	class AS3Character*                                TalkTo;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.GetMiniGamePrice
struct ABP_TalkEventManager_C_GetMiniGamePrice_Params
{
	class ABP_MiniGameManager_C*                       MiniGameManager;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Price;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.TalkTransitionError
struct ABP_TalkEventManager_C_TalkTransitionError_Params
{
	bool                                               bError;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecPlayBgm
struct ABP_TalkEventManager_C_ExecPlayBgm_Params
{
	class UPlayBgmTask*                                Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.UpdateDebugForceSkipFlag
struct ABP_TalkEventManager_C_UpdateDebugForceSkipFlag_Params
{
	class UTalkEventTaskBase*                          Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.GetNextFighterName
struct ABP_TalkEventManager_C_GetNextFighterName_Params
{
	struct FString                                     Name;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.UpdateMiniGamePlayCount
struct ABP_TalkEventManager_C_UpdateMiniGamePlayCount_Params
{
	int                                                PlayCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.IsTalkingToShopCharacter
struct ABP_TalkEventManager_C_IsTalkingToShopCharacter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.DestroySubtitle
struct ABP_TalkEventManager_C_DestroySubtitle_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.CreateSubtitle
struct ABP_TalkEventManager_C_CreateSubtitle_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.IsFinishedTalkActorCamera
struct ABP_TalkEventManager_C_IsFinishedTalkActorCamera_Params
{
	bool                                               Finished;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.RestorePlayerIgnoreCollision
struct ABP_TalkEventManager_C_RestorePlayerIgnoreCollision_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.MakePlayerIgnoreCollision
struct ABP_TalkEventManager_C_MakePlayerIgnoreCollision_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.SetWhetherPlayerIgnoreCollision
struct ABP_TalkEventManager_C_SetWhetherPlayerIgnoreCollision_Params
{
	bool                                               InStartIgnore;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecUseIKTask
struct ABP_TalkEventManager_C_ExecUseIKTask_Params
{
	class UUseIKTask*                                  UseIKTask;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.EqualToString
struct ABP_TalkEventManager_C_EqualToString_Params
{
	struct FString                                     InStr1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     InStr2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bEqual;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecDevExtendedTask
struct ABP_TalkEventManager_C_ExecDevExtendedTask_Params
{
	class UDevExtendedTask*                            DevExtendedTask;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecPlaySeTask
struct ABP_TalkEventManager_C_ExecPlaySeTask_Params
{
	class UPlaySeTask*                                 PlaySeTask;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecKsVisibilityTask
struct ABP_TalkEventManager_C_ExecKsVisibilityTask_Params
{
	class UKsVisibilityTask*                           KsVisibilityTask;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecInventoryTask
struct ABP_TalkEventManager_C_ExecInventoryTask_Params
{
	class UInventoryTask*                              InventoryTask;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecImaginary
struct ABP_TalkEventManager_C_ExecImaginary_Params
{
	class UImaginary*                                  ImaginaryTask;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.IsExistCurrentTalkScriptTask
struct ABP_TalkEventManager_C_IsExistCurrentTalkScriptTask_Params
{
	TArray<class UClass*>                              CheckTalkTaskClasses;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bExist;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ConvertKeywordSelectedIndex
struct ABP_TalkEventManager_C_ConvertKeywordSelectedIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_TalkKeywordSelect>                   Selected;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecControlCameraTask
struct ABP_TalkEventManager_C_ExecControlCameraTask_Params
{
	class UControlCameraTask*                          ControlCameraTask;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.SetupPlayerCameraAfterLookAt
struct ABP_TalkEventManager_C_SetupPlayerCameraAfterLookAt_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecBuyKihudaTask
struct ABP_TalkEventManager_C_ExecBuyKihudaTask_Params
{
	class UBuyKihudaTask*                              BuyKihudaTask;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.FinishLookAt
struct ABP_TalkEventManager_C_FinishLookAt_Params
{
	class AActor*                                      NPC;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.RequestStepChange
struct ABP_TalkEventManager_C_RequestStepChange_Params
{
	int                                                Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.HintTalkInit
struct ABP_TalkEventManager_C_HintTalkInit_Params
{
	class AActor*                                      TalkedNPC;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.FindNPCFromID
struct ABP_TalkEventManager_C_FindNPCFromID_Params
{
	struct FName                                       ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExistAcTask
struct ABP_TalkEventManager_C_ExistAcTask_Params
{
	class UTalkScript*                                 TalkScript;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Exist;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.CanFinishTalkEvent
struct ABP_TalkEventManager_C_CanFinishTalkEvent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetVisibilityTask
struct ABP_TalkEventManager_C_ExecSetVisibilityTask_Params
{
	class USetVisibilityTask*                          Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecWeatherTask
struct ABP_TalkEventManager_C_ExecWeatherTask_Params
{
	class USetWeatherTask*                             Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.CanStartCameraPreviewMode
struct ABP_TalkEventManager_C_CanStartCameraPreviewMode_Params
{
	bool                                               CanStart;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecCallScriptTask
struct ABP_TalkEventManager_C_ExecCallScriptTask_Params
{
	class UCallScriptTask*                             Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecPostProcessTask
struct ABP_TalkEventManager_C_ExecPostProcessTask_Params
{
	class UPostProcessTask*                            Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecACCamera
struct ABP_TalkEventManager_C_ExecACCamera_Params
{
	class UAcCameraTask*                               Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecAcEndTask
struct ABP_TalkEventManager_C_ExecAcEndTask_Params
{
	class UAcEndTask*                                  Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecAcTask
struct ABP_TalkEventManager_C_ExecAcTask_Params
{
	class UAcTask*                                     Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetTalkEnableTask
struct ABP_TalkEventManager_C_ExecSetTalkEnableTask_Params
{
	class USetTalkEnableTask*                          Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecLoadPositionAndRotationTask
struct ABP_TalkEventManager_C_ExecLoadPositionAndRotationTask_Params
{
	class ULoadPositionAndRotationTask*                LoadPositionAndRotationTask;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecLoadRotationTask
struct ABP_TalkEventManager_C_ExecLoadRotationTask_Params
{
	class ULoadRotationTask*                           LoadRotationTask;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecLoadPositionTask
struct ABP_TalkEventManager_C_ExecLoadPositionTask_Params
{
	class ULoadPositionTask*                           Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSavePositionAndRotationTask
struct ABP_TalkEventManager_C_ExecSavePositionAndRotationTask_Params
{
	class USavePositionAndRotationTask*                Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSaveRotationTask
struct ABP_TalkEventManager_C_ExecSaveRotationTask_Params
{
	class USaveRotationTask*                           Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSavePositionTask
struct ABP_TalkEventManager_C_ExecSavePositionTask_Params
{
	class USavePositionTask*                           SavePositionTask;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetPositionAndRotationTask
struct ABP_TalkEventManager_C_ExecSetPositionAndRotationTask_Params
{
	class USetPositionAndRotationTask*                 SetPositionAndRotationTask;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecStopMotionTask
struct ABP_TalkEventManager_C_ExecStopMotionTask_Params
{
	class UStopMotionTask*                             StopMotionTask;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.TryTalkScriptReimport
struct ABP_TalkEventManager_C_TryTalkScriptReimport_Params
{
	class UTalkScript*                                 TalkScript;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecCameraActorTask
struct ABP_TalkEventManager_C_ExecCameraActorTask_Params
{
	class UCameraActorTask*                            CameraActorTask;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.GetActiveScriptTalkComponent
struct ABP_TalkEventManager_C_GetActiveScriptTalkComponent_Params
{
	class UBPC_S3_TalkComponent_C*                     TalkComponent;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecCutSceneTask
struct ABP_TalkEventManager_C_ExecCutSceneTask_Params
{
	class UPlayCutsceneTask*                           Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecRewardMiniGameTask
struct ABP_TalkEventManager_C_ExecRewardMiniGameTask_Params
{
	class UGiftMiniGameTask*                           GiftMiniGameTask;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ActivateMiniGameTask
struct ABP_TalkEventManager_C_ActivateMiniGameTask_Params
{
	class UTalkEventTaskBase*                          TaskBase;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecUpdatePlayPriceMiniGameTask
struct ABP_TalkEventManager_C_ExecUpdatePlayPriceMiniGameTask_Params
{
	class UUpdatePlayPriceMiniGame*                    UpdatePlayPriceMniGameTask;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecChooseMiniGameTask
struct ABP_TalkEventManager_C_ExecChooseMiniGameTask_Params
{
	class UChooseMiniGameTask*                         ChooseMniGameTask;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.PrintTalkDebug
struct ABP_TalkEventManager_C_PrintTalkDebug_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetPositionTask
struct ABP_TalkEventManager_C_ExecSetPositionTask_Params
{
	class USetPositionTask*                            SetPositionTask;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetRotatioinTask
struct ABP_TalkEventManager_C_ExecSetRotatioinTask_Params
{
	class USetRotationTask*                            SetRotationTask;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetBsEnableTask
struct ABP_TalkEventManager_C_ExecSetBsEnableTask_Params
{
	class USetBsEnableTask*                            BsEnableTask;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetBsCountTask
struct ABP_TalkEventManager_C_ExecSetBsCountTask_Params
{
	class USetBsCountTask*                             SetBsCountTask;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExistLookAtTurnningCharacter
struct ABP_TalkEventManager_C_ExistLookAtTurnningCharacter_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.FinalizeMiniGame
struct ABP_TalkEventManager_C_FinalizeMiniGame_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecResultMiniGameTask
struct ABP_TalkEventManager_C_ExecResultMiniGameTask_Params
{
	class UResultMiniGameTask*                         ResultGameTask;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecResumeMiniGameTask
struct ABP_TalkEventManager_C_ExecResumeMiniGameTask_Params
{
	class UResumeMiniGameTask*                         ResumeMiniGameTask;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecEventMiniGameTask
struct ABP_TalkEventManager_C_ExecEventMiniGameTask_Params
{
	class UEventMiniGameTask*                          EventGameTask;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.GetLookAtCache
struct ABP_TalkEventManager_C_GetLookAtCache_Params
{
	bool                                               bLookAtCommandExecuted;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      LookAtTarget;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.UpdateCameraGroupTask
struct ABP_TalkEventManager_C_UpdateCameraGroupTask_Params
{
	class UUpdateCameraGroupTask*                      Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.UpdateCameraTask
struct ABP_TalkEventManager_C_UpdateCameraTask_Params
{
	class UUpdateCameraTask*                           Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecCanMiniGameTask
struct ABP_TalkEventManager_C_ExecCanMiniGameTask_Params
{
	class UCanMiniGameFlagTask*                        CanMiniGameFlagTask;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecShowPriceTask
struct ABP_TalkEventManager_C_ExecShowPriceTask_Params
{
	class UShowPriceTask*                              ShowPriceTask;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecEnterMiniGameTask
struct ABP_TalkEventManager_C_ExecEnterMiniGameTask_Params
{
	class UEnterMiniGameTask*                          EnterMiniGameTask;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.CreateAutoTalkCameraDirector
struct ABP_TalkEventManager_C_CreateAutoTalkCameraDirector_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.WhetherToChangeCamera
struct ABP_TalkEventManager_C_WhetherToChangeCamera_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.GetTalkTaskDuration
struct ABP_TalkEventManager_C_GetTalkTaskDuration_Params
{
	class UTalkTask*                                   TalkTask;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.GetCurrentTalkTaskDuration
struct ABP_TalkEventManager_C_GetCurrentTalkTaskDuration_Params
{
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.GetDetectActionTarget
struct ABP_TalkEventManager_C_GetDetectActionTarget_Params
{
	class AActor*                                      DetectActionTarget;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.SetTalkedActorFromTalkScript
struct ABP_TalkEventManager_C_SetTalkedActorFromTalkScript_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.GetActorFromTagCharaName
struct ABP_TalkEventManager_C_GetActorFromTagCharaName_Params
{
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecCharacterTurnTask
struct ABP_TalkEventManager_C_ExecCharacterTurnTask_Params
{
	class UCharacterTurnTask*                          CharacterTurnTask;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.GetJoinedThisTalkActorByName
struct ABP_TalkEventManager_C_GetJoinedThisTalkActorByName_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.CanSkipCurrentTask
struct ABP_TalkEventManager_C_CanSkipCurrentTask_Params
{
	bool                                               bCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecFadeTask
struct ABP_TalkEventManager_C_ExecFadeTask_Params
{
	class UFadeTask*                                   FadeTask;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecStartedMiniGameTask
struct ABP_TalkEventManager_C_ExecStartedMiniGameTask_Params
{
	class UStartedMiniGameTask*                        MiniGameTask;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.CanTransitionToTalkProcessing
struct ABP_TalkEventManager_C_CanTransitionToTalkProcessing_Params
{
	class AActor*                                      TalkTo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bProcessing;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.InitVariables
struct ABP_TalkEventManager_C_InitVariables_Params
{
	class AActor*                                      InTalkedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InIsBS;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.GetTalkType
struct ABP_TalkEventManager_C_GetTalkType_Params
{
	class UTalkEventTaskBase*                          Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EAutoCameraType                                    Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.GetLookAtTaskMotionDirection
struct ABP_TalkEventManager_C_GetLookAtTaskMotionDirection_Params
{
	class AActor*                                      LookAtActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NpcActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Picth;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecLookAtTask
struct ABP_TalkEventManager_C_ExecLookAtTask_Params
{
	class ULookAtTask*                                 LookAtTask;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyCamera;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecShowItemTask
struct ABP_TalkEventManager_C_ExecShowItemTask_Params
{
	class UShowItemTask*                               ShowItemTask;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isShowStart;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.DestroyKeywardSelect
struct ABP_TalkEventManager_C_DestroyKeywardSelect_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecKsLabelTask
struct ABP_TalkEventManager_C_ExecKsLabelTask_Params
{
	class UKsLabelTask*                                KsLabelTask;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.TryGetItemIndex
struct ABP_TalkEventManager_C_TryGetItemIndex_Params
{
	struct FString                                     FlagStr;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsFound;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecItemTask
struct ABP_TalkEventManager_C_ExecItemTask_Params
{
	class UItemTask*                                   ItemTask;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.SetTalkActors
struct ABP_TalkEventManager_C_SetTalkActors_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.SetTargetsFromIds
struct ABP_TalkEventManager_C_SetTargetsFromIds_Params
{
	TArray<struct FString>                             Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              TargetArray;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecCameraTask
struct ABP_TalkEventManager_C_ExecCameraTask_Params
{
	class UCameraTask*                                 CameraTask;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecCameraGroupTargets
struct ABP_TalkEventManager_C_ExecCameraGroupTargets_Params
{
	class UCameraGroupTask*                            CameraGroupTask;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.GetSubtitleChara
struct ABP_TalkEventManager_C_GetSubtitleChara_Params
{
	class UTalkTask*                                   TalkTask;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EN_TalkCharacterType>                  TalkType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.GetSpeakerID
struct ABP_TalkEventManager_C_GetSpeakerID_Params
{
	class UTalkTask*                                   TalkTask;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ClearSubtitle
struct ABP_TalkEventManager_C_ClearSubtitle_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.RevertFlags
struct ABP_TalkEventManager_C_RevertFlags_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecMotionTask
struct ABP_TalkEventManager_C_ExecMotionTask_Params
{
	class UMotionTask*                                 MotionTask;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecInfoTask
struct ABP_TalkEventManager_C_ExecInfoTask_Params
{
	class UInfoTask*                                   InfoTask;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.TraceErrorVoice
struct ABP_TalkEventManager_C_TraceErrorVoice_Params
{
	class UObject*                                     Voice;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecFocusChange
struct ABP_TalkEventManager_C_ExecFocusChange_Params
{
	class UChangeFocusTask*                            Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.UpdateSubList
struct ABP_TalkEventManager_C_UpdateSubList_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.UpdateActiveList
struct ABP_TalkEventManager_C_UpdateActiveList_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.TryGetTalkComponent
struct ABP_TalkEventManager_C_TryGetTalkComponent_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBPC_S3_TalkComponent_C*                     TalkComponent;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecEmoteTask
struct ABP_TalkEventManager_C_ExecEmoteTask_Params
{
	class UEmoteTask*                                  EmoteTask;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.FindSubStrings
struct ABP_TalkEventManager_C_FindSubStrings_Params
{
	struct FString                                     InStr;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FString>                             SubStrings;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsFound;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             foundStrings;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecSetFlag
struct ABP_TalkEventManager_C_ExecSetFlag_Params
{
	class USetTask*                                    SetTask;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ReplaceLF
struct ABP_TalkEventManager_C_ReplaceLF_Params
{
	struct FString                                     InStr;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecNoVoiceTimeTask
struct ABP_TalkEventManager_C_ExecNoVoiceTimeTask_Params
{
	class USetNoVoiceTimeTask*                         NoVoiceTimeTask;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecIfTask
struct ABP_TalkEventManager_C_ExecIfTask_Params
{
	class UIfTask*                                     IfTask;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.EvaluateExpression
struct ABP_TalkEventManager_C_EvaluateExpression_Params
{
	struct FString                                     InStr;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bError;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.StartTalk
struct ABP_TalkEventManager_C_StartTalk_Params
{
	class UTalkTask*                                   TalkTask;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.CreateCameraManager
struct ABP_TalkEventManager_C_CreateCameraManager_Params
{
	EAutoCameraType                                    AutoCameraType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.UserConstructionScript
struct ABP_TalkEventManager_C_UserConstructionScript_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.InpActEvt_Shift_C_K2Node_InputKeyEvent_8
struct ABP_TalkEventManager_C_InpActEvt_Shift_C_K2Node_InputKeyEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.InpActEvt_Ctrl_Q_K2Node_InputKeyEvent_7
struct ABP_TalkEventManager_C_InpActEvt_Ctrl_Q_K2Node_InputKeyEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.InpActEvt_Shift_K_K2Node_InputKeyEvent_6
struct ABP_TalkEventManager_C_InpActEvt_Shift_K_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.InpActEvt_Q_K2Node_InputKeyEvent_5
struct ABP_TalkEventManager_C_InpActEvt_Q_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.InpActEvt_TalkSkip_K2Node_InputActionEvent_2
struct ABP_TalkEventManager_C_InpActEvt_TalkSkip_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnLoaded_8AD0905A45E984F04EF8EC995D53228B
struct ABP_TalkEventManager_C_OnLoaded_8AD0905A45E984F04EF8EC995D53228B_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.BindHUDFadeEvents
struct ABP_TalkEventManager_C_BindHUDFadeEvents_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.UnbindHUDEvents
struct ABP_TalkEventManager_C_UnbindHUDEvents_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnFinishedFadeIn
struct ABP_TalkEventManager_C_OnFinishedFadeIn_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnFinishedFadeOut
struct ABP_TalkEventManager_C_OnFinishedFadeOut_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.BindPopupItemEvent
struct ABP_TalkEventManager_C_BindPopupItemEvent_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnFinishedPopup
struct ABP_TalkEventManager_C_OnFinishedPopup_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.BindBuyKihudaEvents
struct ABP_TalkEventManager_C_BindBuyKihudaEvents_Params
{
	class ABP_S3BetMoneyManager_C*                     BetManager;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnBuyKihuda
struct ABP_TalkEventManager_C_OnBuyKihuda_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnCancelledKihuda
struct ABP_TalkEventManager_C_OnCancelledKihuda_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.UnbindBuyKihudaEvents
struct ABP_TalkEventManager_C_UnbindBuyKihudaEvents_Params
{
	class ABP_S3BetMoneyManager_C*                     BetManager;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.BindinventoryEvents
struct ABP_TalkEventManager_C_BindinventoryEvents_Params
{
	class ABP_UI_GiftManager_C*                        UseItemManager;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.UnbindinventoryEvents
struct ABP_TalkEventManager_C_UnbindinventoryEvents_Params
{
	class ABP_UI_GiftManager_C*                        UseItemManager;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnInventoryUseItem
struct ABP_TalkEventManager_C_OnInventoryUseItem_Params
{
	TEnumAsByte<EN_UseItemResult>                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.BindShowItemZoomEvent
struct ABP_TalkEventManager_C_BindShowItemZoomEvent_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.UnbindShowItemZoomEvent
struct ABP_TalkEventManager_C_UnbindShowItemZoomEvent_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.CheckForShowItemZoomCameraStart
struct ABP_TalkEventManager_C_CheckForShowItemZoomCameraStart_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.BindShowItemPutAwayEvent
struct ABP_TalkEventManager_C_BindShowItemPutAwayEvent_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.UnbindShowItemPutAwayEvent
struct ABP_TalkEventManager_C_UnbindShowItemPutAwayEvent_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.CheckForShowItemPutAway
struct ABP_TalkEventManager_C_CheckForShowItemPutAway_Params
{
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.BindMiniGameEvents
struct ABP_TalkEventManager_C_BindMiniGameEvents_Params
{
	class ABP_MiniGameBase_C*                          MiniGame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnMiniGameEnd
struct ABP_TalkEventManager_C_OnMiniGameEnd_Params
{
	class ABP_MiniGameBase_C*                          SelfMiniGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.BindMiniGameEnterEvents
struct ABP_TalkEventManager_C_BindMiniGameEnterEvents_Params
{
	class ABP_MiniGameBase_C*                          MiniGame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnFinishedEnterMiniGame
struct ABP_TalkEventManager_C_OnFinishedEnterMiniGame_Params
{
	class ABP_MiniGameBase_C*                          SelfMiniGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnMiniGameScriptEvent
struct ABP_TalkEventManager_C_OnMiniGameScriptEvent_Params
{
	class ABP_MiniGameBase_C*                          SelfMiniGame;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.UnbindMiniGameEvents
struct ABP_TalkEventManager_C_UnbindMiniGameEvents_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.BindMiniGameChooseEvents
struct ABP_TalkEventManager_C_BindMiniGameChooseEvents_Params
{
	class ABP_MiniGameChoose_C*                        MiniGameChooseActor;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnChooseMiniGame
struct ABP_TalkEventManager_C_OnChooseMiniGame_Params
{
	class AActor*                                      ChooseActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnCancelChooseMiniGame
struct ABP_TalkEventManager_C_OnCancelChooseMiniGame_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnDestroyedChooseActors
struct ABP_TalkEventManager_C_OnDestroyedChooseActors_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.EventFastForwarding
struct ABP_TalkEventManager_C_EventFastForwarding_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ToggleCameraCutDebugMode
struct ABP_TalkEventManager_C_ToggleCameraCutDebugMode_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.TakeCameraDebugScreenShot
struct ABP_TalkEventManager_C_TakeCameraDebugScreenShot_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.CameraManagerLerpEnd
struct ABP_TalkEventManager_C_CameraManagerLerpEnd_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.TryChangeCamera
struct ABP_TalkEventManager_C_TryChangeCamera_Params
{
	EAutoCameraType                                    AutoCameraType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TalkCharacterId;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     LockTargetCharacterId;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnCallUpdateCameraTask
struct ABP_TalkEventManager_C_OnCallUpdateCameraTask_Params
{
	struct FString                                     TalkCharacterId;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     LockTargetCharacterId;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.EndPreviewCameraMode
struct ABP_TalkEventManager_C_EndPreviewCameraMode_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnTalkEventFinished
struct ABP_TalkEventManager_C_OnTalkEventFinished_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ReceiveBeginPlay
struct ABP_TalkEventManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnFinished
struct ABP_TalkEventManager_C_OnFinished_Params
{
	class UTalkEventTaskBase*                          ptr;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NextIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBreakEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnTalkStart
struct ABP_TalkEventManager_C_OnTalkStart_Params
{
	class UTalkEventTaskBase*                          ptr;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnActivate
struct ABP_TalkEventManager_C_OnActivate_Params
{
	class UTalkEventTaskBase*                          ptr;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.DelayedTalkStart
struct ABP_TalkEventManager_C_DelayedTalkStart_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ReceiveTick
struct ABP_TalkEventManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnFinishedSubEvent
struct ABP_TalkEventManager_C_OnFinishedSubEvent_Params
{
	class UTalkEventTaskBase*                          ptr;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NextIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBreakEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.doNextStep
struct ABP_TalkEventManager_C_doNextStep_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.doCancel
struct ABP_TalkEventManager_C_doCancel_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.InitialMotion
struct ABP_TalkEventManager_C_InitialMotion_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnEndInitialMotion
struct ABP_TalkEventManager_C_OnEndInitialMotion_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.SkippedCurrentTalk
struct ABP_TalkEventManager_C_SkippedCurrentTalk_Params
{
	class UTalkTask*                                   SkippedTask;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.catch_onSelected
struct ABP_TalkEventManager_C_catch_onSelected_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.UnbindKeywardSelect
struct ABP_TalkEventManager_C_UnbindKeywardSelect_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.TimeupMessageWait
struct ABP_TalkEventManager_C_TimeupMessageWait_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.FinalizeCleanUI
struct ABP_TalkEventManager_C_FinalizeCleanUI_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.TrySkipCurrentTalkTask
struct ABP_TalkEventManager_C_TrySkipCurrentTalkTask_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.SkipMessageWait
struct ABP_TalkEventManager_C_SkipMessageWait_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnEndCutscene
struct ABP_TalkEventManager_C_OnEndCutscene_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.RunDoorTalk
struct ABP_TalkEventManager_C_RunDoorTalk_Params
{
	class AActor*                                      InTalkedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InIsBS;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTalkScript*                                 InTalkScript;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBPC_S3_TalkComponent_C*                     InTalkComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.HintTalkStart
struct ABP_TalkEventManager_C_HintTalkStart_Params
{
	class AActor*                                      InTalkedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTalkScript*                                 InTalkScript;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBPC_S3_TalkComponent_C*                     InTalkComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      InHintTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnAcCameraFinised
struct ABP_TalkEventManager_C_OnAcCameraFinised_Params
{
	class ULevelSequencePlayer*                        LevelSequencePlayer;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnAcCameraStoped
struct ABP_TalkEventManager_C_OnAcCameraStoped_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.SkipShowItem
struct ABP_TalkEventManager_C_SkipShowItem_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnShowItemZoomEnd
struct ABP_TalkEventManager_C_OnShowItemZoomEnd_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.StartAC
struct ABP_TalkEventManager_C_StartAC_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnTimeoutTransition
struct ABP_TalkEventManager_C_OnTimeoutTransition_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.StopAcCamera
struct ABP_TalkEventManager_C_StopAcCamera_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.Initialize
struct ABP_TalkEventManager_C_Initialize_Params
{
	class AActor*                                      InTalkedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InIsBS;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTalkScript*                                 InTalkScript;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3TalkComponent*                            InTalkComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ENPCTalkState                                      InTalkState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.FinishKSAnim
struct ABP_TalkEventManager_C_FinishKSAnim_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.FinishCaptionAnim
struct ABP_TalkEventManager_C_FinishCaptionAnim_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.StartShowItemZoom
struct ABP_TalkEventManager_C_StartShowItemZoom_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.DelayPermitUI
struct ABP_TalkEventManager_C_DelayPermitUI_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.DisablePhysics
struct ABP_TalkEventManager_C_DisablePhysics_Params
{
	class AS3Character*                                Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.LoadedCueSheet
struct ABP_TalkEventManager_C_LoadedCueSheet_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.WaitLookAtTask
struct ABP_TalkEventManager_C_WaitLookAtTask_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.ExecuteUbergraph_BP_TalkEventManager
struct ABP_TalkEventManager_C_ExecuteUbergraph_BP_TalkEventManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnStartAcCameraSequence__DelegateSignature
struct ABP_TalkEventManager_C_OnStartAcCameraSequence__DelegateSignature_Params
{
	class ALevelSequenceActor*                         PlaySequenceActor;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnStreetFightFinished__DelegateSignature
struct ABP_TalkEventManager_C_OnStreetFightFinished__DelegateSignature_Params
{
	TEnumAsByte<Enum_StreetFightResult>                Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnEndKeywordSelect__DelegateSignature
struct ABP_TalkEventManager_C_OnEndKeywordSelect__DelegateSignature_Params
{
	TEnumAsByte<E_TalkKeywordSelect>                   Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnInputQuestDebugKey__DelegateSignature
struct ABP_TalkEventManager_C_OnInputQuestDebugKey__DelegateSignature_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.OnSkipTalkTask__DelegateSignature
struct ABP_TalkEventManager_C_OnSkipTalkTask__DelegateSignature_Params
{
	float                                              SkipTaskDuration;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.commandAction(cancel)__DelegateSignature
struct ABP_TalkEventManager_C_commandAction_cancel___DelegateSignature_Params
{
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.commandAction(skip)__DelegateSignature
struct ABP_TalkEventManager_C_commandAction_skip___DelegateSignature_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TalkEventManager.BP_TalkEventManager_C.commandAction(step)__DelegateSignature
struct ABP_TalkEventManager_C_commandAction_step___DelegateSignature_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
