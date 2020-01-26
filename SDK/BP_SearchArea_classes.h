#pragma once

// Name: Shenmue3SDK, Version: 1.4.1

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SearchArea.BP_SearchArea_C
// 0x0225 (0x07D5 - 0x05B0)
class ABP_SearchArea_C : public AS3SearchArea
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05B0(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           Ring2;                                                    // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Ring3;                                                    // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Pinky2;                                                   // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Pinky3;                                                   // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Middle2;                                                  // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Middle3;                                                  // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Index3;                                                   // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Index2;                                                   // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Thumb2;                                                   // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Thumb1;                                                   // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             DirectionArrow;                                           // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bPreviewArm;                                              // 0x0610(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0611(0x0003) MISSED OFFSET
	int                                                EffectIndex;                                              // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystem*>                     EffectList;                                               // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              FocusEffectScale;                                         // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UnfocusEffectScale;                                       // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocuseAlpha;                                              // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UnfocuseAlpha;                                            // 0x0634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class US3SearchComponent*>                  EffectSearchComponents;                                   // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TargetEffectScale;                                        // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentEffectScale;                                       // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_Gimmick_OpenDoor_Template_C*>     EntryDoors;                                               // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FString                                     DoorName;                                                 // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bAreaInside;                                              // 0x0670(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0671(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFinishedInitialize;                                     // 0x0678(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ABP_SubtitlePlayer_C*                        SubtitlePlayer;                                           // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayingCutscene;                                         // 0x0690(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0691(0x0003) MISSED OFFSET
	int                                                EventStepMin;                                             // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventStepMax;                                             // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x069C(0x0004) MISSED OFFSET
	struct FName                                       KeepCutsceneId;                                           // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEndCutscene;                                            // 0x06A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bChangeTarget;                                            // 0x06B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x06B9(0x0003) MISSED OFFSET
	float                                              EffectOffset;                                             // 0x06BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrouchInputTime;                                          // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CROUCH_HOLD_TIME;                                         // 0x06C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LockChangeInputTime;                                      // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LOCKCHANGE_HOLD_TIME;                                     // 0x06CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAlreadyOverlapping;                                      // 0x06D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x06D1(0x0003) MISSED OFFSET
	int                                                PlayerBehaviorBits;                                       // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSelfPlayCutscene;                                        // 0x06D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLockonChange;                                            // 0x06D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x06DA(0x0002) MISSED OFFSET
	float                                              LOCKON_BLEND_TIME;                                        // 0x06DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LOCKCHANGE_Z_DIFF;                                        // 0x06E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LOCKCHANGE_X_DIFF;                                        // 0x06E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class US3SearchComponent*                          LockOnChangeTarget;                                       // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              LOCKCHANGE_MAX_DIST;                                      // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LockChangeTimer;                                          // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              db_ZoomRotY;                                              // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              db_ZoomRotZ;                                              // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               db_DebugPrint;                                            // 0x0700(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               playAcTest;                                               // 0x0701(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x0702(0x0006) MISSED OFFSET
	class USoundAtomCue*                               BgmCue;                                                   // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FS3BgmChangeInfo>                    ChangeInfoArray;                                          // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               PlayingBGM;                                               // 0x0720(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0721(0x0007) MISSED OFFSET
	class USoundAtomCue*                               CurrentCue;                                               // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsStopGameTime;                                           // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0731(0x0007) MISSED OFFSET
	TArray<class UPrimitiveComponent*>                 FingerColliders;                                          // 0x0738(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bPreAttachGrabActor;                                      // 0x0748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartDuringCutscene;                                     // 0x0749(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceExitSearch;                                         // 0x074A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceActionLocked;                                       // 0x074B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bChangeCameraStateAC;                                     // 0x074C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bChangeBGMOnlySearch;                                     // 0x074D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x074E(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnChangeToFreeStateDispacher;                             // 0x0750(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                OpenFlagNumber;                                           // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoveSuspendTime;                                          // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsMoveMotion;                                             // 0x0768(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0769(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnActionDispacher;                                        // 0x0770(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               UpdateDebugViewAnim;                                      // 0x0780(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0781(0x0003) MISSED OFFSET
	float                                              MoveMotionValue;                                          // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveMotionAbsValue;                                       // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableInput;                                            // 0x078C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSearchThisArea;                                          // 0x078D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x078E(0x0002) MISSED OFFSET
	TArray<class UShapeComponent*>                     SearchCollisionList;                                      // 0x0790(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                AreaCollisionCheckCount;                                  // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceDisablePlaySubTitle;                                 // 0x07A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayOnlyLookScript;                                      // 0x07A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x07A6(0x0002) MISSED OFFSET
	class ABP_ActorVisibleControl_C*                   RefActorVisibleController;                                // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseActorVisibeController;                                // 0x07B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x07B1(0x0003) MISSED OFFSET
	int                                                AddCollisionCheckCount;                                   // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCheckCollisionCondition;                                 // 0x07B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x07B9(0x0007) MISSED OFFSET
	struct FString                                     SearchAreaUniqueName;                                     // 0x07C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ElapsedDay;                                               // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDuringACEvent;                                           // 0x07D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SearchArea.BP_SearchArea_C");
		return ptr;
	}


	struct FName GetHelpName();
	ES3HelpPriority GetHelpPriority();
	bool IsActivateHelp();
	bool RegisterHelp(ES3HelpRegisterTiming Timing);
	bool UnregisterHelp(ES3HelpRegisterTiming Timing);
	int GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void SetEventBehavior(bool bEnabled);
	void SetSearchBehavior(bool bEnabled);
	void ForceUpdateSearchCollisionOverlap();
	void IsEnabledSearchCollisionCheck(bool* Enabled);
	void GetPathTypeFromLabel(const struct FString& Str, ES3TextPathType* LabelType);
	void GetDisabledInputOnPlayingLabel(bool* Disabled);
	bool IsSubtitleVoicePlaying();
	void InitializeLimitItem();
	void IsLookingSeachComponent(class US3SearchComponent* SearchComp, bool* Look);
	void SetBottomTransparent();
	void CheckCollisionCondition();
	void SetUseActorVisibleControl(bool bUse);
	void SetActorVisibleControl(bool Enabled);
	void FinalizeItemSpawnerSetting();
	void InitializeItemSpawnerSetting(bool PlayOnlyLookScript);
	void CheckEndForActor(class UPrimitiveComponent* OtherComponent);
	void CheckStartForActor(class UPrimitiveComponent* OtherComp);
	void SetSearchThisArea(bool Search);
	void InitAsyncLoad();
	void InitializeMoveSuspendTime();
	void SyncMoveMotionTime();
	void AddMoveMotionValue(float AddTime);
	void ActivateMoveMotionFlag();
	void UpdateMoveMotionTime();
	float GetMoveMotionValue(bool bReturnMode);
	void StopBGM();
	void InitializeTargetVector();
	void UpdateCameraMode();
	void SetForceActionLocked(bool bForceActionLocked);
	bool IsUpdateForceExitSearch();
	void UpdateAttachGrabActor(bool Input);
	void InitializeGrab();
	void GetFingerColliders(TArray<class UPrimitiveComponent*>* Colliders);
	void InitializeGatherObject();
	void StopGameTime(bool StopTime);
	void CheckBGM();
	void DestroySubTitlePlayer();
	void GetCharacterAdventure(class ABP_S3_Character_Adventure_C** AsBP_S3_Character_Adventure, bool* bSuccess);
	struct FVector2D GetLockOnBasePosition();
	void CalcCenterPosition(struct FVector2D* CenterPosition);
	bool CalcScreenLocation(const struct FVector& WorldLocation, const struct FVector2D& CenterPosition, struct FVector2D* ScreenLocation);
	void LockOnChange(float Vertical_Axis, float Horizontal_Axis);
	void GetNextDirection(float V, float H, TEnumAsByte<ESearchAreaDirection>* Direction);
	void SearchLockOnChangeTarget(TEnumAsByte<ESearchAreaDirection> Direction, class US3SearchComponent** NewTarget);
	void TestNewSearchExit();
	void TestNewSearchMode();
	void StartNewSearchMode();
	void UpdateLockOnChange(float Delta_Seconds);
	class US3SearchComponent* GetCurrentTarget(bool* IsCurrentFocus);
	void OverlappingCheck();
	void ContinueSearch();
	void InterruptSearch();
	void TestLockOnChange(float Vertical_Axis, float Horizontal_Axis);
	void CrouchAction(float Axis_Value);
	void SetForbiddenAction(bool Forbidden);
	void SetFreeLockMode(bool Mode);
	void ForceFind(class US3SearchComponent* SearchComponent, bool ChangeTarget, bool ContinuationFlag);
	void EndForActor();
	void StartForActor();
	void GetDoor(const struct FString& DoorName, class ABP_Gimmick_OpenDoor_Template_C** Door);
	void Initialize();
	void ShowMessage();
	void PlayGetSE();
	void LookAtTarget(class US3SearchComponent* Search, int StartPointType);
	void ExecBackButton(ES3ActionIconType IconType);
	void ExecActionButton(ES3ActionIconType IconType);
	void UpdateButton();
	void BeginDetectAction(ES3ActionIconType Type);
	void DestroyEffect(class US3SearchComponent* SearchComponent);
	void SpawnEffect(class US3SearchComponent* SearchComponent);
	void UpdateEffect();
	void UserConstructionScript();
	void BindChangeTimeEvent();
	void ChangeGameTimeEvent(ES3DayTimeEvent EventType);
	void UnbindChangeTimeEvent();
	void ReceiveTick(float DeltaSeconds);
	void OnStartSearch();
	void OnStopSearch();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void DestroyEffectAll();
	void UnbindDetect();
	void PlayGetSound();
	void PlayCutscene(const struct FName& CutsceneId);
	void EndCutscene();
	void ForceEnd();
	void DoorComplete(class ABP_Gimmick_OpenDoor_Template_C* Door, bool Front);
	void FinishedSearchPoint();
	void FreeSearchLock();
	void InpAxisEvt_ZoomPanVertical_K2Node_InputAxisEvent_1(float AxisValue);
	void GetItem(const struct FName& ItemId);
	void DecideDetectAction(ES3ActionIconType Type);
	void InpAxisEvt_ZoomPanHorizontal_K2Node_InputAxisEvent_27(float AxisValue);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void onCutsceneEnd();
	void onCutsceneStart();
	void ExitSearchMode();
	void StartACEvent(class UTalkScript* ACEventScript);
	void Event_DestroyGrabActor(class US3SearchComponent* SearchComponent);
	void StartGrabSubAnim();
	void EndGrabSubAnim();
	void ExitSearch();
	void ChangeToFreeState();
	void UpdateForceExitSearch();
	void OnFinishedFadeCutScene();
	void Event_SetPlayerVisibleEnabled(bool Enabled);
	void OnChangeClothes(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName);
	void SearchCollisionBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void SeachCollisionEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExecuteUbergraph_BP_SearchArea(int EntryPoint);
	void OnActionDispacher__DelegateSignature();
	void OnChangeToFreeStateDispacher__DelegateSignature();
	void OnEndCutscene__DelegateSignature(const struct FName& CutsceneId);
	void OnFinishedInitialize__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
