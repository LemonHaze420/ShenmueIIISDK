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

// BlueprintGeneratedClass BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C
// 0x0039 (0x0361 - 0x0328)
class ABP_Hakkason_TimeOverControl_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      ThisRenewalCounter;                                       // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0339(0x0003) MISSED OFFSET
	int                                                ModeID;                                                   // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              limitTime;                                                // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CheckStepRange;                                           // 0x0344(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	int                                                StepMin;                                                  // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StepMax;                                                  // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartMarkTimer;                                           // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	class AActor*                                      Init_Actor;                                               // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStopGameTime;                                            // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Hakkason_TimeOverControl.BP_Hakkason_TimeOverControl_C");
		return ptr;
	}


	void isTimerOverStop(bool* Stop);
	void StepRangeSet(int StepMin, int StepMax);
	void CheckStepOver(bool* StepOver);
	void CheckGameTimerange(float Min, float Max, bool* TimeInRange);
	void InitSet(float LmitTime);
	void UserConstructionScript();
	void TickChangeCheckKill();
	void RenewalActorCount(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_Hakkason_TimeOverControl(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
