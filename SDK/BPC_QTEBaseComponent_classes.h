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

// BlueprintGeneratedClass BPC_QTEBaseComponent.BPC_QTEBaseComponent_C
// 0x0048 (0x0138 - 0x00F0)
class UBPC_QTEBaseComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	bool                                               IsQTEStartedFlag;                                         // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInQTEFlag;                                              // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsEnabledInputFlag;                                       // 0x00FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsWaitingInAnimationFinishedFlag;                         // 0x00FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputlimitTime;                                           // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentInputTime;                                         // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	TArray<struct FName>                               ExecuteTargetInputActions;                                // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_S3SoundPlayer_C*                         TimeCountSEPlayer;                                        // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               QTEResult;                                                // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCountInputLimitTimeFlag;                                // 0x0121(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0122(0x0002) MISSED OFFSET
	struct FAccurateTime                               BackAccurateRealTime;                                     // 0x0124(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	struct FName                                       QTEForceFeedbackTag;                                      // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_QTEBaseComponent.BPC_QTEBaseComponent_C");
		return ptr;
	}


	void UpdateAnimationState();
	void DebugQTEForceSetResultSuccess();
	void PlayStartForceFeedback();
	struct FName GetQTEForceFeedbackTag();
	void SetQTEForceFeedbackTag(const struct FName& InTag);
	void PlayInputFailedForceFeedback();
	void PlayInputSuccessForceFeedback();
	float GetCurrentInputTime();
	void DebugQTEForceSuccessUpdateInternal();
	void DebugQTEForceSuccessUpdate();
	void StartCountInputLimitTime();
	bool CanStartCountInputLimitTime();
	float GetLengthBeforeCountInputLimitTime();
	bool IsPlayingInAnimation();
	void PlayTimeUpFailedAnimation();
	void PlayInAnimation();
	void StopTimeCountSE();
	void PlayTimeCountSE();
	void PlayInputFailedSE();
	void PlayInputSuccessSE();
	void PlayStartSE();
	void SetTimeGaugeRate(float InGaugeRate);
	float GetCurrentInputTimeRate();
	void SetInputLimitTime(float InLimitTime);
	void ExecuteInputAction(const struct FName& InInputAction);
	void InputQTE(const struct FName& InInputAction);
	void SetExecuteTargetInputActions(TArray<struct FName>* NewInputActions);
	void SetResult(bool NewResult);
	bool GetResult();
	bool IsInQTE();
	bool IsQTEStarted();
	void Update();
	void Reset();
	void FinishQTE();
	void StartQTE();
	void Finalize();
	void Initialize();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BPC_QTEBaseComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
