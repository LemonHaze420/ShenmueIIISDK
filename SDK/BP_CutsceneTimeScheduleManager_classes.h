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

// BlueprintGeneratedClass BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C
// 0x00DA (0x0412 - 0x0338)
class ABP_CutsceneTimeScheduleManager_C : public AS3CutsceneTimeScheduleManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PrevCheckTime;                                            // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    StartTimerCutscene;                                       // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bExecLockFlag;                                            // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      StockPushIndex;                                           // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      StockPopIndex;                                            // 0x0362(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0363(0x0005) MISSED OFFSET
	TMap<unsigned char, struct FName>                  StockArray;                                               // 0x0368(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    StartElapsedTime;                                         // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FName                                       SaveTemp;                                                 // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewVar_1;                                                 // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HourRange;                                                // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<bool>                                       TimeLinkTable;                                            // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bActiveFlag;                                              // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStepLockFlag;                                            // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03EA(0x0002) MISSED OFFSET
	int                                                LockStep;                                                 // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRewardLockFlag;                                          // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	struct FName                                       LockParent;                                               // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWorldTelecomLockFlag;                                    // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForcedEventStopFlag;                                     // 0x0401(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0402(0x0006) MISSED OFFSET
	struct FName                                       ForcedEventStopParent;                                    // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForcedEventReserve;                                      // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGimmickLockFlag;                                         // 0x0411(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CutsceneTimeScheduleManager.BP_CutsceneTimeScheduleManager_C");
		return ptr;
	}


	void STATIC_GetTime_ForceEventStop(float AdjustTime, bool* reserve_enable, float* reserve_time);
	void ChangeGimmickLock(bool ExecLock);
	void isForceEventStop_TimeEnable(bool* ForcedEventStop_TimeON);
	void ResetForceEventStop();
	void isForceEventStop_Reserved(bool* ForcedEventStop_Reserved);
	void ReserveForcedEventStop(const struct FName& EventName);
	void ChangeWorldTelecomLock(bool ExecLock);
	void GetLockParent(struct FName* exec_lock);
	void CheckRewardLock(bool* exec_lock);
	void STATIC_ReleaseRewardLock();
	void STATIC_StartRewardLock();
	void ForcedReleaseStepLock();
	void CheckStepLock(bool* exec_lock);
	void StartStepLock();
	void SetActive();
	void CheckLock(bool* exec_lock);
	void ResetTimeLinkTable();
	void STATIC_GetTimeLinkTableNextFoward(TEnumAsByte<EN_CutSceneTimeSchduleMarkID> TimeMarkID, bool* Result);
	void STATIC_GetTimeLinkTableNext(TEnumAsByte<EN_CutSceneTimeSchduleMarkID> TimeMarkID, bool* Result);
	void GetTimeLinkTable(TEnumAsByte<EN_CutSceneTimeSchduleMarkID> TimeMarkID, bool* Result);
	void SetTimeLinkTable(TEnumAsByte<EN_CutSceneTimeSchduleMarkID> TimeMarkID, bool SetValue);
	void FindSchedulIndex(const struct FName& CutsceneName, int* Index);
	void StartExecFlagChange(const struct FName& InputPin, bool* Change);
	void CheckStockSchedule(bool* stock_on);
	void STATIC_AddElapsedTime(const struct FName& CutsceneName, float HourLater);
	void ExecStockEvent(bool* Event_Exec);
	void STATIC_CheckStock(bool* Stock_available);
	void StartLock();
	void ReleaseLock();
	void STATIC_StockPushEvent(const struct FName& Event_Name, bool* Add);
	void STATIC_CanEventStart(bool* Start_Enable);
	void CheckSchedule(bool* ExecEvent);
	void STATIC_AddTimeSchedule(const struct FName& CutsceneName, float ScheduleHour);
	void STATIC_IsTimeScheduleEnabled(const struct FName& CutsceneName, bool* IsEnabled);
	void STATIC_StopTimeSchedule(const struct FName& CutscneName);
	void STATIC_StartTimeSchedule(const struct FName& CutsceneName);
	bool STATIC_IsCutsceneStartable();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_CutsceneTimeScheduleManager(int EntryPoint);
	void STATIC_StartElapsedTime__DelegateSignature(const struct FName& CutsceneName);
	void StartTimerCutscene__DelegateSignature(const struct FName& CutsceneName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
