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
	void STATIC_OnExitStepAndTime();
	void STATIC_OnEnterStepAndTime();
	bool STATIC_CheckSavedConditions();
	bool STATIC_CanActionByBehaviorState();
	void STATIC_EnableByStep(bool bEnable, bool* bDummy);
	void ResetBind();
	void STATIC_ResetParam(bool* dummy);
	void STATIC_CheckOverlapPlayer(bool* Overlap);
	void STATIC_EndOverlap();
	void CanAction(bool CheckOnly, bool* CAN);
	void CheckStep(bool* ReturnFlag);
	void STATIC_PlayAction(bool* Success);
	void STATIC_CheckStepAndTime(bool* ReturnFlag);
	void UserConstructionScript();
	void STATIC_BindTalkEvent();
	void OnEndTalk();
	void STATIC_UnBindTalkEvent();
	void OnFinishedTurn(class UBPC_TurnAround_C* SelfTurnAroundComponent);
	void BindPlayerBehavior();
	void ChangePlayerBehavior(ES3PlayerBehavior NewId, ES3PlayerBehavior OldId);
	void STATIC_UnbindPlayerBehavior();
	void STATIC_ChangeTime(int EventIndex);
	void STATIC_BindTimeChange(float Time);
	void UnbindTimeChange();
	void STATIC_ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void STATIC_ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
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
