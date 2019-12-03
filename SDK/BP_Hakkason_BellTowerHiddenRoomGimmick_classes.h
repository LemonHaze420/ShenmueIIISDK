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

// BlueprintGeneratedClass BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C
// 0x01D1 (0x0509 - 0x0338)
class ABP_Hakkason_BellTowerHiddenRoomGimmick_C : public AS3BellTowerGimmick
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SevenStarSword;                                           // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ChildCameraActor;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Chara_SHE;                                                // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Chara_RYO;                                                // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CharaParent;                                              // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TimelineRotateHandle_RotateRate_E1C057AC4D20DF7CA7B160BB611CAF41;// 0x0370(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TimelineRotateHandle__Direction_E1C057AC4D20DF7CA7B160BB611CAF41;// 0x0374(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0375(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TimelineRotateHandle;                                     // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ROTATE_HANDLE_ACTOR_TAG;                                  // 0x0380(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TARGET_COVER_ACTOR_TAG;                                   // 0x0388(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      RotateHandleActor;                                        // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      TargetCoverActor;                                         // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEventStartedFlag;                                       // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	struct FVector                                     TARGET_COVER_CLOSED_OFFSET;                               // 0x03A4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TARGET_COVER_OPENED_OFFSET;                               // 0x03B0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentRotateHandleAngle;                                 // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GoalRotateHandleAngle;                                    // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentRotateCount;                                       // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentCorrectNum;                                        // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRotateRight;                                             // 0x03CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03CD(0x0003) MISSED OFFSET
	float                                              ROTATE_HANDLE_UNIT_ANGLE;                                 // 0x03D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEnabledDecideActionFlag;                                // 0x03D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnEndGimmickEvent;                                        // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndItemSelect;                                          // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FString                                     GIMMICK_HELP_NAME;                                        // 0x03F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       ROTATE_CORRECT_DIRECTIONS;                                // 0x0408(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsFailedFlag;                                             // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ThisRenewalCounter;                                       // 0x0419(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x041A(0x0002) MISSED OFFSET
	float                                              RYO_INITIAL_ANGLE;                                        // 0x041C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SHE_INITIAL_ANGLE;                                        // 0x0420(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	class UAnimMontage*                                RYO_ROTATE_ANIMMONTAGE_LEFT;                              // 0x0428(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RYO_ROTATE_ANIMMONTAGE_RIGHT;                             // 0x0430(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SHE_ROTATE_ANIMMONTAGE_LEFT;                              // 0x0438(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SHE_ROTATE_ANIMMONTAGE_RIGHT;                             // 0x0440(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UABP_RintenkiGimmickChara_C*                 CharaABP_RYO;                                             // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UABP_RintenkiGimmickChara_C*                 CharaABP_SHE;                                             // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UABP_RintenkiGimmickChara_C*>         CharaABPList;                                             // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ALevelSequenceActor*                         IntroLevelSequenceActor;                                  // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ULevelSequencePlayer*                        IntroLevelSequencePlayer;                                 // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWBP_SimpleYesCancelDialog_C*                CancelDialogWidget;                                       // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsCanceledFlag;                                           // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsForceFailedFlag;                                        // 0x0481(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0482(0x0002) MISSED OFFSET
	int                                                FORCE_FAILED_ROTATE_COUNT;                                // 0x0484(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWBP_BellTowerHiddenRoomGimmickHint_C*       GimmickHintWidget;                                        // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bDispGimmickHint;                                         // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0491(0x0003) MISSED OFFSET
	int                                                NORMAL_FAILED_ROTATE_COUNT;                               // 0x0494(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               RYO_IDLE_ANIMSEQUENCE_LEFT;                               // 0x0498(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               RYO_IDLE_ANIMSEQUENCE_RIGHT;                              // 0x04A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SHE_IDLE_ANIMSEQUENCE_LEFT;                               // 0x04A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SHE_IDLE_ANIMSEQUENCE_RIGHT;                              // 0x04B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x8];                                       // 0x04B8(0x0008) MISSED OFFSET
	struct FTransform                                  SWORD_HANDLE_RELATIVE_TRANSFORM;                          // 0x04C0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HIDE_TARGET_ACTOR_TAG;                                    // 0x04F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              HideTargetActorList;                                      // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsSetupCharaChangeClothesFlag;                            // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hakkason_BellTowerHiddenRoomGimmick.BP_Hakkason_BellTowerHiddenRoomGimmick_C");
		return ptr;
	}


	int STATIC_GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void SetupCharaChangeClothes();
	void STATIC_SetAllHideTargetActorHidden(bool InHidden);
	void STATIC_SetPlayerCharacterHidden(bool InHidden);
	class UMeshComponent* STATIC_GetClothMeshComponent();
	void STATIC_UpdateSevenStarSword();
	void SetupSevenStarSword();
	void STATIC_SetCharaIdleState(bool InIdleState);
	void STATIC_PermitOtherUI();
	void STATIC_ForbidOtherUI();
	void SetDispGimmickHint(bool bDisp);
	void STATIC_SetGimmickHintVisible(bool IsVisible);
	void FinalizeGimmickHint();
	void InitializeGimmickHint();
	bool IsRotateCountReachedFailedFinishCount();
	bool IsCanceled();
	void OnFinishedCancelDialog();
	void STATIC_StartCancelDialog();
	void FinalizeCancelDialog();
	void STATIC_InitializeCancelDialog();
	void STATIC_OnFinishedIntroduction();
	void OnFinishedIntroSequencer();
	void STATIC_PlayIntroSequencer(bool* IsSucceeded);
	void SetCharaParentRotation(float Angle);
	void UpdateCharaRotateAnimation(float RotateRate);
	void STATIC_PlayCharaRotateAnimation();
	void STATIC_SetCharaVisibility(bool NewVisibility);
	void STATIC_InitializeChara();
	bool IsCompleteCorrect();
	bool IsCurrentRotateCorrect();
	void STATIC_JudgeItemSelect(TArray<int>* SelectItemNo);
	void ResetRotateActor();
	void SetupRotate(bool bRight);
	void UpdateTargetCoverOpen(float OpenRate);
	void UpdateRotateHandle(float Angle);
	void STATIC_Finalize();
	void STATIC_FinalizeEvent();
	void STATIC_InitializeEvent();
	void InitializeRotateActor();
	void STATIC_Initialize();
	void STATIC_UserConstructionScript();
	void TimelineRotateHandle__FinishedFunc();
	void TimelineRotateHandle__UpdateFunc();
	void STATIC_InpActEvt_Interruption_K2Node_InputActionEvent_2(const struct FKey& Key);
	void StartRotateHandle();
	void STATIC_StartGimmickEvent(bool bForceFailed);
	void StartReverseAndRotateHandle();
	void STATIC_DecideDetectAction(ES3ActionIconType Type);
	void StartFailedFinish();
	void RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter);
	void TickChangeCheckKill();
	void STATIC_ExecuteUbergraph_BP_Hakkason_BellTowerHiddenRoomGimmick(int EntryPoint);
	void STATIC_OnEndItemSelect__DelegateSignature(bool bSuccess, int SelectItemNo);
	void STATIC_OnEndGimmickEvent__DelegateSignature(bool bSuccess);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
