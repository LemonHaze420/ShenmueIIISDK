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

// BlueprintGeneratedClass BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C
// 0x00B8 (0x01A8 - 0x00F0)
class UBPC_MiniGame_KungFuFlow_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class UWBP_KungFu_Common_C*                        RefWidget;                                                // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              MaxAccumulationTime;                                      // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeartCountValue;                                          // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SafeAccumulationTime;                                     // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PreAccumulationCount;                                     // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Uwgt_HUDEnergyStatus_C*                      EnergyWidget;                                             // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              MaxPlayTime;                                              // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentPlayTime;                                          // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    TimeUpDispacher;                                          // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SkillCountMaxDispacher;                                   // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              DifficultyRate;                                           // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_MiniGame_KungFuType>                 KungFuType;                                               // 0x0144(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0145(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    ResultEndDispacher;                                       // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              AdjustRate;                                               // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	struct FTransform                                  CameraTransform;                                          // 0x0160(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ABP_KungFu_Result_C*                         ResultScreen;                                             // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              ExperienceAdjustRate;                                     // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x019C(0x0004) MISSED OFFSET
	class UBP_TrainingLevelUpRecorder_C*               LevelUpRecorder;                                          // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_MiniGame_KungFuFlow.BPC_MiniGame_KungFuFlow_C");
		return ptr;
	}


	void SetExperienceAdjustRate(float Rate);
	bool IsShowingResultScreen();
	void ShowResultScreen();
	void SetEnabledMasterImage(bool Enabled);
	void PlayMaxLevelMasteredAnim();
	void UpdateUIKungFuLevelInfo();
	int GetCurrentLimitLevel();
	void ChangeKungFuNameToNext();
	void BindEventSkillCountMax(const struct FScriptDelegate& Event);
	void SetTimerCurrentRate(float TimeRate);
	void AddSkillCount(int AddCount);
	void GetKungFuLocalizedName(TEnumAsByte<E_MiniGame_KungFuType> Type, int Level, struct FString* OutString);
	void SetWidgetArrowSettings(float moveSpeed, float MoveTime, float IntervalTime);
	void EnabledButtonIconUI(bool bEnabled);
	void Finalize();
	void UpdateAccumulation(float DeltaSeconds);
	void BindEventTimeUp(const struct FScriptDelegate& Event);
	void Initialize(bool bUseButtonIcon, bool bFlashButtonAnimIcon, TEnumAsByte<E_MiniGame_KungFuType> KungFuType, int KungFuLevel, int MiniLevel, const struct FTransform& CameraTrans);
	void ReceiveTick(float DeltaSeconds);
	void CallSkillCountMax();
	void OnResultScreenClose();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BPC_MiniGame_KungFuFlow(int EntryPoint);
	void ResultEndDispacher__DelegateSignature();
	void SkillCountMaxDispacher__DelegateSignature();
	void TimeUpDispacher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
