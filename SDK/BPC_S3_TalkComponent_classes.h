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

// BlueprintGeneratedClass BPC_S3_TalkComponent.BPC_S3_TalkComponent_C
// 0x00AD (0x02B5 - 0x0208)
class UBPC_S3_TalkComponent_C : public US3TalkComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	struct FName                                       EventIdName;                                              // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      owner_actor_;                                             // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_S3CharacterBase_C*                       owner_s3charBase_;                                        // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSight;                                                  // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isTalkable;                                               // 0x0229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isMessageWaiting;                                         // 0x022A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsActionButtonExec;                                       // 0x022B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isShowKS;                                                 // 0x022C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isTalkingSit;                                             // 0x022D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x022E(0x0002) MISSED OFFSET
	float                                              CauseSitHeightDifference;                                 // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsExecutingBindS3DetectActionEvent;                       // 0x0234(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0235(0x0003) MISSED OFFSET
	struct FTimerHandle                                BindS3DetectActionEventTimerHandle;                       // 0x0238(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               isOwnerTalking;                                           // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	TArray<ES3ActionIconType>                          AllowActionType;                                          // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bFirstContact;                                            // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isNewNPCFlag;                                             // 0x0259(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x025A(0x0006) MISSED OFFSET
	TMap<int, float>                                   RegistedSetEnableEventTime;                               // 0x0260(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bCachedEnabledStartDetectIcon;                            // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bKsNoCancel;                                              // 0x02B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isShowingHP;                                              // 0x02B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NeedDLC_IconCheck;                                        // 0x02B3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NeedSubQuestIconCheck;                                    // 0x02B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_S3_TalkComponent.BPC_S3_TalkComponent_C");
		return ptr;
	}


	void CommandStartShowHP(bool Show);
	void CommandCancelKS();
	void CommandStartKS(bool bNoCancel);
	void CommandCancelMessagewaiting();
	void CommandStartMessagewaiting();
	bool ShouldDelayAction();
	void CheckItem(TMap<struct FName, int> ItemMap, bool* Possess);
	void GetEventIconType(ES3ActionIconType* Type, bool* AnimIcon);
	void IsShowDLCIcon(bool* Show, bool* AnimIcon);
	void DoCancelButton_Impl();
	void CheckSubQuest(class UDataTable* DataTable, bool* NeedCheck, bool* InProgress, bool* AnimIcon);
	void DoStepButton_Impl();
	void IsShowSubQuestIcon(bool* Show, bool* AnimIcon);
	void IntToGameTime(int InVal, float* Time);
	void ParseCurrentStepSchedule();
	bool GetIsActionButtonExec();
	void GetStartTalkActionType(bool bCanTalk, struct FS3DetectActionParam* Params);
	void CanSit(class AActor* SitActor, bool bOutputLog, bool* bResult);
	void DebugPrintCurrentDetecttingActor(class ABP_S3DetectAction_C* DetectActor);
	void SetActionButtonExec(bool flag);
	void GetJawPointingParameter(bool* bFingerPointing, float* Yaw, float* Pitch, float* AnimBlendTime);
	void SetJawPointingParamater(float Yaw, float Pitch, float AnimBlendTime);
	void JawPointingMotionFlagOFF();
	void JawPointingMotionFlagON();
	void GetFingerPointingMode(ES3FingerPointingMode* CurrentMode);
	void SetFingerPointingMode(ES3FingerPointingMode NewMode);
	void SetFingerPointingParamater(float Yaw, float Pitch, float AnimBlendTime);
	void FingerPointingMotionFlagOFF();
	void FingerPointingMotionFlagON();
	void GetFingerPointingParameter(bool* bFingerPointing, float* Yaw, float* Pitch, float* AnimBlendTime);
	void getActionType(bool Sight, TArray<struct FS3DetectActionParam>* Params);
	void SetEventIdName(const struct FName& newParam);
	void ReceiveBeginPlay();
	void doActionButton();
	void doStepButton();
	void doSkipButton();
	void doCancelButton();
	void OnBSEventStart(class AActor* NpcActors, class UTalkScript* TalkScript);
	void BindsTalkComponent();
	void InitializeTalk(class US3TalkDataListBase* TalkDataList, const struct FNPCTalkEventInfo& TalkEventInfo);
	void DecideDetectAction(ES3ActionIconType ActionType);
	void OnStepChanged(int SetSteps);
	void OnPcEnableScheduleEvent(float receiveTime);
	void OnReceiveTimeEvent(int EventIndex);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ChangeStep(int SetSteps);
	void ChangeFlag(int ArrayIndex, int SetFlags);
	void ExecuteUbergraph_BPC_S3_TalkComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
