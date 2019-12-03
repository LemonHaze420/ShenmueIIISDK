#pragma once

// Name: Shenmue3, Version: 1.0.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C
// 0x03AC (0x06DC - 0x0330)
class ABP_Hakkason_FindSecretRoom_C : public AS3FindSecretRoom
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      UseItemSkeletalMesh;                                      // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_PillarKeyActor_DrawOutPerformance_LocationRate_16B9BF944813DBBD52A9F0B8D26495C2;// 0x0348(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_PillarKeyActor_DrawOutPerformance__Direction_16B9BF944813DBBD52A9F0B8D26495C2;// 0x034C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_PillarKeyActor_DrawOutPerformance;               // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_PillarKeyActor_ReturnPerformance_LocationRate_068176194CD727F27ECCB390C73B911E;// 0x0358(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_PillarKeyActor_ReturnPerformance__Direction_068176194CD727F27ECCB390C73B911E;// 0x035C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x035D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_PillarKeyActor_ReturnPerformance;                // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_PillarKeyActor_DecideShakePerformance_ShakeRate_0B557E934534B85570F010AF92819092;// 0x0368(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_PillarKeyActor_DecideShakePerformance__Direction_0B557E934534B85570F010AF92819092;// 0x036C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_PillarKeyActor_DecideShakePerformance;           // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_PillarKeyActor_MoveSelect_MoveRate_4E55B4E34C692369DA8DCC9BAFE8ACD8;// 0x0378(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_PillarKeyActor_MoveSelect__Direction_4E55B4E34C692369DA8DCC9BAFE8ACD8;// 0x037C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_PillarKeyActor_MoveSelect;                       // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_PillarKeyActor_DecidePerformance_OthersLocationRate_87B8BF054243E2F5A8F58BA4B9564916;// 0x0388(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_PillarKeyActor_DecidePerformance_SelectedLocationRate_87B8BF054243E2F5A8F58BA4B9564916;// 0x038C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_PillarKeyActor_DecidePerformance__Direction_87B8BF054243E2F5A8F58BA4B9564916;// 0x0390(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_PillarKeyActor_DecidePerformance;                // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_PillarKeyActor_PlaceMove_MoveLocationRate_C39EEBEC479FBBEA8BEDE9AF6431BC3B;// 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_PillarKeyActor_PlaceMove_MoveRotationRate_C39EEBEC479FBBEA8BEDE9AF6431BC3B;// 0x03A4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_PillarKeyActor_PlaceMove__Direction_C39EEBEC479FBBEA8BEDE9AF6431BC3B;// 0x03A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_PillarKeyActor_PlaceMove;                        // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_PillarKeyActor_MoveIn_MoveLocationRate_B5F5F50348091A2C5F36C08841644100;// 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_PillarKeyActor_MoveIn__Direction_B5F5F50348091A2C5F36C08841644100;// 0x03BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x03BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_PillarKeyActor_MoveIn;                           // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      ThisRenewalCounter;                                       // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	int                                                ModeID;                                                   // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UseItemset_ID;                                            // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	struct FString                                     SaveMsg;                                                  // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_S3AttentionController_C*                 Temp_S3Attention;                                         // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     EVENT_ID_CORRECT;                                         // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     EVENT_ID_FAKE;                                            // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsCorrectPillarSelectedFlag;                              // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0411(0x0007) MISSED OFFSET
	struct FString                                     Temp_Msg;                                                 // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<EN_UseItemResult>, struct FString> EnumResultToSendMsg_BellTower;                            // 0x0428(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               InventoryEnd;                                             // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	class UWBP_BellTowerPillarUseItem_C*               UseItemWidget;                                            // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ACameraActor*                                TmpPrevCamera;                                            // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ACameraActor*                                TmpNextCamera;                                            // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                UseItemEventTimerHandle;                                  // 0x0498(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     UseItemResultMsg;                                         // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                              UseItemPillarKeyActorList;                                // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTransform                                  UseItemBackCameraTransform;                               // 0x04C0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAttentionStartedDirectFlag;                             // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x04F1(0x0003) MISSED OFFSET
	int                                                CurrentUseItemFailedCount;                                // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_ActorVisibleControl_C*                   HideNPCVisibleControl;                                    // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     GIMMICK_HELP_NAME;                                        // 0x0500(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsHelpAddedFlag;                                          // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0511(0x0007) MISSED OFFSET
	TArray<class APointLight*>                         PillarPointLightList;                                     // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FName>                               CurrentUsableItemIDList;                                  // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      UseItemPillarKeyParentActor;                              // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              UseItemPillarKeyPlaceRootActorList;                       // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_BellTowerKeySelectEffect_C*              UseItemPillarKeySelectEffectActor;                        // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentMovePillarKeyPlaceRootIndex;                       // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDelayBeforePillarKeyActorAppearFlag;                    // 0x055C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x055D(0x0003) MISSED OFFSET
	float                                              KEY_PLACE_INTERVAL_ANGLE;                                 // 0x0560(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentUsableItemIDLIstCenterIndex;                       // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PillarKeyParentActorBaseRotation;                         // 0x0568(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              KEY_PLACE_PITCH_ANGLE;                                    // 0x0574(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SelectedKeyActorBaseLocation;                             // 0x0578(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SelectedKeyActorShakeLocation;                            // 0x0584(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               PLACEMENT_ORDERED_KEY_ITEM_LIST;                          // 0x0590(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsUseItemInputableFlag;                                   // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x05A1(0x0003) MISSED OFFSET
	int                                                CurrentSelectedUsableItemListIndex;                       // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PrevSelectedUsableItemListIndex;                          // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CENTER_KEY_SIDE_RIGHT;                                    // 0x05AC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x05AD(0x0003) MISSED OFFSET
	TArray<struct FName>                               PLACEMENT_ORDERED_PILLAR_LIST;                            // 0x05B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, struct FST_BellTowerPillarData> PILLAR_DATA_MAP;                                          // 0x05C0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_BellTowerPillarStatus>           PillarStatusList;                                         // 0x0610(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentPillarIndex;                                       // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0624(0x0004) MISSED OFFSET
	struct FName                                       EVENT_LEVEL_NAME;                                         // 0x0628(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, class UStaticMesh*>             KEY_ITEM_MESH_MAP;                                        // 0x0630(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       PILLAR_LIGHT_ACTOR_TAG;                                   // 0x0680(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x8];                                       // 0x0688(0x0008) MISSED OFFSET
	struct FTransform                                  USED_KEY_ACTOR_RELATIVE_TRANSFORM;                        // 0x0690(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LastDrawnItemID;                                          // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_MiniGameChooseTriangleSpawn_C*           KeyDirectionEffectActor;                                  // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DrawOutKeyActorStartLocation;                             // 0x06D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hakkason_FindSecretRoom.BP_Hakkason_FindSecretRoom_C");
		return ptr;
	}


	int STATIC_GetPriority();
	TArray<struct FS3DetectActionParam> STATIC_GetDetectAction();
	class UMeshComponent* GetClothMeshComponent();
	void STATIC_SetUseItemWidgetCrossButtonInputableVisible(bool IsVisible);
	void STATIC_OnFinishedFadeOutBeforeFinishUseItem();
	void StartFadeOutBeforeFinishUseItem();
	void STATIC_SetupPillarInputStart();
	void OnFinishedPillarKeyActorDrawOutPerformance();
	void UpdatePillarKeyActorDrawOutPerformance(float InLocationRate);
	void STATIC_StartPillarKeyActorDrawOutPerformance();
	void STATIC_SetKeyDirectionEffectVisible(bool InIsVisible);
	void STATIC_UpdateKeyDirectionEffect();
	void STATIC_FinalizeKeyDirectionEffect();
	void STATIC_InitializeKeyDirectionEffect();
	void SetHiddenPlayerCharacter(bool IsHidden);
	void OnFinishedPillarKeyActorReturnPerformance();
	void UpdatePillarKeyActorReturnPerformance(float InLocationRate);
	void STATIC_StartPillarKeyActorReturnPerformance();
	void STATIC_MoveFloatingKeyActorToCorrectPillar();
	void AddItemNum(const struct FName& InItemId, int InNum);
	void SetupPillarStatusCameraTransform();
	void SetupPillarStatusAttentionComponent();
	void STATIC_SetPillarUsedItemID(int InIndex, const struct FName& InItemId);
	struct FST_BellTowerPillarStatus GetCurrentPillarStatus();
	struct FST_BellTowerPillarStatus GetPillarStatus(int InIndex);
	struct FST_BellTowerPillarData GetPillarData(const struct FName& InActorTag);
	void STATIC_OnInputCancel();
	void STATIC_SetUseItemWidgetVisible(bool IsVisible);
	void DrawItemFromPillar();
	void UseItemToPillar();
	void STATIC_OnInputActionToPillar();
	void STATIC_RegisterDetectAction(bool InUnregister);
	void OnInputMoveToNextPillar(bool IsRight);
	struct FName GetCurrentSelectedUsableItemID();
	void OnInputMoveItemSelection(bool IsRight);
	bool IsCurrentPillarUsedItem();
	void SetUseItemInputable(bool NewInputable);
	void PermitOtherUI();
	void ForbidOtherUI();
	void SetupUseItemInsertSkeletalMesh();
	void STATIC_OnFinishedUseItemInsertStartFadeOut();
	void STATIC_UpdatePillarKeyActorDecideShakePerformance(float InShakeRate);
	void STATIC_OnFinishedPillarKeyActorMoveSelect();
	void UpdatePillarKeyParentActorMoveSelect(float InMoveRate);
	void STATIC_SelectCenterUsableItem();
	void UpdatePillarKeyActorDecidePerformance(float InSelectedLocationRate, float InOthersLocationRate);
	void STATIC_OnFinishedPillarKeyActorDecidePerformance();
	void StartPillarKeyActorDecidePerformance();
	void CheckAllPillarUsedItem(bool* IsAllUsed, bool* IsAllSucceeded);
	void UpdatePillarKeySelectEffectActorFromItemID(const struct FName& ItemId);
	void STATIC_SetHiddenPillarKeySelectEffectActor(bool NewHidden);
	void STATIC_FinalizePillarKeyActor();
	void STATIC_OnFinishedPillarKeyActorAppear();
	void STATIC_UpdatePillarKeyPlaceRootActor(int InSpecifiedIndex, float InRotationRate, float InLocationRate);
	void UpdatePillarKeyParentActorAppear(float InLocationRate);
	void STATIC_SetHiddenAllUsableKeyActor(bool NewHidden);
	void UpdateCurrentUsableItemIDList();
	void STATIC_StartSelectedPillarKeyActorDisappear(const struct FName& InItemId);
	void StartPillarKeyActorAppear(bool bInstant);
	void STATIC_SetPillarLightVisibile(bool IsVisible);
	void InitPillarLight();
	bool STATIC_IsUseSmoothInsertAnimation();
	void OnChangedAttentionTargetForFirstHelp();
	void STATIC_RemoveHelp();
	void AddHelp();
	void STATIC_FinalizeHideNPC();
	void STATIC_InitializeHideNPC();
	class AActor* GetCurrentPillarUsedKeyActor();
	class AActor* STATIC_GetPillarKeyActorFromItemID(const struct FName& InItemId);
	void STATIC_OnFinishedUseItemDrawOutFadeIn();
	void OnFinishedWaitBeforeUseItemDrawOutFadeIn();
	void STATIC_OnFinishedUseItemDrawOutFadeOut();
	void STATIC_RestoreAttentionForceEventScriptEnabled();
	struct FString STATIC_GetPillarAttentionForceEventScript();
	void OnChangedAttentionTarget();
	class US3AttentionComponent* GetPillarAttentionComponentFromActorTag(const struct FName& InActorTag);
	void PlayUseItemInsertAnimation();
	void OnFinishedUseItemInsertCameraMove();
	void STATIC_StartAttentionToPillar();
	void STATIC_OnFinishedUseItemInsertItemAnimation(class UAnimMontage* Montage, bool interrupted);
	void StartUseItemInsertItem();
	void OnFinishedUseItemInsertItem();
	void STATIC_OnNotifyReleasedItem();
	void InitPillarKeyActor();
	struct FString GetUseItemResultFailedMessage(int InPillarIndex);
	int GetPillarIndexFromComponent(class US3AttentionComponent* InComponent);
	void STATIC_FinishUseItem();
	void OnFinishedWaitBeforeUseItemWidgetStart();
	void StartUseItem();
	void STATIC_ClearUseItemEventTimerHandle();
	void OnFinishedMoveToNextPillar();
	void STATIC_MoveToNextPillar(bool IsRight);
	void ResetPillar();
	void InitPillar();
	void EndAttention();
	void STATIC_SetAttentionInputActionEnabled(bool Enabled);
	void JudgePillarDecide(const struct FString& EventId, bool* IsPillarDecided);
	void STATIC_InitSet(bool InventoryEnd);
	void STATIC_UserConstructionScript();
	void STATIC_Timeline_PillarKeyActor_DecidePerformance__FinishedFunc();
	void STATIC_Timeline_PillarKeyActor_DecidePerformance__UpdateFunc();
	void STATIC_Timeline_PillarKeyActor_MoveSelect__FinishedFunc();
	void STATIC_Timeline_PillarKeyActor_MoveSelect__UpdateFunc();
	void STATIC_Timeline_PillarKeyActor_DecideShakePerformance__FinishedFunc();
	void STATIC_Timeline_PillarKeyActor_DecideShakePerformance__UpdateFunc();
	void STATIC_Timeline_PillarKeyActor_PlaceMove__FinishedFunc();
	void STATIC_Timeline_PillarKeyActor_PlaceMove__UpdateFunc();
	void Timeline_PillarKeyActor_ReturnPerformance__FinishedFunc();
	void Timeline_PillarKeyActor_ReturnPerformance__UpdateFunc();
	void Timeline_PillarKeyActor_DrawOutPerformance__FinishedFunc();
	void Timeline_PillarKeyActor_DrawOutPerformance__UpdateFunc();
	void Timeline_PillarKeyActor_MoveIn__FinishedFunc();
	void Timeline_PillarKeyActor_MoveIn__UpdateFunc();
	void STATIC_InpActEvt_SearchLeftSelect_K2Node_InputActionEvent_8(const struct FKey& Key);
	void STATIC_InpActEvt_SearchRightSelect_K2Node_InputActionEvent_7(const struct FKey& Key);
	void STATIC_InpActEvt_LeftTrigger_K2Node_InputActionEvent_6(const struct FKey& Key);
	void STATIC_InpActEvt_RightTrigger_K2Node_InputActionEvent_5(const struct FKey& Key);
	void STATIC_PillarKeyActor_DelayAppear();
	void STATIC_PillarKeyActor_DecidePerformance();
	void STATIC_PillarKeyActor_MoveSelect();
	void STATIC_PillarKeyActor_DecideShakePerformance();
	void STATIC_PillarKeyActor_ReturnPerformance();
	void STATIC_PillarKeyActor_DrawOutPerformance();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_PillarKeyActor_Appear();
	void STATIC_RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter);
	void STATIC_TickChangeCheckKill();
	void STATIC_AttentionOnAccord(const struct FString& EventId);
	void STATIC_DecideDetectAction(ES3ActionIconType Type);
	void STATIC_StartAttention();
	void ExecuteUbergraph_BP_Hakkason_FindSecretRoom(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
