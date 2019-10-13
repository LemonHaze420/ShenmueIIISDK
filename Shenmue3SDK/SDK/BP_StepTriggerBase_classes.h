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

// BlueprintGeneratedClass BP_StepTriggerBase.BP_StepTriggerBase_C
// 0x0034 (0x039C - 0x0368)
class ABP_StepTriggerBase_C : public AS3GimmickStepTrigger
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	int                                                EventStepMin;                                             // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventStepMax;                                             // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HourMin;                                                  // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HourMax;                                                  // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NeedCheckOverlap;                                         // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	int                                                EventFlagNumber;                                          // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventFlagMin;                                             // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventFlagMax;                                             // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_S3GameInstance_C*                        GameInstance;                                             // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CachedStepAndTime;                                        // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_StepTriggerBase.BP_StepTriggerBase_C");
		return ptr;
	}


	bool CheckTime();
	bool HasGameTimeRestriction();
	void CacheInStepAndTime(int* Previous, int* Next);
	void OnExitStepAndTime();
	void OnEnterStepAndTime();
	bool CheckSavedConditions();
	bool CanActionByBehaviorState();
	void EnableByStep(bool bEnable, bool* bDummy);
	void ResetBind();
	void ResetParam(bool* dummy);
	void CheckOverlapPlayer(bool* Overlap);
	void EndOverlap();
	void CanAction(bool CheckOnly, bool* CAN);
	void CheckStep(bool* ReturnFlag);
	void PlayAction(bool* Success);
	void CheckStepAndTime(bool* ReturnFlag);
	void UserConstructionScript();
	void BindTalkEvent();
	void OnEndTalk();
	void UnBindTalkEvent();
	void OnFinishedTurn(class UBPC_TurnAround_C* SelfTurnAroundComponent);
	void BindPlayerBehavior();
	void ChangePlayerBehavior(ES3PlayerBehavior NewId, ES3PlayerBehavior OldId);
	void UnbindPlayerBehavior();
	void ChangeTime(int EventIndex);
	void BindTimeChange(float Time);
	void UnbindTimeChange();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ChangeStep(int SetSteps);
	void ChangeFlag(int ArrayIndex, int SetFlags);
	void RepondToStepOrTime(bool Init);
	void TryRegisterNextTimeCheck(bool StartTime);
	void ExecuteUbergraph_BP_StepTriggerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
