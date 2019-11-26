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

// BlueprintGeneratedClass BPC_BSComponent.BPC_BSComponent_C
// 0x0160 (0x02D8 - 0x0178)
class UBPC_BSComponent_C : public US3BSComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0178(0x0008) (Transient, DuplicateTransient)
	class UBPC_S3_TalkComponent_C*                     TalkComponent;                                            // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEndTalkEvent;                                           // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TMap<float, bool>                                  BsEnableScheduleCache;                                    // 0x0198(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<float, int>                                   BsSetCountScheduleCache;                                  // 0x01E8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, float>                                   RegistedSetEnableEventTime;                               // 0x0238(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, float>                                   RegistedSetCountEventTime;                                // 0x0288(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_BSComponent.BPC_BSComponent_C");
		return ptr;
	}


	void IntToGameTime(int Value, float* GameTime);
	void ParseCurrentStepBsSchedule();
	void ResetEventCount(int newEventCount);
	void EventOnEnd(bool interrupted);
	void StringToGameTime(const struct FString& Time_String_, bool* IsNumeric, float* GameTime);
	void ReceiveBeginPlay();
	void OnStartBS();
	void InitializeBSTalk(class US3TalkDataListBase* TalkDataList);
	void OnStepChanged(int SetSteps);
	void OnBsEnableScheduleEvent(float receiveTime);
	void OnBsCountScheduleEvent(float receiveTime);
	void OnReceiveTimeEvent(int EventIndex);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BPC_BSComponent(int EntryPoint);
	void OnEndTalkEvent__DelegateSignature(class AActor* Actor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
