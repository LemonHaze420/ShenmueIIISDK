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

// BlueprintGeneratedClass BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C
// 0x0084 (0x07CC - 0x0748)
class ABP_old_QTECutscenePlayer_C : public ABP_CutscenePlayer_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0748(0x0008) (Transient, DuplicateTransient)
	class UBP_QTEComponent_C*                          BP_QTEComponent;                                          // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FQTESequenceStruct>                  QTESequenceArray;                                         // 0x0758(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FQTESequenceStruct                          CurrentQTESequence;                                       // 0x0768(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ULevelSequence*                              CurrentLevelSequence;                                     // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKey                                        InputtedKey;                                              // 0x0790(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsLastQTEFailedFlag;                                      // 0x07A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsIntervalSequenceFlag;                                   // 0x07A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsExecutedRetryFadeOutFlag;                               // 0x07AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRetrySequence;                                           // 0x07AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RetryFadeTime;                                            // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DefaultRestartPoint;                                      // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AActor*                                      CurrentRestartPoint;                                      // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCurrentRestartFlag;                                     // 0x07C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07C1(0x0003) MISSED OFFSET
	float                                              QTEInputTimer;                                            // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              QTEInputLimitTime;                                        // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_old_QTECutscenePlayer.BP_old_QTECutscenePlayer_C");
		return ptr;
	}


	bool DebugIsEnabledToSkip();
	void SetQTEInputLimitTime(float limitTime);
	void IsUseEndFadeIn(bool* IsUseFade);
	bool GetQTEResult();
	void SetCurrentRestartPoint(class AActor* RestartPoint);
	void Restart();
	void DebugSkipToEnd();
	void ExitCutscene();
	void SetupSequence(int QTESequenceIndex);
	void Retry();
	void UpdatePlayingSequenceToRetry();
	bool IsExistQTEInCurrent();
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
	void ReceiveTick(float DeltaSeconds);
	void Event_InputStart();
	void Event_InputEnd();
	void ExecuteUbergraph_BP_old_QTECutscenePlayer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
