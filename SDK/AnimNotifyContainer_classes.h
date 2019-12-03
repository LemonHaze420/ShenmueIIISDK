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

// BlueprintGeneratedClass AnimNotifyContainer.AnimNotifyContainer_C
// 0x00B8 (0x0248 - 0x0190)
class UAnimNotifyContainer_C : public UBTL_AnimNotifyContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0190(0x0008) (Transient, DuplicateTransient)
	TArray<struct FAnimNotifyStateInfo>                AnimNotifyStateInfoList;                                  // 0x0198(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FAnimNotifyTriggerInfo>              AnimNotifyTriggerInfoList;                                // 0x01A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnReceiveAnimNotifyStateBegin;                            // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReceieveAnimNotifyTrigger;                              // 0x01C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReceieveAnimNotifyStateEnd;                             // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TMap<struct FName, float>                          TimeSinceLastNotifyEnd;                                   // 0x01E8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               Tracking;                                                 // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotifyContainer.AnimNotifyContainer_C");
		return ptr;
	}


	void STATIC_ConsumeNotifyTrigger(const struct FName& NotifyID, class UBP_AnimNotifyTrigger_Base_C** NotifyTrigger);
	void STATIC_AddAffectActorToNotifyStateByRef(class UBP_AnimNotifyState_Base_C* NotifyState, class AActor* AffectActor);
	bool STATIC_PopAllNotifyTriggerByID(const struct FName& Name);
	void SetTimeSinceNotifyToZero(const struct FName& InputPin);
	void STATIC_GetTimeSinceNotify(const struct FName& Identifier, float* TimePassed, bool* IsValid);
	void STATIC_TrackNotifyTime(const struct FName& Identifier);
	bool CheckAffectActor(class UBP_AnimNotifyState_Base_C* StateInstance, class AActor* Actor);
	void STATIC_GetNotifyAnimation(class UBP_AnimNotifyState_Base_C* StateInstance, class UAnimSequenceBase** Animation);
	int CheckAffectActorCount(class UBP_AnimNotifyState_Base_C* StateInstance);
	bool STATIC_CheckNotifyStateInstanceAnimation(class UBP_AnimNotifyState_Base_C* StateInstance, class UAnimSequenceBase* Animation);
	void STATIC_CheckNotifyStateExistWithAffectActor(const struct FName& NotifyID, class AActor* AffectActor, bool FromLatest, bool* Exist, class UBP_AnimNotifyState_Base_C** NotifyState, int* NotifyStateIndex);
	bool IsStateInstanceActive(class UBP_AnimNotifyState_Base_C* StateInstance);
	void RemoveOldestNotifyStateById(const struct FName& NotifyID);
	void RemoveOldestNotifyTriggerByID(const struct FName& NotifyID);
	void STATIC_ClearAllNotifies();
	void RemoveAllNotifyStateById(const struct FName& NotifyID);
	void ReceiveAnimNotifyStateTick(class UAnimNotifyState* Notify, float DeltaTime);
	void Update(float DeltaSecond);
	void STATIC_RemoveNotifyTrigger(int Index);
	void STATIC_RemoveNotifyState(int Index);
	void STATIC_RemoveAllNotifyTriggerByID(const struct FName& NotifyID);
	void STATIC_AddAffectActorToNotifyTrigger(int NotifyStateIndex, class AActor* AffectActor);
	void STATIC_CheckNotifyTriggerExist(const struct FName& NotifyID, bool* Exist, class UBP_AnimNotifyTrigger_Base_C** NotifyTrigger, int* NotifyTriggerIndex);
	void AddAffectActorToNotifyState(int NotifyStateIndex, class AActor* AffectActor);
	void STATIC_CheckNotifyStateExist(const struct FName& NotifyID, bool FromLatest, bool* Exist, class UBP_AnimNotifyState_Base_C** NotifyState, int* NotifyStateIndex);
	void ReceiveAnimNotifyTrigger(class UAnimNotify* Notify);
	void ReceiveAnimNotifyStateEnd(class UAnimNotifyState* Notify);
	void ReceiveAnimNotifyStateBegin(class UAnimNotifyState* Notify, float TotalDuration, class UAnimSequenceBase* Animation);
	void STATIC_Reset();
	void ExecuteUbergraph_AnimNotifyContainer(int EntryPoint);
	void OnReceieveAnimNotifyStateEnd__DelegateSignature(class UBP_AnimNotifyState_Base_C* State);
	void OnReceieveAnimNotifyTrigger__DelegateSignature(class UBP_AnimNotifyTrigger_Base_C* newParam);
	void OnReceiveAnimNotifyStateBegin__DelegateSignature(class UBP_AnimNotifyState_Base_C* newParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
