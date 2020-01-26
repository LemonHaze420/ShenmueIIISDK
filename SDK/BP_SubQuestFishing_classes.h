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

// BlueprintGeneratedClass BP_SubQuestFishing.BP_SubQuestFishing_C
// 0x0080 (0x03A8 - 0x0328)
class ABP_SubQuestFishing_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                EventFlagNumber;                                          // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventFlagMin;                                             // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventFlagMax;                                             // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	TArray<int>                                        TimeChangeItem;                                           // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                RivalValueSetFlagNumber;                                  // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	TArray<struct FString>                             Difficulty;                                               // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                DifficultyCountFlag;                                      // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TimeChangeCount;                                          // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MarkGameTimeNew;                                          // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartSubQuest;                                           // 0x037C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	float                                              MarkGameTimeOld;                                          // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeStep;                                                 // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckTime;                                               // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	int                                                TimeChangeValue;                                          // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRivalValueDownCheck;                                     // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0391(0x0003) MISSED OFFSET
	int                                                TimeTempFlag;                                             // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LoadStart_TimeChangeCount;                                // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LoadStart_Flag;                                           // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	float                                              LoadStart_TimeStep;                                       // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoadStart_TimeDifference;                                 // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SubQuestFishing.BP_SubQuestFishing_C");
		return ptr;
	}


	void CheckTableIndex(int Index, int Length, bool* In_Range);
	void CulcFlagValue(bool* Start_on_the_way, int* StartCount, float* StartStep, float* StartDifference);
	void AddRandom(bool* Write);
	void GetTableIndex(int Index, int Length, int* change_index);
	void SetTimeChange(int CountUp, bool* Write);
	void CulcElapsedTime(int* CountUp);
	void GameTimeMark(bool StartMark);
	void isEventEnable(bool* Enable);
	void UserConstructionScript();
	void StartEvent(int ArrayIndex, int SetFlags);
	void ReceiveTick(float DeltaSeconds);
	void TimeChange(const struct FName& CutsceneName);
	void Recharge();
	void LoadStartIn();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SubQuestFishing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
