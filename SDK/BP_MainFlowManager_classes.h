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

// BlueprintGeneratedClass BP_MainFlowManager.BP_MainFlowManager_C
// 0x0548 (0x0870 - 0x0328)
class ABP_MainFlowManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPlayCutsceneTask*                           CutsceneTask;                                             // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    RemoteEventCall;                                          // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                CurrentStepID;                                            // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	TMap<struct FName, int>                            ConnectTag_Map;                                           // 0x0358(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       ConnectTag_Flag;                                          // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               RcTemp;                                                   // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SkipStepCheck;                                            // 0x03B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03BA(0x0006) MISSED OFFSET
	TMap<struct FName, class UBP_MainFlowFunction_C*>  EventTaskControl;                                         // 0x03C0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ChildFlowID;                                              // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	TMap<int, struct FName>                            ChildFlowStatus;                                          // 0x0418(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, int>                            GlobalFlagList;                                           // 0x0468(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    MainFlowDelegate;                                         // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TMap<struct FName, int>                            EventDelegateControl;                                     // 0x04C8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, struct FName>                            TickDelegateControl;                                      // 0x0518(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                TickDelegateSP;                                           // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TickDelegateSaveStep;                                     // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SetAppoint;                                               // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartAppoint;                                             // 0x0571(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndAppoint;                                               // 0x0572(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ExecAppoint;                                              // 0x0573(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0574(0x0004) MISSED OFFSET
	struct FName                                       AppointStartEventName;                                    // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AppointEndEventName;                                      // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanNotKillFlag;                                           // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0589(0x0007) MISSED OFFSET
	TArray<int>                                        FollowSheSteps;                                           // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, TEnumAsByte<EN_MainFlowStepToID>>        StepFuncTable;                                            // 0x05A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, TEnumAsByte<EN_MainFlowStepToID_Cb>>     StepFuncTable_Cb;                                         // 0x05F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, struct FST_MainFlowStepControl>          StepControlWork;                                          // 0x0640(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_MainFlowStockDestructor>         DestructorStock;                                          // 0x0690(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentStep;                                              // 0x06A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x06A4(0x0004) MISSED OFFSET
	TMap<struct FName, struct FST_MainFlowCScontrol>   CutSceneEntry;                                            // 0x06A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NowExecStep;                                              // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x06FC(0x0004) MISSED OFFSET
	TMap<int, unsigned char>                           NewVar_0_1;                                               // 0x0700(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               MainFlowLoadEnd;                                          // 0x0750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0751(0x0007) MISSED OFFSET
	TMap<int, struct FName>                            EventDelegateSafeWork;                                    // 0x0758(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FST_MainFlowActorControl>            ActorControlWork;                                         // 0x07A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    RenewalActorID;                                           // 0x07B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FST_MainFlowMessageControl>          SendMessageWork;                                          // 0x07C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, int>                                     SendMessageControlWork;                                   // 0x07D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    NewSendMessage;                                           // 0x0828(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              InquiryMessageIntervalTimer;                              // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseInquiryMessageIntervalTimer;                           // 0x083C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x083D(0x0003) MISSED OFFSET
	TArray<int>                                        MemoRedLine_Hk;                                           // 0x0840(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        MemoRedLine_Cb;                                           // 0x0850(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    RemoveEvent;                                              // 0x0860(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MainFlowManager.BP_MainFlowManager_C");
		return ptr;
	}


	void CheckInitTag(bool* Initialized);
	void SetInitTag();
	void CheckAutoSave(int CurFlag);
	void MFsub_RedLineMemoFlag_Cb();
	void MFsub_RedLineMemoFlag_Hk();
	void SetupMainFlow();
	void CheckDelegateSafe(int Exec_Step, bool* FindResult);
	void MakeActorControl_AfterAdd(TEnumAsByte<EN_MainFlowActorID> Actor_ID, class UClass* Actor_Class, bool* MakeResult, class AActor** Actor);
	void OneClearMessageControl(TEnumAsByte<EN_MainFlowMsgDestinationID> Destination_ID);
	void OneClearActorControl(TEnumAsByte<EN_MainFlowActorID> Actor_ID);
	void GameTimerControl(bool Run_GameTime);
	void FindEventMan(const struct FName& EventName, bool* Result);
	void CheckIntervalMessage(float DeltaSEcond);
	void ReservationInquiryMessage(float IntervalTime);
	void MessageControlWorkSub(int Destination_ID, bool CountUp, bool* FindResult, int* Count);
	void ReceiveMessageControl(TEnumAsByte<EN_MainFlowMsgDestinationID> Destination_ID, bool* On_Massage, struct FString* Message, class AActor** Sender);
	void InquiryMessageControl(TEnumAsByte<EN_MainFlowMsgDestinationID> Destination_ID, bool ExecDispatcher, bool* On_Message);
	void SendMessageControl(TEnumAsByte<EN_MainFlowMsgDestinationID> Destination_ID, const struct FString& Message, class AActor* Sender);
	void ResetMessageControl();
	void CheckCounterActorControl(TEnumAsByte<EN_MainFlowActorID> Actor_ID, unsigned char Save_Counter, bool* Kill);
	void CallRemote(const struct FName& EventName);
	void GetCounterActorControl(TEnumAsByte<EN_MainFlowActorID> Actor_ID, unsigned char* renewal_counter, class AActor** entry_actor);
	void RenewalActorControl(TEnumAsByte<EN_MainFlowActorID> Actor_ID);
	void MakeActorControl(TEnumAsByte<EN_MainFlowActorID> Actor_ID, class UClass* Actor_Class, bool* MakeResult, class AActor** Actor);
	void ResetActorControl();
	void PushIndependenceDestructor(int MapType, int Independence_Step, bool* Add_Stock);
	void PushDestructor_Sub(int MapType, int Step_Value, bool* Add_Stock);
	void SetStepControl_CurrentStep(int SetStep, bool* Change_Current);
	void PlayerbleControl(bool Playable);
	void CulcStepControl_PlayerableSP(int Step, unsigned char SP, bool* Result);
	void GetDelegateSafe(int Exec_Step, bool* FindResult, struct FName* EventNameRC, int* GetKey);
	void CheckLoadEnd(bool* LoadEnd);
	void ResetNewStepControl();
	void SelectStepID(int Step, int MapType, unsigned char* StepID, bool* FindResult);
	void CheckPlayableSP(int Exec_Step, unsigned char* SP);
	void ChangeStepControl_PlayerableSP(int CheckStep, int SP, bool* Result);
	void GetStepControl_ExecStep(int* Now_Exec);
	void SetStepControl_ExecStep(int Exec_Step, int* Now_Exec);
	void PopDestructor(int Exec_Step, bool* Remove_);
	void GetCutScenStockTimes(int* StockTimes);
	void KillCutSceneEvent(const struct FName& CutsceneName, bool* KillResult);
	void GetCutSceneEvent(const struct FName& CutsceneName, bool Get_EndEvent, bool* FindResult, struct FName* EventName);
	void CreateCutSceneControl(const struct FName& CutsceneName, bool UseFade, const struct FName& StartEventName, const struct FName& EndEventName, bool* Entry_Result);
	void ResetCScontrol();
	void GetDestructor_List(TArray<struct FST_MainFlowStockDestructor>* DestructorList);
	void ChangeStepControl_SubStep(int CheckStep, int New_SubStep, bool* Result);
	void GetStepControl_CurrentStep(int* Current);
	void ChangeStepControl_Flag(int CheckStep, int New_Flag, int mask, bool* Result, int* FlagValue);
	void GetStepControl_Info(int CheckStep, bool* Result, int* control_flag, int* sub_step, unsigned char* step_id, unsigned char* Playable_SP);
	void PushDestructor(int MapType, bool* Add_Stock);
	void ChangeStepControl(int new_stepid, int map_type, bool* New_Step_Control);
	void StepControlBitToBranchID(int CurFlag, TEnumAsByte<EN_MainFlowStepBranchID>* BranchID, int* ChangeFlag, bool* Change);
	void AllCollisionChange(bool On, bool* newParam);
	void CheckEventOccurs(const struct FName& EventName, bool* Result);
	void CheckFollowSHEStep(bool* Need_Follow_SHE);
	void CheckLevelSchedule(int Step);
	void LoadedStartLevel_Impl();
	void MakeAppointControl(const struct FVector& JumpPoint, const struct FRotator& Rotation, const struct FName& EyeCatchID, int Add_Day, int Hour, int Minute, int Enable_Time_Min, int Enable_Time_Max, int Change_Step, const struct FName& LAbelLeft, const struct FName& StartRemotoEvent, const struct FName& StartEndEvent, bool Can_not_kill, bool SkipEndFade);
	void KillAppointControl(bool forced_Kill, bool* kill_exec);
	void ExecTickDelegate(bool* enable_exec, struct FName* Event_Name);
	void SetTickDelegate(int set_step, const struct FName& EventName, bool* Add_result);
	void ResetDelegate();
	void GetDelegate(const struct FName& EventName, bool* FindResult, struct FName* EventNameRC, int* GetKey);
	void SetDelegate(const struct FName& EventName, int ControlBit, int ExecStep, bool* Add_result);
	void MFsub_SetGlobalFlag(const struct FName& FlagID, int SetValue, bool* SetResult);
	void MFsub_GetGlobalFlag(const struct FName& FlagID, int* FlagValue);
	void StartChildFlow(const struct FName& ChildFlowName, bool* StartResult);
	void GetCurrentChildFlow(struct FName* CurrentFlowName);
	void GetChildFlowCurrentID(int* ChildFlowID);
	void ChangeChildFlowCurrentID(int* ChangeAfterID);
	void CheckChildFlowCurrentID(int CheckId, bool* Alive_to_survive);
	void LiveCheckChildFlow(const struct FName& FlowName, bool* LiveResult);
	void ResetChildFlow();
	void ResetEventMan();
	void RemoveEventMan(const struct FName& EventName, bool* rc);
	void UnBindEventMan(const struct FName& EventName, bool CarrigeUnbind, bool* Result);
	void ExecEventMan();
	void CreateEventMan(class UPrimitiveComponent* Trg_Compo_Name, const struct FName& EventName, int ControlStatus, TEnumAsByte<EN_MainFlowEventType> EventType, const struct FString& TypeUniqueParameta, bool Save, bool* createresult);
	void AddTag(const struct FString& TagName);
	void UserConstructionScript();
	void MfEvt_EndAppoint();
	void LoadedStartLevel();
	void MfEvt_StartAppoint();
	void ChangedStep(int SetSteps);
	void ReceiveTick(float DeltaSeconds);
	void Reset();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MainFlowManager(int EntryPoint);
	void RemoveEvent__DelegateSignature(const struct FName& EventName);
	void NewSendMessage__DelegateSignature(TEnumAsByte<EN_MainFlowMsgDestinationID> Current_Destination_ID);
	void RenewalActorID__DelegateSignature(TEnumAsByte<EN_MainFlowActorID> ActorId, unsigned char RenewalCounter);
	void MainFlowDelegate__DelegateSignature();
	void RemoteEventCall__DelegateSignature(const struct FName& EventName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
