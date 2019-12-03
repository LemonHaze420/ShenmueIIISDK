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

// BlueprintGeneratedClass BP_HideActorByCondition.BP_HideActorByCondition_C
// 0x0048 (0x0138 - 0x00F0)
class UBP_HideActorByCondition_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	TEnumAsByte<EHideActorConditions>                  ConditionsType;                                           // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	struct FString                                     IdMin;                                                    // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     IdMax;                                                    // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Option;                                                   // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // 0x0124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
	class AActor*                                      MyOwner;                                                  // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                EventStepMin;                                             // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EventStepMax;                                             // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HideActorByCondition.BP_HideActorByCondition_C");
		return ptr;
	}


	void UpdateCondition(TEnumAsByte<EHideActorConditions> ConditionsType, const struct FString& IdMin, const struct FString& IdMax, int Option, bool Visible);
	void SetupEventStep();
	void HideMyOwner(bool Mode);
	void STATIC_ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ChangeStep(int SetSteps);
	void STATIC_ChangeItemNum(const struct FName& ItemId, int NewNum, int OldNum);
	void STATIC_ChangeFlag(int ArrayIndex, int SetFlags);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void STATIC_UnbindEvent();
	void SetUpEvent();
	void ExecuteUbergraph_BP_HideActorByCondition(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
