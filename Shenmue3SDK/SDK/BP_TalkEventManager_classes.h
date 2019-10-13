#pragma once

// Name: S3Demo, Version: 0.90.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TalkEventManager.BP_TalkEventManager_C
// 0x11DC (0x170C - 0x0530)
class ABP_TalkEventManager_C : public ABP_TalkEventManagerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (Transient, DuplicateTransient)
	class UBPC_ScriptTimeOverChecker_C*                BPC_ScriptTimeOverChecker;                                // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_ScriptTimer_C*                          BPC_ScriptTimer;                                          // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      PlayerActor;                                              // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      TalkedActor;                                              // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      CurrentViewTargetCamera;                                  // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ABP_TalkCameraManager_C*                     CameraManager;                                            // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndTalk;                                                  // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0569(0x0003) MISSED OFFSET
	int                                                TaskIndex;                                                // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TalkDelayTimer;                                           // 0x0570(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TalkStartDelayTime;                                       // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x057C(0x0004) MISSED OFFSET
	TArray<class UTalkEventTaskBase*>                  RemoveTaskIndexList;                                      // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        AddTaskIndexList;                                         // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               isMessageWaiting;                                         // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x05A1(0x0007) MISSED OFFSET
	class UMessageWaitTask*                            MassageWaitTask;                                          // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     NextCameraGroup;                                          // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     NextCameraName;                                           // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bTalkEventEnding;                                         // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x05D1(0x0007) MISSED OFFSET
	TArray<class UTalkEventTaskBase*>                  RemoveSubTaskIndexList;                                   // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        AddSubTaskIndexList;                                      // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               ChangedEmoteCharacterId;                                  // 0x05F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    commandAction_step_;                                      // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    commandAction_skip_;                                      // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    commandAction_cancel_;                                    // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FST_EventFlag>                       TempChangedEventFlag;                                     // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_MemoFlag>                        TempChangedMemoFlag;                                      // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               isSkiped;                                                 // 0x0658(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isDoingInitialMotion;                                     // 0x0659(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x065A(0x0006) MISSED OFFSET
	TArray<class AActor*>                              CameraTargets;                                            // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UKsSelectTask*                               KeywordSelectTask;                                        // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                num_item_;                                                // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x067C(0x0004) MISSED OFFSET
	class ABP_S3actionSelect_C*                        Selector;                                                 // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                actionSelectResult;                                       // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x068C(0x0004) MISSED OFFSET
	TArray<struct FST_EventFlag>                       TempChangedItemFlag;                                      // 0x0690(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               isShowKS;                                                 // 0x06A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               useLookAtCameraFlag;                                      // 0x06A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x06A2(0x0006) MISSED OFFSET
	struct FTimerHandle                                MessageWaitTimer;                                         // 0x06A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      LookAtTargetCache;                                        // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FST_LookAtCacheData                         LookAtCacheDataByPlayer;                                  // 0x06B8(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_LookAtCacheData>                 LookAtCacheDataNPCArray;                                  // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bCameraDebug;                                             // 0x0720(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0721(0x0003) MISSED OFFSET
	float                                              PlayerLookAtTaskRotationTime;                             // 0x0724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerLookAtTaskDelayMotionTime;                          // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAutoCameraType                                    PrevTalkTaskType;                                         // 0x072C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x072D(0x0003) MISSED OFFSET
	class AActor*                                      CurrentLookAtTarget;                                      // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UFadeTask*                                   FadeTask;                                                 // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                CameraManagerLerpEndEvent;                                // 0x0740(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bInterrapted;                                             // 0x0748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isNPCBSEvent;                                             // 0x0749(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x6];                                       // 0x074A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSkipTalkTask;                                           // 0x0750(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              SkipedDuration;                                           // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAutoCameraType                                    AutoCameraType;                                           // 0x0764(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0765(0x0003) MISSED OFFSET
	struct FString                                     TalkCharacterId;                                          // 0x0768(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     LockTargetCharacterId;                                    // 0x0778(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UTalkTask*                                   CurrentTalkTask_deplecated;                               // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_AutoTalkCameraDirector_C*                AutoTalkCameraDirector;                                   // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledAutoCameraDirector;                               // 0x0798(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0799(0x0007) MISSED OFFSET
	TMap<struct FName, struct FString>                 EmotedChara;                                              // 0x07A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnInputQuestDebugKey;                                     // 0x07F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ABP_TalkActorVisibleControl_C*               TalkVisibleControl;                                       // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                MiniGamePlayCount;                                        // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isBsEvent;                                                // 0x080C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x080D(0x0003) MISSED OFFSET
	class UEnterMiniGameTask*                          EnterMiniGameTask;                                        // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UEventMiniGameTask*                          EventMiniGameTask;                                        // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UChooseMiniGameTask*                         ChooseGameTask;                                           // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PopupId;                                                  // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x082C(0x0004) MISSED OFFSET
	class UBPC_S3_TalkComponent_C*                     ActiveTalkComponent;                                      // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               isDoorTalk;                                               // 0x0838(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0839(0x0003) MISSED OFFSET
	float                                              MessageWaitTimeupSec;                                     // 0x083C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGiftMiniGameTask*                           GiftMiniGameTask;                                         // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MotionTask_MontageCache;                                  // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<class AActor*, struct FTransform>             ActorsInitialTransformCache;                              // 0x0850(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TMap<struct FString, struct FVector>               SavedPosition;                                            // 0x08A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, struct FRotator>              SavedRotation;                                            // 0x08F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, struct FTransform>            SavedTransform;                                           // 0x0940(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class AActor*, struct FRotator>               ActorInitialRotationCache;                                // 0x0990(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TMap<class AActor*, struct FVector>                ActorInitialPositionCache;                                // 0x09E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               isAcEventPlaying;                                         // 0x0A30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0xF];                                       // 0x0A31(0x000F) MISSED OFFSET
	struct FPostProcessSettings                        AppliedPostProcess;                                       // 0x0A40(0x0530) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPostProcessSettings                        DefaultPostProcess;                                       // 0x0F70(0x0530) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PostCommandEnable;                                        // 0x14A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x14A1(0x0007) MISSED OFFSET
	TArray<struct FString>                             CallingExternalScriptStack;                               // 0x14A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DumpTalkLog;                                              // 0x14B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isMainFlowScript;                                         // 0x14B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x6];                                       // 0x14BA(0x0006) MISSED OFFSET
	struct FString                                     PlayingCutsceneName;                                      // 0x14C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bCameraPreviewMode;                                       // 0x14D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x14D1(0x0007) MISSED OFFSET
	class Uwgt_TalkCameraPrev_C*                       TalkCameraPrevWgt;                                        // 0x14D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              CachedHiddenCharacter;                                    // 0x14E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ACharacter*>                          CachedMotionPlayedActor;                                  // 0x14F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsHintTalking;                                            // 0x1500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x7];                                       // 0x1501(0x0007) MISSED OFFSET
	class AActor*                                      HintTarget;                                               // 0x1508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FST_S3HintTalkData                          HintTalkData;                                             // 0x1510(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAcCameraTask*                               CachedAcCameraTask;                                       // 0x1528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ChangeToStep;                                             // 0x1530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isRequestedChangeStep;                                    // 0x1534(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x1535(0x0003) MISSED OFFSET
	class AActor*                                      LookAtMotionPlayingNPC;                                   // 0x1538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBuyKihudaTask*                              BuyKihudaTask;                                            // 0x1540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_SubtitlePlayer_Talk_C*                   SubtitleTalk;                                             // 0x1548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ACameraActor*                                ACDummyCamera;                                            // 0x1550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_BaseTalkCamera_C*                        OnShowItemCamera;                                         // 0x1558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UControlCameraTask*                          ControlCameraTask;                                        // 0x1560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEndKeywordSelect;                                       // 0x1568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<E_TalkKeywordSelect>                   CacheInputKeywordSelect;                                  // 0x1578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayingShowItem;                                        // 0x1579(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isAcEvent;                                                // 0x157A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x1];                                       // 0x157B(0x0001) MISSED OFFSET
	int                                                EventMiniGameScriptIndex;                                 // 0x157C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                ShowItemZoomTimer;                                        // 0x1580(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UInventoryTask*                              InventoryTask;                                            // 0x1588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EventInventoryFlagIndex;                                  // 0x1590(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x1594(0x0004) MISSED OFFSET
	TMap<class AActor*, float>                         PrevDilation;                                             // 0x1598(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bEnableCancelButton;                                      // 0x15E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x7];                                       // 0x15E9(0x0007) MISSED OFFSET
	class UKsVisibilityTask*                           KsVisibilityTask;                                         // 0x15F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ALevelSequenceActor*                         CachedSequenceActor;                                      // 0x15F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMakedPlayerIgnoreCollision;                             // 0x1600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x7];                                       // 0x1601(0x0007) MISSED OFFSET
	TArray<class AActor*>                              AcHiddenActors;                                           // 0x1608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_ACProcessActor_C*                        ACProcessor;                                              // 0x1618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAcTask*                                     CachedAcTask;                                             // 0x1620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnStreetFightFinished;                                    // 0x1628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UBPW_PlayPrice_C*                            PlayPriceWidget;                                          // 0x1638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                TransitionErrorTimerHandle;                               // 0x1640(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bTalkTransitionError;                                     // 0x1648(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x1649(0x0007) MISSED OFFSET
	TArray<class AS3Character*>                        TalkTransitionErrorCharacters;                            // 0x1650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              TransitionErrorTimeout;                                   // 0x1660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x1664(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStartAcCameraSequence;                                  // 0x1668(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bStartTalkScript;                                         // 0x1678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayDebugMenu;                                            // 0x1679(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x6];                                       // 0x167A(0x0006) MISSED OFFSET
	class ABP_HelpRegisterActor_C*                     HelpActor;                                                // 0x1680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UUMG_SubtitlesFadeIn_C*                      DojoCaptionWidget;                                        // 0x1688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                DelayPermitUIHandle;                                      // 0x1690(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ACSkipEnable;                                             // 0x1698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayMovieMap;                                             // 0x1699(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x6];                                       // 0x169A(0x0006) MISSED OFFSET
	class ABP_ScheduleNPC_C*                           TalkedActor_S3NPC_;                                       // 0x16A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceAddDetect;                                           // 0x16A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x7];                                       // 0x16A9(0x0007) MISSED OFFSET
	struct FString                                     DebugTalkLabel;                                           // 0x16B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMesh*                                 PreloadMesh;                                              // 0x16C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayingShowItemEndWithFixedCamera;                      // 0x16C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x7];                                       // 0x16C9(0x0007) MISSED OFFSET
	class AS3Character*                                SheCharacter;                                             // 0x16D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAtomCueSheetLoaderComponent*                CueSheetLoader;                                           // 0x16D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FString                                     CueName;                                                  // 0x16E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               KeepSoundFadePause;                                       // 0x16F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x7];                                       // 0x16F1(0x0007) MISSED OFFSET
	class ULookAtTask*                                 LookAtTask;                                               // 0x16F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSkip;                                                  // 0x1700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstChangeCamera;                                        // 0x1701(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x2];                                       // 0x1702(0x0002) MISSED OFFSET
	int                                                WaitNPCFadeCount;                                         // 0x1704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SkipLastFadeType;                                         // 0x1708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TalkEventManager.BP_TalkEventManager_C");
		return ptr;
	}


	void StopForceSkip();
	void CheckCanSkip(bool Skip, bool* CAN);
	void ExecFade(int Type, float Time, int ColorIndex);
	void SkipTalk(bool AC_Only, bool DEBUG);
	void NotifyCameraChange();
	void RunStandAloneScript(class AActor* InTalkedActor, bool InIsBS, class UTalkScript* InTalkScript, class US3TalkComponent* InTalkComponent, ENPCTalkState InTalkState);
	void CheckLookAtTask(class ULookAtTask* Task, bool* Failed);
	void SetMoonLightCastShadow(bool Enable);
	void TeleportActor(class AActor* Actor, const struct FVector& Location, const struct FRotator& Rotation);
	void ExecPauseScheduleTask(class UPauseScheduleTask* PauseScheduleTask);
	void FinishShowItemEnd();
	void FindTalkScriptTask(class UTalkScript* Script, class UClass* CheckTalkTaskClass, class UTalkEventTaskBase** Task, bool* bExist);
	void CheckForceAddDetect();
	void SetTalkedActor(class AActor* Actor);
	void GetCurrentTask(class UTalkEventTaskBase** Task);
	void ExecDojoCaptionTask(class UDojoCaptionTask* Task);
	void ExecHelpPriorityTask(class UHelpPriorityTask* Task);
	bool Finalize();
	void IsExistTalkScriptTask(class UTalkScript* Script, TArray<class UClass*>* CheckTalkTaskClasses, bool* bExist);
	bool IsMiniGameTalk(bool* bStrictly);
	void EnableAutoCamera();
	void IsWaitTaskWaiting(bool* isWaiting, class UWaitTask** WaitTask);
	void IsTalkTransitionErroredActor(class AS3Character* TalkTo, bool* Result);
	void GetMiniGamePrice(class ABP_MiniGameManager_C* MiniGameManager, bool* Success, int* Price);
	void TalkTransitionError(bool* bError);
	void ExecPlayBgm(class UPlayBgmTask* Task);
	void UpdateDebugForceSkipFlag(class UTalkEventTaskBase* Task);
	void GetNextFighterName(struct FString* Name);
	void UpdateMiniGamePlayCount(int PlayCount);
	bool IsTalkingToShopCharacter();
	void DestroySubtitle();
	void CreateSubtitle();
	void IsFinishedTalkActorCamera(bool* Finished);
	void RestorePlayerIgnoreCollision();
	void MakePlayerIgnoreCollision();
	void SetWhetherPlayerIgnoreCollision(bool InStartIgnore);
	void ExecUseIKTask(class UUseIKTask* UseIKTask);
	void EqualToString(struct FString* InStr1, struct FString* InStr2, bool* bEqual);
	void ExecDevExtendedTask(class UDevExtendedTask* DevExtendedTask);
	void ExecPlaySeTask(class UPlaySeTask* PlaySeTask);
	void ExecKsVisibilityTask(class UKsVisibilityTask* KsVisibilityTask);
	void ExecInventoryTask(class UInventoryTask* InventoryTask);
	void ExecImaginary(class UImaginary* ImaginaryTask);
	void IsExistCurrentTalkScriptTask(TArray<class UClass*>* CheckTalkTaskClasses, bool* bExist);
	void ConvertKeywordSelectedIndex(int Index, TEnumAsByte<E_TalkKeywordSelect>* Selected);
	void ExecControlCameraTask(class UControlCameraTask* ControlCameraTask);
	void SetupPlayerCameraAfterLookAt();
	void ExecBuyKihudaTask(class UBuyKihudaTask* BuyKihudaTask);
	void FinishLookAt(class AActor* NPC);
	bool RequestStepChange(int* Step);
	void HintTalkInit(class AActor* TalkedNPC);
	void FindNPCFromID(const struct FName& ID, class AActor** Actor);
	void ExistAcTask(class UTalkScript* TalkScript, bool* Exist);
	bool CanFinishTalkEvent();
	void ExecSetVisibilityTask(class USetVisibilityTask* Task);
	void ExecWeatherTask(class USetWeatherTask* Task);
	void CanStartCameraPreviewMode(bool* CanStart);
	void ExecCallScriptTask(class UCallScriptTask* Task);
	void ExecPostProcessTask(class UPostProcessTask* Task);
	void ExecACCamera(class UAcCameraTask* Task);
	void ExecAcEndTask(class UAcEndTask* Task);
	void ExecAcTask(class UAcTask* Task);
	void ExecSetTalkEnableTask(class USetTalkEnableTask* Task);
	void ExecLoadPositionAndRotationTask(class ULoadPositionAndRotationTask* LoadPositionAndRotationTask);
	void ExecLoadRotationTask(class ULoadRotationTask* LoadRotationTask);
	void ExecLoadPositionTask(class ULoadPositionTask* Task);
	void ExecSavePositionAndRotationTask(class USavePositionAndRotationTask* Task);
	void ExecSaveRotationTask(class USaveRotationTask* Task);
	void ExecSavePositionTask(class USavePositionTask* SavePositionTask);
	void ExecSetPositionAndRotationTask(class USetPositionAndRotationTask* SetPositionAndRotationTask);
	void ExecStopMotionTask(class UStopMotionTask* StopMotionTask);
	void TryTalkScriptReimport(class UTalkScript* TalkScript, bool* bSuccess);
	void ExecCameraActorTask(class UCameraActorTask* CameraActorTask);
	void GetActiveScriptTalkComponent(class UBPC_S3_TalkComponent_C** TalkComponent);
	void ExecCutSceneTask(class UPlayCutsceneTask* Task);
	void ExecRewardMiniGameTask(class UGiftMiniGameTask* GiftMiniGameTask);
	void ActivateMiniGameTask(class UTalkEventTaskBase* TaskBase, bool* bSuccess);
	void ExecUpdatePlayPriceMiniGameTask(class UUpdatePlayPriceMiniGame* UpdatePlayPriceMniGameTask);
	void ExecChooseMiniGameTask(class UChooseMiniGameTask* ChooseMniGameTask);
	void PrintTalkDebug();
	void ExecSetPositionTask(class USetPositionTask* SetPositionTask);
	void ExecSetRotatioinTask(class USetRotationTask* SetRotationTask);
	void ExecSetBsEnableTask(class USetBsEnableTask* BsEnableTask);
	void ExecSetBsCountTask(class USetBsCountTask* SetBsCountTask);
	void ExistLookAtTurnningCharacter(bool* Result);
	void FinalizeMiniGame();
	void ExecResultMiniGameTask(class UResultMiniGameTask* ResultGameTask);
	void ExecResumeMiniGameTask(class UResumeMiniGameTask* ResumeMiniGameTask);
	void ExecEventMiniGameTask(class UEventMiniGameTask* EventGameTask);
	void GetLookAtCache(bool* bLookAtCommandExecuted, class AActor** LookAtTarget);
	void UpdateCameraGroupTask(class UUpdateCameraGroupTask* Task);
	void UpdateCameraTask(class UUpdateCameraTask* Task);
	void ExecCanMiniGameTask(class UCanMiniGameFlagTask* CanMiniGameFlagTask);
	void ExecShowPriceTask(class UShowPriceTask* ShowPriceTask);
	void ExecEnterMiniGameTask(class UEnterMiniGameTask* EnterMiniGameTask);
	void CreateAutoTalkCameraDirector();
	void WhetherToChangeCamera(bool* Result);
	void GetTalkTaskDuration(class UTalkTask* TalkTask, float* Duration);
	void GetCurrentTalkTaskDuration(float* Duration);
	void GetDetectActionTarget(class AActor** DetectActionTarget);
	void SetTalkedActorFromTalkScript();
	void GetActorFromTagCharaName(const struct FName& CharaName, class AActor** Actor);
	void ExecCharacterTurnTask(class UCharacterTurnTask* CharacterTurnTask);
	void GetJoinedThisTalkActorByName(const struct FName& Name, class AActor** Actor);
	void CanSkipCurrentTask(bool* bCan);
	void ExecFadeTask(class UFadeTask* FadeTask);
	void ExecStartedMiniGameTask(class UStartedMiniGameTask* MiniGameTask);
	void CanTransitionToTalkProcessing(class AActor* TalkTo, bool* bProcessing);
	void InitVariables(class AActor* InTalkedActor, bool InIsBS);
	void GetTalkType(class UTalkEventTaskBase* Task, EAutoCameraType* Type);
	void GetLookAtTaskMotionDirection(class AActor* LookAtActor, class AActor* NpcActor, float* Yaw, float* Picth);
	void ExecLookAtTask(class ULookAtTask* LookAtTask, bool OnlyCamera);
	void ExecShowItemTask(class UShowItemTask* ShowItemTask, bool* isShowStart);
	void DestroyKeywardSelect();
	void ExecKsLabelTask(class UKsLabelTask* KsLabelTask);
	void TryGetItemIndex(const struct FString& FlagStr, bool* isFound, int* Index);
	void ExecItemTask(class UItemTask* ItemTask);
	void SetTalkActors();
	void SetTargetsFromIds(TArray<struct FString>* Array, TArray<class AActor*>* TargetArray);
	void ExecCameraTask(class UCameraTask* CameraTask);
	void ExecCameraGroupTargets(class UCameraGroupTask* CameraGroupTask);
	void GetSubtitleChara(class UTalkTask* TalkTask, TEnumAsByte<EN_TalkCharacterType>* TalkType);
	void GetSpeakerID(class UTalkTask* TalkTask, struct FName* ID);
	void ClearSubtitle();
	void RevertFlags();
	void ExecMotionTask(class UMotionTask* MotionTask);
	void ExecInfoTask(class UInfoTask* InfoTask);
	void TraceErrorVoice(class UObject* Voice, const struct FName& Label);
	void ExecFocusChange(class UChangeFocusTask* Task);
	void UpdateSubList();
	void UpdateActiveList();
	void TryGetTalkComponent(class AActor* Actor, class UBPC_S3_TalkComponent_C** TalkComponent);
	void ExecEmoteTask(class UEmoteTask* EmoteTask);
	void FindSubStrings(const struct FString& InStr, TArray<struct FString>* SubStrings, bool* isFound, TArray<struct FString>* foundStrings);
	void ExecSetFlag(class USetTask* SetTask);
	void ReplaceLF(const struct FString& InStr, struct FString* Result);
	void ExecNoVoiceTimeTask(class USetNoVoiceTimeTask* NoVoiceTimeTask);
	void ExecIfTask(class UIfTask* IfTask);
	void EvaluateExpression(const struct FString& InStr, int* Result, bool* bError);
	void StartTalk(class UTalkTask* TalkTask);
	void CreateCameraManager(EAutoCameraType AutoCameraType);
	void UserConstructionScript();
	void InpActEvt_Shift_C_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_Ctrl_Q_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Shift_K_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Q_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_TalkSkip_K2Node_InputActionEvent_2(const struct FKey& Key);
	void OnLoaded_8AD0905A45E984F04EF8EC995D53228B(class UObject* Loaded);
	void BindHUDFadeEvents();
	void UnbindHUDEvents();
	void OnFinishedFadeIn();
	void OnFinishedFadeOut();
	void BindPopupItemEvent();
	void OnFinishedPopup();
	void BindBuyKihudaEvents(class ABP_S3BetMoneyManager_C* BetManager);
	void OnBuyKihuda();
	void OnCancelledKihuda();
	void UnbindBuyKihudaEvents(class ABP_S3BetMoneyManager_C* BetManager);
	void BindinventoryEvents(class ABP_UI_GiftManager_C* UseItemManager);
	void UnbindinventoryEvents(class ABP_UI_GiftManager_C* UseItemManager);
	void OnInventoryUseItem(TEnumAsByte<EN_UseItemResult> Result);
	void BindShowItemZoomEvent();
	void UnbindShowItemZoomEvent();
	void CheckForShowItemZoomCameraStart(const struct FName& Name);
	void BindShowItemPutAwayEvent();
	void UnbindShowItemPutAwayEvent();
	void CheckForShowItemPutAway(const struct FName& Name);
	void BindMiniGameEvents(class ABP_MiniGameBase_C* MiniGame);
	void OnMiniGameEnd(class ABP_MiniGameBase_C* SelfMiniGame);
	void BindMiniGameEnterEvents(class ABP_MiniGameBase_C* MiniGame);
	void OnFinishedEnterMiniGame(class ABP_MiniGameBase_C* SelfMiniGame);
	void OnMiniGameScriptEvent(class ABP_MiniGameBase_C* SelfMiniGame, int EventNumber);
	void UnbindMiniGameEvents();
	void BindMiniGameChooseEvents(class ABP_MiniGameChoose_C* MiniGameChooseActor);
	void OnChooseMiniGame(class AActor* ChooseActor);
	void OnCancelChooseMiniGame();
	void OnDestroyedChooseActors(class AActor* DestroyedActor);
	void EventFastForwarding();
	void ToggleCameraCutDebugMode();
	void TakeCameraDebugScreenShot();
	void CameraManagerLerpEnd();
	void TryChangeCamera(EAutoCameraType AutoCameraType, const struct FString& TalkCharacterId, const struct FString& LockTargetCharacterId);
	void OnCallUpdateCameraTask(const struct FString& TalkCharacterId, const struct FString& LockTargetCharacterId);
	void EndPreviewCameraMode();
	void OnTalkEventFinished();
	void ReceiveBeginPlay();
	void OnFinished(class UTalkEventTaskBase** ptr, int* NextIndex, bool* bBreakEvent);
	void OnTalkStart(class UTalkEventTaskBase** ptr);
	void OnActivate(class UTalkEventTaskBase** ptr);
	void DelayedTalkStart();
	void ReceiveTick(float* DeltaSeconds);
	void OnFinishedSubEvent(class UTalkEventTaskBase** ptr, int* NextIndex, bool* bBreakEvent);
	void doNextStep(class AActor* Actor);
	void doCancel();
	void InitialMotion();
	void OnEndInitialMotion();
	void SkippedCurrentTalk(class UTalkTask* SkippedTask);
	void catch_onSelected(int Index);
	void UnbindKeywardSelect();
	void TimeupMessageWait();
	void FinalizeCleanUI();
	void TrySkipCurrentTalkTask();
	void SkipMessageWait();
	void OnEndCutscene();
	void RunDoorTalk(class AActor* InTalkedActor, bool InIsBS, class UTalkScript* InTalkScript, class UBPC_S3_TalkComponent_C* InTalkComponent);
	void HintTalkStart(class AActor* InTalkedActor, class UTalkScript* InTalkScript, class UBPC_S3_TalkComponent_C* InTalkComponent, class AActor* InHintTarget);
	void OnAcCameraFinised(class ULevelSequencePlayer* LevelSequencePlayer);
	void OnAcCameraStoped();
	void SkipShowItem();
	void OnShowItemZoomEnd();
	void StartAC();
	void OnTimeoutTransition();
	void StopAcCamera();
	void Initialize(class AActor** InTalkedActor, bool* InIsBS, class UTalkScript** InTalkScript, class US3TalkComponent** InTalkComponent, ENPCTalkState* InTalkState);
	void FinishKSAnim();
	void FinishCaptionAnim();
	void StartShowItemZoom();
	void DelayPermitUI();
	void DisablePhysics(class AS3Character* Character);
	void LoadedCueSheet();
	void WaitLookAtTask();
	void ExecuteUbergraph_BP_TalkEventManager(int EntryPoint);
	void OnStartAcCameraSequence__DelegateSignature(class ALevelSequenceActor* PlaySequenceActor);
	void OnStreetFightFinished__DelegateSignature(TEnumAsByte<Enum_StreetFightResult> Result);
	void OnEndKeywordSelect__DelegateSignature(TEnumAsByte<E_TalkKeywordSelect> Selected);
	void OnInputQuestDebugKey__DelegateSignature();
	void OnSkipTalkTask__DelegateSignature(float SkipTaskDuration);
	void commandAction_cancel___DelegateSignature();
	void commandAction_skip___DelegateSignature(class AActor* Actor);
	void commandAction_step___DelegateSignature(class AActor* Actor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
