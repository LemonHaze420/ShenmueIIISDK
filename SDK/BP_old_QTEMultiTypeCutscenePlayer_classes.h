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

// BlueprintGeneratedClass BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C
// 0x01AC (0x08F4 - 0x0748)
class ABP_old_QTEMultiTypeCutscenePlayer_C : public ABP_CutscenePlayer_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0748(0x0008) (Transient, DuplicateTransient)
	class UBPC_old_QTETimingComponent_C*               QTETiming;                                                // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_old_QTESingleComponent_C*               QTESingle;                                                // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_old_QTEFreeCommandComponent_C*          QTEFreeCommand;                                           // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_old_QTESelectComponent_C*               QTESelect;                                                // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPC_old_QTECommandComponent_C*              QTECommand;                                               // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FST_old_QTEMultiTypeSequence>        QTESequenceArray;                                         // 0x0778(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FST_old_QTEMultiTypeSequence                CurrentQTESequence;                                       // 0x0788(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ULevelSequence*                              CurrentLevelSequence;                                     // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKey                                        InputtedKey;                                              // 0x07E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsLastQTEFailedFlag;                                      // 0x07F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsIntervalSequenceFlag;                                   // 0x07F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsExecutedRetryFadeOutFlag;                               // 0x07FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRetry;                                                // 0x07FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RetryFadeTime;                                            // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWBP_QTETimeGauge_C*                         WidgetQTETimeGauge;                                       // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              QTEInputTimer;                                            // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              QTEInputLimitTimer;                                       // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FST_old_BattleQTEExperimentFreeCommand      LastQTEFreeCommand;                                       // 0x0810(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_old_BattleQTEExperimentFreeCommand> CommandList;                                              // 0x0868(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bUseQTEInputRealTime;                                     // 0x0878(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0879(0x0003) MISSED OFFSET
	float                                              FreeCommandInputInterval;                                 // 0x087C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LastQTEResult;                                            // 0x0880(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0881(0x0007) MISSED OFFSET
	class ULevelSequence*                              GlobalRetryPointSequence;                                 // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<class ULevelSequence*, class ULevelSequence*> IndividualRetryPointSequences;                            // 0x0890(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                CurrentRetryCount;                                        // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MAX_EASINGRETRYCOUNT;                                     // 0x08E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseQTEInputTimeSafeSlow;                                 // 0x08E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsQTESlowPlayingFlag;                                     // 0x08E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x08EA(0x0002) MISSED OFFSET
	float                                              QTESlowPlayRate;                                          // 0x08EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BackRealTimeSecondsForQTESlow;                            // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_old_QTEMultiTypeCutscenePlayer.BP_old_QTEMultiTypeCutscenePlayer_C");
		return ptr;
	}


	void STATIC_SetBackRealTimeSecondsForQTESlow(float NewTime);
	float GetQTESlowPlayRate();
	bool STATIC_IsQTESlowPlaying();
	void StartQTEInputSafeSlow(float RestLength, float QTEInAnimLength, float QTEOutAnimLength);
	void STATIC_EndSequence();
	bool IsExistQTEInSequence(struct FST_old_QTEMultiTypeSequence* QTESequence);
	bool DebugIsEnabledToSkip();
	void STATIC_CountQTEInputTimer(float* AfterTimer);
	void STATIC_FindQTESequenceFromLevelSequence(class ULevelSequence* LevelSequence, int* Index);
	void NotifyInputKey(const struct FKey& InputedKey);
	bool STATIC_GetLastQTEResult();
	void STATIC_GetLastQTEFreeCommandResult(bool* IsSuccess, struct FST_old_BattleQTEExperimentFreeCommand* FreeCommand);
	void UpdateLastQTEFreeCommand();
	bool IsInQTE();
	void ResetLastQTEFailed();
	void UpdateQTEInputTimer();
	bool IsQTEEnabledInput();
	void UpdateQTERestInputTimeRate();
	void EndFunctionQTE();
	void GetResultQTE(bool* Result);
	void ClearResultQTE();
	void STATIC_PrepareQTE();
	void STATIC_InputQTE(const struct FKey& InputedKey);
	void InputEndQTE();
	void InputStartQTE();
	void SetupNextLevelSequecne(bool QTEResult);
	void DebugSkipToEnd();
	void ExitCutscene();
	void SetupSequence(int QTESequenceIndex);
	void Retry();
	void UpdatePlayingSequenceToRetry();
	bool STATIC_IsExistQTEInCurrent();
	void UpdatePlayingIntervalSequence();
	bool IsExistNextLevelSequence();
	void EndIntervalSequence();
	void InitQTESequence();
	void PlaySequence();
	void InitCutscene();
	void UserConstructionScript();
	void InpActEvt_QTE_ButtonTop_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_QTE_ButtonBottom_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_QTE_ButtonLeft_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_QTE_ButtonRight_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_QTE_Top_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_QTE_Bottom_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_QTE_Left_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_QTE_Right_K2Node_InputActionEvent_9(const struct FKey& Key);
	void STATIC_Event_InputStart();
	void STATIC_Event_InputEnd();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void STATIC_OnFinishedLevelSequencePlayer(class ULevelSequencePlayer* LevelSequencePlayer);
	void ExecuteUbergraph_BP_old_QTEMultiTypeCutscenePlayer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
