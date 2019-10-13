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

// BlueprintGeneratedClass BP_S3EnergyManager.BP_S3EnergyManager_C
// 0x0070 (0x0398 - 0x0328)
class ABP_S3EnergyManager_C : public AS3EnergyManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AS3GameTimeManager*                          TimeMan;                                                  // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FDateTime                                   LastDate;                                                 // 0x0340(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDateTime                                   InvalidDate;                                              // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               LowEnergy;                                                // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasRunningDrainTime;                                      // 0x0351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0352(0x0002) MISSED OFFSET
	float                                              TimeToRegenerateLowEnergy;                                // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnergyRegenNormalizedRate;                                // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NormalRunningDrainTime;                                   // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LowRunningDrainTime;                                      // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NormalRunningDrainRate;                                   // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LowRunningDrainRate;                                      // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanMessageLowEnergy;                                      // 0x036C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	float                                              TimeAboveRegenMax;                                        // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastDialogIndex;                                          // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasBattle;                                                // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	float                                              TimeToResetDialogFlag_AboveRegenMax;                      // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EventFlag_EatEvent;                                       // 0x0380(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	struct FTimerHandle                                TimerBattleFlag;                                          // 0x0388(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                TimerMessageReenable;                                     // 0x0390(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_S3EnergyManager.BP_S3EnergyManager_C");
		return ptr;
	}


	bool IsLowEnergy();
	void SelectLowEnergyMessageList(TArray<struct FName>* Array);
	void TryStartEatEvent(bool* Starting);
	void TryMessageLowEnergyStatus();
	void DrainEnergyByRunningTick(float DeltaSeconds);
	void RegerateEnergy(float DeltaSeconds);
	void DrainEnergyByRunning();
	void Setup(class AS3GameTimeManager* TimeMan);
	void DrainEnergyByTime();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void OnPlayerBehaviorIdChanged(ES3PlayerBehavior NewId, ES3PlayerBehavior OldId);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void Reset();
	void ResetBattleFlag();
	void ReenableLowEnergyMessage();
	void StartMessageReenableTimer();
	void DrainRunEnergy();
	void ExecuteUbergraph_BP_S3EnergyManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
