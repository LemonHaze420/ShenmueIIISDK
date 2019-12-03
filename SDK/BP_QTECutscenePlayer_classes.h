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

// BlueprintGeneratedClass BP_QTECutscenePlayer.BP_QTECutscenePlayer_C
// 0x0192 (0x08DA - 0x0748)
class ABP_QTECutscenePlayer_C : public ABP_CutscenePlayer_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0748(0x0008) (Transient, DuplicateTransient)
	class UBPC_QTESimonComponent_C*                    QTESimon;                                                 // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_QTETimingComponent_C*                   QTETiming;                                                // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_QTESelectComponent_C*                   QTESelect;                                                // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_QTESingleComponent_C*                   QTESingle;                                                // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsIntervalSequenceFlag;                                   // 0x0770(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0771(0x0007) MISSED OFFSET
	TArray<struct FST_QTESequence>                     QTESequenceArray;                                         // 0x0778(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FST_QTESequence                             CurrentQTESequence;                                       // 0x0788(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ULevelSequence*                              CurrentLevelSequence;                                     // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBPC_QTEBaseComponent_C*                     CurrentQTEComponent;                                      // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsLastQTEFailedFlag;                                      // 0x07F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LastQTEResult;                                            // 0x07F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseQTEInputTimeSafeSlow;                                 // 0x07F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsQTESlowPlayingFlag;                                     // 0x07F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              QTESlowPlayRate;                                          // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      MoveTarget;                                               // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bUseRetry;                                                // 0x0800(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0801(0x0003) MISSED OFFSET
	float                                              RetryFadeTime;                                            // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              GlobalRetryPointSequence;                                 // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<class ULevelSequence*, class ULevelSequence*> IndividualRetryPointSequences;                            // 0x0810(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsExecutedRetryFadeOutFlag;                               // 0x0860(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0861(0x0003) MISSED OFFSET
	int                                                MAX_EASINGRETRYCOUNT;                                     // 0x0864(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsStopAroundFlag;                                         // 0x0868(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0869(0x0007) MISSED OFFSET
	class ABTL_SequenceActor*                          SubSequenceActor;                                         // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ULevelSequence*                              LastQTELevelSequence;                                     // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<class ULevelSequence*, int>                   CurrentRetryCountMap;                                     // 0x0880(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FAccurateTime                               BackAccurateRealTime;                                     // 0x08D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DebugIsQTEForceSuccess;                                   // 0x08D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugIsIgnoreStartQTE;                                    // 0x08D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_QTECutscenePlayer.BP_QTECutscenePlayer_C");
		return ptr;
	}


	void CanSkip(bool* CAN);
	void UpdateQTEAnimationState();
	void STATIC_DebugSetIsQTEForceSuccess(bool bForceSuccess);
	void OnFinishedQTELevelSequencePlayer(class ULevelSequencePlayer* LevelSequencePlayer);
	int GetCurrentRetryCount(class ULevelSequence* InLevelSequence);
	bool DebugIsEnableToSkip();
	void EndSubSequence();
	void PlaySubSequence();
	void STATIC_FinalizeSubSequenceActor();
	void InitializeSubSequenceActor();
	void SetupNextLevelSequence();
	void STATIC_UpdateLevelSequenceManually();
	void SetupCurrentSequenceToRetryPoint();
	void ExecuteRetry();
	void STATIC_UpdatePlayingSequenceToRetry();
	void EndIntervalSequence();
	void UpdatePlayingIntervalSequence();
	struct FName GetQTESingleRandomInputAction();
	void StartQTEInputSafeSlow(float RestLength, float QTELengthBeforeCountTime, float QTEInputLimitTime);
	bool STATIC_IsExistQTEInSequence(struct FST_QTESequence* InQTESequence);
	void FindQTESequenceFromLevelSequence(class ULevelSequence* InLevelSequence, int* FoundIndex);
	bool STATIC_GetLastQTEResult();
	void STATIC_InputQTE(const struct FName& InInputAction);
	void STATIC_StartQTE();
	void STATIC_SetupCurrentQTE();
	void STATIC_SetupCurrentSequenceFromIndex(int SequenceIndex);
	void FinalizeQTEComponent();
	void InitializeQTEComponent();
	void DebugSkipToEnd();
	void STATIC_EndSequence();
	void PlaySequence();
	void STATIC_InitSequencePlay();
	void ExitCutscene();
	void STATIC_InitCutscene();
	void UserConstructionScript();
	void InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_QTE_Top_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_QTE_Left_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_QTE_Right_K2Node_InputActionEvent_9(const struct FKey& Key);
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_Event_InputStart();
	void STATIC_Event_StopAround();
	void STATIC_Event_ResumeAround();
	void STATIC_ExecuteUbergraph_BP_QTECutscenePlayer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
