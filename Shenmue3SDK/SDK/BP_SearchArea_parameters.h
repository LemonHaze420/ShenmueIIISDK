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

// Function BP_SearchArea.BP_SearchArea_C.GetHelpName
struct ABP_SearchArea_C_GetHelpName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.GetHelpPriority
struct ABP_SearchArea_C_GetHelpPriority_Params
{
	ES3HelpPriority                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.IsActivateHelp
struct ABP_SearchArea_C_IsActivateHelp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.RegisterHelp
struct ABP_SearchArea_C_RegisterHelp_Params
{
	ES3HelpRegisterTiming                              Timing;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.UnregisterHelp
struct ABP_SearchArea_C_UnregisterHelp_Params
{
	ES3HelpRegisterTiming                              Timing;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.GetPriority
struct ABP_SearchArea_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.GetDetectAction
struct ABP_SearchArea_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_SearchArea.BP_SearchArea_C.GetDisabledInputOnPlayingLabel
struct ABP_SearchArea_C_GetDisabledInputOnPlayingLabel_Params
{
	bool                                               Disabled;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.SetPlayLabelType
struct ABP_SearchArea_C_SetPlayLabelType_Params
{
	ES3TextPathType                                    PlayLabelType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.IsSubtitleVoicePlaying
struct ABP_SearchArea_C_IsSubtitleVoicePlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.InitializeLimitItem
struct ABP_SearchArea_C_InitializeLimitItem_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.IsLookingSeachComponent
struct ABP_SearchArea_C_IsLookingSeachComponent_Params
{
	class US3SearchComponent*                          SearchComp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Look;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.SetBottomTransparent
struct ABP_SearchArea_C_SetBottomTransparent_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.CheckCollisionCondition
struct ABP_SearchArea_C_CheckCollisionCondition_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.SetUseActorVisibleControl
struct ABP_SearchArea_C_SetUseActorVisibleControl_Params
{
	bool                                               bUse;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.SetActorVisibleControl
struct ABP_SearchArea_C_SetActorVisibleControl_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.FinalizeItemSpawnerSetting
struct ABP_SearchArea_C_FinalizeItemSpawnerSetting_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.InitializeItemSpawnerSetting
struct ABP_SearchArea_C_InitializeItemSpawnerSetting_Params
{
	bool                                               PlayOnlyLookScript;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.CheckEndForActor
struct ABP_SearchArea_C_CheckEndForActor_Params
{
	class UPrimitiveComponent*                         OtherComponent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.CheckStartForActor
struct ABP_SearchArea_C_CheckStartForActor_Params
{
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.SetSearchThisArea
struct ABP_SearchArea_C_SetSearchThisArea_Params
{
	bool                                               Search;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.InitAsyncLoad
struct ABP_SearchArea_C_InitAsyncLoad_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.InitializeMoveSuspendTime
struct ABP_SearchArea_C_InitializeMoveSuspendTime_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.SyncMoveMotionTime
struct ABP_SearchArea_C_SyncMoveMotionTime_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.AddMoveMotionValue
struct ABP_SearchArea_C_AddMoveMotionValue_Params
{
	float                                              AddTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.ActivateMoveMotionFlag
struct ABP_SearchArea_C_ActivateMoveMotionFlag_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.UpdateMoveMotionTime
struct ABP_SearchArea_C_UpdateMoveMotionTime_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.GetMoveMotionValue
struct ABP_SearchArea_C_GetMoveMotionValue_Params
{
	bool*                                              bReturnMode;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.StopBGM
struct ABP_SearchArea_C_StopBGM_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.InitializeTargetVector
struct ABP_SearchArea_C_InitializeTargetVector_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.UpdateCameraMode
struct ABP_SearchArea_C_UpdateCameraMode_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.SetForceActionLocked
struct ABP_SearchArea_C_SetForceActionLocked_Params
{
	bool                                               bForceActionLocked;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.IsUpdateForceExitSearch
struct ABP_SearchArea_C_IsUpdateForceExitSearch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.UpdateAttachGrabActor
struct ABP_SearchArea_C_UpdateAttachGrabActor_Params
{
	bool                                               Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.InitializeGrab
struct ABP_SearchArea_C_InitializeGrab_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.GetFingerColliders
struct ABP_SearchArea_C_GetFingerColliders_Params
{
	TArray<class UPrimitiveComponent*>                 Colliders;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_SearchArea.BP_SearchArea_C.InitializeGatherObject
struct ABP_SearchArea_C_InitializeGatherObject_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.StopGameTime
struct ABP_SearchArea_C_StopGameTime_Params
{
	bool                                               StopTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.CheckBGM
struct ABP_SearchArea_C_CheckBGM_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.DestroySubTitlePlayer
struct ABP_SearchArea_C_DestroySubTitlePlayer_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.SetLockonTarget
struct ABP_SearchArea_C_SetLockonTarget_Params
{
	class US3SearchComponent*                          Search;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.GetCharacterAdventure
struct ABP_SearchArea_C_GetCharacterAdventure_Params
{
	class ABP_S3_Character_Adventure_C*                AsBP_S3_Character_Adventure;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.GetLockOnBasePosition
struct ABP_SearchArea_C_GetLockOnBasePosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.CalcCenterPosition
struct ABP_SearchArea_C_CalcCenterPosition_Params
{
	struct FVector2D                                   CenterPosition;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.CalcScreenLocation
struct ABP_SearchArea_C_CalcScreenLocation_Params
{
	struct FVector                                     WorldLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   CenterPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   ScreenLocation;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.LockOnChange
struct ABP_SearchArea_C_LockOnChange_Params
{
	float                                              Vertical_Axis;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Horizontal_Axis;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.GetNextDirection
struct ABP_SearchArea_C_GetNextDirection_Params
{
	float                                              V;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              H;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESearchAreaDirection>                  Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.SearchLockOnChangeTarget
struct ABP_SearchArea_C_SearchLockOnChangeTarget_Params
{
	TEnumAsByte<ESearchAreaDirection>                  Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3SearchComponent*                          NewTarget;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.TestNewSearchExit
struct ABP_SearchArea_C_TestNewSearchExit_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.TestNewSearchMode
struct ABP_SearchArea_C_TestNewSearchMode_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.StartNewSearchMode
struct ABP_SearchArea_C_StartNewSearchMode_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.UpdateLockOnChange
struct ABP_SearchArea_C_UpdateLockOnChange_Params
{
	float                                              Delta_Seconds;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.GetCurrentTarget
struct ABP_SearchArea_C_GetCurrentTarget_Params
{
	class US3SearchComponent*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
	bool                                               IsCurrentFocus;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.OverlappingCheck
struct ABP_SearchArea_C_OverlappingCheck_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.ContinueSearch
struct ABP_SearchArea_C_ContinueSearch_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.InterruptSearch
struct ABP_SearchArea_C_InterruptSearch_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.TestLockOnChange
struct ABP_SearchArea_C_TestLockOnChange_Params
{
	float                                              Vertical_Axis;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Horizontal_Axis;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.CrouchAction
struct ABP_SearchArea_C_CrouchAction_Params
{
	float                                              Axis_Value;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.SetForbiddenAction
struct ABP_SearchArea_C_SetForbiddenAction_Params
{
	bool                                               Forbidden;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.SetFreeLockMode
struct ABP_SearchArea_C_SetFreeLockMode_Params
{
	bool                                               Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.ForceFind
struct ABP_SearchArea_C_ForceFind_Params
{
	class US3SearchComponent*                          SearchComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ChangeTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ContinuationFlag;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.EndForActor
struct ABP_SearchArea_C_EndForActor_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.StartForActor
struct ABP_SearchArea_C_StartForActor_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.GetDoor
struct ABP_SearchArea_C_GetDoor_Params
{
	struct FString                                     DoorName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class ABP_Gimmick_OpenDoor_Template_C*             Door;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.Initialize
struct ABP_SearchArea_C_Initialize_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.ShowMessage
struct ABP_SearchArea_C_ShowMessage_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.PlayGetSE
struct ABP_SearchArea_C_PlayGetSE_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.LookAtTarget
struct ABP_SearchArea_C_LookAtTarget_Params
{
	class US3SearchComponent*                          Search;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                StartPointType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.ExecBackButton
struct ABP_SearchArea_C_ExecBackButton_Params
{
	ES3ActionIconType                                  IconType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.ExecActionButton
struct ABP_SearchArea_C_ExecActionButton_Params
{
	ES3ActionIconType                                  IconType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.UpdateButton
struct ABP_SearchArea_C_UpdateButton_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.BeginDetectAction
struct ABP_SearchArea_C_BeginDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.DestroyEffect
struct ABP_SearchArea_C_DestroyEffect_Params
{
	class US3SearchComponent*                          SearchComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.SpawnEffect
struct ABP_SearchArea_C_SpawnEffect_Params
{
	class US3SearchComponent*                          SearchComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.UpdateEffect
struct ABP_SearchArea_C_UpdateEffect_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.UserConstructionScript
struct ABP_SearchArea_C_UserConstructionScript_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.BindChangeTimeEvent
struct ABP_SearchArea_C_BindChangeTimeEvent_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.ChangeGameTimeEvent
struct ABP_SearchArea_C_ChangeGameTimeEvent_Params
{
	ES3DayTimeEvent                                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.UnbindChangeTimeEvent
struct ABP_SearchArea_C_UnbindChangeTimeEvent_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.ReceiveTick
struct ABP_SearchArea_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.OnStartSearch
struct ABP_SearchArea_C_OnStartSearch_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.OnStopSearch
struct ABP_SearchArea_C_OnStopSearch_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.ReceiveDestroyed
struct ABP_SearchArea_C_ReceiveDestroyed_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.ReceiveBeginPlay
struct ABP_SearchArea_C_ReceiveBeginPlay_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.DestroyEffectAll
struct ABP_SearchArea_C_DestroyEffectAll_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.UnbindDetect
struct ABP_SearchArea_C_UnbindDetect_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.PlayGetSound
struct ABP_SearchArea_C_PlayGetSound_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.PlayCutscene
struct ABP_SearchArea_C_PlayCutscene_Params
{
	struct FName*                                      CutsceneId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.EndCutscene
struct ABP_SearchArea_C_EndCutscene_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.ForceEnd
struct ABP_SearchArea_C_ForceEnd_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.DoorComplete
struct ABP_SearchArea_C_DoorComplete_Params
{
	class ABP_Gimmick_OpenDoor_Template_C*             Door;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Front;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.FinishedSearchPoint
struct ABP_SearchArea_C_FinishedSearchPoint_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.FreeSearchLock
struct ABP_SearchArea_C_FreeSearchLock_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.InpAxisEvt_ZoomPanVertical_K2Node_InputAxisEvent_1
struct ABP_SearchArea_C_InpAxisEvt_ZoomPanVertical_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.GetItem
struct ABP_SearchArea_C_GetItem_Params
{
	struct FName*                                      ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.DecideDetectAction
struct ABP_SearchArea_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.InpAxisEvt_ZoomPanHorizontal_K2Node_InputAxisEvent_27
struct ABP_SearchArea_C_InpAxisEvt_ZoomPanHorizontal_K2Node_InputAxisEvent_27_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.ReceiveEndPlay
struct ABP_SearchArea_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.onCutsceneEnd
struct ABP_SearchArea_C_onCutsceneEnd_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.onCutsceneStart
struct ABP_SearchArea_C_onCutsceneStart_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.ExitSearchMode
struct ABP_SearchArea_C_ExitSearchMode_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.StartACEvent
struct ABP_SearchArea_C_StartACEvent_Params
{
	class UTalkScript**                                ACEventScript;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.Event_DestroyGrabActor
struct ABP_SearchArea_C_Event_DestroyGrabActor_Params
{
	class US3SearchComponent*                          SearchComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.StartGrabSubAnim
struct ABP_SearchArea_C_StartGrabSubAnim_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.EndGrabSubAnim
struct ABP_SearchArea_C_EndGrabSubAnim_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.ExitSearch
struct ABP_SearchArea_C_ExitSearch_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.ChangeToFreeState
struct ABP_SearchArea_C_ChangeToFreeState_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.UpdateForceExitSearch
struct ABP_SearchArea_C_UpdateForceExitSearch_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.OnFinishedFadeCutScene
struct ABP_SearchArea_C_OnFinishedFadeCutScene_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.Event_SetPlayerVisibleEnabled
struct ABP_SearchArea_C_Event_SetPlayerVisibleEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.OnChangeClothes
struct ABP_SearchArea_C_OnChangeClothes_Params
{
	TScriptInterface<class US3ClothInterface>          Interface;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CharaName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.SearchCollisionBeginOverlap
struct ABP_SearchArea_C_SearchCollisionBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.SeachCollisionEndOverlap
struct ABP_SearchArea_C_SeachCollisionEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.ExecuteUbergraph_BP_SearchArea
struct ABP_SearchArea_C_ExecuteUbergraph_BP_SearchArea_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.OnActionDispacher__DelegateSignature
struct ABP_SearchArea_C_OnActionDispacher__DelegateSignature_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.OnChangeToFreeStateDispacher__DelegateSignature
struct ABP_SearchArea_C_OnChangeToFreeStateDispacher__DelegateSignature_Params
{
};

// Function BP_SearchArea.BP_SearchArea_C.OnEndCutscene__DelegateSignature
struct ABP_SearchArea_C_OnEndCutscene__DelegateSignature_Params
{
	struct FName                                       CutsceneId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SearchArea.BP_SearchArea_C.OnFinishedInitialize__DelegateSignature
struct ABP_SearchArea_C_OnFinishedInitialize__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
