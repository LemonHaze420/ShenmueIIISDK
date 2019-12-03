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

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetPriority
struct ABP_Hakkason_FindSecretRoom_C_GetPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetDetectAction
struct ABP_Hakkason_FindSecretRoom_C_GetDetectAction_Params
{
	TArray<struct FS3DetectActionParam>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetClothMeshComponent
struct ABP_Hakkason_FindSecretRoom_C_GetClothMeshComponent_Params
{
	class UMeshComponent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetUseItemWidgetCrossButtonInputableVisible
struct ABP_Hakkason_FindSecretRoom_C_SetUseItemWidgetCrossButtonInputableVisible_Params
{
	bool                                               IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedFadeOutBeforeFinishUseItem
struct ABP_Hakkason_FindSecretRoom_C_OnFinishedFadeOutBeforeFinishUseItem_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartFadeOutBeforeFinishUseItem
struct ABP_Hakkason_FindSecretRoom_C_StartFadeOutBeforeFinishUseItem_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetupPillarInputStart
struct ABP_Hakkason_FindSecretRoom_C_SetupPillarInputStart_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedPillarKeyActorDrawOutPerformance
struct ABP_Hakkason_FindSecretRoom_C_OnFinishedPillarKeyActorDrawOutPerformance_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeyActorDrawOutPerformance
struct ABP_Hakkason_FindSecretRoom_C_UpdatePillarKeyActorDrawOutPerformance_Params
{
	float                                              InLocationRate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartPillarKeyActorDrawOutPerformance
struct ABP_Hakkason_FindSecretRoom_C_StartPillarKeyActorDrawOutPerformance_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetKeyDirectionEffectVisible
struct ABP_Hakkason_FindSecretRoom_C_SetKeyDirectionEffectVisible_Params
{
	bool                                               InIsVisible;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdateKeyDirectionEffect
struct ABP_Hakkason_FindSecretRoom_C_UpdateKeyDirectionEffect_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.FinalizeKeyDirectionEffect
struct ABP_Hakkason_FindSecretRoom_C_FinalizeKeyDirectionEffect_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InitializeKeyDirectionEffect
struct ABP_Hakkason_FindSecretRoom_C_InitializeKeyDirectionEffect_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetHiddenPlayerCharacter
struct ABP_Hakkason_FindSecretRoom_C_SetHiddenPlayerCharacter_Params
{
	bool                                               IsHidden;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedPillarKeyActorReturnPerformance
struct ABP_Hakkason_FindSecretRoom_C_OnFinishedPillarKeyActorReturnPerformance_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeyActorReturnPerformance
struct ABP_Hakkason_FindSecretRoom_C_UpdatePillarKeyActorReturnPerformance_Params
{
	float                                              InLocationRate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartPillarKeyActorReturnPerformance
struct ABP_Hakkason_FindSecretRoom_C_StartPillarKeyActorReturnPerformance_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.MoveFloatingKeyActorToCorrectPillar
struct ABP_Hakkason_FindSecretRoom_C_MoveFloatingKeyActorToCorrectPillar_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.AddItemNum
struct ABP_Hakkason_FindSecretRoom_C_AddItemNum_Params
{
	struct FName                                       InItemId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InNum;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetupPillarStatusCameraTransform
struct ABP_Hakkason_FindSecretRoom_C_SetupPillarStatusCameraTransform_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetupPillarStatusAttentionComponent
struct ABP_Hakkason_FindSecretRoom_C_SetupPillarStatusAttentionComponent_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetPillarUsedItemID
struct ABP_Hakkason_FindSecretRoom_C_SetPillarUsedItemID_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InItemId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetCurrentPillarStatus
struct ABP_Hakkason_FindSecretRoom_C_GetCurrentPillarStatus_Params
{
	struct FST_BellTowerPillarStatus                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetPillarStatus
struct ABP_Hakkason_FindSecretRoom_C_GetPillarStatus_Params
{
	int                                                InIndex;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_BellTowerPillarStatus                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetPillarData
struct ABP_Hakkason_FindSecretRoom_C_GetPillarData_Params
{
	struct FName                                       InActorTag;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FST_BellTowerPillarData                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnInputCancel
struct ABP_Hakkason_FindSecretRoom_C_OnInputCancel_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetUseItemWidgetVisible
struct ABP_Hakkason_FindSecretRoom_C_SetUseItemWidgetVisible_Params
{
	bool                                               IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.DrawItemFromPillar
struct ABP_Hakkason_FindSecretRoom_C_DrawItemFromPillar_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UseItemToPillar
struct ABP_Hakkason_FindSecretRoom_C_UseItemToPillar_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnInputActionToPillar
struct ABP_Hakkason_FindSecretRoom_C_OnInputActionToPillar_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.RegisterDetectAction
struct ABP_Hakkason_FindSecretRoom_C_RegisterDetectAction_Params
{
	bool                                               InUnregister;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnInputMoveToNextPillar
struct ABP_Hakkason_FindSecretRoom_C_OnInputMoveToNextPillar_Params
{
	bool                                               IsRight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetCurrentSelectedUsableItemID
struct ABP_Hakkason_FindSecretRoom_C_GetCurrentSelectedUsableItemID_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnInputMoveItemSelection
struct ABP_Hakkason_FindSecretRoom_C_OnInputMoveItemSelection_Params
{
	bool                                               IsRight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.IsCurrentPillarUsedItem
struct ABP_Hakkason_FindSecretRoom_C_IsCurrentPillarUsedItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetUseItemInputable
struct ABP_Hakkason_FindSecretRoom_C_SetUseItemInputable_Params
{
	bool                                               NewInputable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PermitOtherUI
struct ABP_Hakkason_FindSecretRoom_C_PermitOtherUI_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.ForbidOtherUI
struct ABP_Hakkason_FindSecretRoom_C_ForbidOtherUI_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetupUseItemInsertSkeletalMesh
struct ABP_Hakkason_FindSecretRoom_C_SetupUseItemInsertSkeletalMesh_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedUseItemInsertStartFadeOut
struct ABP_Hakkason_FindSecretRoom_C_OnFinishedUseItemInsertStartFadeOut_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeyActorDecideShakePerformance
struct ABP_Hakkason_FindSecretRoom_C_UpdatePillarKeyActorDecideShakePerformance_Params
{
	float                                              InShakeRate;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedPillarKeyActorMoveSelect
struct ABP_Hakkason_FindSecretRoom_C_OnFinishedPillarKeyActorMoveSelect_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeyParentActorMoveSelect
struct ABP_Hakkason_FindSecretRoom_C_UpdatePillarKeyParentActorMoveSelect_Params
{
	float                                              InMoveRate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SelectCenterUsableItem
struct ABP_Hakkason_FindSecretRoom_C_SelectCenterUsableItem_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeyActorDecidePerformance
struct ABP_Hakkason_FindSecretRoom_C_UpdatePillarKeyActorDecidePerformance_Params
{
	float                                              InSelectedLocationRate;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InOthersLocationRate;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedPillarKeyActorDecidePerformance
struct ABP_Hakkason_FindSecretRoom_C_OnFinishedPillarKeyActorDecidePerformance_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartPillarKeyActorDecidePerformance
struct ABP_Hakkason_FindSecretRoom_C_StartPillarKeyActorDecidePerformance_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.CheckAllPillarUsedItem
struct ABP_Hakkason_FindSecretRoom_C_CheckAllPillarUsedItem_Params
{
	bool                                               IsAllUsed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAllSucceeded;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeySelectEffectActorFromItemID
struct ABP_Hakkason_FindSecretRoom_C_UpdatePillarKeySelectEffectActorFromItemID_Params
{
	struct FName                                       ItemId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetHiddenPillarKeySelectEffectActor
struct ABP_Hakkason_FindSecretRoom_C_SetHiddenPillarKeySelectEffectActor_Params
{
	bool                                               NewHidden;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.FinalizePillarKeyActor
struct ABP_Hakkason_FindSecretRoom_C_FinalizePillarKeyActor_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedPillarKeyActorAppear
struct ABP_Hakkason_FindSecretRoom_C_OnFinishedPillarKeyActorAppear_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeyPlaceRootActor
struct ABP_Hakkason_FindSecretRoom_C_UpdatePillarKeyPlaceRootActor_Params
{
	int                                                InSpecifiedIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRotationRate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InLocationRate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdatePillarKeyParentActorAppear
struct ABP_Hakkason_FindSecretRoom_C_UpdatePillarKeyParentActorAppear_Params
{
	float                                              InLocationRate;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetHiddenAllUsableKeyActor
struct ABP_Hakkason_FindSecretRoom_C_SetHiddenAllUsableKeyActor_Params
{
	bool                                               NewHidden;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UpdateCurrentUsableItemIDList
struct ABP_Hakkason_FindSecretRoom_C_UpdateCurrentUsableItemIDList_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartSelectedPillarKeyActorDisappear
struct ABP_Hakkason_FindSecretRoom_C_StartSelectedPillarKeyActorDisappear_Params
{
	struct FName                                       InItemId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartPillarKeyActorAppear
struct ABP_Hakkason_FindSecretRoom_C_StartPillarKeyActorAppear_Params
{
	bool                                               bInstant;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetPillarLightVisibile
struct ABP_Hakkason_FindSecretRoom_C_SetPillarLightVisibile_Params
{
	bool                                               IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InitPillarLight
struct ABP_Hakkason_FindSecretRoom_C_InitPillarLight_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.IsUseSmoothInsertAnimation
struct ABP_Hakkason_FindSecretRoom_C_IsUseSmoothInsertAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnChangedAttentionTargetForFirstHelp
struct ABP_Hakkason_FindSecretRoom_C_OnChangedAttentionTargetForFirstHelp_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.RemoveHelp
struct ABP_Hakkason_FindSecretRoom_C_RemoveHelp_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.AddHelp
struct ABP_Hakkason_FindSecretRoom_C_AddHelp_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.FinalizeHideNPC
struct ABP_Hakkason_FindSecretRoom_C_FinalizeHideNPC_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InitializeHideNPC
struct ABP_Hakkason_FindSecretRoom_C_InitializeHideNPC_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetCurrentPillarUsedKeyActor
struct ABP_Hakkason_FindSecretRoom_C_GetCurrentPillarUsedKeyActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetPillarKeyActorFromItemID
struct ABP_Hakkason_FindSecretRoom_C_GetPillarKeyActorFromItemID_Params
{
	struct FName                                       InItemId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedUseItemDrawOutFadeIn
struct ABP_Hakkason_FindSecretRoom_C_OnFinishedUseItemDrawOutFadeIn_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedWaitBeforeUseItemDrawOutFadeIn
struct ABP_Hakkason_FindSecretRoom_C_OnFinishedWaitBeforeUseItemDrawOutFadeIn_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedUseItemDrawOutFadeOut
struct ABP_Hakkason_FindSecretRoom_C_OnFinishedUseItemDrawOutFadeOut_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.RestoreAttentionForceEventScriptEnabled
struct ABP_Hakkason_FindSecretRoom_C_RestoreAttentionForceEventScriptEnabled_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetPillarAttentionForceEventScript
struct ABP_Hakkason_FindSecretRoom_C_GetPillarAttentionForceEventScript_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnChangedAttentionTarget
struct ABP_Hakkason_FindSecretRoom_C_OnChangedAttentionTarget_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetPillarAttentionComponentFromActorTag
struct ABP_Hakkason_FindSecretRoom_C_GetPillarAttentionComponentFromActorTag_Params
{
	struct FName                                       InActorTag;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class US3AttentionComponent*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PlayUseItemInsertAnimation
struct ABP_Hakkason_FindSecretRoom_C_PlayUseItemInsertAnimation_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedUseItemInsertCameraMove
struct ABP_Hakkason_FindSecretRoom_C_OnFinishedUseItemInsertCameraMove_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartAttentionToPillar
struct ABP_Hakkason_FindSecretRoom_C_StartAttentionToPillar_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedUseItemInsertItemAnimation
struct ABP_Hakkason_FindSecretRoom_C_OnFinishedUseItemInsertItemAnimation_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               interrupted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartUseItemInsertItem
struct ABP_Hakkason_FindSecretRoom_C_StartUseItemInsertItem_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedUseItemInsertItem
struct ABP_Hakkason_FindSecretRoom_C_OnFinishedUseItemInsertItem_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnNotifyReleasedItem
struct ABP_Hakkason_FindSecretRoom_C_OnNotifyReleasedItem_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InitPillarKeyActor
struct ABP_Hakkason_FindSecretRoom_C_InitPillarKeyActor_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetUseItemResultFailedMessage
struct ABP_Hakkason_FindSecretRoom_C_GetUseItemResultFailedMessage_Params
{
	int                                                InPillarIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.GetPillarIndexFromComponent
struct ABP_Hakkason_FindSecretRoom_C_GetPillarIndexFromComponent_Params
{
	class US3AttentionComponent*                       InComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.FinishUseItem
struct ABP_Hakkason_FindSecretRoom_C_FinishUseItem_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedWaitBeforeUseItemWidgetStart
struct ABP_Hakkason_FindSecretRoom_C_OnFinishedWaitBeforeUseItemWidgetStart_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartUseItem
struct ABP_Hakkason_FindSecretRoom_C_StartUseItem_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.ClearUseItemEventTimerHandle
struct ABP_Hakkason_FindSecretRoom_C_ClearUseItemEventTimerHandle_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.OnFinishedMoveToNextPillar
struct ABP_Hakkason_FindSecretRoom_C_OnFinishedMoveToNextPillar_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.MoveToNextPillar
struct ABP_Hakkason_FindSecretRoom_C_MoveToNextPillar_Params
{
	bool                                               IsRight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.ResetPillar
struct ABP_Hakkason_FindSecretRoom_C_ResetPillar_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InitPillar
struct ABP_Hakkason_FindSecretRoom_C_InitPillar_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.EndAttention
struct ABP_Hakkason_FindSecretRoom_C_EndAttention_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.SetAttentionInputActionEnabled
struct ABP_Hakkason_FindSecretRoom_C_SetAttentionInputActionEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.JudgePillarDecide
struct ABP_Hakkason_FindSecretRoom_C_JudgePillarDecide_Params
{
	struct FString                                     EventId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsPillarDecided;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InitSet
struct ABP_Hakkason_FindSecretRoom_C_InitSet_Params
{
	bool                                               InventoryEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.UserConstructionScript
struct ABP_Hakkason_FindSecretRoom_C_UserConstructionScript_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_DecidePerformance__FinishedFunc
struct ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_DecidePerformance__FinishedFunc_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_DecidePerformance__UpdateFunc
struct ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_DecidePerformance__UpdateFunc_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_MoveSelect__FinishedFunc
struct ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_MoveSelect__FinishedFunc_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_MoveSelect__UpdateFunc
struct ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_MoveSelect__UpdateFunc_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_DecideShakePerformance__FinishedFunc
struct ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_DecideShakePerformance__FinishedFunc_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_DecideShakePerformance__UpdateFunc
struct ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_DecideShakePerformance__UpdateFunc_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_PlaceMove__FinishedFunc
struct ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_PlaceMove__FinishedFunc_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_PlaceMove__UpdateFunc
struct ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_PlaceMove__UpdateFunc_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_ReturnPerformance__FinishedFunc
struct ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_ReturnPerformance__FinishedFunc_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_ReturnPerformance__UpdateFunc
struct ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_ReturnPerformance__UpdateFunc_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_DrawOutPerformance__FinishedFunc
struct ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_DrawOutPerformance__FinishedFunc_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_DrawOutPerformance__UpdateFunc
struct ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_DrawOutPerformance__UpdateFunc_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_MoveIn__FinishedFunc
struct ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_MoveIn__FinishedFunc_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.Timeline_PillarKeyActor_MoveIn__UpdateFunc
struct ABP_Hakkason_FindSecretRoom_C_Timeline_PillarKeyActor_MoveIn__UpdateFunc_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8
struct ABP_Hakkason_FindSecretRoom_C_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InpActEvt_SearchRightSelect_K2Node_InputActionEvent_7
struct ABP_Hakkason_FindSecretRoom_C_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InpActEvt_LeftTrigger_K2Node_InputActionEvent_6
struct ABP_Hakkason_FindSecretRoom_C_InpActEvt_LeftTrigger_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.InpActEvt_RightTrigger_K2Node_InputActionEvent_5
struct ABP_Hakkason_FindSecretRoom_C_InpActEvt_RightTrigger_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PillarKeyActor_DelayAppear
struct ABP_Hakkason_FindSecretRoom_C_PillarKeyActor_DelayAppear_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PillarKeyActor_DecidePerformance
struct ABP_Hakkason_FindSecretRoom_C_PillarKeyActor_DecidePerformance_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PillarKeyActor_MoveSelect
struct ABP_Hakkason_FindSecretRoom_C_PillarKeyActor_MoveSelect_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PillarKeyActor_DecideShakePerformance
struct ABP_Hakkason_FindSecretRoom_C_PillarKeyActor_DecideShakePerformance_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PillarKeyActor_ReturnPerformance
struct ABP_Hakkason_FindSecretRoom_C_PillarKeyActor_ReturnPerformance_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PillarKeyActor_DrawOutPerformance
struct ABP_Hakkason_FindSecretRoom_C_PillarKeyActor_DrawOutPerformance_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.ReceiveTick
struct ABP_Hakkason_FindSecretRoom_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.PillarKeyActor_Appear
struct ABP_Hakkason_FindSecretRoom_C_PillarKeyActor_Appear_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.RenewalActorCount
struct ABP_Hakkason_FindSecretRoom_C_RenewalActorCount_Params
{
	TEnumAsByte<EN_MainFlowActorID>                    ActorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RenewalCounter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.TickChangeCheckKill
struct ABP_Hakkason_FindSecretRoom_C_TickChangeCheckKill_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.AttentionOnAccord
struct ABP_Hakkason_FindSecretRoom_C_AttentionOnAccord_Params
{
	struct FString                                     EventId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.DecideDetectAction
struct ABP_Hakkason_FindSecretRoom_C_DecideDetectAction_Params
{
	ES3ActionIconType                                  Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.StartAttention
struct ABP_Hakkason_FindSecretRoom_C_StartAttention_Params
{
};

// Function BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C.ExecuteUbergraph_BP_Hakkason_FindSecretRoom
struct ABP_Hakkason_FindSecretRoom_C_ExecuteUbergraph_BP_Hakkason_FindSecretRoom_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
