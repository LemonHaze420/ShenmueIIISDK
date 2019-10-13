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

// BlueprintGeneratedClass BP_MainFlowFunction.BP_MainFlowFunction_C
// 0x0058 (0x0148 - 0x00F0)
class UBP_MainFlowFunction_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	struct FName                                       EventName;                                                // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ControlStatus;                                            // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         CompoName;                                                // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bCheckDelayTrgEvent;                                      // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_MainFlowEventType>                  EventType;                                                // 0x0111(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0112(0x0006) MISSED OFFSET
	class ABP_Gimmick_OpenDoor_Template_C*             GimmickDoor;                                              // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEventOccurs;                                             // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	struct FString                                     CheckEventID;                                             // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EN_MainFlowMsgDestinationID>           CheckDestination;                                         // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EN_MainFlowMsgDestinationID>           NewVar_1;                                                 // 0x0139(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x013A(0x0002) MISSED OFFSET
	int                                                CheckArrayIndex;                                          // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CheckItemID;                                              // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MainFlowFunction.BP_MainFlowFunction_C");
		return ptr;
	}


	void ChangeCollision(bool on_off, bool* Change);
	void CheckOccurs(bool* Result);
	void ExecUnbind();
	void TrgEvent_CanTrgEvent(bool* CAN);
	void TrgEvent_UnbindOnly(bool CarrigeUnbind, bool* ExecUnbind);
	void TrgEvent_Exec(bool* rc);
	void TrgEvent_Enable(class UPrimitiveComponent* TriggerCompo_Name, const struct FName& EventName, int ControlStatus, TEnumAsByte<EN_MainFlowEventType> EventType, const struct FString& UniqueParameta);
	void TrgEvent_Manager();
	void CallTrgEvent();
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void DoorNotify();
	void AttentionOnAccprd(const struct FString& EventId);
	void MemoFinish();
	void ElapsedTime(const struct FName& CutsceneName);
	void NewMessage(TEnumAsByte<EN_MainFlowMsgDestinationID> Current_Destination_ID);
	void FlagChanged(int ArrayIndex, int SetFlags);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ItemChange(const struct FName& ItemId, int NewNum, int OldNum);
	void ExecuteUbergraph_BP_MainFlowFunction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
