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

// BlueprintGeneratedClass BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C
// 0x0137 (0x0741 - 0x060A)
class ABP_MiniGame_KungFuBase_C : public ABP_MiniGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x060A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0610(0x0008) (Transient, DuplicateTransient)
	class UBPC_MiniGameInputWaitTimer_C*               BPC_MiniGameInputWaitTimer;                               // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGame_KungFuFlow_C*                  BPC_MiniGame_KungFuFlow;                                  // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGame_KungFuProgress_C*              BPC_MiniGame_KungFuProgress;                              // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameStandaloneTalkScript_C*         BPC_MiniGameStandaloneTalkScript;                         // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        SequenceTrans;                                            // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             PlayerSpawnPoint;                                         // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0654(0x0004) MISSED OFFSET
	class UAnimInstance*                               RefAnimInstance;                                          // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class US3LevelSequencePlayer*                      StartLevelSequencePlayer;                                 // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MiniGame_KungFuType>                 KungFuType;                                               // 0x0668(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugCSOff;                                              // 0x0669(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x066A(0x0006) MISSED OFFSET
	class ABP_SubtitlePlayer_C*                        SubtitlePlayer;                                           // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceForbitStart;                                        // 0x0678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0679(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData04[0x28];                                      // 0x0679(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C.RefStartSequence
	bool                                               bTimeUpEnd;                                               // 0x06A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x06A9(0x0003) MISSED OFFSET
	int                                                KungFuLevel;                                              // 0x06AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EventFlagNumber;                                          // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventFlagMin;                                             // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventFlagMax;                                             // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseUIButtonIcon;                                          // 0x06BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlashButtonIcon;                                          // 0x06BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OverrideEnabled;                                          // 0x06BE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x06BF(0x0001) MISSED OFFSET
	int                                                UpLevel;                                                  // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SequenceBaseRelativeLocation;                             // 0x06C4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                InitialCount;                                             // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayScriptWaitTime;                                       // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayScriptWaitTimeMax;                                    // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MiniGame_MahoPartnerState>           PlayScriptState;                                          // 0x06DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x06DD(0x0003) MISSED OFFSET
	struct FName                                       PlayScriptLabelName;                                      // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                KungFuProgressLevel;                                      // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUpdateUIInfo;                                            // 0x06EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x06ED(0x0003) MISSED OFFSET
	float                                              SuccessKungFuRate;                                        // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x06F4(0x0004) MISSED OFFSET
	struct FName                                       PARTNER_MESH_ID;                                          // 0x06F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       START_SEQUENCE1_ID;                                       // 0x0700(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       START_SEQUENCE2_ID;                                       // 0x0708(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastPushCount;                                            // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastMaxPushCount;                                         // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MiniGame_MahoPartnerState>           CurrentPlayScriptState;                                   // 0x0718(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFade;                                                   // 0x0719(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ES3HelpPriority                                    OverrideHelpPriority;                                     // 0x071A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x5];                                       // 0x071B(0x0005) MISSED OFFSET
	struct FTimerHandle                                StateChangeScriptTimerHandle;                             // 0x0720(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bRequestPlayLabel;                                        // 0x0728(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0729(0x0003) MISSED OFFSET
	float                                              MinCharacterCollisionRadius;                              // 0x072C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinCollisionRelativeLocationZ;                            // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCheckFirstDetection;                                     // 0x0734(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0735(0x0003) MISSED OFFSET
	struct FName                                       DetectCountProgressKey;                                   // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFirstDetection;                                         // 0x0740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGame_KungFuBase.BP_MiniGame_KungFuBase_C");
		return ptr;
	}


	void CheckEnabledFlagState(bool* UseFlag, bool* Enabled);
	void CheckFirstDetection(bool* IsFirst);
	void ChangeRelativePosZ(class USceneComponent* Target, float LocationZ);
	ES3HelpPriority GetHelpPriority();
	class UMeshComponent* GetClothMeshComponent();
	void InitAsyncLoad(bool* dummy);
	void UpdatePlayContinueScript();
	void IsKungFuSuccess(bool* Success);
	void CalcKungFuLevel(bool* ChangeDifficuty, bool* ChangeProgress);
	void SetKungFuDifficulty(int Level);
	void CheckValueInRance(float CheckValue, float HighValue, float LowValue, bool* InRange, float* NearValue);
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void GetPlayLabel(TEnumAsByte<E_MiniGame_MahoPartnerState> State, struct FName* labelName);
	void PlayScriptLabel(const struct FName& Label, const struct FName& CharaName);
	void UpdateElapsedTime(float DeltaSeconds);
	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	void UserConstructionScript();
	void InputAction_ButtonRight();
	void InputAction_Top();
	void InputAction_Bottom();
	void InputAction_ButtonBottom();
	void StartMiniGame();
	void EndMiniGame();
	void OnFinishedFade();
	void WinMiniGame();
	void LoseMiniGame();
	void DrawMiniGame();
	void FinalizeTalk();
	void OnFinishedCoinSequence();
	void OnFinishedStart();
	void StartGame();
	void AfterFadeInEvent();
	void OnTimeUp();
	void OnSkillCountMax();
	void OnResultEnd();
	void TimeUpEvent();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__DetectorSensor_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExecuteUbergraph_BP_MiniGame_KungFuBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
