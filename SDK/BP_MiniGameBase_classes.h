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

// BlueprintGeneratedClass BP_MiniGameBase.BP_MiniGameBase_C
// 0x0272 (0x060A - 0x0398)
class ABP_MiniGameBase_C : public AS3MiniGameBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      TalkCameraDummyMesh;                                      // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameContainer_C*                    BPC_MiniGameContainer;                                    // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameContinueConfirm_C*              BPC_MiniGameContinueConfirm;                              // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameScriptFlag_C*                   BPC_MiniGameScriptFlag;                                   // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DetectorSensor;                                           // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_MiniGameTalk_C*                         BPC_MiniGameTalk;                                         // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_S3_TagChara_C*                           BP_S3_TagChara;                                           // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnStartMiniGameDispatcher;                                // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndMiniGameDispatcher;                                  // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ABP_MiniGameInputBase_C*                     RefInputControl;                                          // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnWinMiniGameDispatcher;                                  // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLoseMiniGameDispatcher;                                 // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDrawMiniGameDispatcher;                                 // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               GamePrintLog;                                             // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnEnterMiniGameDispatcher;                                // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinishedEnterMiniGameDispatcher;                        // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRestartMiniGameDispatcher;                              // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnScriptEventMiniGameDispatcher;                          // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              GameEndFadeOutTime;                                       // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GameEndFadeInTime;                                        // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSequencePlayerFinishedDispatcher;                       // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ULevelSequencePlayer*                        RefSequencePlayer;                                        // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCancelMiniGame;                                         // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabledHelpIcon;                                         // 0x04A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableHelpExceptingGame;                                 // 0x04AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ExecuteMiniGame;                                          // 0x04AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Talking;                                                  // 0x04AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHideClock;                                               // 0x04AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04AE(0x0002) MISSED OFFSET
	class AActor*                                      RefCheckMiniGameForceEndActor;                            // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_ActorVisibleControl_C*                   VisibleControlActor;                                      // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FST_MiniGameLoadInfo>                LoadInfoArray;                                            // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                LoadIndex;                                                // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFinishedAsyncLoad;                                      // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<TEnumAsByte<E_MiniGameCommonSequence>>      UseCommonSequence;                                        // 0x04E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData03[0x50];                                      // 0x04F8(0x0050) UNKNOWN PROPERTY: MapProperty BP_MiniGameBase.BP_MiniGameBase_C.CommonSequenceMap
	bool                                               IsReverseUseCoin;                                         // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ES3CharaMeshType                                   MeshType;                                                 // 0x0549(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FinishLoadClothes;                                        // 0x054A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x054B(0x0005) MISSED OFFSET
	struct FName                                       SPECIAL_MESH;                                             // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DLCCharaFlagIndex;                                        // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x055C(0x0004) MISSED OFFSET
	class UDataTable*                                  DLCCharaData;                                             // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsUseSpecialMesh;                                         // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0569(0x0007) MISSED OFFSET
	struct FST_MiniGame_DLCPlayer                      SpecialCharaData;                                         // 0x0570(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)
	ES3RewardType                                      RewardFeed;                                               // 0x05E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMiniGamePurpose>                      Purpose;                                                  // 0x05E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DLCUseBodyMesh;                                           // 0x05EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x05EB(0x0005) MISSED OFFSET
	TArray<int>                                        DLCArmMeshHideMaterialList;                               // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bNeedDistanceToLeaveForCheckMiniGame;                     // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0601(0x0003) MISSED OFFSET
	float                                              DistanceToLeaveForCheckMiniGame;                          // 0x0604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedUpdateCharaLight;                                    // 0x0608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableAnsel;                                              // 0x0609(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MiniGameBase.BP_MiniGameBase_C");
		return ptr;
	}


	ES3HelpPriority GetHelpPriority();
	struct FName GetHelpName();
	bool IsActivateHelp();
	bool RegisterHelp(ES3HelpRegisterTiming Timing);
	bool UnregisterHelp(ES3HelpRegisterTiming Timing);
	bool IsTalking();
	int GetPriority();
	TArray<struct FS3DetectActionParam> GetDetectAction();
	void GetMiniGameValueType(TEnumAsByte<EN_ValueType>* Type);
	struct FVector GetTalkCameraCalculationLocation();
	float GetDistanceToLeaveForCheckMiniGame();
	void GetMiniGameBGMID(struct FName* ID);
	bool IsNeedDistanceToLeaveForCheckMiniGame();
	void GetWinCount(TEnumAsByte<EMiniGamePurpose> Purpose, int* Count);
	void IncrementWinCount();
	void CreateWinCountKey(TEnumAsByte<EMiniGamePurpose> Purpose, struct FName* Key);
	void SetBottomsTransparent();
	void GetUseCoinSequence(class ULevelSequence** Sequence);
	void FindLoadSequence(const struct FName& ID, class ULevelSequence** Sequence);
	void GetCommonSequence(TEnumAsByte<E_MiniGameCommonSequence> Type, class ULevelSequence** Sequence);
	void AddLoadObject(const struct FName& ID);
	void DestroyLoadObject(bool* dummy);
	void FindLoadObject(const struct FName& ID, class UObject** Object);
	void InitAsyncLoad(bool* dummy);
	void ForceEndMiniGame(bool* SuccessEnd);
	void StopBGM();
	struct FVector GetSightCheckLocation();
	void UnBindEventToSequenceFinished(const struct FScriptDelegate& UnknownVar01);
	void SetMeshUpdateEnabled(bool Enabled, class USkeletalMeshComponent* SkeltalMesh);
	void BindEventToSequenceFinished(class ULevelSequencePlayer* SequencePlayer, const struct FScriptDelegate& UnknownVar01);
	void GetMiniGameHelpName(struct FString* String);
	void SetMiniGameCategory(ES3MiniGameCategory MiniGameCategory);
	void IsDebugScriptMode(bool* bDebugMode);
	void ExecuteMiniGameResultEvent(TEnumAsByte<E_MiniGameResult> Result);
	bool IsPlayMiniGame();
	bool IsDebugMiniGameDisplayLog();
	void GetMiniGameId(struct FName* MiniGameId);
	void DestroyInputControlActor(bool* bResult);
	class ABP_MiniGameInputBase_C* SpawnInputControlActor();
	void UserConstructionScript();
	void OnLoaded_0E4495544C0CD96838AD9C8CE3CF930B(class UObject* Loaded);
	void StartMiniGame();
	void EndMiniGame();
	void WinMiniGame();
	void LoseMiniGame();
	void DrawMiniGame();
	void EnterMiniGame(float EnterTime);
	void RestartMiniGame();
	void FinalizeTalk();
	void DecideDetectAction(ES3ActionIconType Type);
	void OnTalkStart(class US3TalkComponent* TalkComponent);
	void OnTalkFinished(class US3TalkComponent* TalkComponent, bool interrupted);
	void Screen_Player();
	void Screen_NPC();
	void SuspendMiniGame();
	void ResumeMiniGame(const struct FString& ResumeKeyword);
	void OnTalkScriptEvent(int EventNumber);
	void ReceiveBeginPlay();
	void CancelMiniGame();
	void Event_BindSequencePlayerFinished(class ULevelSequencePlayer* RefSequencePlayer);
	void OnFinishedSequence(class ULevelSequencePlayer* LevelSequencePlayer);
	void StopSequenceOnCancel();
	void Event_EndMiniGame();
	void Event_RemoveTimerEvent();
	void SetInputControlEnabled(bool Enabled);
	void SetEnabledPlayer(bool Enabled);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void Event_SetEnabledStreamingVolume(bool bEnabled);
	void Event_OpenHelp();
	void Event_SetPlayerVisibleEnabled(bool Enabled);
	void ConsumeGamblePrice();
	void StartAsyncLoad();
	void ChangedClothes(const TScriptInterface<class US3ClothInterface>& Interface, const struct FName& CharaName);
	void ApplyClothWet(const TScriptInterface<class US3ClothInterface>& Target, float Wetness);
	void ApplyClothWetCurrentPlayerValue(const TScriptInterface<class US3ClothInterface>& Target);
	void ExecuteUbergraph_BP_MiniGameBase(int EntryPoint);
	void OnFinishedAsyncLoad__DelegateSignature();
	void OnSequencePlayerFinishedDispatcher__DelegateSignature();
	void OnScriptEventMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame, int EventNumber);
	void OnRestartMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame);
	void OnFinishedEnterMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame);
	void OnEnterMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame);
	void OnDrawMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame);
	void OnLoseMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame);
	void OnWinMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame);
	void OnEndMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame);
	void OnStartMiniGameDispatcher__DelegateSignature(class ABP_MiniGameBase_C* SelfMiniGame);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
